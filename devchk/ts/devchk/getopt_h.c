/*
 * Test of getopt.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#ifdef TET_TEST
Msg("Checking data structures in getopt.h\n");
#endif

printf("Checking data structures in getopt.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef no_argument
	CompareConstant(no_argument,0,4378,architecture)
#else
Msg( "Error: Constant not found: no_argument\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef required_argument
	CompareConstant(required_argument,1,4379,architecture)
#else
Msg( "Error: Constant not found: required_argument\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef optional_argument
	CompareConstant(optional_argument,2,4380,architecture)
#else
Msg( "Error: Constant not found: optional_argument\n");
cnt++;
#endif

#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10000,0);
Msg("Find size of option (10000)\n");
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
