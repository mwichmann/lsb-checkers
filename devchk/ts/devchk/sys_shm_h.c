/*
 * Test of sys/shm.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/shm.h"



#ifdef TET_TEST
void sys_shm_h()
{
#else
int sys_shm_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/shm.h\n");
#endif

#if __powerpc64__
#ifdef SHMLBA
	CompareConstant(SHMLBA,(__getpagesize()),1681,architecture)
#else
Msg( "Error: Constant not found: SHMLBA\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef SHMLBA
	CompareConstant(SHMLBA,(__getpagesize()),1681,architecture)
#else
Msg( "Error: Constant not found: SHMLBA\n");
cnt++;
#endif

#elif __ia64__
#ifdef SHMLBA
	CompareConstant(SHMLBA,(1024*1024),1681,architecture)
#else
Msg( "Error: Constant not found: SHMLBA\n");
cnt++;
#endif

#elif __i386__
#ifdef SHMLBA
	CompareConstant(SHMLBA,(__getpagesize()),1681,architecture)
#else
Msg( "Error: Constant not found: SHMLBA\n");
cnt++;
#endif

#elif __s390x__
#ifdef SHMLBA
	CompareConstant(SHMLBA,4096,1681,architecture)
#else
Msg( "Error: Constant not found: SHMLBA\n");
cnt++;
#endif

#elif __x86_64__
#ifdef SHMLBA
	CompareConstant(SHMLBA,(__getpagesize()),1681,architecture)
#else
Msg( "Error: Constant not found: SHMLBA\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef SHMLBA
	CompareConstant(SHMLBA,(__getpagesize()),1681,architecture)
#else
Msg( "Error: Constant not found: SHMLBA\n");
cnt++;
#endif

#else
Msg( "No definition for SHMLBA (1681, int) in db\n");
#ifdef SHMLBA
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,1681,%d);\n", architecture, SHMLBA);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef SHM_R
	CompareConstant(SHM_R,0400,3467,architecture)
#else
Msg( "Error: Constant not found: SHM_R\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHM_W
	CompareConstant(SHM_W,0200,3468,architecture)
#else
Msg( "Error: Constant not found: SHM_W\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHM_RDONLY
	CompareConstant(SHM_RDONLY,010000,3469,architecture)
#else
Msg( "Error: Constant not found: SHM_RDONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHM_RND
	CompareConstant(SHM_RND,020000,3470,architecture)
#else
Msg( "Error: Constant not found: SHM_RND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHM_REMAP
	CompareConstant(SHM_REMAP,040000,3471,architecture)
#else
Msg( "Error: Constant not found: SHM_REMAP\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHM_LOCK
	CompareConstant(SHM_LOCK,11,3472,architecture)
#else
Msg( "Error: Constant not found: SHM_LOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SHM_UNLOCK
	CompareConstant(SHM_UNLOCK,12,3473,architecture)
#else
Msg( "Error: Constant not found: SHM_UNLOCK\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(shmatt_t,4, 10212, 2)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(shmatt_t,4, 10443, 6)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(shmatt_t,4, 10456, 10)
#endif

#if __powerpc64__
CheckTypeSize(shmatt_t,8, 10493, 9)
#endif

#if __s390x__
CheckTypeSize(shmatt_t,8, 10548, 12)
#endif

#if __i386__
CheckTypeSize(struct shmid_ds,84, 9129, 2)
CheckMemberSize(struct shmid_ds,shm_perm,36,2,33702)
CheckOffset(struct shmid_ds,shm_perm,0,2,33702)
CheckMemberSize(struct shmid_ds,shm_segsz,4,2,33703)
CheckOffset(struct shmid_ds,shm_segsz,36,2,33703)
CheckMemberSize(struct shmid_ds,shm_atime,4,2,33704)
CheckOffset(struct shmid_ds,shm_atime,40,2,33704)
CheckMemberSize(struct shmid_ds,__unused1,4,2,33710)
CheckOffset(struct shmid_ds,__unused1,44,2,33710)
CheckMemberSize(struct shmid_ds,shm_dtime,4,2,33705)
CheckOffset(struct shmid_ds,shm_dtime,48,2,33705)
CheckMemberSize(struct shmid_ds,__unused2,4,2,33711)
CheckOffset(struct shmid_ds,__unused2,52,2,33711)
CheckMemberSize(struct shmid_ds,shm_ctime,4,2,33706)
CheckOffset(struct shmid_ds,shm_ctime,56,2,33706)
CheckMemberSize(struct shmid_ds,__unused3,4,2,33712)
CheckOffset(struct shmid_ds,__unused3,60,2,33712)
CheckMemberSize(struct shmid_ds,shm_cpid,4,2,33707)
CheckOffset(struct shmid_ds,shm_cpid,64,2,33707)
CheckMemberSize(struct shmid_ds,shm_lpid,4,2,33708)
CheckOffset(struct shmid_ds,shm_lpid,68,2,33708)
CheckMemberSize(struct shmid_ds,shm_nattch,4,2,33709)
CheckOffset(struct shmid_ds,shm_nattch,72,2,33709)
CheckMemberSize(struct shmid_ds,__unused4,4,2,34264)
CheckOffset(struct shmid_ds,__unused4,76,2,34264)
CheckMemberSize(struct shmid_ds,__unused5,4,2,34265)
CheckOffset(struct shmid_ds,__unused5,80,2,34265)
#endif

#if __ia64__
CheckTypeSize(struct shmid_ds,112, 10336, 3)
CheckMemberSize(struct shmid_ds,shm_perm,48,3,34550)
CheckOffset(struct shmid_ds,shm_perm,0,3,34550)
CheckMemberSize(struct shmid_ds,shm_segsz,8,3,34551)
CheckOffset(struct shmid_ds,shm_segsz,48,3,34551)
CheckMemberSize(struct shmid_ds,shm_atime,8,3,34552)
CheckOffset(struct shmid_ds,shm_atime,56,3,34552)
CheckMemberSize(struct shmid_ds,shm_dtime,8,3,34553)
CheckOffset(struct shmid_ds,shm_dtime,64,3,34553)
CheckMemberSize(struct shmid_ds,shm_ctime,8,3,34554)
CheckOffset(struct shmid_ds,shm_ctime,72,3,34554)
CheckMemberSize(struct shmid_ds,shm_cpid,4,3,34555)
CheckOffset(struct shmid_ds,shm_cpid,80,3,34555)
CheckMemberSize(struct shmid_ds,shm_lpid,4,3,34556)
CheckOffset(struct shmid_ds,shm_lpid,84,3,34556)
CheckMemberSize(struct shmid_ds,shm_nattch,8,3,34557)
CheckOffset(struct shmid_ds,shm_nattch,88,3,34557)
CheckMemberSize(struct shmid_ds,__unused1,8,3,34558)
CheckOffset(struct shmid_ds,__unused1,96,3,34558)
CheckMemberSize(struct shmid_ds,__unused2,8,3,34559)
CheckOffset(struct shmid_ds,__unused2,104,3,34559)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct shmid_ds,104, 10337, 6)
CheckMemberSize(struct shmid_ds,shm_perm,48,6,40000)
CheckOffset(struct shmid_ds,shm_perm,0,6,40000)
CheckMemberSize(struct shmid_ds,__unused1,4,6,40001)
CheckOffset(struct shmid_ds,__unused1,48,6,40001)
CheckMemberSize(struct shmid_ds,shm_atime,4,6,40005)
CheckOffset(struct shmid_ds,shm_atime,52,6,40005)
CheckMemberSize(struct shmid_ds,__unused2,4,6,40002)
CheckOffset(struct shmid_ds,__unused2,56,6,40002)
CheckMemberSize(struct shmid_ds,shm_dtime,4,6,40006)
CheckOffset(struct shmid_ds,shm_dtime,60,6,40006)
CheckMemberSize(struct shmid_ds,__unused3,4,6,40003)
CheckOffset(struct shmid_ds,__unused3,64,6,40003)
CheckMemberSize(struct shmid_ds,shm_ctime,4,6,40007)
CheckOffset(struct shmid_ds,shm_ctime,68,6,40007)
CheckMemberSize(struct shmid_ds,__unused4,4,6,40004)
CheckOffset(struct shmid_ds,__unused4,72,6,40004)
CheckMemberSize(struct shmid_ds,shm_segsz,4,6,40008)
CheckOffset(struct shmid_ds,shm_segsz,76,6,40008)
CheckMemberSize(struct shmid_ds,shm_cpid,4,6,40009)
CheckOffset(struct shmid_ds,shm_cpid,80,6,40009)
CheckMemberSize(struct shmid_ds,shm_lpid,4,6,40010)
CheckOffset(struct shmid_ds,shm_lpid,84,6,40010)
CheckMemberSize(struct shmid_ds,shm_nattch,4,6,40011)
CheckOffset(struct shmid_ds,shm_nattch,88,6,40011)
CheckMemberSize(struct shmid_ds,__unused5,4,6,40012)
CheckOffset(struct shmid_ds,__unused5,92,6,40012)
CheckMemberSize(struct shmid_ds,__unused6,4,6,40013)
CheckOffset(struct shmid_ds,__unused6,96,6,40013)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(struct shmid_ds,84, 10457, 10)
CheckMemberSize(struct shmid_ds,shm_perm,36,10,40014)
CheckOffset(struct shmid_ds,shm_perm,0,10,40014)
CheckMemberSize(struct shmid_ds,shm_segsz,4,10,40015)
CheckOffset(struct shmid_ds,shm_segsz,36,10,40015)
CheckMemberSize(struct shmid_ds,shm_atime,4,10,40016)
CheckOffset(struct shmid_ds,shm_atime,40,10,40016)
CheckMemberSize(struct shmid_ds,__unused1,4,10,40017)
CheckOffset(struct shmid_ds,__unused1,44,10,40017)
CheckMemberSize(struct shmid_ds,shm_dtime,4,10,40018)
CheckOffset(struct shmid_ds,shm_dtime,48,10,40018)
CheckMemberSize(struct shmid_ds,__unused2,4,10,40019)
CheckOffset(struct shmid_ds,__unused2,52,10,40019)
CheckMemberSize(struct shmid_ds,shm_ctime,4,10,40023)
CheckOffset(struct shmid_ds,shm_ctime,56,10,40023)
CheckMemberSize(struct shmid_ds,__unused3,4,10,40020)
CheckOffset(struct shmid_ds,__unused3,60,10,40020)
CheckMemberSize(struct shmid_ds,shm_cpid,4,10,40024)
CheckOffset(struct shmid_ds,shm_cpid,64,10,40024)
CheckMemberSize(struct shmid_ds,shm_lpid,4,10,40025)
CheckOffset(struct shmid_ds,shm_lpid,68,10,40025)
CheckMemberSize(struct shmid_ds,shm_nattch,4,10,40026)
CheckOffset(struct shmid_ds,shm_nattch,72,10,40026)
CheckMemberSize(struct shmid_ds,__unused4,4,10,40021)
CheckOffset(struct shmid_ds,__unused4,76,10,40021)
CheckMemberSize(struct shmid_ds,__unused5,4,10,40022)
CheckOffset(struct shmid_ds,__unused5,80,10,40022)
#endif

#if __powerpc64__
CheckTypeSize(struct shmid_ds,112, 10495, 9)
CheckMemberSize(struct shmid_ds,shm_perm,48,9,40070)
CheckOffset(struct shmid_ds,shm_perm,0,9,40070)
CheckMemberSize(struct shmid_ds,shm_atime,8,9,40071)
CheckOffset(struct shmid_ds,shm_atime,48,9,40071)
CheckMemberSize(struct shmid_ds,shm_dtime,8,9,40072)
CheckOffset(struct shmid_ds,shm_dtime,56,9,40072)
CheckMemberSize(struct shmid_ds,shm_ctime,8,9,40073)
CheckOffset(struct shmid_ds,shm_ctime,64,9,40073)
CheckMemberSize(struct shmid_ds,shm_segsz,8,9,40074)
CheckOffset(struct shmid_ds,shm_segsz,72,9,40074)
CheckMemberSize(struct shmid_ds,shm_cpid,4,9,40075)
CheckOffset(struct shmid_ds,shm_cpid,80,9,40075)
CheckMemberSize(struct shmid_ds,shm_lpid,4,9,40076)
CheckOffset(struct shmid_ds,shm_lpid,84,9,40076)
CheckMemberSize(struct shmid_ds,shm_nattch,8,9,40077)
CheckOffset(struct shmid_ds,shm_nattch,88,9,40077)
CheckMemberSize(struct shmid_ds,__unused5,8,9,40078)
CheckOffset(struct shmid_ds,__unused5,96,9,40078)
CheckMemberSize(struct shmid_ds,__unused6,8,9,40079)
CheckOffset(struct shmid_ds,__unused6,104,9,40079)
#endif

#if __s390x__
CheckTypeSize(struct shmid_ds,112, 10549, 12)
CheckMemberSize(struct shmid_ds,shm_perm,48,12,40218)
CheckOffset(struct shmid_ds,shm_perm,0,12,40218)
CheckMemberSize(struct shmid_ds,shm_segsz,8,12,40219)
CheckOffset(struct shmid_ds,shm_segsz,48,12,40219)
CheckMemberSize(struct shmid_ds,shm_atime,8,12,40220)
CheckOffset(struct shmid_ds,shm_atime,56,12,40220)
CheckMemberSize(struct shmid_ds,shm_dtime,8,12,40221)
CheckOffset(struct shmid_ds,shm_dtime,64,12,40221)
CheckMemberSize(struct shmid_ds,shm_ctime,8,12,40222)
CheckOffset(struct shmid_ds,shm_ctime,72,12,40222)
CheckMemberSize(struct shmid_ds,shm_cpid,4,12,40223)
CheckOffset(struct shmid_ds,shm_cpid,80,12,40223)
CheckMemberSize(struct shmid_ds,shm_lpid,4,12,40224)
CheckOffset(struct shmid_ds,shm_lpid,84,12,40224)
CheckMemberSize(struct shmid_ds,shm_nattch,8,12,40225)
CheckOffset(struct shmid_ds,shm_nattch,88,12,40225)
CheckMemberSize(struct shmid_ds,__unused4,8,12,40226)
CheckOffset(struct shmid_ds,__unused4,96,12,40226)
CheckMemberSize(struct shmid_ds,__unused5,8,12,40227)
CheckOffset(struct shmid_ds,__unused5,104,12,40227)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/shm.h\n",cnt);
return cnt;
#endif

}
