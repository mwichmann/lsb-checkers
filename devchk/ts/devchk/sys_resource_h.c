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

#ifdef _LSB_DEFAULT_ARCH
#ifdef RLIM_SAVED_CUR
	CompareConstant(RLIM_SAVED_CUR,-1,4865,architecture)
#else
Msg( "Error: Constant not found: RLIM_SAVED_CUR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef RLIMIT_CPU
	CompareConstant(RLIMIT_CPU,0,3537,architecture)
#else
Msg( "Error: Constant not found: RLIMIT_CPU\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef RLIMIT_CORE
	CompareConstant(RLIMIT_CORE,4,3541,architecture)
#else
Msg( "Error: Constant not found: RLIMIT_CORE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PRIO_USER
	CompareConstant(PRIO_USER,2,3536,architecture)
#else
Msg( "Error: Constant not found: PRIO_USER\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef RLIM_SAVED_MAX
	CompareConstant(RLIM_SAVED_MAX,-1,4866,architecture)
#else
Msg( "Error: Constant not found: RLIM_SAVED_MAX\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef RLIMIT_AS
	CompareConstant(RLIMIT_AS,9,3546,architecture)
#else
Msg( "Error: Constant not found: RLIMIT_AS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef RLIMIT_STACK
	CompareConstant(RLIMIT_STACK,3,3540,architecture)
#else
Msg( "Error: Constant not found: RLIMIT_STACK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef RLIMIT_FSIZE
	CompareConstant(RLIMIT_FSIZE,1,3538,architecture)
#else
Msg( "Error: Constant not found: RLIMIT_FSIZE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef RLIMIT_NOFILE
	CompareConstant(RLIMIT_NOFILE,7,3544,architecture)
#else
Msg( "Error: Constant not found: RLIMIT_NOFILE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PRIO_PROCESS
	CompareConstant(PRIO_PROCESS,0,3534,architecture)
#else
Msg( "Error: Constant not found: PRIO_PROCESS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef RLIMIT_DATA
	CompareConstant(RLIMIT_DATA,2,3539,architecture)
#else
Msg( "Error: Constant not found: RLIMIT_DATA\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef PRIO_PGRP
	CompareConstant(PRIO_PGRP,1,3535,architecture)
#else
Msg( "Error: Constant not found: PRIO_PGRP\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef RUSAGE_SELF
	CompareConstant(RUSAGE_SELF,0,3529,architecture)
#else
Msg( "Error: Constant not found: RUSAGE_SELF\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef RLIM_INFINITY
	CompareConstant(RLIM_INFINITY,(~0UL),3549,architecture)
#else
Msg( "Error: Constant not found: RLIM_INFINITY\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(rlim_t,4, 10210, 2)
#elif __ia64__
CheckTypeSize(rlim_t,8, 10210, 3)
#elif __powerpc__
CheckTypeSize(rlim_t,4, 10210, 6)
#elif __s390__
CheckTypeSize(rlim_t,4, 10210, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10210,0);
Msg("Find size of rlim_t (10210)\n");
#endif

#ifdef __i386__
CheckTypeSize(rlim64_t,8, 10273, 2)
#elif __ia64__
CheckTypeSize(rlim64_t,8, 10273, 3)
#elif __powerpc__
CheckTypeSize(rlim64_t,8, 10273, 6)
#elif __s390__
CheckTypeSize(rlim64_t,8, 10273, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10273,0);
Msg("Find size of rlim64_t (10273)\n");
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
Msg("Missing member data for rlimit on PPC32\n");
CheckOffset(struct rlimit,rlim_cur,0,6,34262)
CheckOffset(struct rlimit,rlim_max,0,6,34263)
#elif __s390__
CheckTypeSize(struct rlimit,8, 9120, 10)
Msg("Missing member data for rlimit on S390\n");
CheckOffset(struct rlimit,rlim_cur,0,10,34262)
CheckOffset(struct rlimit,rlim_max,0,10,34263)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9120,0);
Msg("Find size of rlimit (9120)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct rlimit64,16, 9122, 2)
CheckOffset(struct rlimit64,rlim_cur,0,2,34266)
CheckOffset(struct rlimit64,rlim_max,8,2,34267)
#elif __ia64__
CheckTypeSize(struct rlimit64,16, 9122, 3)
Msg("Missing member data for rlimit64 on IA64\n");
CheckOffset(struct rlimit64,rlim_cur,0,3,34266)
CheckOffset(struct rlimit64,rlim_max,0,3,34267)
#elif __powerpc__
CheckTypeSize(struct rlimit64,16, 9122, 6)
Msg("Missing member data for rlimit64 on PPC32\n");
CheckOffset(struct rlimit64,rlim_cur,0,6,34266)
CheckOffset(struct rlimit64,rlim_max,0,6,34267)
#elif __s390__
CheckTypeSize(struct rlimit64,16, 9122, 10)
Msg("Missing member data for rlimit64 on S390\n");
CheckOffset(struct rlimit64,rlim_cur,0,10,34266)
CheckOffset(struct rlimit64,rlim_max,0,10,34267)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9122,0);
Msg("Find size of rlimit64 (9122)\n");
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
CheckOffset(struct rusage,ru_stime,16,3,34247)
CheckOffset(struct rusage,ru_maxrss,32,3,34248)
CheckOffset(struct rusage,ru_ixrss,40,3,34249)
CheckOffset(struct rusage,ru_idrss,48,3,34250)
CheckOffset(struct rusage,ru_isrss,56,3,34251)
CheckOffset(struct rusage,ru_minflt,64,3,34252)
CheckOffset(struct rusage,ru_majflt,72,3,34253)
CheckOffset(struct rusage,ru_nswap,80,3,34254)
CheckOffset(struct rusage,ru_inblock,88,3,34255)
CheckOffset(struct rusage,ru_oublock,96,3,34256)
CheckOffset(struct rusage,ru_msgsnd,104,3,34257)
CheckOffset(struct rusage,ru_msgrcv,112,3,34258)
CheckOffset(struct rusage,ru_nsignals,120,3,34259)
CheckOffset(struct rusage,ru_nvcsw,128,3,34260)
CheckOffset(struct rusage,ru_nivcsw,136,3,34261)
#elif __powerpc__
CheckTypeSize(struct rusage,72, 9125, 6)
Msg("Missing member data for rusage on PPC32\n");
CheckOffset(struct rusage,ru_utime,0,6,34246)
CheckOffset(struct rusage,ru_stime,0,6,34247)
CheckOffset(struct rusage,ru_maxrss,0,6,34248)
CheckOffset(struct rusage,ru_ixrss,0,6,34249)
CheckOffset(struct rusage,ru_idrss,0,6,34250)
CheckOffset(struct rusage,ru_isrss,0,6,34251)
CheckOffset(struct rusage,ru_minflt,0,6,34252)
CheckOffset(struct rusage,ru_majflt,0,6,34253)
CheckOffset(struct rusage,ru_nswap,0,6,34254)
CheckOffset(struct rusage,ru_inblock,0,6,34255)
CheckOffset(struct rusage,ru_oublock,0,6,34256)
CheckOffset(struct rusage,ru_msgsnd,0,6,34257)
CheckOffset(struct rusage,ru_msgrcv,0,6,34258)
CheckOffset(struct rusage,ru_nsignals,0,6,34259)
CheckOffset(struct rusage,ru_nvcsw,0,6,34260)
CheckOffset(struct rusage,ru_nivcsw,0,6,34261)
#elif __s390__
CheckTypeSize(struct rusage,72, 9125, 10)
Msg("Missing member data for rusage on S390\n");
CheckOffset(struct rusage,ru_utime,0,10,34246)
CheckOffset(struct rusage,ru_stime,0,10,34247)
CheckOffset(struct rusage,ru_maxrss,0,10,34248)
CheckOffset(struct rusage,ru_ixrss,0,10,34249)
CheckOffset(struct rusage,ru_idrss,0,10,34250)
CheckOffset(struct rusage,ru_isrss,0,10,34251)
CheckOffset(struct rusage,ru_minflt,0,10,34252)
CheckOffset(struct rusage,ru_majflt,0,10,34253)
CheckOffset(struct rusage,ru_nswap,0,10,34254)
CheckOffset(struct rusage,ru_inblock,0,10,34255)
CheckOffset(struct rusage,ru_oublock,0,10,34256)
CheckOffset(struct rusage,ru_msgsnd,0,10,34257)
CheckOffset(struct rusage,ru_msgrcv,0,10,34258)
CheckOffset(struct rusage,ru_nsignals,0,10,34259)
CheckOffset(struct rusage,ru_nvcsw,0,10,34260)
CheckOffset(struct rusage,ru_nivcsw,0,10,34261)
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
