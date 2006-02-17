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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/sem.h\n");
#endif

printf("Checking data structures in sys/sem.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SEM_UNDO
	CompareConstant(SEM_UNDO,0x1000,3198,architecture)
#else
Msg( "Error: Constant not found: SEM_UNDO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GETPID
	CompareConstant(GETPID,11,3199,architecture)
#else
Msg( "Error: Constant not found: GETPID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GETVAL
	CompareConstant(GETVAL,12,3200,architecture)
#else
Msg( "Error: Constant not found: GETVAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GETALL
	CompareConstant(GETALL,13,3201,architecture)
#else
Msg( "Error: Constant not found: GETALL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GETNCNT
	CompareConstant(GETNCNT,14,3202,architecture)
#else
Msg( "Error: Constant not found: GETNCNT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef GETZCNT
	CompareConstant(GETZCNT,15,3203,architecture)
#else
Msg( "Error: Constant not found: GETZCNT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SETVAL
	CompareConstant(SETVAL,16,3204,architecture)
#else
Msg( "Error: Constant not found: SETVAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SETALL
	CompareConstant(SETALL,17,3205,architecture)
#else
Msg( "Error: Constant not found: SETALL\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(struct sembuf,6, 6982, 2)
CheckMemberSize(struct sembuf,sem_op,2,2,30119)
CheckOffset(struct sembuf,sem_op,2,2,30119)
CheckMemberSize(struct sembuf,sem_flg,2,2,30120)
CheckOffset(struct sembuf,sem_flg,4,2,30120)
#elif __ia64__
CheckTypeSize(struct sembuf,6, 6982, 3)
CheckMemberSize(struct sembuf,sem_op,2,3,30119)
CheckOffset(struct sembuf,sem_op,2,3,30119)
CheckMemberSize(struct sembuf,sem_flg,2,3,30120)
CheckOffset(struct sembuf,sem_flg,4,3,30120)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct sembuf,6, 6982, 6)
CheckMemberSize(struct sembuf,sem_op,2,6,30119)
CheckOffset(struct sembuf,sem_op,2,6,30119)
CheckMemberSize(struct sembuf,sem_flg,2,6,30120)
CheckOffset(struct sembuf,sem_flg,4,6,30120)
#elif __s390__ && !__s390x__
CheckTypeSize(struct sembuf,6, 6982, 10)
CheckMemberSize(struct sembuf,sem_op,2,10,30119)
CheckOffset(struct sembuf,sem_op,2,10,30119)
CheckMemberSize(struct sembuf,sem_flg,2,10,30120)
CheckOffset(struct sembuf,sem_flg,4,10,30120)
#elif __s390x__
CheckTypeSize(struct sembuf,6, 6982, 12)
CheckMemberSize(struct sembuf,sem_op,2,12,30119)
CheckOffset(struct sembuf,sem_op,2,12,30119)
CheckMemberSize(struct sembuf,sem_flg,2,12,30120)
CheckOffset(struct sembuf,sem_flg,4,12,30120)
#elif __x86_64__
CheckTypeSize(struct sembuf,6, 6982, 11)
CheckMemberSize(struct sembuf,sem_op,2,11,30119)
CheckOffset(struct sembuf,sem_op,2,11,30119)
CheckMemberSize(struct sembuf,sem_flg,2,11,30120)
CheckOffset(struct sembuf,sem_flg,4,11,30120)
#elif __powerpc64__
CheckTypeSize(struct sembuf,6, 6982, 9)
CheckMemberSize(struct sembuf,sem_op,2,9,30119)
CheckOffset(struct sembuf,sem_op,2,9,30119)
CheckMemberSize(struct sembuf,sem_flg,2,9,30120)
CheckOffset(struct sembuf,sem_flg,4,9,30120)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6982,0);
Msg("Find size of sembuf (6982)\n");
#endif

#if __i386__
CheckTypeSize(struct semid_ds,64, 10211, 2)
CheckMemberSize(struct semid_ds,sem_perm,36,2,34290)
CheckOffset(struct semid_ds,sem_perm,0,2,34290)
CheckMemberSize(struct semid_ds,sem_otime,4,2,34291)
CheckOffset(struct semid_ds,sem_otime,36,2,34291)
CheckMemberSize(struct semid_ds,__unused1,4,2,34293)
CheckOffset(struct semid_ds,__unused1,40,2,34293)
CheckMemberSize(struct semid_ds,sem_ctime,4,2,34292)
CheckOffset(struct semid_ds,sem_ctime,44,2,34292)
CheckMemberSize(struct semid_ds,__unused2,4,2,34294)
CheckOffset(struct semid_ds,__unused2,48,2,34294)
CheckMemberSize(struct semid_ds,sem_nsems,4,2,34295)
CheckOffset(struct semid_ds,sem_nsems,52,2,34295)
CheckMemberSize(struct semid_ds,__unused3,4,2,34296)
CheckOffset(struct semid_ds,__unused3,56,2,34296)
CheckMemberSize(struct semid_ds,__unused4,4,2,34297)
CheckOffset(struct semid_ds,__unused4,60,2,34297)
#endif

#if __ia64__
CheckTypeSize(struct semid_ds,88, 10396, 3)
CheckMemberSize(struct semid_ds,sem_perm,48,3,34665)
CheckOffset(struct semid_ds,sem_perm,0,3,34665)
CheckMemberSize(struct semid_ds,sem_otime,8,3,34666)
CheckOffset(struct semid_ds,sem_otime,48,3,34666)
CheckMemberSize(struct semid_ds,sem_ctime,8,3,34667)
CheckOffset(struct semid_ds,sem_ctime,56,3,34667)
CheckMemberSize(struct semid_ds,sem_nsems,8,3,34878)
CheckOffset(struct semid_ds,sem_nsems,64,3,34878)
CheckMemberSize(struct semid_ds,__unused1,8,3,34668)
CheckOffset(struct semid_ds,__unused1,72,3,34668)
CheckMemberSize(struct semid_ds,__unused2,8,3,34669)
CheckOffset(struct semid_ds,__unused2,80,3,34669)
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(struct semid_ds,80, 10407, 6)
CheckMemberSize(struct semid_ds,sem_perm,48,6,34768)
CheckOffset(struct semid_ds,sem_perm,0,6,34768)
CheckMemberSize(struct semid_ds,__unused1,4,6,34770)
CheckOffset(struct semid_ds,__unused1,48,6,34770)
CheckMemberSize(struct semid_ds,sem_otime,4,6,34769)
CheckOffset(struct semid_ds,sem_otime,52,6,34769)
CheckMemberSize(struct semid_ds,__unused2,4,6,34772)
CheckOffset(struct semid_ds,__unused2,56,6,34772)
CheckMemberSize(struct semid_ds,sem_ctime,4,6,34771)
CheckOffset(struct semid_ds,sem_ctime,60,6,34771)
CheckMemberSize(struct semid_ds,sem_nsems,4,6,34773)
CheckOffset(struct semid_ds,sem_nsems,64,6,34773)
CheckMemberSize(struct semid_ds,__unused3,4,6,34774)
CheckOffset(struct semid_ds,__unused3,68,6,34774)
CheckMemberSize(struct semid_ds,__unused4,4,6,34776)
CheckOffset(struct semid_ds,__unused4,72,6,34776)
#endif

#if __s390__ && !__s390x__
CheckTypeSize(struct semid_ds,64, 10408, 10)
CheckMemberSize(struct semid_ds,sem_perm,36,10,34775)
CheckOffset(struct semid_ds,sem_perm,0,10,34775)
CheckMemberSize(struct semid_ds,sem_otime,4,10,34777)
CheckOffset(struct semid_ds,sem_otime,36,10,34777)
CheckMemberSize(struct semid_ds,__unused1,4,10,34778)
CheckOffset(struct semid_ds,__unused1,40,10,34778)
CheckMemberSize(struct semid_ds,sem_ctime,4,10,34779)
CheckOffset(struct semid_ds,sem_ctime,44,10,34779)
CheckMemberSize(struct semid_ds,__unused2,4,10,34780)
CheckOffset(struct semid_ds,__unused2,48,10,34780)
CheckMemberSize(struct semid_ds,sem_nsems,4,10,34781)
CheckOffset(struct semid_ds,sem_nsems,52,10,34781)
CheckMemberSize(struct semid_ds,__unused3,4,10,34782)
CheckOffset(struct semid_ds,__unused3,56,10,34782)
CheckMemberSize(struct semid_ds,__unused4,4,10,34783)
CheckOffset(struct semid_ds,__unused4,60,10,34783)
#endif

#if __powerpc64__
CheckTypeSize(struct semid_ds,88, 10496, 9)
CheckMemberSize(struct semid_ds,sem_perm,48,9,40080)
CheckOffset(struct semid_ds,sem_perm,0,9,40080)
CheckMemberSize(struct semid_ds,sem_otime,8,9,40081)
CheckOffset(struct semid_ds,sem_otime,48,9,40081)
CheckMemberSize(struct semid_ds,sem_ctime,8,9,40082)
CheckOffset(struct semid_ds,sem_ctime,56,9,40082)
CheckMemberSize(struct semid_ds,sem_nsems,8,9,40083)
CheckOffset(struct semid_ds,sem_nsems,64,9,40083)
CheckMemberSize(struct semid_ds,__unused3,8,9,40084)
CheckOffset(struct semid_ds,__unused3,72,9,40084)
CheckMemberSize(struct semid_ds,__unused4,8,9,40085)
CheckOffset(struct semid_ds,__unused4,80,9,40085)
#endif

#if __s390x__
CheckTypeSize(struct semid_ds,88, 10547, 12)
CheckMemberSize(struct semid_ds,sem_perm,48,12,40212)
CheckOffset(struct semid_ds,sem_perm,0,12,40212)
CheckMemberSize(struct semid_ds,sem_otime,8,12,40213)
CheckOffset(struct semid_ds,sem_otime,48,12,40213)
CheckMemberSize(struct semid_ds,sem_ctime,8,12,40214)
CheckOffset(struct semid_ds,sem_ctime,56,12,40214)
CheckMemberSize(struct semid_ds,sem_nsems,8,12,40215)
CheckOffset(struct semid_ds,sem_nsems,64,12,40215)
CheckMemberSize(struct semid_ds,__unused3,8,12,40216)
CheckOffset(struct semid_ds,__unused3,72,12,40216)
CheckMemberSize(struct semid_ds,__unused4,8,12,40217)
CheckOffset(struct semid_ds,__unused4,80,12,40217)
#endif

#if __x86_64__
CheckTypeSize(struct semid_ds,104, 10791, 11)
CheckMemberSize(struct semid_ds,sem_perm,48,11,40448)
CheckOffset(struct semid_ds,sem_perm,0,11,40448)
CheckMemberSize(struct semid_ds,sem_otime,8,11,40449)
CheckOffset(struct semid_ds,sem_otime,48,11,40449)
CheckMemberSize(struct semid_ds,__unused1,8,11,40450)
CheckOffset(struct semid_ds,__unused1,56,11,40450)
CheckMemberSize(struct semid_ds,sem_ctime,8,11,40451)
CheckOffset(struct semid_ds,sem_ctime,64,11,40451)
CheckMemberSize(struct semid_ds,__unused2,8,11,40452)
CheckOffset(struct semid_ds,__unused2,72,11,40452)
CheckMemberSize(struct semid_ds,sem_nsems,8,11,40453)
CheckOffset(struct semid_ds,sem_nsems,80,11,40453)
CheckMemberSize(struct semid_ds,__unused3,8,11,40454)
CheckOffset(struct semid_ds,__unused3,88,11,40454)
CheckMemberSize(struct semid_ds,__unused4,8,11,40455)
CheckOffset(struct semid_ds,__unused4,96,11,40455)
#endif

extern int semctl_db(int, int, int, ...);
CheckInterfacedef(semctl,semctl_db);
extern int semget_db(key_t, int, int);
CheckInterfacedef(semget,semget_db);
extern int semop_db(int, struct sembuf *, size_t);
CheckInterfacedef(semop,semop_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/sem.h\n\n",pcnt,cnt);
return cnt;
#endif

}
