#!/usr/bin/perl -w
#
# Author: Matt Elder
# Generate validate_struct_*.c files.
#
# Current problems:
#   can't handle subdirectories in type names
#   the generated code may permit endless recursion (if a struct is passed a struct)
#   no handling for unset TypeTypes (TTid = 0)


use strict;
use DBI;
use Getopt::Std;
use IO::Handle;


use Env qw(LSBUSER LSBDBPASSWD LSBDB LSBDBHOST);

################################################################################
#
# Handle Command-line options
#
################################################################################

my(%options);

my($DBName) = $LSBDB;
my($DBUser) = $LSBUSER;
my($DBPass) = $LSBDBPASSWD;
my($DBHost) = $LSBDBHOST;
my($Arch) = "2";
my($lsbversion);

getopts('v:d:u:p:o:ha:', \%options);

if( (exists($options{'h'})) or (not exists($options{'v'})) )
{
  print STDERR <<"EOM"
$0: generate struct validation functions for the dynchk library from the
LSB standard database.
Usage $0 -v lsbversion [-d db_name] [-u username] [-p password] [-o hostname] [-h]
    -h           Display this help
    -v           Target LSB version
    -d db_name   Database name
    -u username  Name of user for DB access
    -p password  Password for DB access
    -o hostname  Hostname for DB access
    -a arch      Target architecture.  Default is 2 (Linux).
EOM
    ;
  exit(1);
}

$lsbversion = $options{'v'};

$DBUser = $options{'u'} if exists($options{'u'});
$DBPass = $options{'p'} if exists($options{'p'});
$DBHost = $options{'o'} if exists($options{'o'});
$DBName = $options{'d'} if exists($options{'d'});
$Arch = $options{'a'} if exists($options{'a'});

################################################################################
#
# Database Queries
#
################################################################################

my $dbh = DBI->connect('DBI:mysql:database='.$LSBDB.';host='.$LSBDBHOST,
					   $LSBUSER, $LSBDBPASSWD)
	or die "Couldn't connect to database: " . DBI->errstr;

