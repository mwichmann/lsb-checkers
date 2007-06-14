/*
 * Test of sys/resource.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/resource.h\n");
#endif

printf("Checking data structures in sys/resource.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef RUSAGE_SELF
	CompareConstant(RUSAGE_SELF,0,3529,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: RUSAGE_SELF\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RUSAGE_CHILDREN
	CompareConstant(RUSAGE_CHILDREN,(-1),3530,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: RUSAGE_CHILDREN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIO_PROCESS
	CompareConstant(PRIO_PROCESS,PRIO_PROCESS,3534,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PRIO_PROCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIO_PGRP
	CompareConstant(PRIO_PGRP,PRIO_PGRP,3535,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PRIO_PGRP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PRIO_USER
	CompareConstant(PRIO_USER,PRIO_USER,3536,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: PRIO_USER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIMIT_CPU
	CompareConstant(RLIMIT_CPU,0,3537,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: RLIMIT_CPU\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIMIT_FSIZE
	CompareConstant(RLIMIT_FSIZE,1,3538,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: RLIMIT_FSIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIMIT_DATA
	CompareConstant(RLIMIT_DATA,2,3539,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: RLIMIT_DATA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIMIT_STACK
	CompareConstant(RLIMIT_STACK,3,3540,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: RLIMIT_STACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIMIT_CORE
	CompareConstant(RLIMIT_CORE,4,3541,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: RLIMIT_CORE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIMIT_NOFILE
	CompareConstant(RLIMIT_NOFILE,7,3544,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: RLIMIT_NOFILE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIMIT_AS
	CompareConstant(RLIMIT_AS,9,3546,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: RLIMIT_AS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIM_INFINITY
	CompareConstant(RLIM_INFINITY,(~0UL),3549,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: RLIM_INFINITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIM_SAVED_CUR
	CompareConstant(RLIM_SAVED_CUR,-1,4865,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: RLIM_SAVED_CUR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RLIM_SAVED_MAX
	CompareConstant(RLIM_SAVED_MAX,-1,4866,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: RLIM_SAVED_MAX\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(rlim_t,4, 10210, 2, 1.2, NULL, 9, NULL)
#elif __ia64__
CheckTypeSize(rlim_t,8, 10210, 3, 1.3, NULL, 9, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(rlim_t,4, 10210, 6, 1.2, NULL, 9, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(rlim_t,4, 10210, 10, 1.3, NULL, 9, NULL)
#elif __powerpc64__
CheckTypeSize(rlim_t,8, 10210, 9, 2.0, NULL, 9, NULL)
#elif __s390x__
CheckTypeSize(rlim_t,8, 10210, 12, 1.3, NULL, 9, NULL)
#elif __x86_64__
CheckTypeSize(rlim_t,8, 10210, 11, 2.0, NULL, 9, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9,NULL);\n",architecture,10210,0);
Msg("Find size of rlim_t (10210)\n");
#endif

#if __i386__
CheckTypeSize(rlim64_t,8, 10273, 2, 1.2, NULL, 11, NULL)
#elif __ia64__
CheckTypeSize(rlim64_t,8, 10273, 3, 1.3, NULL, 11, NULL)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(rlim64_t,8, 10273, 6, 1.2, NULL, 11, NULL)
#elif __s390__ && !__s390x__
CheckTypeSize(rlim64_t,8, 10273, 10, 1.3, NULL, 11, NULL)
#elif __powerpc64__
CheckTypeSize(rlim64_t,8, 10273, 9, 2.0, NULL, 11, NULL)
#elif __s390x__
CheckTypeSize(rlim64_t,8, 10273, 12, 1.3, NULL, 11, NULL)
#elif __x86_64__
CheckTypeSize(rlim64_t,8, 10273, 11, 2.0, NULL, 11, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,11,NULL);\n",architecture,10273,0);
Msg("Find size of rlim64_t (10273)\n");
#endif

#if 1
CheckTypeSize(__rlimit_resource_t,4, 10969, 1, 2.0, NULL, 6, NULL)
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,9120,0);
Msg("Find size of rlimit (9120)\n");
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,9122,0);
Msg("Find size of rlimit64 (9122)\n");
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0,NULL);\n",architecture,9125,0);
Msg("Find size of rusage (9125)\n");
#endif

#if 1
CheckEnum("PRIO_PROCESS",PRIO_PROCESS,0,40835);
CheckEnum("PRIO_PGRP",PRIO_PGRP,1,40836);
CheckEnum("PRIO_USER",PRIO_USER,2,40837);
#endif

#if 1
CheckTypeSize(__priority_which_t,4, 10994, 1, 2.0, NULL, 10965, NULL)
#endif

extern int getpriority_db(__priority_which_t, id_t);
CheckInterfacedef(getpriority,getpriority_db);
extern int getrlimit64_db(id_t, struct rlimit64 *);
CheckInterfacedef(getrlimit64,getrlimit64_db);
extern int setpriority_db(__priority_which_t, id_t, int);
CheckInterfacedef(setpriority,setpriority_db);
extern int setrlimit_db(__rlimit_resource_t, const struct rlimit *);
CheckInterfacedef(setrlimit,setrlimit_db);
extern int setrlimit64_db(__rlimit_resource_t, const struct rlimit64 *);
CheckInterfacedef(setrlimit64,setrlimit64_db);
extern int getrlimit_db(__rlimit_resource_t, struct rlimit *);
CheckInterfacedef(getrlimit,getrlimit_db);
extern int getrusage_db(int, struct rusage *);
CheckInterfacedef(getrusage,getrusage_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/resource.h\n\n",pcnt,cnt);
return cnt;
#endif

}
