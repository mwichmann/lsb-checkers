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

#ifdef IPC_PRIVATE
	CompareConstant(IPC_PRIVATE,((key_t)0))
#else
Msg( "Error: Constant not found: IPC_PRIVATE\n");
cnt++;
#endif

#ifdef IPC_CREAT
	CompareConstant(IPC_CREAT,00001000)
#else
Msg( "Error: Constant not found: IPC_CREAT\n");
cnt++;
#endif

#ifdef IPC_EXCL
	CompareConstant(IPC_EXCL,00002000)
#else
Msg( "Error: Constant not found: IPC_EXCL\n");
cnt++;
#endif

#ifdef IPC_NOWAIT
	CompareConstant(IPC_NOWAIT,00004000)
#else
Msg( "Error: Constant not found: IPC_NOWAIT\n");
cnt++;
#endif

#ifdef IPC_RMID
	CompareConstant(IPC_RMID,0)
#else
Msg( "Error: Constant not found: IPC_RMID\n");
cnt++;
#endif

#ifdef IPC_SET
	CompareConstant(IPC_SET,1)
#else
Msg( "Error: Constant not found: IPC_SET\n");
cnt++;
#endif

#ifdef IPC_STAT
	CompareConstant(IPC_STAT,2)
#else
Msg( "Error: Constant not found: IPC_STAT\n");
cnt++;
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
