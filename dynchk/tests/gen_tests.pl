#!/usr/bin/perl -w
#
# Author: Matt Elder
# Generate validate_struct_*.c files.
#
# Current problems:
#   can't handle subdirectories in type names
#   the generated code may permit endless recursion (if a struct is passed a struct)
#   no handling for unset TypeTypes (TTid = 0)
#   no handling for anonymous structures (Tname = "anon-*")

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

getopts('d:u:p:o:ha:', \%options);

if (exists($options{'h'}))
{
  print STDERR <<"EOM"
$0: generate struct validation functions for the dynchk library from the 
LSB standard database.
Usage $0 [-d db_name] [-u username] [-p password] [-o hostname] [-h]
    -h           Display this help
    -d db_name   Database name
    -u username  Name of user for DB access
    -p password  Password for DB access
    -o hostname  Hostname for DB access
    -a arch      Target architecture.  Default is 2 (Linux).
EOM
    ;
  exit(1);
}
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
'SELECT Tname, Tid, Hname
FROM Type, HeaderGroup, Header
WHERE Ttype = "Struct"
  AND Theadergroup = HGid
  AND HGheader = Hid
  AND Tstatus != "Excluded"
  AND Hstd = "Yes"
  AND (Tarch = 1 OR Tarch = '.$Arch.')
GROUP BY Tid'
							 )
	or die "Couldn't prepare struct query: " . DBI->errstr;

my $write_body_q = $dbh->prepare(
'SELECT TMname, TTid, Tname, Ttype, Tid
FROM TypeType, TypeMember, Type
WHERE TMmemberof = ?
  AND TMtypetype = TTid
  AND TMtypeid = Tid
GROUP BY TMid
ORDER BY TMposition'
							 )   
	or die "Couldn't prepare member query: " . DBI->errstr;

my $get_member_typetype_q = $dbh->prepare(
'SELECT TTname
FROM TypeType
WHERE TTid = ?'
									  )
	or die "Couldn't prepare member typetype query: " . DBI->errstr;

################################################################################
#
# subroutines
#
################################################################################
sub get_member_typetype 
{
	my($type, $typeform, $typetypeid) = @_;
	
	if($typetypeid != 0)
	{
		$get_member_typetype_q->execute($typetypeid);
		my($typetype) = $get_member_typetype_q->fetchrow_array();
		return $typetype;
	}
   
	return "ANONYMOUS" if($type =~ /\Aanon-/);
	return "struct_".$type if($typeform eq "Struct");
	return "union_".$type if($typeform eq "Union");
	# Should I handle ($typeform eq "Pointer") ?
	return "NULL_TYPETYPE";
}

sub write_header
{
	my ($fh, $struct_header) = @_;
	print $fh '// Code generated by gen_tests.pl'."\n\n";
	print $fh "#include <sys/types.h>\n";
	print $fh '#include <'.$struct_header.">\n\n";
}

sub write_body($$$$);
sub write_body($$$$)
{
	my($fh, $ref_tree, $struct_id, $add_curlies) = @_;
	my $typetype;
	print $fh "{\n" if($add_curlies);

	$write_body_q->execute($struct_id);
	while(my ($name, $typetypeid, $type, $typeform, $type_id) = $write_body_q->fetchrow_array())
	{
		# Write call to validate_* function.
		$typetype = get_member_typetype($type, $typeform, $typetypeid);

		if($typetype eq "ANONYMOUS")
		{
			write_body($fh, $ref_tree.$name.".", $type_id, 0);
		}
		else
		{
			print $fh "\tvalidate_".$typetype."(".$ref_tree.$name.");\n";
		}
	}
	print $fh "}\n\n" if($add_curlies);
}
sub write_validate_declaration 
{
	my ($fh, $struct_name, $header_format) = @_;	
	print $fh "extern " if($header_format);
	print $fh "void validate_struct_" . $struct_name .
		"(struct " . $struct_name ." * input)";
	print $fh ";" if($header_format);
	print $fh "\n";
}

################################################################################
#
# main routine
#
################################################################################

$struct_q->execute or die "Couldn't execute struct query: " . DBI->errstr;

open(STRUCT_MK, '>struct.mk');
print STRUCT_MK "STRUCTTESTS = ";


my $validate_file = IO::Handle->new();
my $header_file = IO::Handle->new();
open($header_file, '>struct_tests.h');
 
STRUCT: while(my ($struct_name, $struct_id, $struct_header) = $struct_q->fetchrow_array())
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

	write_header($validate_file, $struct_header);
	write_validate_declaration($validate_file, $struct_name, 0);
	write_body($validate_file, "input->", $struct_id, 1); 
	
	close $validate_file;

	# write to struct_tests.h
	write_validate_declaration($header_file, $struct_name, 1);
}
print STRUCT_MK "\n";
close STRUCT_MK;
