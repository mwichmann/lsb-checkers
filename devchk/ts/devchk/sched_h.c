/*
 * Test of sched.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef SCHED_OTHER
	CompareConstant(SCHED_OTHER,0)
#else
Msg( "Error: Constant not found: SCHED_OTHER\n");
cnt++;
#endif

#ifdef SCHED_FIFO
	CompareConstant(SCHED_FIFO,1)
#else
Msg( "Error: Constant not found: SCHED_FIFO\n");
cnt++;
#endif

#ifdef SCHED_RR
	CompareConstant(SCHED_RR,2)
#else
Msg( "Error: Constant not found: SCHED_RR\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(struct sched_param,4, 9045, 2)
#elif __ia64__
CheckTypeSize(struct sched_param,4, 9045, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9045,0);
#endif

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
