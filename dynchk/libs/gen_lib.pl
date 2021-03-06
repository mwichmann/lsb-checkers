#!/usr/bin/perl -w

#Author: Matt Elder

#I should refactor this.  Better design: For each interface, all the
#relevant data gets read once into some sane interface object, and
#*then* that object's data is written to file.  This renders redundant
#data checks obsolete, and makes the whole thing much easier to read.
#For example, I can pass just one data reference to functions, rather
#than pass multiple (randomly sorted, randomly named) arguments.
#
# BUG: places marked BUG are where we get error messages during
# generation if there are data problems (normally after import of
# a new library, or a library uplift).  We need to understand what
# can go wrong in these circumstances so we can print enough information
# in these error cases to help track down the issues - right now the
# errors are not useful, like "use of uninitialized value" without
# letting us know what it's trying to do at that point.

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
my($lsbversion);
my($Arch) = "IA32";
my($ArchId) = 2;

##############################
# Option handlers
##############################

my (%options);
my($int_WHERE_add); my($int_FROM_add);

getopts('hwqd:v:u:p:a:o:l:g:i:', \%options);

if( (exists($options{'h'})) or (not exists($options{'v'})) ) {
    print STDERR <<"EOM"
$0: generate interface wrapper functions for the dynchk library.
Usage $0 [-d db_name] [-u username] [-p password] [-o hostname] [-h]
 [-l lib1,lib2,lib3,...] [-g libgroup1,libgroup2,libgroup3,...]
    -h           Display this help message
    -v           Target LSB version
    -w           Generate library without changing gen_funcs files.
    -q           Quiet.  Do not show progress dots or ending message.
    -d db_name   Database name
    -u username  Name of user for db access
    -p password  Password for db access
    -o hostname  Hostname for DB
    -i interface Comma-delimited list of interfaces
    -l l1,l2,... Comma-delimited list of libraries
    -g g1,g2,... Comma-delimited list of libgroups
    -a arch      Target architecture. Default is x86.


    do not use -i with -l or -g.

    If -l or -g are specified, every interface wrapper in
    the listed libraries or libgroups will be generated.
    Without either, all interface wrappers will be generated.

    Examples:
    $0 -v '3.1' -g "System Calls","X Windows System Interface"
    $0 -v '3.0' -l libc,libX11
    $0 -v '2.0' -l libm -g Curses,"String Functions"

EOM
    ;
    exit(1);
}

$lsbversion = $options{'v'};

$DBUser = $options{'u'} if exists($options{'u'});
$DBPass = $options{'p'} if exists($options{'p'});
$DBHost = $options{'o'} if exists($options{'o'});
$DBName = $options{'d'} if exists($options{'d'});
$generate_gen_file = 0 if exists($options{'w'});
$generate_gen_file = 0 if exists($options{'i'});
$Arch = $options{'a'} if exists($options{'a'});
$be_quiet = 1 if exists($options{'q'});

### Parse Lib and LibGroup options - turn comma-list into query conditions.
if (exists($options{'l'}) && exists($options{'g'})) {
    $int_FROM_add = ", LGInt, LibGroup\n";
    $int_WHERE_add = "\nAND LGIint = Iid\nAND LGIlibg = LGid\n";
    $int_WHERE_add .= 'AND (Lname = "'
        . join( '" OR Lname = "', split(/,/, $options{'l'}) ) . '"'
        . ' OR LGname = "' . join( '" OR LGname = "', split(/,/, $options{'g'}) ) . '")' . "\n";
}
elsif (exists($options{'l'})) {
    $int_FROM_add = "\n";
    $int_WHERE_add = "\n" . 'AND (Lname = "'
        . join( '" OR Lname = "', split(/,/, $options{'l'}) ) . "\")\n ";

}
elsif(exists($options{'g'})) {
    $int_FROM_add = ", LGInt, LibGroup\n";
    $int_WHERE_add = "\nAND LGIint = Iid\nAND LGIlibg = LGid\n";
    $int_WHERE_add .= 'AND ( LGname = "'
        . join( '" OR LGname = "', split(/,/, $options{'g'}) ) . '")' . "\n";
}
else {
    $int_FROM_add = "\n";
    $int_WHERE_add = "\n";
}

