/*
 * Test of wchar.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef WCHAR_MIN
	CompareConstant(WCHAR_MIN,__WCHAR_MIN)
#else
Msg( "Error: Constant not found: WCHAR_MIN\n");
cnt++;
#endif

#ifdef WCHAR_MAX
	CompareConstant(WCHAR_MAX,__WCHAR_MAX)
#else
Msg( "Error: Constant not found: WCHAR_MAX\n");
cnt++;
#endif

#ifdef WEOF
	CompareConstant(WEOF,(0xffffffffu))
#else
Msg( "Error: Constant not found: WEOF\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(mbstate_t,8, 9235, 2)
#elif __ia64__
CheckTypeSize(mbstate_t,8, 9235, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9235,0);
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
