/*
 * Test of fnmatch.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "fnmatch.h"



#ifdef TET_TEST
void fnmatch_h()
{
#else
int fnmatch_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in fnmatch.h\n");
#endif

#ifdef FNM_PATHNAME
	CompareConstant(FNM_PATHNAME,(1<<0))
#else
Msg( "Warning: Constant not found: FNM_PATHNAME\n");
#endif

#ifdef FNM_NOESCAPE
	CompareConstant(FNM_NOESCAPE,(1<<1))
#else
Msg( "Warning: Constant not found: FNM_NOESCAPE\n");
#endif

#ifdef FNM_PERIOD
	CompareConstant(FNM_PERIOD,(1<<2))
#else
Msg( "Warning: Constant not found: FNM_PERIOD\n");
#endif

#ifdef FNM_NOMATCH
	CompareConstant(FNM_NOMATCH,1)
#else
Msg( "Warning: Constant not found: FNM_NOMATCH\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in fnmatch.h\n",cnt);
return cnt;
#endif

}
