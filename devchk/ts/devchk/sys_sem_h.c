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
Msg("Missing member data for sembuf on IA64\n");
CheckOffset(struct sembuf,sem_num,0,3,30118)
CheckOffset(struct sembuf,sem_op,0,3,30119)
CheckOffset(struct sembuf,sem_flg,0,3,30120)
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6982,0);
Msg("Find size of sembuf (6982)\n");
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
#elif __ia64__
CheckTypeSize(struct semid_ds,88, 10211, 3)
Msg("Missing member data for semid_ds on IA64\n");
CheckOffset(struct semid_ds,sem_perm,0,3,34290)
CheckOffset(struct semid_ds,sem_otime,0,3,34291)
CheckOffset(struct semid_ds,__unused1,0,3,34293)
CheckOffset(struct semid_ds,sem_ctime,0,3,34292)
CheckOffset(struct semid_ds,__unused2,0,3,34294)
CheckOffset(struct semid_ds,sem_nsems,0,3,34295)
CheckOffset(struct semid_ds,__unused3,0,3,34296)
CheckOffset(struct semid_ds,__unused4,0,3,34297)
#elif __powerpc__
CheckTypeSize(struct semid_ds,80, 10211, 6)
Msg("Missing member data for semid_ds on PPC32\n");
CheckOffset(struct semid_ds,sem_perm,0,6,34290)
CheckOffset(struct semid_ds,sem_otime,0,6,34291)
CheckOffset(struct semid_ds,__unused1,0,6,34293)
CheckOffset(struct semid_ds,sem_ctime,0,6,34292)
CheckOffset(struct semid_ds,__unused2,0,6,34294)
CheckOffset(struct semid_ds,sem_nsems,0,6,34295)
CheckOffset(struct semid_ds,__unused3,0,6,34296)
CheckOffset(struct semid_ds,__unused4,0,6,34297)
#elif __s390__
CheckTypeSize(struct semid_ds,64, 10211, 10)
Msg("Missing member data for semid_ds on S390\n");
CheckOffset(struct semid_ds,sem_perm,0,10,34290)
CheckOffset(struct semid_ds,sem_otime,0,10,34291)
CheckOffset(struct semid_ds,__unused1,0,10,34293)
CheckOffset(struct semid_ds,sem_ctime,0,10,34292)
CheckOffset(struct semid_ds,__unused2,0,10,34294)
CheckOffset(struct semid_ds,sem_nsems,0,10,34295)
CheckOffset(struct semid_ds,__unused3,0,10,34296)
CheckOffset(struct semid_ds,__unused4,0,10,34297)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10211,0);
Msg("Find size of semid_ds (10211)\n");
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
