/*
 * Test of sys/time.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/time.h"



#ifdef TET_TEST
void sys_time_h()
{
#else
int sys_time_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/time.h\n");
#endif

#ifdef ITIMER_REAL
	CompareConstant(ITIMER_REAL,0)
#else
Msg( "Error: Constant not found: ITIMER_REAL\n");
cnt++;
#endif

#ifdef ITIMER_VIRTUAL
	CompareConstant(ITIMER_VIRTUAL,1)
#else
Msg( "Error: Constant not found: ITIMER_VIRTUAL\n");
cnt++;
#endif

#ifdef ITIMER_PROF
	CompareConstant(ITIMER_PROF,2)
#else
Msg( "Error: Constant not found: ITIMER_PROF\n");
cnt++;
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/time.h\n",cnt);
return cnt;
#endif

}
