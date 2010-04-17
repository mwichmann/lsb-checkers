/*
 * Test of getopt.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "getopt.h"



#ifdef TET_TEST
void getopt_h()
{
#else
int getopt_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in getopt.h\n");
#endif

printf("Checking data structures in getopt.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef no_argument
	CompareConstant(no_argument,0,4378,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: no_argument\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef required_argument
	CompareConstant(required_argument,1,4379,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: required_argument\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef optional_argument
	CompareConstant(optional_argument,2,4380,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: optional_argument\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(struct option,32, 10000, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct option,has_arg,4,12,32259)
CheckOffset(struct option,has_arg,8,12,32259)
CheckMemberSize(struct option,flag,8,12,32260)
CheckOffset(struct option,flag,16,12,32260)
CheckMemberSize(struct option,val,4,12,32261)
CheckOffset(struct option,val,24,12,32261)
#elif defined __x86_64__
CheckTypeSize(struct option,32, 10000, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct option,has_arg,4,11,32259)
CheckOffset(struct option,has_arg,8,11,32259)
CheckMemberSize(struct option,flag,8,11,32260)
CheckOffset(struct option,flag,16,11,32260)
CheckMemberSize(struct option,val,4,11,32261)
CheckOffset(struct option,val,24,11,32261)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct option,16, 10000, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct option,has_arg,4,10,32259)
CheckOffset(struct option,has_arg,4,10,32259)
CheckMemberSize(struct option,flag,4,10,32260)
CheckOffset(struct option,flag,8,10,32260)
CheckMemberSize(struct option,val,4,10,32261)
CheckOffset(struct option,val,12,10,32261)
#elif defined __powerpc64__
CheckTypeSize(struct option,32, 10000, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct option,has_arg,4,9,32259)
CheckOffset(struct option,has_arg,8,9,32259)
CheckMemberSize(struct option,flag,8,9,32260)
CheckOffset(struct option,flag,16,9,32260)
CheckMemberSize(struct option,val,4,9,32261)
CheckOffset(struct option,val,24,9,32261)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct option,16, 10000, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct option,has_arg,4,6,32259)
CheckOffset(struct option,has_arg,4,6,32259)
CheckMemberSize(struct option,flag,4,6,32260)
CheckOffset(struct option,flag,8,6,32260)
CheckMemberSize(struct option,val,4,6,32261)
CheckOffset(struct option,val,12,6,32261)
#elif defined __ia64__
CheckTypeSize(struct option,32, 10000, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct option,has_arg,4,3,32259)
CheckOffset(struct option,has_arg,8,3,32259)
CheckMemberSize(struct option,flag,8,3,32260)
CheckOffset(struct option,flag,16,3,32260)
CheckMemberSize(struct option,val,4,3,32261)
CheckOffset(struct option,val,24,3,32261)
#elif defined __i386__
CheckTypeSize(struct option,16, 10000, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct option,name,4,2,32258)
CheckOffset(struct option,name,0,2,32258)
CheckMemberSize(struct option,has_arg,4,2,32259)
CheckOffset(struct option,has_arg,4,2,32259)
CheckMemberSize(struct option,flag,4,2,32260)
CheckOffset(struct option,flag,8,2,32260)
CheckMemberSize(struct option,val,4,2,32261)
CheckOffset(struct option,val,12,2,32261)
#else
Msg("Find size of option (10000)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0, NULL);\n",architecture,10000,0);
#endif

extern int getopt_long_db(int, char *const [], const char *, const struct option *, int *);
CheckInterfacedef(getopt_long,getopt_long_db);
extern int getopt_long_only_db(int, char *const [], const char *, const struct option *, int *);
CheckInterfacedef(getopt_long_only,getopt_long_only_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in getopt.h\n\n",pcnt,cnt);
return cnt;
#endif

}
