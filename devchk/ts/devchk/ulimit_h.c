/*
 * Test of ulimit.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "ulimit.h"



#ifdef TET_TEST
void ulimit_h()
{
#else
int ulimit_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in ulimit.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef UL_GETFSIZE
	CompareConstant(UL_GETFSIZE,1,1916,architecture)
#else
Msg( "Error: Constant not found: UL_GETFSIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef UL_SETFSIZE
	CompareConstant(UL_SETFSIZE,2,1917,architecture)
#else
Msg( "Error: Constant not found: UL_SETFSIZE\n");
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
printf("%d tests in ulimit.h\n",cnt);
return cnt;
#endif

}