my $struct_q = $dbh->prepare(
'SELECT Tid, Tname, Hname
FROM HeaderGroup, Header, Type
LEFT JOIN ArchType ON Tid=ATtid
WHERE Ttype = "Struct"
  AND Theadgroup = HGid
  AND HGheader = Hid
  AND ( ( (ATappearedin <= \''.$lsbversion.'\' and ATappearedin<>\'\')
  AND (ATwithdrawnin IS NULL OR ATwithdrawnin >\''.$lsbversion.'\') )
  OR ( Tsrconly =\'Yes\' ) )
  AND (Happearedin is not NULL and Happearedin <= \''.$lsbversion.'\' and Happearedin<>\'\')
  AND (Hwithdrawnin IS NULL OR Hwithdrawnin > \''.$lsbversion.'\' )
  AND (ATaid = 1 OR ATaid = '.$Arch.')
  GROUP BY Tname'
) or die "Couldn't prepare struct query: " . DBI->errstr;

my $struct_arch_q = $dbh->prepare(
'SELECT Tid, Asymbol, Aid
FROM Type
LEFT JOIN ArchType ON ATtid=Tid
LEFT JOIN Architecture ON Aid=ATaid
WHERE Tname = ?
  AND Ttype = "Struct"
  AND ( ( (ATappearedin <= \''.$lsbversion.'\' and ATappearedin<>\'\')
  AND (ATwithdrawnin IS NULL OR ATwithdrawnin >\''.$lsbversion.'\') )
  OR ( Tsrconly =\'Yes\' ) )
  ORDER BY ATaid'
) or die "Couldn't prepare struct_Arch query: ".DBI->errstr;

my $generic_q = $dbh->prepare(
'SELECT ATtid
FROM ArchType
WHERE ATtid = ?
  AND ATaid = 1'
) or die "Couldn't prepare struct query: " . DBI->errstr;

# Warning - funkiness:  @write_body_q[] is not prepared here.
# It is prepared dynamically in write_body_q to properly handle recursion

my @write_body_q;
my $write_body_counter = 0;

my $get_member_typetype_q =
$dbh->prepare('SELECT TTname FROM TypeType WHERE TTid = ?' )
	or die "Couldn't prepare member_typetype query: " . DBI->errstr;

my $get_type_info_q =
	$dbh->prepare("SELECT Tname, Ttype, ATbasetype, Tarray FROM Type
		LEFT JOIN ArchType ON ATtid=Tid WHERE Tid = ? ORDER BY ATaid" )
	or die "Couldn't prepare type_info query: " . DBI->errstr;

my $get_type_form_q = $dbh->prepare('SELECT Ttype FROM Type WHERE Tid = ?')
	or die "Couldn't prepare type_from query: " . DBI->errstr;

my $get_funcptr_declaration_q = $dbh->prepare(
'SELECT TMtypeid FROM TypeMember WHERE TMmemberof = ? AND TMaid IN (1,$Arch) ' )
	or die "Couldn't prepare gen_funcptr_declaration query: " . DBI->errstr;


my $header_q = $dbh->prepare(
'select Hname from Header, HeaderGroup, Type left join ArchType on ATtid=Tid where
  ( ( (ATappearedin <= \''.$lsbversion.'\' and ATappearedin<>\'\')
  AND (ATwithdrawnin IS NULL OR ATwithdrawnin >\''.$lsbversion.'\') )
  OR ( Tsrconly =\'Yes\' OR Tindirect = \'Yes\') )
	and Theadgroup = HGid and HGheader=Hid
	AND (Happearedin is not NULL and Happearedin <= \''.$lsbversion.'\' and Happearedin<>\'\')
  	AND (Hwithdrawnin IS NULL OR Hwithdrawnin > \''.$lsbversion.'\')
	GROUP BY Hname')
	or die "Couldn't prepare header query: ".DBI->errstr;

################################################################################
#
# subroutines
#
################################################################################

sub get_type_string($);
sub get_type_string($)
{
	my ($type_id)=@_;
	my ($pre_type,$post_type) = ("","");
	my $next_form;

	$get_type_info_q->execute($type_id)
		or die "Couldn't execute type_info query: " . DBI->errstr;
	my ($name, $form, $basetype, $array_index) = $get_type_info_q->fetchrow_array();
	$get_type_info_q->finish();

	$name =~ s/fptr-//;

	if($form eq "Intrinsic" or $form eq "Literal" or $form eq "Typedef")
	{
		return ($name," ");
	}
	elsif($form eq "Struct")
	{
		return ("struct " . $name," ");
	}
	elsif($form eq "Union")
	{
		return ("union " . $name," ");
	}
	elsif($form eq "Enum")
	{
		return ("enum ". $name," ");
	}
	elsif($form eq "Pointer")
	{
		($pre_type,$post_type) = get_type_string($basetype);
		return ($pre_type." *",$post_type);
	}
	elsif($form eq "Const")
	{
		$get_type_form_q->execute($basetype)
			or die "Couldn't execute type_form query: " . DBI->errstr;
		($next_form) = $get_type_form_q->fetchrow_array();
		$get_type_form_q->finish;
		($pre_type,$post_type) = get_type_string($basetype);
		return ($pre_type."const ",$post_type) if($next_form eq "Pointer");
		return ("const ".$pre_type,$post_type); # (else)
	}
	elsif($form eq "Array")
	{
		($pre_type,$post_type) = get_type_string($basetype);
		$post_type .= "[". $array_index ."]";
		return ($pre_type, $post_type);
	}
	elsif($form eq "FuncPtr")
	{
		($pre_type, $post_type) = get_type_string($basetype);
		$pre_type.="(*".$name.")".get_funcptr_declaration($type_id);
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
		($left,$right)=get_type_string($type_id);
		$output.=$left;
		print "Unexpected post-name type in get_funcptr_declaration: ".$left if($right ne "");
	}
	$get_funcptr_declaration_q->finish;
	$output.=")";
	return $output;
}

sub get_member_typetype
{
	my($type, $typeform, $base_type, $typetypeid) = @_;
	my $type_array;
	if($typetypeid != 0)
	{
		$get_member_typetype_q->execute($typetypeid)
			or die "Couldn't execute get_member_typetype query: " . DBI->errstr;
		my($typetype) = $get_member_typetype_q->fetchrow_array();
		$get_member_typetype_q->finish;
		return $typetype;
	}

	return "ANONYMOUS" if($type =~ /\Aanon-/);
	return "struct_".$type if($typeform eq "Struct");
	return "NULL_TYPETYPE" if($typeform eq "Union"); ####################
	#      ^ This should be "union ".$type
	if($typeform eq "Pointer")
	{
		$get_type_info_q->execute($base_type);
		($type, $typeform, $base_type, $typetypeid) = $get_type_info_q->fetchrow_array()
			or die "Couldn't execute member_typety_ptr query: " . DBI->errstr;
		return get_member_typetype($type, $typeform, $base_type, 0);
	}

	return "NULL_TYPETYPE";
}

my @headers_seen;

sub write_header_to_struct_tests_h
{
	my($fh, $struct_header) = @_;
	my $seen = 0;
	CHECK: foreach my $header( @headers_seen )
	{
		if($header eq $struct_header)
		{
			$seen = 1;
			last CHECK;
		}
	}
	if(!$seen)
	{
		print $fh '#include <'.$struct_header.">\n";
		$headers_seen[@headers_seen] = $struct_header;
	}
}


sub write_header
{
	my ($fh, $struct_header) = @_;
	print $fh '// Code generated by gen_tests.pl'."\n\n";
	print $fh '#include "../type_tests.h"'."\n";
	print $fh '#include <'.$struct_header.">\n\n";
}

sub write_body($$$$);
sub write_body($$$$)
{
	my($fh, $ref_tree, $struct_id, $depth) = @_;
	my $typetype;
	print $fh "{\nint failure = 0;\n" if($depth == 0);

	if($write_body_counter <= $depth)
	{

		$write_body_q[$write_body_counter] = $dbh->prepare(
"SELECT TMname, TMtypetype, Tname, Ttype, ATbasetype, Tid
FROM TypeMember, Type
LEFT JOIN ArchType ON ATtid=Tid
WHERE TMmemberof = ?
  AND TMtypeid = Tid
GROUP BY TMid,ATtid
ORDER BY TMposition"
							 )
			or die "Couldn't prepare member query: " . DBI->errstr;
		$write_body_counter ++;
	}

	$write_body_q[$depth]->execute($struct_id)
		or die "Couldn't execute write_body query: " . DBI->errstr;
	while(my ($name, $typetypeid, $type, $typeform, $base_type, $type_id) = $write_body_q[$depth]->fetchrow_array())
	{
		# Write call to validate_* function.
		$typetype = get_member_typetype($type, $typeform, $base_type, $typetypeid);
		if($typetype eq "ANONYMOUS")
		{
			write_body($fh, $ref_tree.$name.".", $type_id, $depth + 1);
		}
		elsif($typeform eq "Struct")
		{
			print $fh "\tif(validate_$typetype( &($ref_tree $name),name ))\n";
			print $fh "\t\tfailure = 1;\n";
		}
		else
		{
			print $fh "\tif(validate_$typetype($ref_tree $name,name ))\n";
			print $fh "\t\tfailure = 1;\n";
		}
	}
	print $fh "return failure;\n";
	print $fh "}\n\n" if($depth == 0);
}
sub write_validate_declaration
{
	my ($fh, $struct_name, $struct_id, $header_format) = @_;
	my($left_type, $right_type)=get_type_string($struct_id);
	print $fh "extern " if($header_format);
	print $fh "int validate_struct_" . $struct_name .
		"(" . $left_type.$right_type ." * input, char *name)";
	print $fh ";" if($header_format);
	print $fh "\n";
}
sub write_arch_macro
{
	my($fh, $arch_name) = @_;
	if($arch_name =~ /^(\w+)\s*&&.*!\s*(\w+)/)
	{	print $fh "defined($1) && !defined($2)";
	}
	else
	{	print $fh "defined($arch_name)";
	}
}

sub open_arch
{
	my($fh, $arch_name) = @_;
	unless($arch_name eq "1")
	{
		print $fh "#if ";
		write_arch_macro($fh, $arch_name);
		print $fh "\n";
	}
}
sub close_arch
{
	my($fh, $arch_name) = @_;
	unless($arch_name eq "1")
	{
		print $fh "#endif /*";
		write_arch_macro($fh, $arch_name);
		print $fh "*/\n";
	}
}

################################################################################
#
# main routine
#
################################################################################

$struct_q->execute() or die "Couldn't execute struct query: " . DBI->errstr;

open(STRUCT_MK, '>struct.mk');
print STRUCT_MK "STRUCTTESTS = ";

my $validate_file = IO::Handle->new();
my $header_file = IO::Handle->new();
open($header_file, '>struct_tests.h')
	or die "Couldn't create file struct_tests.h: ".DBI->errstr;


STRUCT: while(my ($struct_id, $struct_name, $struct_header) = $struct_q->fetchrow_array())
{
	# This needs to be fixed at some point:
	# some structure types are apprently in subdirectories.
	# I need a naming scheme that handles this.
	next STRUCT if($struct_name =~ /\//);

	# Type members whose Tname begins with "anon-" are anonymous structs.
	# These don't get their own validator function.  (Should be handled recursively)
	next STRUCT if($struct_name =~ /\Aanon-/);

	#skip X - the DB data is incomplete.
	next STRUCT if($struct_header =~ /\AX11/);

	###################### Needs to be replaced if not validating a struct.
	print STRUCT_MK "\t\\\nstruct/validate_struct_".$struct_name.".o";

	# write struct validator file
	open($validate_file, '>struct/validate_struct_' . $struct_name . '.c')
		or die $struct_name."Can't open output: $!";

	$struct_arch_q->execute($struct_name)
		or die "Couldn't execute struct_arch query: ".DBI->errstr;

	write_header($validate_file, $struct_header, 1);

	while(my ($struct_id, $struct_arch, $struct_aid) = $struct_arch_q->fetchrow_array())
	{
		if( $struct_aid != 1 )
		{
			# There is no need to print architecture specific checks
			# if the type is generic (i.e. if the record with ATaid=1
			#  presents in ArchType for the given type)
			$generic_q->execute($struct_id) or die "Couldn't execute generic query: " . DBI->errstr;
			if( $generic_q->fetchrow_array() )
			{
				next;
			}
		}

		open_arch($validate_file, $struct_arch);
		write_validate_declaration($validate_file, $struct_name, $struct_id, 0);
		write_body($validate_file, "input->", $struct_id, 0);
		close_arch($validate_file, $struct_arch);

		open_arch($header_file, $struct_arch);
		write_validate_declaration($header_file, $struct_name, $struct_id, 1);
		close_arch($header_file, $struct_arch);
	}
	$struct_arch_q->finish();

	close $validate_file;
}
$struct_q->finish;
print STRUCT_MK "\n";
close STRUCT_MK;

my $header_header_file = IO::Handle->new();
open($header_header_file, '>header_list.h')
	or die "Couldn't create file struct_tests_h.h: ".DBI->errstr;

$header_q->execute() or die "Couldn't execute header query: ".DBI->errstr;
HEADERLIST: while(my ($header_name) = $header_q->fetchrow_array())
{
	# write header requirement to struct_tests_h.h
	write_header_to_struct_tests_h($header_header_file, $header_name) unless($header_name =~ /\AX11|\Aunwind\.h/);
}
$header_q->finish;
close $header_header_file


