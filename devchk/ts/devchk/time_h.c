/*
 * Test of time.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "time.h"



#ifdef TET_TEST
void time_h()
{
#else
int time_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in time.h\n");
#endif

#ifdef __i386__
CheckTypeSize(clock_t,4)
#elif __ia64__
CheckTypeSize(clock_t,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9164,0);
#endif

#ifdef __i386__
CheckTypeSize(time_t,4)
#elif __ia64__
CheckTypeSize(time_t,8)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9191,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in time.h\n",cnt);
return cnt;
#endif

}
