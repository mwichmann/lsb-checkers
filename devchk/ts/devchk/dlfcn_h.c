/*
 * Test of dlfcn.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "dlfcn.h"



#ifdef TET_TEST
void dlfcn_h()
{
#else
int dlfcn_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in dlfcn.h\n");
#endif

#ifdef RTLD_LAZY
	CompareConstant(RTLD_LAZY,0x00001)
#else
Msg( "Warning: Constant not found: RTLD_LAZY\n");
#endif

#ifdef RTLD_NOW
	CompareConstant(RTLD_NOW,0x00002)
#else
Msg( "Warning: Constant not found: RTLD_NOW\n");
#endif

#ifdef RTLD_GLOBAL
	CompareConstant(RTLD_GLOBAL,0x00100)
#else
Msg( "Warning: Constant not found: RTLD_GLOBAL\n");
#endif

#ifdef RTLD_LOCAL
	CompareConstant(RTLD_LOCAL,0)
#else
Msg( "Warning: Constant not found: RTLD_LOCAL\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in dlfcn.h\n",cnt);
return cnt;
#endif

}
