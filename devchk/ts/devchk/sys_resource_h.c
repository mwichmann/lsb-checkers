/*
 * Test of sys/resource.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/resource.h"



#ifdef TET_TEST
void sys_resource_h()
{
#else
int sys_resource_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/resource.h\n");
#endif

#ifdef RUSAGE_SELF
	CompareConstant(RUSAGE_SELF,0)
#else
Msg( "Error: Constant not found: RUSAGE_SELF\n");
cnt++;
#endif

#ifdef RLIMIT_CPU
	CompareConstant(RLIMIT_CPU,0)
#else
Msg( "Error: Constant not found: RLIMIT_CPU\n");
cnt++;
#endif

#ifdef RLIMIT_FSIZE
	CompareConstant(RLIMIT_FSIZE,1)
#else
Msg( "Error: Constant not found: RLIMIT_FSIZE\n");
cnt++;
#endif

#ifdef RLIMIT_DATA
	CompareConstant(RLIMIT_DATA,2)
#else
Msg( "Error: Constant not found: RLIMIT_DATA\n");
cnt++;
#endif

#ifdef RLIMIT_STACK
	CompareConstant(RLIMIT_STACK,3)
#else
Msg( "Error: Constant not found: RLIMIT_STACK\n");
cnt++;
#endif

#ifdef RLIMIT_CORE
	CompareConstant(RLIMIT_CORE,4)
#else
Msg( "Error: Constant not found: RLIMIT_CORE\n");
cnt++;
#endif

#ifdef RLIMIT_NOFILE
	CompareConstant(RLIMIT_NOFILE,7)
#else
Msg( "Error: Constant not found: RLIMIT_NOFILE\n");
cnt++;
#endif

#ifdef RLIMIT_AS
	CompareConstant(RLIMIT_AS,9)
#else
Msg( "Error: Constant not found: RLIMIT_AS\n");
cnt++;
#endif

#ifdef RLIM_INFINITY
	CompareConstant(RLIM_INFINITY,(~0UL))
#else
Msg( "Error: Constant not found: RLIM_INFINITY\n");
cnt++;
#endif

#ifdef RLIM_SAVED_CUR
	CompareConstant(RLIM_SAVED_CUR,-1)
#else
Msg( "Error: Constant not found: RLIM_SAVED_CUR\n");
cnt++;
#endif

#ifdef RLIM_SAVED_MAX
	CompareConstant(RLIM_SAVED_MAX,-1)
#else
Msg( "Error: Constant not found: RLIM_SAVED_MAX\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(rlim_t,4, 10210, 2)
#elif __ia64__
CheckTypeSize(rlim_t,8, 10210, 3)
#elif __powerpc__
CheckTypeSize(rlim_t,4, 10210, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10210,0);
#endif

#ifdef __i386__
CheckTypeSize(rlim64_t,8, 10273, 2)
#elif __ia64__
CheckTypeSize(rlim64_t,8, 10273, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10273,0);
#endif

#ifdef __i386__
CheckTypeSize(struct rlimit,8, 9120, 2)
CheckOffset(struct rlimit,rlim_cur,0,2,34262)
CheckOffset(struct rlimit,rlim_max,4,2,34263)
#elif __ia64__
CheckTypeSize(struct rlimit,16, 9120, 3)
CheckOffset(struct rlimit,rlim_cur,0,3,34262)
CheckOffset(struct rlimit,rlim_max,8,3,34263)
#elif __powerpc__
CheckTypeSize(struct rlimit,8, 9120, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9120,0);
#endif

#ifdef __i386__
CheckTypeSize(struct rlimit64,16, 9122, 2)
CheckOffset(struct rlimit64,rlim_cur,0,2,34266)
CheckOffset(struct rlimit64,rlim_max,8,2,34267)
#elif __ia64__
CheckTypeSize(struct rlimit64,16, 9122, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9122,0);
#endif

#ifdef __i386__
CheckTypeSize(struct rusage,72, 9125, 2)
CheckOffset(struct rusage,ru_utime,0,2,34246)
CheckOffset(struct rusage,ru_stime,8,2,34247)
CheckOffset(struct rusage,ru_maxrss,16,2,34248)
CheckOffset(struct rusage,ru_ixrss,20,2,34249)
CheckOffset(struct rusage,ru_idrss,24,2,34250)
CheckOffset(struct rusage,ru_isrss,28,2,34251)
CheckOffset(struct rusage,ru_minflt,32,2,34252)
CheckOffset(struct rusage,ru_majflt,36,2,34253)
CheckOffset(struct rusage,ru_nswap,40,2,34254)
CheckOffset(struct rusage,ru_inblock,44,2,34255)
CheckOffset(struct rusage,ru_oublock,48,2,34256)
CheckOffset(struct rusage,ru_msgsnd,52,2,34257)
CheckOffset(struct rusage,ru_msgrcv,56,2,34258)
CheckOffset(struct rusage,ru_nsignals,60,2,34259)
CheckOffset(struct rusage,ru_nvcsw,64,2,34260)
CheckOffset(struct rusage,ru_nivcsw,68,2,34261)
#elif __ia64__
CheckTypeSize(struct rusage,144, 9125, 3)
CheckOffset(struct rusage,ru_utime,0,3,34246)
CheckOffset(struct rusage,ru_stime,0,3,34247)
CheckOffset(struct rusage,ru_maxrss,0,3,34248)
CheckOffset(struct rusage,ru_ixrss,0,3,34249)
CheckOffset(struct rusage,ru_idrss,0,3,34250)
CheckOffset(struct rusage,ru_isrss,0,3,34251)
CheckOffset(struct rusage,ru_minflt,0,3,34252)
CheckOffset(struct rusage,ru_majflt,0,3,34253)
CheckOffset(struct rusage,ru_nswap,0,3,34254)
CheckOffset(struct rusage,ru_inblock,0,3,34255)
CheckOffset(struct rusage,ru_oublock,0,3,34256)
CheckOffset(struct rusage,ru_msgsnd,0,3,34257)
CheckOffset(struct rusage,ru_msgrcv,0,3,34258)
CheckOffset(struct rusage,ru_nsignals,0,3,34259)
CheckOffset(struct rusage,ru_nvcsw,0,3,34260)
CheckOffset(struct rusage,ru_nivcsw,0,3,34261)
#elif __powerpc__
CheckTypeSize(struct rusage,72, 9125, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9125,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/resource.h\n",cnt);
return cnt;
#endif

}
