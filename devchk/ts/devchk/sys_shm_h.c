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
/* No test for SHMLBA */
#elif __powerpc__ && !__powerpc64__
/* No test for SHMLBA */
#elif __ia64__
/* No test for SHMLBA */
#elif __i386__
/* No test for SHMLBA */
#elif __x86_64__
/* No test for SHMLBA */
#elif __s390__
/* No test for SHMLBA */
#else
Msg( "No definition for SHMLBA (1681, Unknown) in db\n");
#ifdef SHMLBA
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,1681,%s);\n", architecture, SHMLBA);
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
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(shmatt_t,4, 10212, 6)
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
Msg("Missing member data for shmid_ds on PPC32\n");
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
