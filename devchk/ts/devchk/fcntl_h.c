/*
 * Test of fcntl.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "fcntl.h"



#ifdef TET_TEST
void fcntl_h()
{
#else
int fcntl_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in fcntl.h\n");
#endif

#ifdef O_RDONLY
	CompareConstant(O_RDONLY,00)
#else
Msg( "Warning: Constant not found: O_RDONLY\n");
#endif

#ifdef O_WRONLY
	CompareConstant(O_WRONLY,01)
#else
Msg( "Warning: Constant not found: O_WRONLY\n");
#endif

#ifdef O_RDWR
	CompareConstant(O_RDWR,02)
#else
Msg( "Warning: Constant not found: O_RDWR\n");
#endif

#ifdef O_CREAT
	CompareConstant(O_CREAT,0100)
#else
Msg( "Warning: Constant not found: O_CREAT\n");
#endif

#ifdef O_EXCL
	CompareConstant(O_EXCL,0200)
#else
Msg( "Warning: Constant not found: O_EXCL\n");
#endif

#ifdef O_NOCTTY
	CompareConstant(O_NOCTTY,0400)
#else
Msg( "Warning: Constant not found: O_NOCTTY\n");
#endif

#ifdef O_TRUNC
	CompareConstant(O_TRUNC,01000)
#else
Msg( "Warning: Constant not found: O_TRUNC\n");
#endif

#ifdef O_APPEND
	CompareConstant(O_APPEND,02000)
#else
Msg( "Warning: Constant not found: O_APPEND\n");
#endif

#ifdef O_NONBLOCK
	CompareConstant(O_NONBLOCK,04000)
#else
Msg( "Warning: Constant not found: O_NONBLOCK\n");
#endif

#ifdef O_SYNC
	CompareConstant(O_SYNC,010000)
#else
Msg( "Warning: Constant not found: O_SYNC\n");
#endif

#ifdef O_ACCMODE
	CompareConstant(O_ACCMODE,0003)
#else
Msg( "Warning: Constant not found: O_ACCMODE\n");
#endif

#ifdef O_ASYNC
	CompareConstant(O_ASYNC,020000)
#else
Msg( "Warning: Constant not found: O_ASYNC\n");
#endif

#ifdef F_DUPFD
	CompareConstant(F_DUPFD,0)
#else
Msg( "Warning: Constant not found: F_DUPFD\n");
#endif

#ifdef F_GETFD
	CompareConstant(F_GETFD,1)
#else
Msg( "Warning: Constant not found: F_GETFD\n");
#endif

#ifdef F_SETFD
	CompareConstant(F_SETFD,2)
#else
Msg( "Warning: Constant not found: F_SETFD\n");
#endif

#ifdef F_GETFL
	CompareConstant(F_GETFL,3)
#else
Msg( "Warning: Constant not found: F_GETFL\n");
#endif

#ifdef F_SETFL
	CompareConstant(F_SETFL,4)
#else
Msg( "Warning: Constant not found: F_SETFL\n");
#endif

#ifdef F_GETLK
	CompareConstant(F_GETLK,5)
#else
Msg( "Warning: Constant not found: F_GETLK\n");
#endif

#ifdef F_SETLK
	CompareConstant(F_SETLK,6)
#else
Msg( "Warning: Constant not found: F_SETLK\n");
#endif

#ifdef F_SETLKW
	CompareConstant(F_SETLKW,7)
#else
Msg( "Warning: Constant not found: F_SETLKW\n");
#endif

#ifdef F_SETOWN
	CompareConstant(F_SETOWN,8)
#else
Msg( "Warning: Constant not found: F_SETOWN\n");
#endif

#ifdef F_GETOWN
	CompareConstant(F_GETOWN,9)
#else
Msg( "Warning: Constant not found: F_GETOWN\n");
#endif

#ifdef FD_CLOEXEC
	CompareConstant(FD_CLOEXEC,1)
#else
Msg( "Warning: Constant not found: FD_CLOEXEC\n");
#endif

#ifdef F_RDLCK
	CompareConstant(F_RDLCK,0)
#else
Msg( "Warning: Constant not found: F_RDLCK\n");
#endif

#ifdef F_WRLCK
	CompareConstant(F_WRLCK,1)
#else
Msg( "Warning: Constant not found: F_WRLCK\n");
#endif

#ifdef F_UNLCK
	CompareConstant(F_UNLCK,2)
#else
Msg( "Warning: Constant not found: F_UNLCK\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in fcntl.h\n",cnt);
return cnt;
#endif

}
