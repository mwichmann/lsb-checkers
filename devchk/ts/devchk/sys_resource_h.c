/*
 * Test of sys/resource.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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

#if _LSB_DEFAULT_ARCH
#ifdef RUSAGE_SELF
	CompareConstant(RUSAGE_SELF,0,3529,architecture)
#else
Msg( "Error: Constant not found: RUSAGE_SELF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RUSAGE_CHILDREN
	CompareConstant(RUSAGE_CHILDREN,(-1),3530,architecture)
#else
Msg( "Error: Constant not found: RUSAGE_CHILDREN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RUSAGE_BOTH
	CompareConstant(RUSAGE_BOTH,(-2),3531,architecture)
#else
Msg( "Error: Constant not found: RUSAGE_BOTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIO_PROCESS
	CompareConstant(PRIO_PROCESS,0,3534,architecture)
#else
Msg( "Error: Constant not found: PRIO_PROCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIO_PGRP
	CompareConstant(PRIO_PGRP,1,3535,architecture)
#else
Msg( "Error: Constant not found: PRIO_PGRP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIO_USER
	CompareConstant(PRIO_USER,2,3536,architecture)
#else
Msg( "Error: Constant not found: PRIO_USER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIMIT_CPU
	CompareConstant(RLIMIT_CPU,0,3537,architecture)
#else
Msg( "Error: Constant not found: RLIMIT_CPU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIMIT_FSIZE
	CompareConstant(RLIMIT_FSIZE,1,3538,architecture)
#else
Msg( "Error: Constant not found: RLIMIT_FSIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIMIT_DATA
	CompareConstant(RLIMIT_DATA,2,3539,architecture)
#else
Msg( "Error: Constant not found: RLIMIT_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIMIT_STACK
	CompareConstant(RLIMIT_STACK,3,3540,architecture)
#else
Msg( "Error: Constant not found: RLIMIT_STACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIMIT_CORE
	CompareConstant(RLIMIT_CORE,4,3541,architecture)
#else
Msg( "Error: Constant not found: RLIMIT_CORE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIMIT_NOFILE
	CompareConstant(RLIMIT_NOFILE,7,3544,architecture)
#else
Msg( "Error: Constant not found: RLIMIT_NOFILE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIMIT_AS
	CompareConstant(RLIMIT_AS,9,3546,architecture)
#else
Msg( "Error: Constant not found: RLIMIT_AS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIM_INFINITY
	CompareConstant(RLIM_INFINITY,(~0UL),3549,architecture)
#else
Msg( "Error: Constant not found: RLIM_INFINITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIM_SAVED_CUR
	CompareConstant(RLIM_SAVED_CUR,-1,4865,architecture)
#else
Msg( "Error: Constant not found: RLIM_SAVED_CUR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIM_SAVED_MAX
	CompareConstant(RLIM_SAVED_MAX,-1,4866,architecture)
#else
Msg( "Error: Constant not found: RLIM_SAVED_MAX\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(rlim_t,4, 10210, 2)
#elif __ia64__
CheckTypeSize(rlim_t,8, 10210, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(rlim_t,4, 10210, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(rlim_t,4, 10210, 10)
#elif __powerpc64__
CheckTypeSize(rlim_t,8, 10210, 9)
#elif __s390x__
CheckTypeSize(rlim_t,8, 10210, 12)
#elif __x86_64__
CheckTypeSize(rlim_t,8, 10210, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10210,0);
Msg("Find size of rlim_t (10210)\n");
#endif

#if __i386__
CheckTypeSize(rlim64_t,8, 10273, 2)
#elif __ia64__
CheckTypeSize(rlim64_t,8, 10273, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(rlim64_t,8, 10273, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(rlim64_t,8, 10273, 10)
#elif __powerpc64__
CheckTypeSize(rlim64_t,8, 10273, 9)
#elif __s390x__
CheckTypeSize(rlim64_t,8, 10273, 12)
#elif __x86_64__
CheckTypeSize(rlim64_t,8, 10273, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10273,0);
Msg("Find size of rlim64_t (10273)\n");
#endif

#if __i386__
CheckTypeSize(struct rlimit,8, 9120, 2)
CheckMemberSize(struct rlimit,rlim_cur,4,2,34262)
CheckOffset(struct rlimit,rlim_cur,0,2,34262)
CheckMemberSize(struct rlimit,rlim_max,4,2,34263)
CheckOffset(struct rlimit,rlim_max,4,2,34263)
#elif __ia64__
CheckTypeSize(struct rlimit,16, 9120, 3)
CheckMemberSize(struct rlimit,rlim_cur,8,3,34262)
CheckOffset(struct rlimit,rlim_cur,0,3,34262)
CheckMemberSize(struct rlimit,rlim_max,8,3,34263)
CheckOffset(struct rlimit,rlim_max,8,3,34263)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct rlimit,8, 9120, 6)
CheckMemberSize(struct rlimit,rlim_max,4,6,34263)
CheckOffset(struct rlimit,rlim_max,4,6,34263)
#elif __s390__ && !__s390x__
CheckTypeSize(struct rlimit,8, 9120, 10)
CheckMemberSize(struct rlimit,rlim_max,4,10,34263)
CheckOffset(struct rlimit,rlim_max,4,10,34263)
#elif __powerpc64__
CheckTypeSize(struct rlimit,16, 9120, 9)
CheckMemberSize(struct rlimit,rlim_max,8,9,34263)
CheckOffset(struct rlimit,rlim_max,8,9,34263)
#elif __s390x__
CheckTypeSize(struct rlimit,16, 9120, 12)
CheckMemberSize(struct rlimit,rlim_max,8,12,34263)
CheckOffset(struct rlimit,rlim_max,8,12,34263)
#elif __x86_64__
CheckTypeSize(struct rlimit,16, 9120, 11)
CheckMemberSize(struct rlimit,rlim_max,8,11,34263)
CheckOffset(struct rlimit,rlim_max,8,11,34263)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9120,0);
Msg("Find size of rlimit (9120)\n");
#endif

#if __i386__
CheckTypeSize(struct rlimit64,16, 9122, 2)
CheckMemberSize(struct rlimit64,rlim_cur,8,2,34266)
CheckOffset(struct rlimit64,rlim_cur,0,2,34266)
CheckMemberSize(struct rlimit64,rlim_max,8,2,34267)
CheckOffset(struct rlimit64,rlim_max,8,2,34267)
#elif __ia64__
CheckTypeSize(struct rlimit64,16, 9122, 3)
CheckMemberSize(struct rlimit64,rlim_max,8,3,34267)
CheckOffset(struct rlimit64,rlim_max,8,3,34267)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct rlimit64,16, 9122, 6)
CheckMemberSize(struct rlimit64,rlim_max,8,6,34267)
CheckOffset(struct rlimit64,rlim_max,8,6,34267)
#elif __s390__ && !__s390x__
CheckTypeSize(struct rlimit64,16, 9122, 10)
CheckMemberSize(struct rlimit64,rlim_max,8,10,34267)
CheckOffset(struct rlimit64,rlim_max,8,10,34267)
#elif __powerpc64__
CheckTypeSize(struct rlimit64,16, 9122, 9)
CheckMemberSize(struct rlimit64,rlim_max,8,9,34267)
CheckOffset(struct rlimit64,rlim_max,8,9,34267)
#elif __s390x__
CheckTypeSize(struct rlimit64,16, 9122, 12)
CheckMemberSize(struct rlimit64,rlim_max,8,12,34267)
CheckOffset(struct rlimit64,rlim_max,8,12,34267)
#elif __x86_64__
CheckTypeSize(struct rlimit64,16, 9122, 11)
CheckMemberSize(struct rlimit64,rlim_max,8,11,34267)
CheckOffset(struct rlimit64,rlim_max,8,11,34267)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9122,0);
Msg("Find size of rlimit64 (9122)\n");
#endif

#if __i386__
CheckTypeSize(struct rusage,72, 9125, 2)
CheckMemberSize(struct rusage,ru_utime,8,2,34246)
CheckOffset(struct rusage,ru_utime,0,2,34246)
CheckMemberSize(struct rusage,ru_stime,8,2,34247)
CheckOffset(struct rusage,ru_stime,8,2,34247)
CheckMemberSize(struct rusage,ru_maxrss,4,2,34248)
CheckOffset(struct rusage,ru_maxrss,16,2,34248)
CheckMemberSize(struct rusage,ru_ixrss,4,2,34249)
CheckOffset(struct rusage,ru_ixrss,20,2,34249)
CheckMemberSize(struct rusage,ru_idrss,4,2,34250)
CheckOffset(struct rusage,ru_idrss,24,2,34250)
CheckMemberSize(struct rusage,ru_isrss,4,2,34251)
CheckOffset(struct rusage,ru_isrss,28,2,34251)
CheckMemberSize(struct rusage,ru_minflt,4,2,34252)
CheckOffset(struct rusage,ru_minflt,32,2,34252)
CheckMemberSize(struct rusage,ru_majflt,4,2,34253)
CheckOffset(struct rusage,ru_majflt,36,2,34253)
CheckMemberSize(struct rusage,ru_nswap,4,2,34254)
CheckOffset(struct rusage,ru_nswap,40,2,34254)
CheckMemberSize(struct rusage,ru_inblock,4,2,34255)
CheckOffset(struct rusage,ru_inblock,44,2,34255)
CheckMemberSize(struct rusage,ru_oublock,4,2,34256)
CheckOffset(struct rusage,ru_oublock,48,2,34256)
CheckMemberSize(struct rusage,ru_msgsnd,4,2,34257)
CheckOffset(struct rusage,ru_msgsnd,52,2,34257)
CheckMemberSize(struct rusage,ru_msgrcv,4,2,34258)
CheckOffset(struct rusage,ru_msgrcv,56,2,34258)
CheckMemberSize(struct rusage,ru_nsignals,4,2,34259)
CheckOffset(struct rusage,ru_nsignals,60,2,34259)
CheckMemberSize(struct rusage,ru_nvcsw,4,2,34260)
CheckOffset(struct rusage,ru_nvcsw,64,2,34260)
CheckMemberSize(struct rusage,ru_nivcsw,4,2,34261)
CheckOffset(struct rusage,ru_nivcsw,68,2,34261)
#elif __ia64__
CheckTypeSize(struct rusage,144, 9125, 3)
CheckMemberSize(struct rusage,ru_utime,16,3,34246)
CheckOffset(struct rusage,ru_utime,0,3,34246)
CheckMemberSize(struct rusage,ru_stime,16,3,34247)
CheckOffset(struct rusage,ru_stime,16,3,34247)
CheckMemberSize(struct rusage,ru_maxrss,8,3,34248)
CheckOffset(struct rusage,ru_maxrss,32,3,34248)
CheckMemberSize(struct rusage,ru_ixrss,8,3,34249)
CheckOffset(struct rusage,ru_ixrss,40,3,34249)
CheckMemberSize(struct rusage,ru_idrss,8,3,34250)
CheckOffset(struct rusage,ru_idrss,48,3,34250)
CheckMemberSize(struct rusage,ru_isrss,8,3,34251)
CheckOffset(struct rusage,ru_isrss,56,3,34251)
CheckMemberSize(struct rusage,ru_minflt,8,3,34252)
CheckOffset(struct rusage,ru_minflt,64,3,34252)
CheckMemberSize(struct rusage,ru_majflt,8,3,34253)
CheckOffset(struct rusage,ru_majflt,72,3,34253)
CheckMemberSize(struct rusage,ru_nswap,8,3,34254)
CheckOffset(struct rusage,ru_nswap,80,3,34254)
CheckMemberSize(struct rusage,ru_inblock,8,3,34255)
CheckOffset(struct rusage,ru_inblock,88,3,34255)
CheckMemberSize(struct rusage,ru_oublock,8,3,34256)
CheckOffset(struct rusage,ru_oublock,96,3,34256)
CheckMemberSize(struct rusage,ru_msgsnd,8,3,34257)
CheckOffset(struct rusage,ru_msgsnd,104,3,34257)
CheckMemberSize(struct rusage,ru_msgrcv,8,3,34258)
CheckOffset(struct rusage,ru_msgrcv,112,3,34258)
CheckMemberSize(struct rusage,ru_nsignals,8,3,34259)
CheckOffset(struct rusage,ru_nsignals,120,3,34259)
CheckMemberSize(struct rusage,ru_nvcsw,8,3,34260)
CheckOffset(struct rusage,ru_nvcsw,128,3,34260)
CheckMemberSize(struct rusage,ru_nivcsw,8,3,34261)
CheckOffset(struct rusage,ru_nivcsw,136,3,34261)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct rusage,72, 9125, 6)
CheckMemberSize(struct rusage,ru_stime,8,6,34247)
CheckOffset(struct rusage,ru_stime,8,6,34247)
CheckMemberSize(struct rusage,ru_maxrss,4,6,34248)
CheckOffset(struct rusage,ru_maxrss,16,6,34248)
CheckMemberSize(struct rusage,ru_ixrss,4,6,34249)
CheckOffset(struct rusage,ru_ixrss,20,6,34249)
CheckMemberSize(struct rusage,ru_idrss,4,6,34250)
CheckOffset(struct rusage,ru_idrss,24,6,34250)
CheckMemberSize(struct rusage,ru_isrss,4,6,34251)
CheckOffset(struct rusage,ru_isrss,28,6,34251)
CheckMemberSize(struct rusage,ru_minflt,4,6,34252)
CheckOffset(struct rusage,ru_minflt,32,6,34252)
CheckMemberSize(struct rusage,ru_majflt,4,6,34253)
CheckOffset(struct rusage,ru_majflt,36,6,34253)
CheckMemberSize(struct rusage,ru_nswap,4,6,34254)
CheckOffset(struct rusage,ru_nswap,40,6,34254)
CheckMemberSize(struct rusage,ru_inblock,4,6,34255)
CheckOffset(struct rusage,ru_inblock,44,6,34255)
CheckMemberSize(struct rusage,ru_oublock,4,6,34256)
CheckOffset(struct rusage,ru_oublock,48,6,34256)
CheckMemberSize(struct rusage,ru_msgsnd,4,6,34257)
CheckOffset(struct rusage,ru_msgsnd,52,6,34257)
CheckMemberSize(struct rusage,ru_msgrcv,4,6,34258)
CheckOffset(struct rusage,ru_msgrcv,56,6,34258)
CheckMemberSize(struct rusage,ru_nsignals,4,6,34259)
CheckOffset(struct rusage,ru_nsignals,60,6,34259)
CheckMemberSize(struct rusage,ru_nvcsw,4,6,34260)
CheckOffset(struct rusage,ru_nvcsw,64,6,34260)
CheckMemberSize(struct rusage,ru_nivcsw,4,6,34261)
CheckOffset(struct rusage,ru_nivcsw,68,6,34261)
#elif __s390__ && !__s390x__
CheckTypeSize(struct rusage,72, 9125, 10)
CheckMemberSize(struct rusage,ru_stime,8,10,34247)
CheckOffset(struct rusage,ru_stime,8,10,34247)
CheckMemberSize(struct rusage,ru_maxrss,4,10,34248)
CheckOffset(struct rusage,ru_maxrss,16,10,34248)
CheckMemberSize(struct rusage,ru_ixrss,4,10,34249)
CheckOffset(struct rusage,ru_ixrss,20,10,34249)
CheckMemberSize(struct rusage,ru_idrss,4,10,34250)
CheckOffset(struct rusage,ru_idrss,24,10,34250)
CheckMemberSize(struct rusage,ru_isrss,4,10,34251)
CheckOffset(struct rusage,ru_isrss,28,10,34251)
CheckMemberSize(struct rusage,ru_minflt,4,10,34252)
CheckOffset(struct rusage,ru_minflt,32,10,34252)
CheckMemberSize(struct rusage,ru_majflt,4,10,34253)
CheckOffset(struct rusage,ru_majflt,36,10,34253)
CheckMemberSize(struct rusage,ru_nswap,4,10,34254)
CheckOffset(struct rusage,ru_nswap,40,10,34254)
CheckMemberSize(struct rusage,ru_inblock,4,10,34255)
CheckOffset(struct rusage,ru_inblock,44,10,34255)
CheckMemberSize(struct rusage,ru_oublock,4,10,34256)
CheckOffset(struct rusage,ru_oublock,48,10,34256)
CheckMemberSize(struct rusage,ru_msgsnd,4,10,34257)
CheckOffset(struct rusage,ru_msgsnd,52,10,34257)
CheckMemberSize(struct rusage,ru_msgrcv,4,10,34258)
CheckOffset(struct rusage,ru_msgrcv,56,10,34258)
CheckMemberSize(struct rusage,ru_nsignals,4,10,34259)
CheckOffset(struct rusage,ru_nsignals,60,10,34259)
CheckMemberSize(struct rusage,ru_nvcsw,4,10,34260)
CheckOffset(struct rusage,ru_nvcsw,64,10,34260)
CheckMemberSize(struct rusage,ru_nivcsw,4,10,34261)
CheckOffset(struct rusage,ru_nivcsw,68,10,34261)
#elif __powerpc64__
CheckTypeSize(struct rusage,144, 9125, 9)
CheckMemberSize(struct rusage,ru_stime,16,9,34247)
CheckOffset(struct rusage,ru_stime,16,9,34247)
CheckMemberSize(struct rusage,ru_maxrss,8,9,34248)
CheckOffset(struct rusage,ru_maxrss,32,9,34248)
CheckMemberSize(struct rusage,ru_ixrss,8,9,34249)
CheckOffset(struct rusage,ru_ixrss,40,9,34249)
CheckMemberSize(struct rusage,ru_idrss,8,9,34250)
CheckOffset(struct rusage,ru_idrss,48,9,34250)
CheckMemberSize(struct rusage,ru_isrss,8,9,34251)
CheckOffset(struct rusage,ru_isrss,56,9,34251)
CheckMemberSize(struct rusage,ru_minflt,8,9,34252)
CheckOffset(struct rusage,ru_minflt,64,9,34252)
CheckMemberSize(struct rusage,ru_majflt,8,9,34253)
CheckOffset(struct rusage,ru_majflt,72,9,34253)
CheckMemberSize(struct rusage,ru_nswap,8,9,34254)
CheckOffset(struct rusage,ru_nswap,80,9,34254)
CheckMemberSize(struct rusage,ru_inblock,8,9,34255)
CheckOffset(struct rusage,ru_inblock,88,9,34255)
CheckMemberSize(struct rusage,ru_oublock,8,9,34256)
CheckOffset(struct rusage,ru_oublock,96,9,34256)
CheckMemberSize(struct rusage,ru_msgsnd,8,9,34257)
CheckOffset(struct rusage,ru_msgsnd,104,9,34257)
CheckMemberSize(struct rusage,ru_msgrcv,8,9,34258)
CheckOffset(struct rusage,ru_msgrcv,112,9,34258)
CheckMemberSize(struct rusage,ru_nsignals,8,9,34259)
CheckOffset(struct rusage,ru_nsignals,120,9,34259)
CheckMemberSize(struct rusage,ru_nvcsw,8,9,34260)
CheckOffset(struct rusage,ru_nvcsw,128,9,34260)
CheckMemberSize(struct rusage,ru_nivcsw,8,9,34261)
CheckOffset(struct rusage,ru_nivcsw,136,9,34261)
#elif __s390x__
CheckTypeSize(struct rusage,144, 9125, 12)
CheckMemberSize(struct rusage,ru_stime,16,12,34247)
CheckOffset(struct rusage,ru_stime,16,12,34247)
CheckMemberSize(struct rusage,ru_maxrss,8,12,34248)
CheckOffset(struct rusage,ru_maxrss,32,12,34248)
CheckMemberSize(struct rusage,ru_ixrss,8,12,34249)
CheckOffset(struct rusage,ru_ixrss,40,12,34249)
CheckMemberSize(struct rusage,ru_idrss,8,12,34250)
CheckOffset(struct rusage,ru_idrss,48,12,34250)
CheckMemberSize(struct rusage,ru_isrss,8,12,34251)
CheckOffset(struct rusage,ru_isrss,56,12,34251)
CheckMemberSize(struct rusage,ru_minflt,8,12,34252)
CheckOffset(struct rusage,ru_minflt,64,12,34252)
CheckMemberSize(struct rusage,ru_majflt,8,12,34253)
CheckOffset(struct rusage,ru_majflt,72,12,34253)
CheckMemberSize(struct rusage,ru_nswap,8,12,34254)
CheckOffset(struct rusage,ru_nswap,80,12,34254)
CheckMemberSize(struct rusage,ru_inblock,8,12,34255)
CheckOffset(struct rusage,ru_inblock,88,12,34255)
CheckMemberSize(struct rusage,ru_oublock,8,12,34256)
CheckOffset(struct rusage,ru_oublock,96,12,34256)
CheckMemberSize(struct rusage,ru_msgsnd,8,12,34257)
CheckOffset(struct rusage,ru_msgsnd,104,12,34257)
CheckMemberSize(struct rusage,ru_msgrcv,8,12,34258)
CheckOffset(struct rusage,ru_msgrcv,112,12,34258)
CheckMemberSize(struct rusage,ru_nsignals,8,12,34259)
CheckOffset(struct rusage,ru_nsignals,120,12,34259)
CheckMemberSize(struct rusage,ru_nvcsw,8,12,34260)
CheckOffset(struct rusage,ru_nvcsw,128,12,34260)
CheckMemberSize(struct rusage,ru_nivcsw,8,12,34261)
CheckOffset(struct rusage,ru_nivcsw,136,12,34261)
#elif __x86_64__
CheckTypeSize(struct rusage,144, 9125, 11)
CheckMemberSize(struct rusage,ru_stime,16,11,34247)
CheckOffset(struct rusage,ru_stime,16,11,34247)
CheckMemberSize(struct rusage,ru_maxrss,8,11,34248)
CheckOffset(struct rusage,ru_maxrss,32,11,34248)
CheckMemberSize(struct rusage,ru_ixrss,8,11,34249)
CheckOffset(struct rusage,ru_ixrss,40,11,34249)
CheckMemberSize(struct rusage,ru_idrss,8,11,34250)
CheckOffset(struct rusage,ru_idrss,48,11,34250)
CheckMemberSize(struct rusage,ru_isrss,8,11,34251)
CheckOffset(struct rusage,ru_isrss,56,11,34251)
CheckMemberSize(struct rusage,ru_minflt,8,11,34252)
CheckOffset(struct rusage,ru_minflt,64,11,34252)
CheckMemberSize(struct rusage,ru_majflt,8,11,34253)
CheckOffset(struct rusage,ru_majflt,72,11,34253)
CheckMemberSize(struct rusage,ru_nswap,8,11,34254)
CheckOffset(struct rusage,ru_nswap,80,11,34254)
CheckMemberSize(struct rusage,ru_inblock,8,11,34255)
CheckOffset(struct rusage,ru_inblock,88,11,34255)
CheckMemberSize(struct rusage,ru_oublock,8,11,34256)
CheckOffset(struct rusage,ru_oublock,96,11,34256)
CheckMemberSize(struct rusage,ru_msgsnd,8,11,34257)
CheckOffset(struct rusage,ru_msgsnd,104,11,34257)
CheckMemberSize(struct rusage,ru_msgrcv,8,11,34258)
CheckOffset(struct rusage,ru_msgrcv,112,11,34258)
CheckMemberSize(struct rusage,ru_nsignals,8,11,34259)
CheckOffset(struct rusage,ru_nsignals,120,11,34259)
CheckMemberSize(struct rusage,ru_nvcsw,8,11,34260)
CheckOffset(struct rusage,ru_nvcsw,128,11,34260)
CheckMemberSize(struct rusage,ru_nivcsw,8,11,34261)
CheckOffset(struct rusage,ru_nivcsw,136,11,34261)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9125,0);
Msg("Find size of rusage (9125)\n");
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
