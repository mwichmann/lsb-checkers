/*
 * Test of wchar.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "wchar.h"



#ifdef TET_TEST
void wchar_h()
{
#else
int wchar_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in wchar.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef WCHAR_MIN
	CompareConstant(WCHAR_MIN,0x80000000,1953,architecture)
#else
Msg( "Error: Constant not found: WCHAR_MIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WCHAR_MAX
	CompareConstant(WCHAR_MAX,0x7FFFFFFF,1954,architecture)
#else
Msg( "Error: Constant not found: WCHAR_MAX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WEOF
	CompareConstant(WEOF,(0xffffffffu),1955,architecture)
#else
Msg( "Error: Constant not found: WEOF\n");
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
printf("%d tests in wchar.h\n",cnt);
return cnt;
#endif

}
