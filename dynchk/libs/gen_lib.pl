#!/usr/bin/perl -w 
 
#Author: Matt Elder

#I should refactor this.  Better design: For each interface, all the
#relevant data gets read once into some sane interface object, and
#*then* that object's data is written to file.  This renders redundant
#data checks obsolete, and makes the whole thing much easier to read.
#For example, I can pass just one data reference to functions, rather
#than pass multiple (randomly sorted, randomly named) arguments.

use strict;
use DBI;
use Getopt::Std;
use IO::Handle;
use IO::File;

### Get environment variables

use Env qw(LSBUSER LSBDBPASSWD LSBDB LSBDBHOST);

my($DBName) = $LSBDB;
my($DBUser) = $LSBUSER;
my($DBPass) = $LSBDBPASSWD;
my($DBHost) = $LSBDBHOST;
my($generate_gen_file) = 1;
my($be_quiet) = 0;

##############################
# Option handlers
##############################

my (%options);
my($int_WHERE_add); my($int_FROM_add);

getopts('hwqd:u:p:o:l:g:i:', \%options);

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
$generate_gen_file = 0 if exists($options{'w'});
$generate_gen_file = 0 if exists($options{'i'});
$be_quiet = 1 if exists($options{'q'});

### Parse Lib and LibGroup options - turn comma-list into query conditions.
if (exists($options{'l'}) && exists($options{'g'}))
{
	$int_FROM_add = ", LGInt, LibGroup\n";
	$int_WHERE_add = "\nAND LGIint = Iid\nAND LGIlibg = LGid\n";
	$int_WHERE_add .= 'AND (Lname = "'
		. join( '" OR Lname = "', split(/,/, $options{'l'}) ) . '"'
		. ' OR LGname = "' . join( '" OR LGname = "', split(/,/, $options{'g'}) ) . '")' . "\n";
}
elsif (exists($options{'l'}))
{
	$int_FROM_add = "\n";
	$int_WHERE_add = "\n" . 'AND (Lname = "'
		. join( '" OR Lname = "', split(/,/, $options{'l'}) ) . "\")\n ";

}
elsif(exists($options{'g'}))
{
	$int_FROM_add = ", LGInt, LibGroup\n";
	$int_WHERE_add = "\nAND LGIint = Iid\nAND LGIlibg = LGid\n";
	$int_WHERE_add .= 'AND ( LGname = "'
		. join( '" OR LGname = "', split(/,/, $options{'g'}) ) . '")' . "\n";
}
else
{
	$int_FROM_add = "\n";
	$int_WHERE_add = "\n";
}

if(exists($options{'i'} ) )
{
	if(exists($options{'l'}) or exists($options{'g'}))
	{	die "Don't use -i with -l or -g.  See $0 -h\n"; }
	$int_WHERE_add .= 'AND ( Iname ="'
		.join('"OR Iname = "', split(/,/, $options{'i'}) ) . '")' . "\n";
}

##############################
# Database Queries
##############################

#   Connect to database
my $dbh = DBI->connect('DBI:mysql:database='.$LSBDB.';host='.$LSBDBHOST, $LSBUSER, $LSBDBPASSWD)
	or die "Couldn't connect to database: " . DBI->errstr;

my $int_q = $dbh->prepare(
'SELECT Iid, Ireturn, Asymbol, Iversion
FROM Interface, Architecture
WHERE Iname = ?
  AND Aid = Iarch 
GROUP BY Iid ORDER BY Iarch'
) or die "Couldn't prepare int query: " . DBI ->errstr;

my $int_name_q = $dbh->prepare(
'SELECT Iname, Lname
FROM Interface, Header, Library' . $int_FROM_add .
'WHERE Itype = "Function" 
   AND Istatus = "Included"
   AND Iheader = Hid
   AND Hlib = Lid'
  . $int_WHERE_add .
'Group by Iname'
) or die "Couldn't prepare int_name query: ".DBI->errstr;

