/*
 * Test of sys/sem.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/sem.h"



#ifdef TET_TEST
void sys_sem_h()
{
#else
int sys_sem_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/sem.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GETVAL
	CompareConstant(GETVAL,12,3200,architecture)
#else
Msg( "Error: Constant not found: GETVAL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SEM_UNDO
	CompareConstant(SEM_UNDO,0x1000,3198,architecture)
#else
Msg( "Error: Constant not found: SEM_UNDO\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GETALL
	CompareConstant(GETALL,13,3201,architecture)
#else
Msg( "Error: Constant not found: GETALL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SETALL
	CompareConstant(SETALL,17,3205,architecture)
#else
Msg( "Error: Constant not found: SETALL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GETPID
	CompareConstant(GETPID,11,3199,architecture)
#else
Msg( "Error: Constant not found: GETPID\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GETZCNT
	CompareConstant(GETZCNT,15,3203,architecture)
#else
Msg( "Error: Constant not found: GETZCNT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef SETVAL
	CompareConstant(SETVAL,16,3204,architecture)
#else
Msg( "Error: Constant not found: SETVAL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef GETNCNT
	CompareConstant(GETNCNT,14,3202,architecture)
#else
Msg( "Error: Constant not found: GETNCNT\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(struct sembuf,6, 6982, 2)
CheckOffset(struct sembuf,sem_op,2,2,30119)
CheckOffset(struct sembuf,sem_flg,4,2,30120)
#elif __ia64__
CheckTypeSize(struct sembuf,6, 6982, 3)
CheckOffset(struct sembuf,sem_op,2,3,30119)
CheckOffset(struct sembuf,sem_flg,4,3,30120)
#elif __powerpc__
CheckTypeSize(struct sembuf,6, 6982, 6)
Msg("Missing member data for sembuf on PPC32\n");
CheckOffset(struct sembuf,sem_num,0,6,30118)
CheckOffset(struct sembuf,sem_op,0,6,30119)
CheckOffset(struct sembuf,sem_flg,0,6,30120)
#elif __s390__
CheckTypeSize(struct sembuf,6, 6982, 10)
Msg("Missing member data for sembuf on S390\n");
CheckOffset(struct sembuf,sem_num,0,10,30118)
CheckOffset(struct sembuf,sem_op,0,10,30119)
CheckOffset(struct sembuf,sem_flg,0,10,30120)
#endif

#ifdef __i386__
CheckTypeSize(struct semid_ds,64, 10211, 2)
CheckOffset(struct semid_ds,sem_perm,0,2,34290)
CheckOffset(struct semid_ds,sem_otime,36,2,34291)
CheckOffset(struct semid_ds,__unused1,40,2,34293)
CheckOffset(struct semid_ds,sem_ctime,44,2,34292)
CheckOffset(struct semid_ds,__unused2,48,2,34294)
CheckOffset(struct semid_ds,sem_nsems,52,2,34295)
CheckOffset(struct semid_ds,__unused3,56,2,34296)
CheckOffset(struct semid_ds,__unused4,60,2,34297)
#endif

#ifdef __ia64__
CheckTypeSize(struct semid_ds,88, 10396, 3)
CheckOffset(struct semid_ds,sem_perm,0,3,34665)
CheckOffset(struct semid_ds,sem_otime,48,3,34666)
CheckOffset(struct semid_ds,sem_ctime,56,3,34667)
CheckOffset(struct semid_ds,__unused1,72,3,34668)
CheckOffset(struct semid_ds,__unused2,80,3,34669)
#endif

#ifdef __powerpc__
CheckTypeSize(struct semid_ds,64, 10407, 6)
CheckOffset(struct semid_ds,sem_perm,0,6,34768)
CheckOffset(struct semid_ds,sem_otime,0,6,34769)
CheckOffset(struct semid_ds,__unused1,0,6,34770)
CheckOffset(struct semid_ds,sem_ctime,0,6,34771)
CheckOffset(struct semid_ds,__unused2,0,6,34772)
CheckOffset(struct semid_ds,sem_nsems,0,6,34773)
CheckOffset(struct semid_ds,__unused3,0,6,34774)
CheckOffset(struct semid_ds,__unused4,0,6,34776)
#endif

#ifdef __s390__
CheckTypeSize(struct semid_ds,64, 10408, 10)
CheckOffset(struct semid_ds,sem_perm,0,10,34775)
CheckOffset(struct semid_ds,sem_otime,0,10,34777)
CheckOffset(struct semid_ds,__unused1,0,10,34778)
CheckOffset(struct semid_ds,sem_ctime,0,10,34779)
CheckOffset(struct semid_ds,__unused2,0,10,34780)
CheckOffset(struct semid_ds,sem_nsems,0,10,34781)
CheckOffset(struct semid_ds,__unused3,0,10,34782)
CheckOffset(struct semid_ds,__unused4,0,10,34783)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/sem.h\n",cnt);
return cnt;
#endif

}
