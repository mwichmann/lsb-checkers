/*
 * Test of sched.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in sched.h\n");
#endif

printf("Checking data structures in sched.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef __CPU_SETSIZE
	CompareConstant(__CPU_SETSIZE,1024,15561,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __CPU_SETSIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __NCPUBITS
	CompareConstant(__NCPUBITS,(8 * sizeof (__cpu_mask)),15562,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: __NCPUBITS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for __CPUELT(cpu) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for __CPUMASK(cpu) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef CPU_SETSIZE
	CompareConstant(CPU_SETSIZE,__CPU_SETSIZE,15565,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CPU_SETSIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPU_ZERO(cpusetp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPU_ALLOC_SIZE(count) */
#endif

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

#if _LSB_DEFAULT_ARCH
/* No test for __CPU_ALLOC_SIZE(count) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for __CPU_ZERO_S(setsize, cpusetp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for __CPU_SET_S(cpu, setsize, cpusetp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for __CPU_CLR_S(cpu, setsize, cpusetp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for __CPU_ISSET_S(cpu, setsize, cpusetp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPU_SET(cpu, cpusetp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPU_CLR(cpu, cpusetp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPU_ISSET(cpu, cpusetp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for __CPU_OP_S(setsize, destset, srcset1, srcset2, op)  */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPU_AND(destset, srcset1, srcset2) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPU_OR(destset, srcset1, srcset2) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPU_XOR(destset, srcset1, srcset2) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPU_AND_S(setsize, destset, srcset1, srcset2) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPU_OR_S(setsize, destset, srcset1, srcset2) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPU_XOR_S(setsize, destset, srcset1, srcset2) */
#endif

#if 1
CheckTypeSize(struct sched_param,4, 9045, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct sched_param,sched_priority,4,1,33571)
CheckOffset(struct sched_param,sched_priority,0,1,33571)
#endif

#if defined __s390x__
CheckTypeSize(__cpu_mask,8, 32328, 12, 4.0, NULL, 9, NULL)
#elif defined __x86_64__
CheckTypeSize(__cpu_mask,8, 32328, 11, 4.0, NULL, 9, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(__cpu_mask,4, 32328, 10, 4.0, NULL, 9, NULL)
#elif defined __powerpc64__
CheckTypeSize(__cpu_mask,8, 32328, 9, 4.0, NULL, 9, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(__cpu_mask,4, 32328, 6, 4.0, NULL, 9, NULL)
#elif defined __ia64__
CheckTypeSize(__cpu_mask,8, 32328, 3, 4.0, NULL, 9, NULL)
#elif defined __i386__
CheckTypeSize(__cpu_mask,4, 32328, 2, 4.0, NULL, 9, NULL)
#else
Msg("Find size of __cpu_mask (32328)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,9,NULL);\n",architecture,32328,0);
#endif

#if 1
CheckTypeSize(cpu_set_t,128, 32331, 1, 4.0, NULL, 32330, NULL)
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
extern int sched_getaffinity_db(pid_t, size_t, cpu_set_t *);
CheckInterfacedef(sched_getaffinity,sched_getaffinity_db);
extern int sched_setaffinity_db(pid_t, size_t, const cpu_set_t *);
CheckInterfacedef(sched_setaffinity,sched_setaffinity_db);
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
