/*
 * Test of sched.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sched.h"



#ifdef TET_TEST
void sched_h()
{
#else
int sched_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sched.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SCHED_OTHER
	CompareConstant(SCHED_OTHER,0,1611,architecture)
#else
Msg( "Error: Constant not found: SCHED_OTHER\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SCHED_FIFO
	CompareConstant(SCHED_FIFO,1,1612,architecture)
#else
Msg( "Error: Constant not found: SCHED_FIFO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SCHED_RR
	CompareConstant(SCHED_RR,2,1613,architecture)
#else
Msg( "Error: Constant not found: SCHED_RR\n");
cnt++;
#endif

#endif

CheckTypeSize(struct sched_param,4, 9045, 1)
CheckOffset(struct sched_param,sched_priority,0,1,33571)
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sched.h\n",cnt);
return cnt;
#endif

}
