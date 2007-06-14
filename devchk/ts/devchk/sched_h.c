/*
 * Test of sched.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sched.h\n");
#endif

printf("Checking data structures in sched.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SCHED_OTHER
	CompareConstant(SCHED_OTHER,0,1611,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCHED_OTHER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCHED_FIFO
	CompareConstant(SCHED_FIFO,1,1612,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCHED_FIFO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SCHED_RR
	CompareConstant(SCHED_RR,2,1613,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: SCHED_RR\n");
cnt++;
#endif

#endif

#if 1
#endif

extern int sched_get_priority_max_db(int);
CheckInterfacedef(sched_get_priority_max,sched_get_priority_max_db);
extern int sched_get_priority_min_db(int);
CheckInterfacedef(sched_get_priority_min,sched_get_priority_min_db);
extern int sched_getparam_db(pid_t, struct sched_param *);
CheckInterfacedef(sched_getparam,sched_getparam_db);
extern int sched_getscheduler_db(pid_t);
CheckInterfacedef(sched_getscheduler,sched_getscheduler_db);
extern int sched_rr_get_interval_db(pid_t, struct timespec *);
CheckInterfacedef(sched_rr_get_interval,sched_rr_get_interval_db);
extern int sched_setparam_db(pid_t, const struct sched_param *);
CheckInterfacedef(sched_setparam,sched_setparam_db);
extern int sched_setscheduler_db(pid_t, int, const struct sched_param *);
CheckInterfacedef(sched_setscheduler,sched_setscheduler_db);
extern int sched_yield_db(void);
CheckInterfacedef(sched_yield,sched_yield_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sched.h\n\n",pcnt,cnt);
return cnt;
#endif

}
