/*
 * Test of stdio.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "stdio.h"



#ifdef TET_TEST
void stdio_h()
{
#else
int stdio_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in stdio.h\n");
#endif

#ifdef _IOFBF
	CompareConstant(_IOFBF,0)
#else
Msg( "Warning: Constant not found: _IOFBF\n");
#endif

#ifdef _IOLBF
	CompareConstant(_IOLBF,1)
#else
Msg( "Warning: Constant not found: _IOLBF\n");
#endif

#ifdef _IONBF
	CompareConstant(_IONBF,2)
#else
Msg( "Warning: Constant not found: _IONBF\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in stdio.h\n",cnt);
return cnt;
#endif

}