if(exists($options{'i'} ) ) {
    if(exists($options{'l'}) or exists($options{'g'}))
    {   die "Don't use -i with -l or -g.  See $0 -h\n"; }
    $int_WHERE_add .= 'AND ( Iname ="'
        .join('"OR Iname = "', split(/,/, $options{'i'}) ) . '")' . "\n";
}

# Determine arch name known to the database
if ($Arch =~ /^(amd64|x86_64)$/i) {
    $Arch =  "x86-64";
}
elsif ($Arch =~ /^(ia32|i[3-6]86|x86)$/i) {
    $Arch =  "IA32";
}
elsif ($Arch =~ /^(ia64)$/i) {
    $Arch =  "IA64";
}
elsif ($Arch =~ /^(ppc|ppc32)$/i) {
    $Arch =  "PPC32";
}
elsif ($Arch =~ /^(ppc64)$/i) {
    $Arch =  "PPC64";
}
elsif ($Arch =~ /^(s390)$/i) {
    $Arch =  "S390";
}
elsif ($Arch =~ /^(s390x)$/i) {
    $Arch =  "S390X";
}
else {
    die "Unknown architecture value: $Arch";
}

# Read list of functions that should be excluded
my %exclude_ints;
open(F, "../exclude_funcs");
while(<F>) {
    chomp;
    if( $_ ) {
        $exclude_ints{$_} = 1;
    }
}
close(F);

##############################
# Database Queries
##############################

#   Connect to database
my $dbh = DBI->connect('DBI:mysql:database='.$LSBDB.';host='.$LSBDBHOST, $LSBUSER, $LSBDBPASSWD)
    or die "Couldn't connect to database: " . DBI->errstr;

# Uncomment to trace SQL statements
#$dbh->trace($dbh->parse_trace_flags('SQL|1|test'));

($ArchId) = $dbh->selectrow_array("SELECT Aid FROM Architecture WHERE Aname='$Arch'");

