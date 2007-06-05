/*
 * Test of sys/ipc.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "sys/ipc.h"



#ifdef TET_TEST
void sys_ipc_h()
{
#else
int sys_ipc_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/ipc.h\n");
#endif

printf("Checking data structures in sys/ipc.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef IPC_PRIVATE
	CompareConstant(IPC_PRIVATE,((key_t)0),3445,architecture)
#else
Msg( "Error: Constant not found: IPC_PRIVATE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPC_CREAT
	CompareConstant(IPC_CREAT,00001000,3446,architecture)
#else
Msg( "Error: Constant not found: IPC_CREAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPC_EXCL
	CompareConstant(IPC_EXCL,00002000,3447,architecture)
#else
Msg( "Error: Constant not found: IPC_EXCL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPC_NOWAIT
	CompareConstant(IPC_NOWAIT,00004000,3448,architecture)
#else
Msg( "Error: Constant not found: IPC_NOWAIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPC_RMID
	CompareConstant(IPC_RMID,0,3449,architecture)
#else
Msg( "Error: Constant not found: IPC_RMID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPC_SET
	CompareConstant(IPC_SET,1,3450,architecture)
#else
Msg( "Error: Constant not found: IPC_SET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IPC_STAT
	CompareConstant(IPC_STAT,2,3451,architecture)
#else
Msg( "Error: Constant not found: IPC_STAT\n");
cnt++;
#endif

#endif

#if __i386__
#elif __s390__ && !__s390x__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#endif

extern key_t ftok_db(const char *, int);
CheckInterfacedef(ftok,ftok_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/ipc.h\n\n",pcnt,cnt);
return cnt;
#endif

}
