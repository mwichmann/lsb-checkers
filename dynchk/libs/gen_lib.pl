#!/usr/bin/perl -w

use strict;
use DBI;
use Getopt::Std;
use IO::Handle;

### Get environment variables

use Env qw(LSBUSER LSBDBPASSWD LSBDB LSBDBHOST);

my($DBName) = $LSBDB;
my($DBUser) = $LSBUSER;
my($DBPass) = $LSBDBPASSWD;
my($DBHost) = $LSBDBHOST;
my($arch_number) = 2;
my($generate_gen_file) = 1;
my($be_quiet) = 0;
##############################
# Option handlers
##############################

my (%options);
my($interface_WHERE_add); my($interface_FROM_add);

getopts('hwqd:u:p:o:l:g:a:i:', \%options);

if (exists($options{'h'}))
{
	print STDERR <<"EOM"
$0: generate interface wrapper functions for the dynchk library.
Usage $0 [-d db_name] [-u username] [-p password] [-o hostname] [-h]
 [-l lib1,lib2,lib3,...] [-g libgroup1,libgroup2,libgroup3,...]
    -h           Display this help message
    -w           Generate library without changing gen_funcs files.
    -q           Quiet.  Do not show progress dots or ending message.
    -d db_name   Database name
    -u username  Name of user for db access
    -p password  Password for db access
    -o hostname  Hostname for DB
    -a arch      Target Architecture
    -i interface Comma-delimited list of interfaces
    -l l1,l2,... Comma-delimited list of libraries
    -g g1,g2,... Comma-delimited list of libgroups
    

	do not use -i with -l or -g. 
         
    If -l or -g are specified, every interface wrapper in
	the listed libraries or libgroups will be generated.  
	Without either, all interface wrappers will be generated.

    Examples:
    $0 -g "System Calls","X Windows System Interface"
    $0 -l libc,libX11
    $0 -l libm -g Curses,"String Functions"

    When using the -a option, arch should be one of the following values:
	2   IA32	3   IA64
	4   ARM 	5   M68K
	6   PPC32	7   Alpha
	9   PPC64	10  S390
	11  x86-64	12  S390X

EOM
    ;
	exit(1);
}

$DBUser = $options{'u'} if exists($options{'u'});
$DBPass = $options{'p'} if exists($options{'p'});
$DBHost = $options{'o'} if exists($options{'o'});
$DBName = $options{'d'} if exists($options{'d'});
$arch_number = $options{'a'} if exists($options{'a'});
$generate_gen_file = 0 if exists($options{'w'});
$generate_gen_file = 0 if exists($options{'i'});
$be_quiet = 1 if exists($options{'q'});

if($arch_number == 8 or $arch_number < 2 or $arch_number > 12)
{  die "Invalid architecture number.  Read $0 -h\n"; }

### Parse Lib and LibGroup options - turn comma-list into query conditions.
if (exists($options{'l'}) && exists($options{'g'}))
{
	$interface_FROM_add = ", LGInt, LibGroup\n";
	$interface_WHERE_add = "\nAND LGIint = Iid\nAND LGIlibg = LGid\n";
	$interface_WHERE_add .= 'AND (Lname = "'
		. join( '" OR Lname = "', split(/,/, $options{'l'}) ) . '"'
		. ' OR LGname = "' . join( '" OR LGname = "', split(/,/, $options{'g'}) ) . '")' . "\n";
}
elsif (exists($options{'l'}))
{
	$interface_FROM_add = "\n";
	$interface_WHERE_add = "\n" . 'AND (Lname = "'
		. join( '" OR Lname = "', split(/,/, $options{'l'}) ) . "\")\n ";

}
elsif(exists($options{'g'}))
{
	$interface_FROM_add = ", LGInt, LibGroup\n";
	$interface_WHERE_add = "\nAND LGIint = Iid\nAND LGIlibg = LGid\n";
	$interface_WHERE_add .= 'AND ( LGname = "'
		. join( '" OR LGname = "', split(/,/, $options{'g'}) ) . '")' . "\n";
}
else
{
	$interface_FROM_add = "\n";
	$interface_WHERE_add = "\n";
}