my $int_q = $dbh->prepare(
'SELECT Iid, AIreturn, Asymbol, MAX(AIversion) AS AIversion
FROM Interface
JOIN ArchInt ON Iid=AIint
JOIN Architecture ON Aid=AIarch
JOIN LGInt ON LGIint=Iid
JOIN LibGroup ON LGid=LGIlibg
JOIN Library ON Lid=LGlib
WHERE Iname = ?
  AND AIarch IN (1,'.$ArchId.')
  AND (AIappearedin <= \''.$lsbversion.'\' AND AIappearedin<>\'\')
  AND (AIwithdrawnin IS NULL OR AIwithdrawnin >\''.$lsbversion.'\')
  AND Aid = AIarch
  AND Lname = ?
GROUP BY Iid ORDER BY AIarch'
) or die "Couldn't prepare int query: " . DBI ->errstr;

my $int_name_q = $dbh->prepare(
'SELECT DISTINCT Iname, Lname
FROM Header, Interface' . $int_FROM_add .
'LEFT JOIN ArchInt ON AIint=Iid
   JOIN LGInt ON LGIint=Iid
   JOIN LibGroup ON LGid=LGIlibg
   JOIN Library ON Lid=LGlib
   WHERE Itype = "Function"
   AND AIarch IN (1,'.$ArchId.')
   AND (AIappearedin <= \''.$lsbversion.'\' AND AIappearedin<>\'\')
   AND (AIwithdrawnin IS NULL OR AIwithdrawnin >\''.$lsbversion.'\')
   AND Iheader = Hid
   AND Isrcbin=\'Both\'
   AND NOT EXISTS (
    SELECT 1 FROM AbiApi WHERE AAsrcint=Iid
   )'
  . $int_WHERE_add .
'GROUP BY Iname'
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
'SELECT Tname, Tid, Parsize FROM Parameter, Type
WHERE Ppos = ?
  AND Pint = ?
  AND Ptype = Tid'
) or die "Couldn't prepare write_param_type query: " . DBI->errstr;

my $write_addy_checker_q = $dbh->prepare(
'SELECT ATbasetype, Ttype from Type
    left join ArchType ON ATtid=Tid where Tid = ?')
    or die "Couldn't prepare write_addy_checker query: ".DBI->errstr;

my $get_param_typeid_q = $dbh->prepare(
'SELECT Ptype from Parameter where Ppos = ? and Pint = ?')
    or die "Couldn't prepare get_param_typeid query: " . DBI->errstr;

my $write_int_wrapper_q = $dbh->prepare(
'SELECT Ppos, Pint, Pnull, Pname FROM Parameter WHERE Pint = ? ORDER BY Ppos')
    or die "Couldn't prepare write_int_wrapper query: " . DBI->errstr;

 my $get_func_version_q = $dbh->prepare(
 'SELECT Vname from Version WHERE Vid = ?')
     or die "Couldn't prepare get_func_version query: ".DBI->errstr;

my $get_func_versions_q = $dbh->prepare(
'SELECT Asymbol, Vname, Aname, Vid FROM ArchInt JOIN Version ON AIversion=Vid
    JOIN Architecture ON AIarch=Aid WHERE AIint = ? AND AIversion > 0 '
    ."AND AIappearedin > '' AND AIappearedin <='$lsbversion'
        AND (AIwithdrawnin IS NULL OR AIwithdrawnin > '$lsbversion')" )
    or die "Couldn't prepare get_func_version query: ".DBI->errstr;

my $version_count_q = $dbh->prepare('SELECT COUNT(*) from Version')
    or die "Couldn't prepare version_count query: ".DBI->errstr;

my $write_int_header_q = $dbh->prepare(
'SELECT Theadgroup, Tid
FROM  Parameter, Type
WHERE Pint = ?
  AND Ptype = Tid'
) or die "Couldn't prepare write_int_header query: " . DBI->errstr;

my $basetype_header_q = $dbh->prepare(
'Select Theadgroup, ATbasetype from Type left join ArchType ON ATtid=Tid
    where Tid = ? ')
    or die "Couldn't prepare basetype_header query: ".DBI->errstr;

my $header_name_q = $dbh->prepare(
'Select Hname from HeaderGroup, Header
Where ? = HGid and HGheader = Hid ORDER BY Hid')
    or die "Couldn't prepare header_name query: ".DBI->errstr;

my $write_int_declaration_q = $dbh->prepare(
'SELECT Tname FROM Interface, Type WHERE Iid = ? AND AIreturn = Tid')
    or die "Couldn't prepare write_int_declaration query: " . DBI->errstr;

my $write_argument_list_q = $dbh->prepare(
'SELECT Ppos, Pint FROM Parameter WHERE Pint = ? ORDER BY Ppos')
    or die "Couldn't prepare write_argument list query: " . DBI->errstr;

my $get_type_info_q =
    $dbh->prepare('SELECT Tname, Ttype, ATbasetype
         FROM Type LEFT JOIN ArchType ON ATtid=Tid
         WHERE Tid = ?' )
    or die "Couldn't prepare type_info query: " . DBI->errstr;

my $get_ATsize_q =
#   $dbh->prepare('SELECT ATsize from Type, ArchType where Tid = ? and ATtid = Tid and ATaid = Tarch')
    $dbh->prepare('SELECT ATsize from Type, ArchType where Tid = ? and ATtid = Tid and ATaid = ?')
    or die "Couldn't prepare ATsize query: ".DBI->errstr;

my $get_parsize_q =
    $dbh->prepare('SELECT Parsize from Parameter where Pint = ? and Ppos = ?')
    or die "Couldn't prepare parsize query: ".DBI->errstr;

my $get_type_form_q = $dbh->prepare('SELECT Ttype FROM Type WHERE Tid = ?')
    or die "Couldn't prepare type_from query: " . DBI->errstr;

my $get_funcptr_declaration_q = $dbh->prepare(
'SELECT TMtypeid FROM TypeMember WHERE TMmemberof = ? AND TMaid IN (1,?)' )
    or die "Couldn't prepare gen_funcptr_declaration query: " . DBI->errstr;

##############################
# Subroutines
##############################

sub debug # (@some_list)
{
    foreach my $out (@_) {
        print $out;
    }
}

# Return true if the first argument is duplicated in the rest of the argument.
sub contains # ($first_arg, $other_args ... )
{
    my $count = -1;
    foreach my $element (@_)    {
        $count += 1 if($element eq $_[0]);
    }
    return ($count > 0);
}

# true if 'interface' has a parameter with ellipses
sub has_ellipsis # ($func_name)
{
    my($func_name) = @_;
    $has_ellipsis_q->execute($func_name);
    while ( my($type) = $has_ellipsis_q->fetchrow_array() ) {
        return 1 if($type) eq "...";
    }
    return 0;
}


################################################################################
#                The version script subsystem.
################################################################################
my %vs_fh;
my @vs_fh_name;
my %vs_fh_isopen;

sub init_vs_fh
{
    my ($v_id);
    $version_count_q->execute();
    my ($count) = $version_count_q->fetchrow_array();

    for($v_id = 1; $v_id <= $count; $v_id++) {
        $get_func_version_q->execute($v_id);
        if( my ($v_name) = $get_func_version_q->fetchrow_array()) {
            $vs_fh_name[$v_id] = $v_name;
            #~ $vs_fh_isopen[$v_id] = 0;
        }
    }
    return 0;
}

sub open_vs_fh #($v_name, v_id)
{
    my($v_name, $v_id) = @_;

    return -1  if(defined $vs_fh_isopen{$v_name} and $vs_fh_isopen{$v_name} > 0);

    $vs_fh{$v_name} = new IO::File ">". $v_name . ".Version";
    print {$vs_fh{$v_name}} $vs_fh_name[$v_id]." {\n";

    $vs_fh_isopen{$v_name} = 1;
    return 0;
}

sub close_vs_fh #(v_id)
{
    my($v_id) = @_;
    return -1 if($vs_fh_isopen{$v_id} != 1);
    print {$vs_fh{$v_id}} "};\n";
    close $vs_fh{$v_id};
    $vs_fh_isopen{$v_id} = 2;
}

sub clean_vs_fh
{
    my $i;
    foreach $i (keys %vs_fh_isopen) {
        close_vs_fh($i) if($vs_fh_isopen{$i} and $vs_fh_isopen{$i} == 1);
    }
}

sub write_int_vscript #(func_id, func_name, v_id)
{
    my($func_id, $func_name, $v_id) = @_;
    return -1 if($v_id == 0);

    $get_func_versions_q->execute($func_id) or die "Couldn't execute get_func_versions_q: ".DBI->errstr;

    for(1..$get_func_versions_q->rows) {
        my($asymbol, $func_version_name, $aname, $v_id) = $get_func_versions_q->fetchrow_array();
        open_vs_fh($aname.".".$func_version_name, $v_id);  #only does anything if this file is not yet open.
        print {$vs_fh{$aname.".".$func_version_name}} "  $func_name;\n" ;
    }
    $get_func_versions_q->finish;
}

################################################################################
#    Functions for getting C code right.
################################################################################

sub get_type_string($$$$);

sub get_type_string($$$$)
{
    my ($type_id, $param_pos, $param_int, $archId)=@_;
    my ($pre_type,$post_type) = ("","");
    my $next_form;

    $param_pos = -1 if(!$param_pos);
    $param_int = 0 if(!$param_int);

#   $get_type_info_q->execute($type_id,$archId)
    $get_type_info_q->execute($type_id)
        or die "Couldn't execute type_info query: " . DBI->errstr;
    my ($name, $form, $basetype) = $get_type_info_q->fetchrow_array();
    $get_type_info_q->finish();

    # BUG: on some bad data, these can be uninit:
    # Use of uninitialized value $name in string eq at ./gen_lib.pl line 445.
    # suspicion is we are called without a useful $type_id, so the query
    # does not return any data to break out in the fetchrow_array line
    # We have also seen messages like:
    # empties on Type 0; Param number -1 in Interface 0
    # better checking needed.
    if($name eq "" or $form eq "" or $basetype eq "") {
        print STDERR "empties on Type $type_id; Param number $param_pos in Interface $param_int\n";
        return "";
    }

    $name =~ s/fptr-//;

    if($basetype and $basetype!=$type_id and $form ne "Typedef") {
        ($pre_type, $post_type) = get_type_string($basetype, -1, 0, $archId);
    }
    else {
        $pre_type = $name;
        $post_type = " ";
    }

    if($form eq "Intrinsic" or $form eq "Literal" or $form eq "Typedef") {
        return ($pre_type,$post_type);
    }
    elsif($form eq "Struct") {
        return ("struct " . $pre_type,$post_type);
    }
    elsif($form eq "Union") {
        return ("union " . $pre_type,$post_type);
    }
    elsif($form eq "Volatile") {
        return ($pre_type." volatile ",$post_type);
    }
    elsif($form eq "Enum") {
        return ("enum ". $pre_type,$post_type);
    }
    elsif($form eq "Pointer") {
        return ($pre_type." *",$post_type);
    }
    elsif($form eq "Const") {
        $get_type_form_q->execute($basetype)
            or die "Couldn't execute type_form query: " . DBI->errstr;
        ($next_form) = $get_type_form_q->fetchrow_array();
        $get_type_form_q->finish;

	# BUG: on some conditions, we get:
	# Use of uninitialized value $next_form in string eq at ./gen_lib.pl line 486.
        return ($pre_type."const ",$post_type) if($next_form eq "Pointer");
        return ("const ".$pre_type,$post_type); # (else)
    }
    elsif($form eq "Array") {
        $get_ATsize_q->execute($type_id,$archId)
            or die "Couldn't execute ATsize query: ".DBI->errstr;
        $get_parsize_q->execute($param_int, $param_pos)
            or die "Couldn't execute parsize query: ".DBI->errstr;
        my $at_size;
        my $parsize;
        unless(($at_size) = $get_ATsize_q->fetchrow_array())
        {  $at_size = 0; }

        unless(($parsize) = $get_parsize_q->fetchrow_array())
        {  $parsize = "NULL"; }

        if($at_size ne '0' and $at_size ne '') {
            $post_type .= "[". $at_size ."]";
        }
        elsif (defined $parsize and $parsize ne "NULL" and $parsize ne "0") {
            $post_type .= "[" . $parsize . "]";
        }
        else {
            $post_type .="[]";
        }
        return ($pre_type, $post_type);
    }
    elsif($form eq "FuncPtr") {
        $pre_type.="(*";
        $post_type.=")".get_funcptr_declaration($type_id,$archId);
        return ($pre_type,$post_type);
    }
}

sub get_funcptr_declaration($$)
{
    # This might fail if nested function pointers occur. (nowhere in current LSB)
    # In that case, we can just use the dynamic query-preparation strategy, a la write_body()
    my ($TMid,$archId) = @_;
    my $i = 0;
    my $output = "(";
    $get_funcptr_declaration_q->execute($TMid,$archId)
        or die "Couldn't execute funcptr declaration query: " . DBI->errstr;
    while( my($type_id) = $get_funcptr_declaration_q->fetchrow_array()) {
        my($left,$right);
        $output.=", " if ($i>0);
        ($left,$right)=get_type_string($type_id, 0, -1, $archId);
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
    if($typetypeid != 0) {
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
sub get_param_type # ($param_pos, $param_int, $archId)
{
    my($param_pos, $param_int, $archId) = @_;
    $get_param_type_q->execute($param_pos, $param_int);
    my($type, $type_id, $size) = $get_param_type_q->fetchrow_array();

    my($left_string, $right_string) = get_type_string($type_id, $param_pos, $param_int, $archId);

    # Not needed - const parameters have 'const' qualifier in their names
#   $left_string = "const ". $left_string if ($is_const eq 'Yes');

    return ($left_string,$right_string);
}

################################################################################
#     Functions that write C code.
################################################################################

# Create makefile for particular library
sub dump_lib_makefile($ )
{
    my ($func_lib) = @_;
    open( MK, "> $func_lib/makefile" );
    if( !-e "$func_lib/hands.mk" ) {
        system "touch $func_lib/hands.mk";
    }
    if( -d "$func_lib/hands" ) {
        system "cp $func_lib/hands/*.c $func_lib/";
    }
    print MK "include hands.mk\n\n";
    print MK "include gen.mk\n\n";
    print MK "FUNCS = \$(HAND_FUNCS) \$(GEN_FUNCS)\n\n";
    print MK "all: \$(FUNCS) \n\n";
    print MK "clean:\n\trm -f \$(FUNCS)\n";
    close(MK);
}

# write code that checks the addresses of pointers.
sub write_addy_checker
{
    my($fh, $type_id, $arg_name, $left_name, $func_name, $func_arch, $param_null, $arg_name_str)=@_;
#   $write_addy_checker_q->execute($type_id,$func_arch)
    $write_addy_checker_q->execute($type_id)
        or die "Couldn't execute write_addy_checker query: ".DBI->errstr;
    my($basetype, $typeform) = $write_addy_checker_q->fetchrow_array();
#   $write_addy_checker_q->execute($basetype,$func_arch)
    $write_addy_checker_q->execute($basetype)
        or die "Couldn't execute write_addy_checker query: ".DBI->errstr;
    my($basetype2, $typeform2) = $write_addy_checker_q->fetchrow_array();
    if($typeform eq "Pointer") {
        if( $param_null ne 'No' ) {
            print $fh "\t\tif( $arg_name ) {\n";
        }
	# BUG: on some conditions, we get:
	# Use of uninitialized value $typeform2 in string eq at ./gen_lib.pl line 617.
        if( $typeform2 eq "Const" ) {
            print $fh "\t\tvalidate_Rdaddress($left_name $arg_name, \"$func_name - $left_name$arg_name_str\");\n";
        } else {
            print $fh "\t\tvalidate_RWaddress($left_name $arg_name, \"$func_name - $left_name$arg_name_str\");\n";
        }
        # Only do this if we have a specific type to test against.
        # Recursing on pointer to pointers doesn't work because the
        # values may not be defined or valid after the first pointer.
        #$left_name = "*".$left_name;
        #write_addy_checker($fh, $basetype, $arg_name, $left_name, $func_name);
        if( $param_null ne 'No' ) {
            print $fh "\t\t}\n";
        }
    }
    elsif($typeform eq "FuncPtr")   {
        if( $param_null ne 'No' ) {
            print $fh "\t\tif( $arg_name ) {\n";
        }
        print $fh "\t\tvalidate_Rdaddress($left_name $arg_name, \"$func_name - $arg_name_str\");\n";
        if( $param_null ne 'No' ) {
            print $fh "\t\t}\n";
        }
    }
}

# write code block for interface wrapper to 'fh'
# if 'is_lsb', write code block for __lsb_* interface wrapper to 'fh'
sub write_int_wrapper
{
    my($fh, $func_id, $func_name, $func_vid, $func_left_type, $func_right_type, $is_lsb, $func_arch) = @_;
    my $i = 0; my $j = 0;

    print $fh "{\n";
    print $fh "\tint reset_flag = __lsb_check_params;\n";
    # BUG: on some conditions, we get:
    # Use of uninitialized value $func_right_type in concatenation (.) or string at ./gen_lib.pl line 653.
    print $fh "\t$func_left_type ret_value $func_right_type;\n" unless($func_left_type eq "void");

    print $fh "\t__lsb_output(4, \"Invoking wrapper for $func_name()\");\n";

    print $fh "\tif(!funcptr)\n";
    if($func_vid == 0) {
        print $fh "\t\tfuncptr = dlsym(RTLD_NEXT, \"$func_name\");\n";
    }
    else {
        $get_func_versions_q->execute($func_id) or die "Couldn't execute get_func_versions_q: ".DBI->errstr;

        for(1..$get_func_versions_q->rows) {
            my($asymbol, $func_version_name, $Aname) = $get_func_versions_q->fetchrow_array();
            print $fh "\t\t#if $asymbol\n";
            print $fh "\t\t\tfuncptr = dlvsym(RTLD_NEXT, \"$func_name\", \"$func_version_name\");\n";
            print $fh "\t\t#endif\n";
        }
        $get_func_versions_q->finish;
    }

    print $fh "\tif(!funcptr) {\n";
    print $fh "\t\t__lsb_output(-1, \"Failed to load $func_name. Probably the library was loaded using dlopen, we don't support this at the moment.\");\n";
    print $fh "\t\texit(1);\n";
    print $fh "\t}\n";

    $write_int_wrapper_q->execute($func_id)
        or die "Couldn't execute write_int_wrapper query: " . DBI->errstr;

    print $fh "\tif(__lsb_check_params)\n\t{\n";
    print $fh "\t\t__lsb_check_params=0;\n";
    print $fh "\t\t__lsb_output(4, \"$func_name() - validating\");\n";

    VALCALL: while( my($param_pos, $param_int, $param_null, $param_name) = $write_int_wrapper_q->fetchrow_array() )
    {
        $get_param_typeid_q->execute($param_pos, $param_int)
            or die "Couldn't execute get_param_typeid query: " . DBI->errstr;
        my($typeid) = $get_param_typeid_q->fetchrow_array();

        next VALCALL if($typeid == 1);

        unless($is_lsb) { #I should be able to remove the is_lsb controls, if the flag system works.
            my($typetype, $dereference) = get_param_typetype($param_pos, $param_int);
            my $arg_name_str = "arg$i". ($param_name ? " ($param_name)" : "");
            write_addy_checker($fh, $typeid, "arg$i", "", "$func_name", $func_arch, $param_null, $arg_name_str);

            print $fh "\t\tvalidate_$typetype( $dereference arg$i, \"$func_name - $arg_name_str\");\n";

        }
        $i++;
    }

    print $fh "\t}\n";
    print $fh "\t";
    print $fh "ret_value = " unless($func_left_type eq "void");
    print $fh "funcptr(";

    while($j < $i) {
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
    my($fh, $left_type, $right_type, $func_name, $func_id, $func_arch)=@_;

    $simple_header_q->execute($func_id)
        or die "Couldn't execute simple_header query: ".DBI->errstr;
    my($main_header) = $simple_header_q->fetchrow_array();

    print $fh "// Generated by gen_lib.pl\n\n";
    print $fh "#include \"../../tests/type_tests.h\"\n";
    print $fh "#include \"../../misc/lsb_output.h\"\n";
    print $fh "#include \"stdlib.h\"\n";

    my(@headers_found);
    $headers_found[0] = "dlfcn.h";
    $write_int_header_q->execute($func_id)
        or die "Couldn't execute write_int_header query: " . DBI->errstr;

    while(my($header_group_id, $base_type) = $write_int_header_q->fetchrow_array() )    {
        while($header_group_id == 0 and $base_type != 0) {
#           $basetype_header_q->execute($base_type,$func_arch)
            $basetype_header_q->execute($base_type)
                or die "Couldn't execute basetype_header query: ".DBI->errstr;
            ($header_group_id,$base_type) = $basetype_header_q->fetchrow_array();
        }
        if($header_group_id != 0) {
            $header_name_q->execute($header_group_id);
            my($header) = $header_name_q->fetchrow_array();
            $header_name_q->finish;
            if(!contains($header, @headers_found) ) {
                $headers_found[@headers_found]=$header;
                print $fh "#include <" . $header . ">\n";
            }
        }
    }

    if(!contains($main_header, @headers_found)) {
        print $fh "#include <".$main_header.">\n";
        $headers_found[@headers_found]=$main_header;
    }
    print $fh "#undef ".$func_name."\n";
    # BUG: on some conditions, we get:
    # Use of uninitialized value $right_type in concatenation (.) or string at ./gen_lib.pl line 768.
    print $fh "static ". $left_type ."(*funcptr)".$right_type."(";
    write_argument_list($fh, $func_id, 0);
    print $fh ") = 0;\n\n";
    print $fh "extern int __lsb_check_params;\n";
}

# write argument list for a function declaration.
# (This is the bit in the parentheses.)
sub write_argument_list # ($fh, $func_id, $add_arg, $archId)
{
    my($fh, $func_id, $add_arg, $archId) = @_;
    my $i = 0;
    $write_argument_list_q->execute($func_id)
        or die "Couldn't execute write_int_declaration query 2: " . DBI->errstr;
    while( my($param_pos, $param_int) = $write_argument_list_q->fetchrow_array() ) {
        my($l_type, $r_type) = get_param_type($param_pos, $param_int, $archId);
        unless($l_type eq "void") {
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
    my($fh, $func_id, $func_name, $func_left_type, $func_right_type, $is_lsb, $archId) = @_;
    print $fh $func_left_type . " ";
    print $fh "__lsb_" if($is_lsb);
    # BUG: on some conditions, we get:
    # Use of uninitialized value $func_right_type in concatenation (.) or string at ./gen_lib.pl line 803.
    print $fh $func_name . $func_right_type . "(";
    write_argument_list($fh, $func_id, 1, $archId);

    print $fh ")\n";
}

# add 'interface' to the gen.mk file in the correct library's directory
my(@libs_seen);
sub add_to_gen_mk # ($func_name, $lib_name)
{
    my($func_name, $func_lib) = @_;
    if( $exclude_ints{"$func_lib:$func_name"} ) {
        return;
    }
    my($gen_fh);
    if(!contains($func_lib, @libs_seen)) {
        $libs_seen[@libs_seen] = $func_lib;
        if( !-d $func_lib ) {
            mkdir $func_lib;
        }
        dump_lib_makefile($func_lib);
        $gen_fh = IO::Handle->new();
        open($gen_fh, "> " . $func_lib . "/gen.mk" )
            or die "Can't open $func_lib/gen.mk: $!";
        print $gen_fh "GEN_FUNCS = \\\n";
        print $gen_fh $func_name . ".o ";
        close $gen_fh;
    }
    else {
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
#   or die "Can't open the output file all_lsb_funcs.h: $!";
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
    if(has_ellipsis($func_name)) {
        print $ell_file $func_name . "\n";
        $gen_this = 0;
    }
    elsif(contains($func_name."\n", @do_not_generate)) {
        $gen_this = 0;
    }

    if($gen_this) {
        # Add interface to correct gen.mk file
        add_to_gen_mk($func_name, $func_lib) if($generate_gen_file);
        # Create interface's .c file
        open($int_file, ">" . $func_lib . "/" . $func_name . '.c')
            or die "Can't open output: $!";
    }

    $int_q->execute($func_name, $func_lib) or die "Can't execute int query: ".DBI->errstr;
    while(my ($func_id, $func_type, $func_arch, $func_vid) = $int_q->fetchrow_array()) {
        if($gen_this) {
            my ($left_type_string, $right_type_string) = get_type_string($func_type, -1, 0, $func_arch);

            # Add interface to the __lsb_* function header (This doesn't get used anymore)
            # write_int_declaration($lsb_h_file, $func_id, $func_name, $left_type_string, $right_type_string, 1);

            # Open conditional architecture magic
#            unless($func_arch eq "1") {
#                print $int_file "#if $func_arch\n";
#            }

            # Write interface's .c file
            write_int_header($int_file, $left_type_string, $right_type_string, $func_name, $func_id, $func_arch);
            write_int_declaration($int_file, $func_id, $func_name, $left_type_string, $right_type_string, 0, $func_arch);
            write_int_wrapper($int_file, $func_id, $func_name, $func_vid, $left_type_string, $right_type_string, 0, $func_arch);

#            unless($func_arch eq "1") {
#                print $int_file "#endif /* $func_arch */\n";
#            }
        }
        # Put interface in version script
        write_int_vscript($func_id, $func_name, $func_vid);
    }

    $progress ++;

    unless($be_quiet) {
        print "." if ($progress % 50 == 0);
    }

    close($int_file);

}

close($ell_file);
#close($lsb_h_file);
clean_vs_fh;

print "Done generating libraries!\a\n" unless($be_quiet);
