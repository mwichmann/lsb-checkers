/*
 * Test of time.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "time.h"



int time_h()
{
int cnt=0;
#ifdef CLK_TCK
CompareConstant(CLK_TCK,100)
#else
Msg( "Warning: Constant not found: CLK_TCK\n");
#endif
#ifdef CLOCKS_PER_SEC
CompareConstant(CLOCKS_PER_SEC,1000000)
#else
Msg( "Warning: Constant not found: CLOCKS_PER_SEC\n");
#endif
#ifdef CLOCK_REALTIME
CompareConstant(CLOCK_REALTIME,(-1))
#else
Msg( "Warning: Constant not found: CLOCK_REALTIME\n");
#endif
#ifdef TIMER_ABSTIME
CompareConstant(TIMER_ABSTIME,(-1))
#else
Msg( "Warning: Constant not found: TIMER_ABSTIME\n");
#endif
printf("%d tests in time.h\n",cnt);
return cnt;
}
