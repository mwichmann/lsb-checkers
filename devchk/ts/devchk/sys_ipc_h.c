/*
 * Test of sys/ipc.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/ipc.h"



#ifdef TET_TEST
void sys_ipc_h()
{
#else
int sys_ipc_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/ipc.h\n");
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

#ifdef __i386__
CheckTypeSize(struct ipc_perm,36, 10128, 2)
CheckOffset(struct ipc_perm,__key,0,2,33724)
CheckOffset(struct ipc_perm,uid,4,2,33725)
CheckOffset(struct ipc_perm,gid,8,2,33726)
CheckOffset(struct ipc_perm,cuid,12,2,33727)
CheckOffset(struct ipc_perm,cgid,16,2,33728)
CheckOffset(struct ipc_perm,mode,20,2,33729)
CheckOffset(struct ipc_perm,__pad1,22,2,33730)
CheckOffset(struct ipc_perm,__seq,24,2,34416)
CheckOffset(struct ipc_perm,__pad2,26,2,34417)
CheckOffset(struct ipc_perm,__unused1,28,2,34418)
CheckOffset(struct ipc_perm,__unused2,32,2,34419)
#elif __ia64__
CheckTypeSize(struct ipc_perm,48, 10128, 3)
#elif __powerpc__
CheckTypeSize(struct ipc_perm,48, 10128, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10128,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/ipc.h\n",cnt);
return cnt;
#endif

}
