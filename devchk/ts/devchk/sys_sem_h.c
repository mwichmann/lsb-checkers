/*
 * Test of sys/sem.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef SEM_UNDO
	CompareConstant(SEM_UNDO,0x1000)
#else
Msg( "Error: Constant not found: SEM_UNDO\n");
cnt++;
#endif

#ifdef GETPID
	CompareConstant(GETPID,11)
#else
Msg( "Error: Constant not found: GETPID\n");
cnt++;
#endif

#ifdef GETVAL
	CompareConstant(GETVAL,12)
#else
Msg( "Error: Constant not found: GETVAL\n");
cnt++;
#endif

#ifdef GETALL
	CompareConstant(GETALL,13)
#else
Msg( "Error: Constant not found: GETALL\n");
cnt++;
#endif

#ifdef GETNCNT
	CompareConstant(GETNCNT,14)
#else
Msg( "Error: Constant not found: GETNCNT\n");
cnt++;
#endif

#ifdef GETZCNT
	CompareConstant(GETZCNT,15)
#else
Msg( "Error: Constant not found: GETZCNT\n");
cnt++;
#endif

#ifdef SETVAL
	CompareConstant(SETVAL,16)
#else
Msg( "Error: Constant not found: SETVAL\n");
cnt++;
#endif

#ifdef SETALL
	CompareConstant(SETALL,17)
#else
Msg( "Error: Constant not found: SETALL\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(struct sembuf,6, 6982, 2)
#elif __ia64__
CheckTypeSize(struct sembuf,6, 6982, 3)
#elif __powerpc__
CheckTypeSize(struct sembuf,6, 6982, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6982,0);
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
#elif __powerpc__
CheckTypeSize(struct semid_ds,80, 10211, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10211,0);
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
