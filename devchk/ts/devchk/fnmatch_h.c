/*
 * Test of fnmatch.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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

#ifdef _LSB_DEFAULT_ARCH
#ifdef FNM_NOESCAPE
	CompareConstant(FNM_NOESCAPE,(1<<1),1222,architecture)
#else
Msg( "Error: Constant not found: FNM_NOESCAPE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef FNM_PERIOD
	CompareConstant(FNM_PERIOD,(1<<2),1223,architecture)
#else
Msg( "Error: Constant not found: FNM_PERIOD\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef FNM_NOMATCH
	CompareConstant(FNM_NOMATCH,1,1228,architecture)
#else
Msg( "Error: Constant not found: FNM_NOMATCH\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef FNM_PATHNAME
	CompareConstant(FNM_PATHNAME,(1<<0),1221,architecture)
#else
Msg( "Error: Constant not found: FNM_PATHNAME\n");
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
printf("%d tests in fnmatch.h\n",cnt);
return cnt;
#endif

}