my $has_ellipsis_q = $dbh->prepare(
'SELECT Tname
FROM Parameter, Type, Interface
WHERE Iname = ?
  AND Pint = Iid
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

my $get_func_version_q = $dbh->prepare(
'SELECT Vname from Version WHERE Vid = ?')
    or die "Couldn't prepare get_func_version query: ".DBI->errstr;
my $version_count_q = $dbh->prepare('SELECT COUNT(*) from Version')
    or die "Couldn't prepare version_count query: ".DBI->errstr;

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

sub debug # (@some_list)
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
sub has_ellipsis # ($func_name)               
{
	my($func_name) = @_;
	$has_ellipsis_q->execute($func_name);
	while ( my($type) = $has_ellipsis_q->fetchrow_array() )
	{
		return 1 if($type) eq "...";
	}
	return 0;
}


################################################################################
#                The version script subsystem.
################################################################################
my @vs_fh;
my @vs_fh_name;
my @vs_fh_isopen;

sub init_vs_fh
{
    my ($v_id);
    $version_count_q->execute();
    my ($count) = $version_count_q->fetchrow_array();

    for($v_id = 1; $v_id <= $count; $v_id++)
    {
	$get_func_version_q->execute($v_id);
	if( my ($v_name) = $get_func_version_q->fetchrow_array())
	{
	    $vs_fh_name[$v_id] = $v_name;
	    $vs_fh_isopen[$v_id] = 0;
	}
    }
    return 0;    
}

sub open_vs_fh #(v_id)
{
    my($v_id) = @_;

    return -1  if($vs_fh_isopen[$v_id] > 0);

    $vs_fh[$v_id] = new IO::File ">". $vs_fh_name[ $v_id ] . ".Version";
    print {$vs_fh[$v_id]} $vs_fh_name[$v_id]." {\n";
    
    $vs_fh_isopen[$v_id] = 1;
    return 0;
}

sub close_vs_fh #(v_id)
{
    my($v_id) = @_;
    return -1 if($vs_fh_isopen[$v_id] != 1);
    print {$vs_fh[$v_id]} "};\n";
    close $vs_fh[$v_id];
    $vs_fh_isopen[$v_id] = 2;
}

sub clean_vs_fh
{
    my $i;
    for($i = 0; $i < @vs_fh_isopen; $i++)
    {
	close_vs_fh($i) if($vs_fh_isopen[$i] and $vs_fh_isopen[$i] == 1);
    }
}
	    
sub write_int_vscript #(func_id, func_name, v_id)
{
    my($func_id, $func_name, $v_id) = @_;
    return -1 if($v_id == 0);
    open_vs_fh($v_id);  #only does anything if this file is not yet open.
    print {$vs_fh[$v_id]} "  $func_name;\n" ;
}

################################################################################
#    Functions for getting C code right.
################################################################################

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

	print "empties on Type $type_id; Param number $param_pos in Interface $param_int\n"
		if($name eq "" or $form eq "" or $basetype eq "");

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

################################################################################
#     Functions that write C code.
################################################################################

# write code that checks the addresses of pointers.
sub write_addy_checker
{
	my($fh, $type_id, $arg_name, $left_name, $func_name)=@_;
	$write_addy_checker_q->execute($type_id)
		or die "Couldn't execute write_addy_checker query: ".DBI->errstr;
	my($basetype, $typeform) = $write_addy_checker_q->fetchrow_array();
	$write_addy_checker_q->execute($basetype)
		or die "Couldn't execute write_addy_checker query: ".DBI->errstr;
	my($basetype2, $typeform2) = $write_addy_checker_q->fetchrow_array();
	if($typeform eq "Pointer")
	{
		if( $typeform2 eq "Const" )
		{
		print $fh "\t\tvalidate_Rdaddress($left_name $arg_name, \"$func_name - $left_name$arg_name\");\n";
		} else {
		print $fh "\t\tvalidate_RWaddress($left_name $arg_name, \"$func_name - $left_name$arg_name\");\n";
		}
		# Only do this if we have a specific type to test against.
		# Recursing on pointer to pointers doesn't work because the
		# values may not be defined or valid after the first pointer.
		#$left_name = "*".$left_name;
		#write_addy_checker($fh, $basetype, $arg_name, $left_name, $func_name);
	}
	elsif($typeform eq "FuncPtr")
	{
		print $fh "\t\tvalidate_Rdaddress($left_name $arg_name, \"$func_name - $arg_name\");\n";
	}
}

# write code block for interface wrapper to 'fh'
# if 'is_lsb', write code block for __lsb_* interface wrapper to 'fh'
sub write_int_wrapper
{
	my($fh, $func_id, $func_name, $func_vid, $func_left_type, $func_right_type, $is_lsb) = @_;
	my $i = 0; my $j = 0;

	print $fh "{\n";
	print $fh "\tint reset_flag = __lsb_check_params;\n";
	print $fh "\t$func_left_type ret_value $func_right_type;\n" unless($func_left_type eq "void");

	print $fh "\tif(!funcptr)\n";
	if($func_vid == 0)
	{   
	    print $fh "\t\tfuncptr = dlsym(RTLD_NEXT, \"$func_name\");\n";
	}
	else
	{
	    $get_func_version_q->execute($func_vid)
		or die "Couldn't execute get_func_version_q: ".DBI->errstr;
	    my($func_version_name) = $get_func_version_q->fetchrow_array();
	    print $fh "\t\tfuncptr = dlvsym(RTLD_NEXT, \"$func_name\", \"$func_version_name\");\n"; 
	}
	$write_int_wrapper_q->execute($func_id)
		or die "Couldn't execute write_int_wrapper query: " . DBI->errstr;

	print $fh "\tif(__lsb_check_params)\n\t{\n";
	print $fh "\t\t__lsb_check_params=0;\n";
	print $fh "\t\t__lsb_output(4, \"$func_name()\");\n";	
	
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
	print $fh "#include \"../../misc/lsb_output.h\"\n";
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
			print $fh $r_type if($r_type);
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

sub write_arch_macro
{
    my($fh, $arch_name) = @_;
    if($arch_name =~ /^(\w+)\s*&&.*!\s*(\w+)/) 
	#If the architecture name _actually_ specifies that one token
	#is declared and a second isn't ( <word> && !<word> ), then...
    {
	print $fh "defined($1) && !defined($2)";
    }
    else
	#The architecture name is just a normal name
    {
	print $fh "defined($arch_name)";
    }
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
		open($gen_fh, "> " . $func_lib . "/gen.mk" )
			or die "Can't open $func_lib/gen.mk: $!";
		print $gen_fh "GEN_FUNCS = \\\n";
		print $gen_fh $func_name . ".o ";
		close $gen_fh;
	}
	else
	{
		open($gen_fh, ">> " . $func_lib . "/gen.mk")
			or die "Can't open $func_lib/gen.mk: $!";
		print $gen_fh "\\\n".$func_name.".o ";
		close $gen_fh;
	}
}
################################################################################
#     Main section
################################################################################

# Open utility output files

my $ell_file = IO::Handle->new();
open($ell_file, ">ellipsis_funcs")
	or die "Can't open the output file ellipsis_funcs: $!";
# my $lsb_h_file = IO::Handle->new();
# open($lsb_h_file, ">all_lsb_funcs.h")
# 	or die "Can't open the output file all_lsb_funcs.h: $!";
my $int_file = IO::Handle->new();

# initialize version script files
init_vs_fh();

# Write .c files for interface wrappers
my $progress = 1;
$int_name_q->execute or die "Couldn't execute interface query: " . DBI->errstr;

$| = 1;

# Read "hand_coded" and store the do-not-generate list.
open(DNG_FILE, "hand_coded")
    or die "Can't open input file hand_coded: $!";
my @do_not_generate = <DNG_FILE>;
close DNG_FILE;


FUNC: while(my ($func_name, $func_lib) = $int_name_q->fetchrow_array())
{
    my $gen_this = 1;
    # Skip interface if it has an ellipsis type - it must be hand-coded.
    if(has_ellipsis($func_name))
    {
	print $ell_file $func_name . "\n";
 	$gen_this = 0;
    }
    elsif(contains($func_name."\n", @do_not_generate))
    {
	$gen_this = 0;
    }

    if($gen_this)
    {
	# Add interface to correct gen.mk file
	add_to_gen_mk($func_name, $func_lib) if($generate_gen_file);
	# Create interface's .c file
	open($int_file, ">" . $func_lib . "/" . $func_name . '.c')
	    or die "Can't open output: $!";
    }   
    $int_q->execute($func_name) or die "Can't execute int query: ".DBI->errstr;
    while(my ($func_id, $func_type, $func_arch, $func_vid) = $int_q->fetchrow_array())
    {
	if($gen_this)
	{
	    my ($left_type_string, $right_type_string) = get_type_string($func_type, -1, 0);
	    
	    # Add interface to the __lsb_* function header (This doesn't get used anymore)
	    # write_int_declaration($lsb_h_file, $func_id, $func_name, $left_type_string, $right_type_string, 1);
	    
	    # Open conditional architecture magic
	    unless($func_arch eq "1")
	    {
		print $int_file "#if "; write_arch_macro($int_file, $func_arch); print $int_file "\n";
	    }
	    
	    # Write interface's .c file
	    write_int_header($int_file, $left_type_string, $right_type_string, $func_name, $func_id);
	    write_int_declaration($int_file, $func_id, $func_name, $left_type_string, $right_type_string, 0);
	    write_int_wrapper($int_file, $func_id, $func_name, $func_vid, $left_type_string, $right_type_string, 0);

	    unless($func_arch eq "1")
	    {
		print $int_file "#endif /*"; write_arch_macro($int_file, $func_arch); print $int_file "*/\n";
	    }
	}
	# Put interface in version script
	write_int_vscript($func_id, $func_name, $func_vid);
    }
    
    $progress ++;
    
    unless($be_quiet)
    {  print "." if ($progress % 50 == 0); }

    close($int_file);

}
	
close($ell_file);
#close($lsb_h_file);
clean_vs_fh;

print "Done generating libraries!\a\n" unless($be_quiet);
