/*
 * Test of complex.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "complex.h"



#ifdef TET_TEST
void complex_h()
{
#else
int complex_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in complex.h\n");
#endif

#if _LSB_DEFAULT_ARCH
/* No test for complex */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in complex.h\n",cnt);
return cnt;
#endif

}
