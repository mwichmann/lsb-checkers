/*
 * Test of fcntl.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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

#ifdef _LSB_DEFAULT_ARCH
#ifdef O_RDONLY
	CompareConstant(O_RDONLY,00,1169,architecture)
#else
Msg( "Error: Constant not found: O_RDONLY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef O_NDELAY
	CompareConstant(O_NDELAY,04000,1178,architecture)
#else
Msg( "Error: Constant not found: O_NDELAY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef F_DUPFD
	CompareConstant(F_DUPFD,0,1184,architecture)
#else
Msg( "Error: Constant not found: F_DUPFD\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef F_SETLK
	CompareConstant(F_SETLK,6,1190,architecture)
#else
Msg( "Error: Constant not found: F_SETLK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef O_RDWR
	CompareConstant(O_RDWR,02,1171,architecture)
#else
Msg( "Error: Constant not found: O_RDWR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef O_CREAT
	CompareConstant(O_CREAT,0100,1172,architecture)
#else
Msg( "Error: Constant not found: O_CREAT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef F_GETLK
	CompareConstant(F_GETLK,5,1189,architecture)
#else
Msg( "Error: Constant not found: F_GETLK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef O_NONBLOCK
	CompareConstant(O_NONBLOCK,04000,1177,architecture)
#else
Msg( "Error: Constant not found: O_NONBLOCK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef O_ACCMODE
	CompareConstant(O_ACCMODE,0003,1168,architecture)
#else
Msg( "Error: Constant not found: O_ACCMODE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef F_GETFD
	CompareConstant(F_GETFD,1,1185,architecture)
#else
Msg( "Error: Constant not found: F_GETFD\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef O_EXCL
	CompareConstant(O_EXCL,0200,1173,architecture)
#else
Msg( "Error: Constant not found: O_EXCL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef FD_CLOEXEC
	CompareConstant(FD_CLOEXEC,1,1197,architecture)
#else
Msg( "Error: Constant not found: FD_CLOEXEC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef F_GETOWN
	CompareConstant(F_GETOWN,9,1196,architecture)
#else
Msg( "Error: Constant not found: F_GETOWN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef F_SETFL
	CompareConstant(F_SETFL,4,1188,architecture)
#else
Msg( "Error: Constant not found: F_SETFL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef F_SETFD
	CompareConstant(F_SETFD,2,1186,architecture)
#else
Msg( "Error: Constant not found: F_SETFD\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef O_ASYNC
	CompareConstant(O_ASYNC,020000,1181,architecture)
#else
Msg( "Error: Constant not found: O_ASYNC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef F_SETLKW
	CompareConstant(F_SETLKW,7,1191,architecture)
#else
Msg( "Error: Constant not found: F_SETLKW\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef F_WRLCK
	CompareConstant(F_WRLCK,1,1199,architecture)
#else
Msg( "Error: Constant not found: F_WRLCK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef F_SETOWN
	CompareConstant(F_SETOWN,8,1195,architecture)
#else
Msg( "Error: Constant not found: F_SETOWN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef O_SYNC
	CompareConstant(O_SYNC,010000,1179,architecture)
#else
Msg( "Error: Constant not found: O_SYNC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef F_GETFL
	CompareConstant(F_GETFL,3,1187,architecture)
#else
Msg( "Error: Constant not found: F_GETFL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef F_UNLCK
	CompareConstant(F_UNLCK,2,1200,architecture)
#else
Msg( "Error: Constant not found: F_UNLCK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef F_RDLCK
	CompareConstant(F_RDLCK,0,1198,architecture)
#else
Msg( "Error: Constant not found: F_RDLCK\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef O_NOCTTY
	CompareConstant(O_NOCTTY,0400,1174,architecture)
#else
Msg( "Error: Constant not found: O_NOCTTY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef O_TRUNC
	CompareConstant(O_TRUNC,01000,1175,architecture)
#else
Msg( "Error: Constant not found: O_TRUNC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef O_APPEND
	CompareConstant(O_APPEND,02000,1176,architecture)
#else
Msg( "Error: Constant not found: O_APPEND\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef O_WRONLY
	CompareConstant(O_WRONLY,01,1170,architecture)
#else
Msg( "Error: Constant not found: O_WRONLY\n");
cnt++;
#endif

#endif

#ifdef __i386__
CheckTypeSize(struct flock,16, 10217, 2)
CheckOffset(struct flock,l_type,0,2,34302)
CheckOffset(struct flock,l_whence,2,2,34303)
CheckOffset(struct flock,l_start,4,2,34304)
CheckOffset(struct flock,l_len,8,2,34305)
CheckOffset(struct flock,l_pid,12,2,34306)
#elif __ia64__
CheckTypeSize(struct flock,32, 10217, 3)
#elif __powerpc__
CheckTypeSize(struct flock,16, 10217, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10217,0);
Msg("Find size of flock (10217)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct flock64,24, 10218, 2)
CheckOffset(struct flock64,l_type,0,2,34307)
CheckOffset(struct flock64,l_whence,2,2,34308)
CheckOffset(struct flock64,l_start,4,2,34309)
CheckOffset(struct flock64,l_len,12,2,34310)
CheckOffset(struct flock64,l_pid,20,2,34311)
#elif __ia64__
CheckTypeSize(struct flock64,32, 10218, 3)
#elif __powerpc__
CheckTypeSize(struct flock64,32, 10218, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10218,0);
Msg("Find size of flock64 (10218)\n");
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
