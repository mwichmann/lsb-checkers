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

#ifdef O_ACCMODE
	CompareConstant(O_ACCMODE,0003)
#else
Msg( "Error: Constant not found: O_ACCMODE\n");
cnt++;
#endif

#ifdef O_RDONLY
	CompareConstant(O_RDONLY,00)
#else
Msg( "Error: Constant not found: O_RDONLY\n");
cnt++;
#endif

#ifdef O_WRONLY
	CompareConstant(O_WRONLY,01)
#else
Msg( "Error: Constant not found: O_WRONLY\n");
cnt++;
#endif

#ifdef O_RDWR
	CompareConstant(O_RDWR,02)
#else
Msg( "Error: Constant not found: O_RDWR\n");
cnt++;
#endif

#ifdef O_CREAT
	CompareConstant(O_CREAT,0100)
#else
Msg( "Error: Constant not found: O_CREAT\n");
cnt++;
#endif

#ifdef O_EXCL
	CompareConstant(O_EXCL,0200)
#else
Msg( "Error: Constant not found: O_EXCL\n");
cnt++;
#endif

#ifdef O_NOCTTY
	CompareConstant(O_NOCTTY,0400)
#else
Msg( "Error: Constant not found: O_NOCTTY\n");
cnt++;
#endif

#ifdef O_TRUNC
	CompareConstant(O_TRUNC,01000)
#else
Msg( "Error: Constant not found: O_TRUNC\n");
cnt++;
#endif

#ifdef O_APPEND
	CompareConstant(O_APPEND,02000)
#else
Msg( "Error: Constant not found: O_APPEND\n");
cnt++;
#endif

#ifdef O_NONBLOCK
	CompareConstant(O_NONBLOCK,04000)
#else
Msg( "Error: Constant not found: O_NONBLOCK\n");
cnt++;
#endif

#ifdef O_NDELAY
	CompareConstant(O_NDELAY,04000)
#else
Msg( "Error: Constant not found: O_NDELAY\n");
cnt++;
#endif

#ifdef O_SYNC
	CompareConstant(O_SYNC,010000)
#else
Msg( "Error: Constant not found: O_SYNC\n");
cnt++;
#endif

#ifdef O_ASYNC
	CompareConstant(O_ASYNC,020000)
#else
Msg( "Error: Constant not found: O_ASYNC\n");
cnt++;
#endif

#ifdef F_DUPFD
	CompareConstant(F_DUPFD,0)
#else
Msg( "Error: Constant not found: F_DUPFD\n");
cnt++;
#endif

#ifdef F_GETFD
	CompareConstant(F_GETFD,1)
#else
Msg( "Error: Constant not found: F_GETFD\n");
cnt++;
#endif

#ifdef F_SETFD
	CompareConstant(F_SETFD,2)
#else
Msg( "Error: Constant not found: F_SETFD\n");
cnt++;
#endif

#ifdef F_GETFL
	CompareConstant(F_GETFL,3)
#else
Msg( "Error: Constant not found: F_GETFL\n");
cnt++;
#endif

#ifdef F_SETFL
	CompareConstant(F_SETFL,4)
#else
Msg( "Error: Constant not found: F_SETFL\n");
cnt++;
#endif

#ifdef F_GETLK
	CompareConstant(F_GETLK,5)
#else
Msg( "Error: Constant not found: F_GETLK\n");
cnt++;
#endif

#ifdef F_SETLK
	CompareConstant(F_SETLK,6)
#else
Msg( "Error: Constant not found: F_SETLK\n");
cnt++;
#endif

#ifdef F_SETLKW
	CompareConstant(F_SETLKW,7)
#else
Msg( "Error: Constant not found: F_SETLKW\n");
cnt++;
#endif

#ifdef F_SETOWN
	CompareConstant(F_SETOWN,8)
#else
Msg( "Error: Constant not found: F_SETOWN\n");
cnt++;
#endif

#ifdef F_GETOWN
	CompareConstant(F_GETOWN,9)
#else
Msg( "Error: Constant not found: F_GETOWN\n");
cnt++;
#endif

#ifdef F_RDLCK
	CompareConstant(F_RDLCK,0)
#else
Msg( "Error: Constant not found: F_RDLCK\n");
cnt++;
#endif

#ifdef F_WRLCK
	CompareConstant(F_WRLCK,1)
#else
Msg( "Error: Constant not found: F_WRLCK\n");
cnt++;
#endif

#ifdef F_UNLCK
	CompareConstant(F_UNLCK,2)
#else
Msg( "Error: Constant not found: F_UNLCK\n");
cnt++;
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
