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

#ifdef _LSB_DEFAULT_ARCH
/* No test for SHMLBA */
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SHM_RDONLY
	CompareConstant(SHM_RDONLY,4096,3469,architecture)
#else
Msg( "Error: Constant not found: SHM_RDONLY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SHM_RND
	CompareConstant(SHM_RND,020000,3470,architecture)
#else
Msg( "Error: Constant not found: SHM_RND\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(shmatt_t,4, 10212, 2)
#elif __powerpc__
CheckTypeSize(shmatt_t,4, 10212, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10212,0);
Msg("Find size of shmid_ds (10212)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct shmid_ds,84, 9129, 2)
CheckOffset(struct shmid_ds,shm_perm,0,2,33702)
CheckOffset(struct shmid_ds,shm_segsz,36,2,33703)
CheckOffset(struct shmid_ds,shm_atime,40,2,33704)
CheckOffset(struct shmid_ds,__unused1,44,2,33710)
CheckOffset(struct shmid_ds,shm_dtime,48,2,33705)
CheckOffset(struct shmid_ds,__unused2,52,2,33711)
CheckOffset(struct shmid_ds,shm_ctime,56,2,33706)
CheckOffset(struct shmid_ds,__unused3,60,2,33712)
CheckOffset(struct shmid_ds,shm_cpid,64,2,33707)
CheckOffset(struct shmid_ds,shm_lpid,68,2,33708)
CheckOffset(struct shmid_ds,shm_nattch,72,2,33709)
CheckOffset(struct shmid_ds,__unused4,76,2,34264)
CheckOffset(struct shmid_ds,__unused5,80,2,34265)
#elif __ia64__
CheckTypeSize(struct shmid_ds,112, 9129, 3)
#elif __powerpc__
CheckTypeSize(struct shmid_ds,104, 9129, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9129,0);
Msg("Find size of shmid_ds (9129)\n");
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
