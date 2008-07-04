/*
 * Test of assert.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "assert.h"



#ifdef TET_TEST
void assert_h()
{
#else
int assert_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in assert.h\n");
#endif

printf("Checking data structures in assert.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for assert(expr) */
#endif

extern void __assert_fail_db(const char *, const char *, unsigned int, const char *);
CheckInterfacedef(__assert_fail,__assert_fail_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in assert.h\n\n",pcnt,cnt);
return cnt;
#endif

}
