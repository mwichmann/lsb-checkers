/*
 * Test of sys/sem.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/sem.h"



int sys_sem_h()
{
int cnt=0;
#ifdef SEM_UNDO
CompareConstant(SEM_UNDO,4096)
#else
Msg( "Warning: Constant not found: SEM_UNDO\n");
#endif
#ifdef GETNCNT
CompareConstant(GETNCNT,14)
#else
Msg( "Warning: Constant not found: GETNCNT\n");
#endif
#ifdef GETPID
CompareConstant(GETPID,11)
#else
Msg( "Warning: Constant not found: GETPID\n");
#endif
#ifdef GETVAL
CompareConstant(GETVAL,12)
#else
Msg( "Warning: Constant not found: GETVAL\n");
#endif
#ifdef GETALL
CompareConstant(GETALL,13)
#else
Msg( "Warning: Constant not found: GETALL\n");
#endif
#ifdef GETZCNT
CompareConstant(GETZCNT,15)
#else
Msg( "Warning: Constant not found: GETZCNT\n");
#endif
#ifdef SETVAL
CompareConstant(SETVAL,16)
#else
Msg( "Warning: Constant not found: SETVAL\n");
#endif
#ifdef SETALL
CompareConstant(SETALL,17)
#else
Msg( "Warning: Constant not found: SETALL\n");
#endif
printf("%d tests in sys/sem.h\n",cnt);
return cnt;
}