if(exists($options{'i'} ) )
{
	if(exists($options{'l'}) or exists($options{'g'}))
	{	die "Don't use -i with -l or -g.  See $0 -h\n"; }
	$interface_WHERE_add .= 'AND ( Iname ="'
		.join('"OR Iname = "', split(/,/, $options{'i'}) ) . '")' . "\n";
}

##############################
# Database Queries
##############################

#   Connect to database
my $dbh = DBI->connect('DBI:mysql:database='.$LSBDB.';host='.$LSBDBHOST, $LSBUSER, $LSBDBPASSWD)
	or die "Couldn't connect to database: " . DBI->errstr;

my $interface_q = $dbh->prepare(
'SELECT Iid, Iname, Lname, Ireturn
FROM Interface, Header, Library' . $interface_FROM_add .
'WHERE Itype = "Function"
   AND Istatus = "Included"
   AND Iheader = Hid
   AND Hlib = Lid
   AND (Iarch = 1 OR IArch = '.$arch_number.') ' . $interface_WHERE_add .
"GROUP BY Iid" ## This removes duplicate entries.
) or die "Couldn't prepare interface query: " . DBI ->errstr;
my $has_ellipsis_q = $dbh->prepare(
'SELECT Tname
FROM Parameter, Type
WHERE Pint = ?
  AND Ptype = Tid
ORDER BY Ppos'
) or die "Couldn't prepare has_ellipsis query: " . DBI->errstr;

my $get_param_typetype_q1 = $dbh->prepare(
'SELECT Pttid, Ttype, Tname
FROM Parameter, Type
WHERE Ppos = ?
  AND Pint = ?
  AND Ptype = Tid'
) or die "Couldn't prepare write_param_typetype query 1: " . DBI->errstr;

my $get_param_typetype_q2 = $dbh->prepare(
'SELECT TTname FROM TypeType WHERE TTid = ?')
	or die "Couldn't prepare write_param_typetype query 2: " . DBI->errstr;
 
my $get_param_type_q = $dbh->prepare(
'SELECT Tname, Tid, Pconst, Parsize FROM Parameter, Type
WHERE Ppos = ?
  AND Pint = ?
  AND Ptype = Tid'
) or die "Couldn't prepare write_param_type query: " . DBI->errstr;

my $write_addy_checker_q = $dbh->prepare(
'SELECT Tbasetype, Ttype from Type where Tid = ?')
	or die "Couldn't prepare write_addy_checker query: ".DBI->errstr;

my $get_param_typeid_q = $dbh->prepare(
'SELECT Ptype from Parameter where Ppos = ? and Pint = ?')
	or die "Couldn't prepare get_param_typeid query: " . DBI->errstr;

my $write_int_wrapper_q = $dbh->prepare(
'SELECT Ppos, Pint, Pnull FROM Parameter WHERE Pint = ? ORDER BY Ppos')
	or die "Couldn't prepare write_int_wrapper query: " . DBI->errstr;

my $write_int_header_q = $dbh->prepare(
'SELECT Theadergroup, Tid
FROM  Parameter, Type
WHERE Pint = ?
  AND Ptype = Tid'
) or die "Couldn't prepare write_int_header query: " . DBI->errstr;

my $basetype_header_q = $dbh->prepare(
'Select Theadergroup, Tbasetype from Type where Tid = ?')
	or die "Couldn't prepare basetype_header query: ".DBI->errstr;

