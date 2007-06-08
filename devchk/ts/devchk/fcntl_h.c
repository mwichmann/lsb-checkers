/*
 * Test of fcntl.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in fcntl.h\n");
#endif

printf("Checking data structures in fcntl.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef O_ACCMODE
	CompareConstant(O_ACCMODE,0003,1168,architecture)
#else
Msg( "Error: Constant not found: O_ACCMODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_RDONLY
	CompareConstant(O_RDONLY,00,1169,architecture)
#else
Msg( "Error: Constant not found: O_RDONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_WRONLY
	CompareConstant(O_WRONLY,01,1170,architecture)
#else
Msg( "Error: Constant not found: O_WRONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_RDWR
	CompareConstant(O_RDWR,02,1171,architecture)
#else
Msg( "Error: Constant not found: O_RDWR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_CREAT
	CompareConstant(O_CREAT,0100,1172,architecture)
#else
Msg( "Error: Constant not found: O_CREAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_EXCL
	CompareConstant(O_EXCL,0200,1173,architecture)
#else
Msg( "Error: Constant not found: O_EXCL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_NOCTTY
	CompareConstant(O_NOCTTY,0400,1174,architecture)
#else
Msg( "Error: Constant not found: O_NOCTTY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_TRUNC
	CompareConstant(O_TRUNC,01000,1175,architecture)
#else
Msg( "Error: Constant not found: O_TRUNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_APPEND
	CompareConstant(O_APPEND,02000,1176,architecture)
#else
Msg( "Error: Constant not found: O_APPEND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_NONBLOCK
	CompareConstant(O_NONBLOCK,04000,1177,architecture)
#else
Msg( "Error: Constant not found: O_NONBLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_NDELAY
	CompareConstant(O_NDELAY,04000,1178,architecture)
#else
Msg( "Error: Constant not found: O_NDELAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_SYNC
	CompareConstant(O_SYNC,010000,1179,architecture)
#else
Msg( "Error: Constant not found: O_SYNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_ASYNC
	CompareConstant(O_ASYNC,020000,1181,architecture)
#else
Msg( "Error: Constant not found: O_ASYNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_DUPFD
	CompareConstant(F_DUPFD,0,1184,architecture)
#else
Msg( "Error: Constant not found: F_DUPFD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_GETFD
	CompareConstant(F_GETFD,1,1185,architecture)
#else
Msg( "Error: Constant not found: F_GETFD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_SETFD
	CompareConstant(F_SETFD,2,1186,architecture)
#else
Msg( "Error: Constant not found: F_SETFD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_GETFL
	CompareConstant(F_GETFL,3,1187,architecture)
#else
Msg( "Error: Constant not found: F_GETFL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_SETFL
	CompareConstant(F_SETFL,4,1188,architecture)
#else
Msg( "Error: Constant not found: F_SETFL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_GETLK
	CompareConstant(F_GETLK,5,1189,architecture)
#else
Msg( "Error: Constant not found: F_GETLK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_SETLK
	CompareConstant(F_SETLK,6,1190,architecture)
#else
Msg( "Error: Constant not found: F_SETLK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_SETLKW
	CompareConstant(F_SETLKW,7,1191,architecture)
#else
Msg( "Error: Constant not found: F_SETLKW\n");
cnt++;
#endif

#endif

#if __powerpc64__
#ifdef F_GETLK64
	CompareConstant(F_GETLK64,12,1192,architecture)
#else
Msg( "Error: Constant not found: F_GETLK64\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef F_GETLK64
	CompareConstant(F_GETLK64,12,1192,architecture)
#else
Msg( "Error: Constant not found: F_GETLK64\n");
cnt++;
#endif

#elif __ia64__
#ifdef F_GETLK64
	CompareConstant(F_GETLK64,5,1192,architecture)
#else
Msg( "Error: Constant not found: F_GETLK64\n");
cnt++;
#endif

#elif __i386__
#ifdef F_GETLK64
	CompareConstant(F_GETLK64,12,1192,architecture)
#else
Msg( "Error: Constant not found: F_GETLK64\n");
cnt++;
#endif

#elif __s390x__
#ifdef F_GETLK64
	CompareConstant(F_GETLK64,5,1192,architecture)
#else
Msg( "Error: Constant not found: F_GETLK64\n");
cnt++;
#endif

#elif __x86_64__
#ifdef F_GETLK64
	CompareConstant(F_GETLK64,5,1192,architecture)
#else
Msg( "Error: Constant not found: F_GETLK64\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef F_GETLK64
	CompareConstant(F_GETLK64,12,1192,architecture)
#else
Msg( "Error: Constant not found: F_GETLK64\n");
cnt++;
#endif

#else
Msg( "No definition for F_GETLK64 (1192, int) in db\n");
#ifdef F_GETLK64
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,1192,%d);\n", architecture, F_GETLK64);
#endif
#endif
#if __powerpc64__
#ifdef F_SETLK64
	CompareConstant(F_SETLK64,13,1193,architecture)
#else
Msg( "Error: Constant not found: F_SETLK64\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef F_SETLK64
	CompareConstant(F_SETLK64,13,1193,architecture)
#else
Msg( "Error: Constant not found: F_SETLK64\n");
cnt++;
#endif

#elif __ia64__
#ifdef F_SETLK64
	CompareConstant(F_SETLK64,6,1193,architecture)
#else
Msg( "Error: Constant not found: F_SETLK64\n");
cnt++;
#endif

#elif __i386__
#ifdef F_SETLK64
	CompareConstant(F_SETLK64,13,1193,architecture)
#else
Msg( "Error: Constant not found: F_SETLK64\n");
cnt++;
#endif

#elif __s390x__
#ifdef F_SETLK64
	CompareConstant(F_SETLK64,6,1193,architecture)
#else
Msg( "Error: Constant not found: F_SETLK64\n");
cnt++;
#endif

#elif __x86_64__
#ifdef F_SETLK64
	CompareConstant(F_SETLK64,6,1193,architecture)
#else
Msg( "Error: Constant not found: F_SETLK64\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef F_SETLK64
	CompareConstant(F_SETLK64,13,1193,architecture)
#else
Msg( "Error: Constant not found: F_SETLK64\n");
cnt++;
#endif

#else
Msg( "No definition for F_SETLK64 (1193, int) in db\n");
#ifdef F_SETLK64
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,1193,%d);\n", architecture, F_SETLK64);
#endif
#endif
#if __powerpc64__
#ifdef F_SETLKW64
	CompareConstant(F_SETLKW64,14,1194,architecture)
#else
Msg( "Error: Constant not found: F_SETLKW64\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef F_SETLKW64
	CompareConstant(F_SETLKW64,14,1194,architecture)
#else
Msg( "Error: Constant not found: F_SETLKW64\n");
cnt++;
#endif

#elif __ia64__
#ifdef F_SETLKW64
	CompareConstant(F_SETLKW64,7,1194,architecture)
#else
Msg( "Error: Constant not found: F_SETLKW64\n");
cnt++;
#endif

#elif __i386__
#ifdef F_SETLKW64
	CompareConstant(F_SETLKW64,14,1194,architecture)
#else
Msg( "Error: Constant not found: F_SETLKW64\n");
cnt++;
#endif

#elif __s390x__
#ifdef F_SETLKW64
	CompareConstant(F_SETLKW64,7,1194,architecture)
#else
Msg( "Error: Constant not found: F_SETLKW64\n");
cnt++;
#endif

#elif __x86_64__
#ifdef F_SETLKW64
	CompareConstant(F_SETLKW64,7,1194,architecture)
#else
Msg( "Error: Constant not found: F_SETLKW64\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef F_SETLKW64
	CompareConstant(F_SETLKW64,14,1194,architecture)
#else
Msg( "Error: Constant not found: F_SETLKW64\n");
cnt++;
#endif

#else
Msg( "No definition for F_SETLKW64 (1194, int) in db\n");
#ifdef F_SETLKW64
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,1194,%d);\n", architecture, F_SETLKW64);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef F_SETOWN
	CompareConstant(F_SETOWN,8,1195,architecture)
#else
Msg( "Error: Constant not found: F_SETOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_GETOWN
	CompareConstant(F_GETOWN,9,1196,architecture)
#else
Msg( "Error: Constant not found: F_GETOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FD_CLOEXEC
	CompareConstant(FD_CLOEXEC,1,1197,architecture)
#else
Msg( "Error: Constant not found: FD_CLOEXEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_RDLCK
	CompareConstant(F_RDLCK,0,1198,architecture)
#else
Msg( "Error: Constant not found: F_RDLCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_WRLCK
	CompareConstant(F_WRLCK,1,1199,architecture)
#else
Msg( "Error: Constant not found: F_WRLCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_UNLCK
	CompareConstant(F_UNLCK,2,1200,architecture)
#else
Msg( "Error: Constant not found: F_UNLCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_SETSIG
	CompareConstant(F_SETSIG,10,3023,architecture)
#else
Msg( "Error: Constant not found: F_SETSIG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_GETSIG
	CompareConstant(F_GETSIG,11,3024,architecture)
#else
Msg( "Error: Constant not found: F_GETSIG\n");
cnt++;
#endif

#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10217,0);
Msg("Find size of flock (10217)\n");
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10218,0);
Msg("Find size of flock64 (10218)\n");
#endif

extern int posix_fadvise_db(int, off_t, off_t, int);
CheckInterfacedef(posix_fadvise,posix_fadvise_db);
extern int posix_fallocate_db(int, off_t, off_t);
CheckInterfacedef(posix_fallocate,posix_fallocate_db);
extern int posix_fadvise64_db(int, off64_t, off64_t, int);
CheckInterfacedef(posix_fadvise64,posix_fadvise64_db);
extern int posix_fallocate64_db(int, off64_t, off64_t);
CheckInterfacedef(posix_fallocate64,posix_fallocate64_db);
extern int lockf64_db(int, int, off64_t);
CheckInterfacedef(lockf64,lockf64_db);
extern int fcntl_db(int, int, ...);
CheckInterfacedef(fcntl,fcntl_db);
extern int open_db(const char *, int, ...);
CheckInterfacedef(open,open_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in fcntl.h\n\n",pcnt,cnt);
return cnt;
#endif

}
