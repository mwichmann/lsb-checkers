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

#ifdef CLOCKS_PER_SEC
	CompareConstant(CLOCKS_PER_SEC,1000000l)
#else
Msg( "Error: Constant not found: CLOCKS_PER_SEC\n");
cnt++;
#endif

#ifdef CLOCK_REALTIME
	CompareConstant(CLOCK_REALTIME,0)
#else
Msg( "Error: Constant not found: CLOCK_REALTIME\n");
cnt++;
#endif

#ifdef TIMER_ABSTIME
	CompareConstant(TIMER_ABSTIME,1)
#else
Msg( "Error: Constant not found: TIMER_ABSTIME\n");
cnt++;
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
