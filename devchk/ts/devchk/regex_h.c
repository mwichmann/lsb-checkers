/*
 * Test of regex.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "regex.h"



#ifdef TET_TEST
void regex_h()
{
#else
int regex_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in regex.h\n");
#endif

#ifdef __i386__
CheckTypeSize(regmatch_t,8)
#elif __ia64__
CheckTypeSize(regmatch_t,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6949,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in regex.h\n",cnt);
return cnt;
#endif

}
