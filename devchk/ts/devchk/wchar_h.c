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

#ifdef __i386__
CheckTypeSize(wchar_t,4)
#elif __ia64__
CheckTypeSize(wchar_t,0)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8848,0);
#endif

#ifdef __i386__
CheckTypeSize(wint_t,4)
#elif __ia64__
CheckTypeSize(wint_t,0)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8980,0);
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
