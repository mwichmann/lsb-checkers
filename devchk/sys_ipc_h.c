/*
 * Test of sys/ipc.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/ipc.h"



int sys_ipc_h()
{
int cnt=0;
#ifdef IPC_CREAT
CompareConstant(IPC_CREAT,512)
#else
Msg( "Warning: Constant not found: IPC_CREAT\n");
#endif
#ifdef IPC_EXCL
CompareConstant(IPC_EXCL,1024)
#else
Msg( "Warning: Constant not found: IPC_EXCL\n");
#endif
#ifdef IPC_NOWAIT
CompareConstant(IPC_NOWAIT,2048)
#else
Msg( "Warning: Constant not found: IPC_NOWAIT\n");
#endif
#ifdef IPC_PRIVATE
CompareConstant(IPC_PRIVATE,0)
#else
Msg( "Warning: Constant not found: IPC_PRIVATE\n");
#endif
#ifdef IPC_RMID
CompareConstant(IPC_RMID,0)
#else
Msg( "Warning: Constant not found: IPC_RMID\n");
#endif
#ifdef IPC_SET
CompareConstant(IPC_SET,1)
#else
Msg( "Warning: Constant not found: IPC_SET\n");
#endif
#ifdef IPC_STAT
CompareConstant(IPC_STAT,2)
#else
Msg( "Warning: Constant not found: IPC_STAT\n");
#endif
printf("%d tests in sys/ipc.h\n",cnt);
return cnt;
}
