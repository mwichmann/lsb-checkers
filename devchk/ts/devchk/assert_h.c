/*
 * Test of assert.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "assert.h"



#ifdef TET_TEST
void assert_h()
{
#else
int assert_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in assert.h\n");
#endif

#if _LSB_DEFAULT_ARCH
/* No test for assert(expr) */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in assert.h\n",cnt);
return cnt;
#endif

}