my $header_name_q = $dbh->prepare(
'Select Hname from HeaderGroup, Header
Where ? = HGid and HGheader = Hid')
	or die "Couldn't prepare header_name query: ".DBI->errstr;

my $write_int_declaration_q = $dbh->prepare(
'SELECT Tname FROM Interface, Type WHERE Iid = ? AND Ireturn = Tid')
	or die "Couldn't prepare write_int_declaration query: " . DBI->errstr;

my $write_argument_list_q = $dbh->prepare(
'SELECT Ppos, Pint FROM Parameter WHERE Pint = ? ORDER BY Ppos')
	or die "Couldn't prepare write_argument list query: " . DBI->errstr;

my $get_type_info_q =
	$dbh->prepare('SELECT Tname, Ttype, Tbasetype FROM Type WHERE Tid = ?' )
	or die "Couldn't prepare type_info query: " . DBI->errstr;

my $get_ATsize_q =
	$dbh->prepare('SELECT ATsize from Type, ArchType where Tid = ? and ATtid = Tid and ATaid = Tarch')
	or die "Couldn't prepare ATsize query: ".DBI->errstr;

my $get_parsize_q =
	$dbh->prepare('SELECT Parsize from Parameter where Pint = ? and Ppos = ?')
	or die "Couldn't prepare parsize query: ".DBI->errstr;

my $get_type_form_q = $dbh->prepare('SELECT Ttype FROM Type WHERE Tid = ?')
	or die "Couldn't prepare type_from query: " . DBI->errstr;

my $get_funcptr_declaration_q = $dbh->prepare(
'SELECT TMtypeid FROM TypeMember WHERE TMmemberof = ?' )
	or die "Couldn't prepare gen_funcptr_declaration query: " . DBI->errstr;

##############################
# Subroutines 
##############################

sub debug # (@everyone)
{
	foreach my $out (@_)
	{
		print $out;
	}
}

# Return true if the first argument is duplicated in the rest of the argument.
sub contains # ($first_arg, $other_args ... )
{
	my $count = -1;
	foreach my $element (@_)
	{
		$count += 1 if($element eq $_[0]);
	}
	return ($count > 0);
}

# true if 'interface' has a parameter with ellipses
sub has_ellipsis # ($func_id)               
{
	my($func_id) = @_;
	$has_ellipsis_q->execute($func_id);
	while ( my($type) = $has_ellipsis_q->fetchrow_array() )
	{
		return 1 if($type) eq "...";
	}
	return 0;
}

sub get_type_string($$$);

sub get_type_string($$$) 
{
	my ($type_id, $param_pos, $param_int)=@_;
	my ($pre_type,$post_type) = ("","");
	my $next_form;

	$param_pos = -1 if(!$param_pos);
	$param_int = 0 if(!$param_int);

	$get_type_info_q->execute($type_id) 
		or die "Couldn't execute type_info query: " . DBI->errstr;
	my ($name, $form, $basetype) = $get_type_info_q->fetchrow_array();
	$get_type_info_q->finish();

	$name =~ s/fptr-//;

	if($basetype and $basetype!=$type_id and $form ne "Typedef")
	{
		($pre_type, $post_type) = get_type_string($basetype, -1, 0);
	}
	else
	{
		$pre_type = $name;
		$post_type = " ";
	}

	if($form eq "Intrinsic" or $form eq "Literal" or $form eq "Typedef")
	{
		return ($pre_type,$post_type);
	}
	elsif($form eq "Struct")
	{
		return ("struct " . $pre_type,$post_type);
	}
	elsif($form eq "Union")
	{
		return ("union " . $pre_type,$post_type);
	}
	elsif($form eq "Enum")
	{
		return ("enum ". $pre_type,$post_type);
	}
	elsif($form eq "Pointer")
	{
		return ($pre_type." *",$post_type);
	}
	elsif($form eq "Const")
	{
		$get_type_form_q->execute($basetype)
			or die "Couldn't execute type_form query: " . DBI->errstr;
		($next_form) = $get_type_form_q->fetchrow_array();
		$get_type_form_q->finish;

		return ($pre_type."const ",$post_type) if($next_form eq "Pointer");
		return ("const ".$pre_type,$post_type); # (else)
	}
	elsif($form eq "Array")
	{
		$get_ATsize_q->execute($type_id)
			or die "Couldn't execute ATsize query: ".DBI->errstr;
		$get_parsize_q->execute($param_int, $param_pos)
			or die "Couldn't execute parsize query: ".DBI->errstr;
		my $at_size;
		my $parsize;
		unless(($at_size) = $get_ATsize_q->fetchrow_array())
		{  $at_size = 0; }
		unless(($parsize) = $get_parsize_q->fetchrow_array())
		{  $parsize = "NULL"; }
		
		if($at_size != 0)
		{	
			$post_type .= "[". $at_size ."]";
		}
		elsif ($parsize ne "NULL" and $parsize != 0) 
		{   
			$post_type .= "[" . $parsize . "]";
		}
		else
		{
			$post_type .="[]";
		}
		return ($pre_type, $post_type); 
	}
	elsif($form eq "FuncPtr")
	{
		$pre_type.="(*";
		$post_type.=")".get_funcptr_declaration($type_id);
		return ($pre_type,$post_type);
	}
}
	
sub get_funcptr_declaration($)
{
	# This might fail if nested function pointers occur. (nowhere in current LSB)
	# In that case, we can just use the dynamic query-preparation strategy, a la write_body()
	my ($TMid) = @_;
	my $i = 0;
	my $output = "(";
	$get_funcptr_declaration_q->execute($TMid)
		or die "Couldn't execute funcptr declaration query: " . DBI->errstr;
	while( my($type_id) = $get_funcptr_declaration_q->fetchrow_array())
	{
		my($left,$right);
		$output.=", " if ($i>0);
		($left,$right)=get_type_string($type_id, 0, -1);
		$output.=$left;
		$i++;
	}
	$get_funcptr_declaration_q->finish;
	$output.=")";
	return $output;
}

# returns typetype string that matches the right validate_* function.
sub get_param_typetype # ($param_pos, $param_int)
{
	my($param_pos, $param_int) = @_;
	$get_param_typetype_q1->execute($param_pos, $param_int)
		or die "Couldn't execute get_param_typetype query 1: ".DBI->errstr;
	my($typetypeid, $typeform, $type) = $get_param_typetype_q1->fetchrow_array()
		or (return "UNSET_TYPETYPE");
	if($typetypeid != 0)
	{
		$get_param_typetype_q2->execute($typetypeid);
		my($typetype) = $get_param_typetype_q2->fetchrow_array();
		return ($typetype, "");
	}
   
	return ("struct_".$type,"&") if($typeform eq "Struct");
	# return ("union_".$type,"&") if($typeform eq "Union");
	# Should I handle ($typeform eq "Pointer") ?
	return ("NULL_TYPETYPE","");
}

# returns valid type-string of a parameter
sub get_param_type # ($param_pos, $param_int)
{
	my($param_pos, $param_int) = @_;
	$get_param_type_q->execute($param_pos, $param_int);
	my($type, $type_id, $is_const) = $get_param_type_q->fetchrow_array();

	my($left_string, $right_string) = get_type_string($type_id, $param_pos, $param_int);
	$left_string = "const ". $left_string if ($is_const eq 'Y');

	return ($left_string,$right_string);
}

# write code that checks the addresses of pointers.
sub write_addy_checker
{
	my($fh, $type_id, $arg_name, $left_name, $func_name)=@_;
	$write_addy_checker_q->execute($type_id)
		or die "Couldn't execute write_addy_checker query: ".DBI->errstr;
	my($basetype, $typeform) = $write_addy_checker_q->fetchrow_array();
	if($typeform eq "Pointer")
	{
		print $fh "\tvalidate_Rdaddress($left_name $arg_name, \"$func_name - $left_name$arg_name\");\n";
		$left_name = "*".$left_name;
		write_addy_checker($fh, $basetype, $arg_name, $left_name, $func_name);
	}
	elsif($typeform eq "FuncPtr")
	{
		print $fh "validate_Rdaddress($left_name $arg_name, \"$func_name - $arg_name\");\n";
	}
}

# write code block for interface wrapper to 'fh'
# if 'is_lsb', write code block for __lsb_* interface wrapper to 'fh'
sub write_int_wrapper
{
	my($fh, $func_id, $func_name, $func_left_type, $func_right_type, $is_lsb) = @_;
	my $i = 0; my $j = 0;

	print $fh "{\n";
	print $fh "\tint reset_flag = __lsb_check_params;\n";
	print $fh "\t$func_left_type ret_value $func_right_type;\n" unless($func_left_type eq "void");

	print $fh "\tif(!funcptr)\n";
	print $fh "\t\tfuncptr = dlsym(RTLD_NEXT, \"" . $func_name . "\");\n";
	$write_int_wrapper_q->execute($func_id)
		or die "Couldn't execute write_int_wrapper query: " . DBI->errstr;

	print $fh "\tif(__lsb_check_params)\n\t{\n";
	print $fh "\t\t__lsb_check_params=0;\n";

	print $fh "\t__lsb_output(5-__lsb_check_params, \"$func_name()\");\n";	
	
	VALCALL: while( my($param_pos, $param_int, $param_null) = $write_int_wrapper_q->fetchrow_array() )
	{
		$get_param_typeid_q->execute($param_pos, $param_int)
			or die "Couldn't execute get_param_typeid query: " . DBI->errstr;
		my($typeid) = $get_param_typeid_q->fetchrow_array();
		
		next VALCALL if($typeid == 1);

		unless($is_lsb) #I should be able to remove the is_lsb controls, if the flag system works.
		{
			my($typetype, $dereference) = get_param_typetype($param_pos, $param_int);
			if( $param_null eq 'Y' ) {
				print $fh "\t\tif( arg$i ) {\n";
			}
			write_addy_checker($fh, $typeid, "arg$i", "", "$func_name");
			if( $param_null eq 'Y' ) {
				print $fh "\t\t}\n";
			}

			print $fh "\t\tvalidate_$typetype( $dereference arg$i, \"$func_name - arg$i\");\n";
			
		}
		$i++;
	}

	print $fh "\t}\n";
	print $fh "\t";
	print $fh "ret_value = " unless($func_left_type eq "void");
	print $fh "funcptr(";
	
	while($j < $i)
	{
		print $fh ", " unless ($j == 0);
		print $fh "arg".$j;
		$j++;
	}
	print $fh ");\n";
	print $fh "\t__lsb_check_params = reset_flag;\n";
	print $fh "\treturn ret_value;\n" unless($func_left_type eq "void");
	print $fh "}\n\n";
}

my $simple_header_q = $dbh->prepare(
'select Hname from Interface, Header where Iid = ? and Hid = Iheader')
	or die "Couldn't prepare simple_header query: ".DBI->errstr;

# write generation comments and needed headers for 'interface' to 'fh'
sub write_int_header 
{
	my($fh, $left_type, $right_type, $func_name, $func_id)=@_;

	$simple_header_q->execute($func_id)
		or die "Couldn't execute simple_header query: ".DBI->errstr;
	my($main_header) = $simple_header_q->fetchrow_array();

	print $fh "// Generated by gen_lib.pl\n\n";
	print $fh "#include \"../../tests/type_tests.h\"\n";
	print $fh "#include <dlfcn.h>\n";
	my(@headers_found);
	$headers_found[0] = "dlfcn.h";
	$write_int_header_q->execute($func_id)
		or die "Couldn't execute write_int_header query: " . DBI->errstr;

	while(my($header_group_id, $base_type) = $write_int_header_q->fetchrow_array() )
	{
		while($header_group_id == 0 and $base_type != 0)
		{
			$basetype_header_q->execute($base_type)
				or die "Couldn't execute basetype_header query: ".DBI->errstr;
			($header_group_id,$base_type) = $basetype_header_q->fetchrow_array();
		}
		if($header_group_id != 0)
		{
			$header_name_q->execute($header_group_id);
			my($header) = $header_name_q->fetchrow_array();
			$header_name_q->finish;
			if(!contains($header, @headers_found) )
			{
				$headers_found[@headers_found]=$header;
				print $fh "#include <" . $header . ">\n";
			}
		}
	}

	if(!contains($main_header, @headers_found))
	{
		print $fh "#include <".$main_header.">\n";
		$headers_found[@headers_found]=$main_header;
	}
	
	print $fh "#undef ".$func_name."\n";
	print $fh "static ". $left_type ."(*funcptr)".$right_type."(";
	write_argument_list($fh, $func_id, 0);
	print $fh ") = 0;\n\n";
	print $fh "extern int __lsb_check_params;\n";
	print $fh "extern int __lsb_output(int, char*, ...);\n";
}

# write argument list for a function declaration.
# (This is the bit in the parentheses.)
sub write_argument_list # ($fh, $func_id, $add_arg)
{
	my($fh, $func_id, $add_arg) = @_;
	my $i = 0;
	$write_argument_list_q->execute($func_id)
		or die "Couldn't execute write_int_declaration query 2: " . DBI->errstr;
	while( my($param_pos, $param_int) = $write_argument_list_q->fetchrow_array() )
	{
		my($l_type, $r_type) = get_param_type($param_pos, $param_int);
		unless($l_type eq "void")
		{
			print $fh ", " unless($i == 0);
			print $fh $l_type;
			print $fh " arg" . $i if ($add_arg);
			print $fh $r_type;
			$i ++;
		}
	}
}

# write function declaration for 'interface' to 'fh'
# if 'is_lsb', write the __lsb_* wrapper's declaration
sub write_int_declaration 
{
	my($fh, $func_id, $func_name, $func_left_type, $func_right_type, $is_lsb) = @_;
	print $fh $func_left_type . " ";
	print $fh "__lsb_" if($is_lsb);
	print $fh $func_name . $func_right_type . "(";
	write_argument_list($fh, $func_id, 1);
	
	print $fh ")\n";
}

# add 'interface' to the gen.mk file in the correct library's directory
my(@libs_seen);
sub add_to_gen_mk # ($func_name, $lib_name)
{
	my($func_name, $func_lib) = @_;
	my($gen_fh);
	if(!contains($func_lib, @libs_seen))
	{
		$libs_seen[@libs_seen] = $func_lib;
		$gen_fh = IO::Handle->new();
		open($gen_fh, "> " . $func_lib . "/gen.mk" );
		print $gen_fh "GEN_FUNCS = \\\n";
		print $gen_fh $func_name . ".o ";
		close $gen_fh;
	}
	else
	{
		open($gen_fh, ">> " . $func_lib . "/gen.mk");
		print $gen_fh "\\\n".$func_name.".o ";
		close $gen_fh;
	}
}

##############################
# Main section
##############################

# Open utility output files

my $ell_file = IO::Handle->new();
open($ell_file, ">ellipsis_funcs")
	or die "Can't open the output file ellipsis_funcs: $!";
my $lsb_h_file = IO::Handle->new();
open($lsb_h_file, ">all_lsb_funcs.h")
	or die "Can't open the output file all_lsb_funcs.h: $!";
my $interface_file = IO::Handle->new();

# Write .c files for interface wrappers
my $progress = 1;
$interface_q->execute or die "Couldn't execute interface query: " . DBI->errstr;

$| = 1;

# Read "hand_coded" and store the do-not-generate list.
open(DNG_FILE, "hand_coded")
	or die "Can't open input file hand_coded: $!";
my @do_not_generate = <DNG_FILE>;
close DNG_FILE;
FUNC: while(my ($func_id, $func_name, $func_lib, $func_type) = $interface_q->fetchrow_array())
{
	# Skip interface if it has an ellipsis type - it must be hand-coded.
	if(has_ellipsis($func_id))
	{
		print $ell_file $func_name . "\n";
		next FUNC;
	}
	if(contains($func_name."\n", @do_not_generate))
	{
		next FUNC;
	}
	my ($left_type_string, $right_type_string) = get_type_string($func_type, -1, 0);
	
	# Add interface to correct gen.mk file
	add_to_gen_mk($func_name, $func_lib) if($generate_gen_file);

	# Add interface to the __lsb_* function header
	write_int_declaration($lsb_h_file, $func_id, $func_name, $left_type_string, $right_type_string, 1);

	# Create interface's .c file
	open($interface_file, ">" . $func_lib . "/" . $func_name . '.c')
		or die "Can't open output: $!";

	# Write interface's .c file
	write_int_header($interface_file, $left_type_string, $right_type_string, $func_name, $func_id);
	write_int_declaration($interface_file, $func_id, $func_name, $left_type_string, $right_type_string, 0);
	write_int_wrapper($interface_file, $func_id, $func_name, $left_type_string, $right_type_string, 0);
	#write_int_declaration($interface_file, $func_id, $func_name, $left_type_string, $right_type_string, 1);
	#write_int_wrapper($interface_file, $func_id, $func_name, $left_type_string, $right_type_string, 1);
	
	close($interface_file);

	$progress ++;
	
	unless($be_quiet)
	{	print "." if ($progress % 50 == 0); }
}
	
close($ell_file);
	
close($lsb_h_file);
print "Done generating libraries!\a\n" unless($be_quiet);
