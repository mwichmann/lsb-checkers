/*
 * Test of float.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "float.h"



#ifdef TET_TEST
void float_h()
{
#else
int float_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in float.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef DBL_MAX
	CompareConstant(DBL_MAX,1.7976931348623157e+308,3049,architecture)
#else
Msg( "Error: Constant not found: DBL_MAX\n");
cnt++;
#endif

#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in float.h\n",cnt);
return cnt;
#endif

}
