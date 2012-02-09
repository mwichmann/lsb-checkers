/*
 * Test of fcntl.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in fcntl.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef O_ACCMODE
	CompareConstant(O_ACCMODE,0003,1168,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: O_ACCMODE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_RDONLY
	CompareConstant(O_RDONLY,00,1169,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: O_RDONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_WRONLY
	CompareConstant(O_WRONLY,01,1170,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: O_WRONLY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_RDWR
	CompareConstant(O_RDWR,02,1171,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: O_RDWR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_CREAT
	CompareConstant(O_CREAT,0100,1172,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: O_CREAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_EXCL
	CompareConstant(O_EXCL,0200,1173,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: O_EXCL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_NOCTTY
	CompareConstant(O_NOCTTY,0400,1174,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: O_NOCTTY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_TRUNC
	CompareConstant(O_TRUNC,01000,1175,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: O_TRUNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_APPEND
	CompareConstant(O_APPEND,02000,1176,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: O_APPEND\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_NONBLOCK
	CompareConstant(O_NONBLOCK,04000,1177,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: O_NONBLOCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_NDELAY
	CompareConstant(O_NDELAY,04000,1178,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: O_NDELAY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_SYNC
	CompareConstant(O_SYNC,010000,1179,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: O_SYNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_ASYNC
	CompareConstant(O_ASYNC,020000,1181,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: O_ASYNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_DSYNC
	CompareConstant(O_DSYNC,010000,1182,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: O_DSYNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef O_RSYNC
	CompareConstant(O_RSYNC,010000,1183,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: O_RSYNC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_DUPFD
	CompareConstant(F_DUPFD,0,1184,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: F_DUPFD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_GETFD
	CompareConstant(F_GETFD,1,1185,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: F_GETFD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_SETFD
	CompareConstant(F_SETFD,2,1186,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: F_SETFD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_GETFL
	CompareConstant(F_GETFL,3,1187,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: F_GETFL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_SETFL
	CompareConstant(F_SETFL,4,1188,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: F_SETFL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_GETLK
	CompareConstant(F_GETLK,5,1189,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: F_GETLK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_SETLK
	CompareConstant(F_SETLK,6,1190,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: F_SETLK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_SETLKW
	CompareConstant(F_SETLKW,7,1191,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: F_SETLKW\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef F_GETLK64
	CompareConstant(F_GETLK64,12,1192,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_GETLK64\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef F_GETLK64
	CompareConstant(F_GETLK64,12,1192,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_GETLK64\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef F_GETLK64
	CompareConstant(F_GETLK64,5,1192,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_GETLK64\n");
cnt++;
#endif

#elif defined __i386__
#ifdef F_GETLK64
	CompareConstant(F_GETLK64,12,1192,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_GETLK64\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef F_GETLK64
	CompareConstant(F_GETLK64,5,1192,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_GETLK64\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef F_GETLK64
	CompareConstant(F_GETLK64,5,1192,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_GETLK64\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef F_GETLK64
	CompareConstant(F_GETLK64,12,1192,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_GETLK64\n");
cnt++;
#endif

#else
Msg( "No definition for F_GETLK64 (1192, int) in db for this architecture\n");
#ifdef F_GETLK64
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1192,%d,'""2.1""',NULL);\n", architecture, F_GETLK64);
#endif
#endif
#if defined __powerpc64__
#ifdef F_SETLK64
	CompareConstant(F_SETLK64,13,1193,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_SETLK64\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef F_SETLK64
	CompareConstant(F_SETLK64,13,1193,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_SETLK64\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef F_SETLK64
	CompareConstant(F_SETLK64,6,1193,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_SETLK64\n");
cnt++;
#endif

#elif defined __i386__
#ifdef F_SETLK64
	CompareConstant(F_SETLK64,13,1193,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_SETLK64\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef F_SETLK64
	CompareConstant(F_SETLK64,6,1193,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_SETLK64\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef F_SETLK64
	CompareConstant(F_SETLK64,6,1193,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_SETLK64\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef F_SETLK64
	CompareConstant(F_SETLK64,13,1193,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_SETLK64\n");
cnt++;
#endif

#else
Msg( "No definition for F_SETLK64 (1193, int) in db for this architecture\n");
#ifdef F_SETLK64
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1193,%d,'""2.1""',NULL);\n", architecture, F_SETLK64);
#endif
#endif
#if defined __powerpc64__
#ifdef F_SETLKW64
	CompareConstant(F_SETLKW64,14,1194,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_SETLKW64\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef F_SETLKW64
	CompareConstant(F_SETLKW64,14,1194,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_SETLKW64\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef F_SETLKW64
	CompareConstant(F_SETLKW64,7,1194,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_SETLKW64\n");
cnt++;
#endif

#elif defined __i386__
#ifdef F_SETLKW64
	CompareConstant(F_SETLKW64,14,1194,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_SETLKW64\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef F_SETLKW64
	CompareConstant(F_SETLKW64,7,1194,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_SETLKW64\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef F_SETLKW64
	CompareConstant(F_SETLKW64,7,1194,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_SETLKW64\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef F_SETLKW64
	CompareConstant(F_SETLKW64,14,1194,architecture,2.1,NULL)
#else
Msg( "Error: Constant not found: F_SETLKW64\n");
cnt++;
#endif

#else
Msg( "No definition for F_SETLKW64 (1194, int) in db for this architecture\n");
#ifdef F_SETLKW64
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,1194,%d,'""2.1""',NULL);\n", architecture, F_SETLKW64);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef F_SETOWN
	CompareConstant(F_SETOWN,8,1195,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: F_SETOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_GETOWN
	CompareConstant(F_GETOWN,9,1196,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: F_GETOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FD_CLOEXEC
	CompareConstant(FD_CLOEXEC,1,1197,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: FD_CLOEXEC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_RDLCK
	CompareConstant(F_RDLCK,0,1198,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: F_RDLCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_WRLCK
	CompareConstant(F_WRLCK,1,1199,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: F_WRLCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_UNLCK
	CompareConstant(F_UNLCK,2,1200,architecture,1.1,NULL)
#else
Msg( "Error: Constant not found: F_UNLCK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AT_FDCWD
	CompareConstant(AT_FDCWD,-100,15572,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: AT_FDCWD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AT_SYMLINK_NOFOLLOW
	CompareConstant(AT_SYMLINK_NOFOLLOW,0x100,15573,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: AT_SYMLINK_NOFOLLOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AT_REMOVEDIR
	CompareConstant(AT_REMOVEDIR,0x200,15574,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: AT_REMOVEDIR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AT_SYMLINK_FOLLOW
	CompareConstant(AT_SYMLINK_FOLLOW,0x400,15575,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: AT_SYMLINK_FOLLOW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AT_EACCESS
	CompareConstant(AT_EACCESS,0x200,15576,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: AT_EACCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POSIX_FADV_NORMAL
	CompareConstant(POSIX_FADV_NORMAL,0,15577,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POSIX_FADV_RANDOM
	CompareConstant(POSIX_FADV_RANDOM,1,15578,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_RANDOM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POSIX_FADV_SEQUENTIAL
	CompareConstant(POSIX_FADV_SEQUENTIAL,2,15579,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_SEQUENTIAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef POSIX_FADV_WILLNEED
	CompareConstant(POSIX_FADV_WILLNEED,3,15580,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_WILLNEED\n");
cnt++;
#endif

#endif

#if defined __powerpc64__
#ifdef POSIX_FADV_DONTNEED
	CompareConstant(POSIX_FADV_DONTNEED,4,15581,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_DONTNEED\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef POSIX_FADV_DONTNEED
	CompareConstant(POSIX_FADV_DONTNEED,4,15581,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_DONTNEED\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef POSIX_FADV_DONTNEED
	CompareConstant(POSIX_FADV_DONTNEED,4,15581,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_DONTNEED\n");
cnt++;
#endif

#elif defined __i386__
#ifdef POSIX_FADV_DONTNEED
	CompareConstant(POSIX_FADV_DONTNEED,4,15581,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_DONTNEED\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef POSIX_FADV_DONTNEED
	CompareConstant(POSIX_FADV_DONTNEED,6,15581,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_DONTNEED\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef POSIX_FADV_DONTNEED
	CompareConstant(POSIX_FADV_DONTNEED,4,15581,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_DONTNEED\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef POSIX_FADV_DONTNEED
	CompareConstant(POSIX_FADV_DONTNEED,4,15581,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_DONTNEED\n");
cnt++;
#endif

#else
Msg( "No definition for POSIX_FADV_DONTNEED (15581, int) in db for this architecture\n");
#ifdef POSIX_FADV_DONTNEED
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,15581,%d,'""3.2""',NULL);\n", architecture, POSIX_FADV_DONTNEED);
#endif
#endif
#if defined __powerpc64__
#ifdef POSIX_FADV_NOREUSE
	CompareConstant(POSIX_FADV_NOREUSE,5,15582,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_NOREUSE\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef POSIX_FADV_NOREUSE
	CompareConstant(POSIX_FADV_NOREUSE,5,15582,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_NOREUSE\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef POSIX_FADV_NOREUSE
	CompareConstant(POSIX_FADV_NOREUSE,5,15582,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_NOREUSE\n");
cnt++;
#endif

#elif defined __i386__
#ifdef POSIX_FADV_NOREUSE
	CompareConstant(POSIX_FADV_NOREUSE,5,15582,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_NOREUSE\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef POSIX_FADV_NOREUSE
	CompareConstant(POSIX_FADV_NOREUSE,7,15582,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_NOREUSE\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef POSIX_FADV_NOREUSE
	CompareConstant(POSIX_FADV_NOREUSE,5,15582,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_NOREUSE\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef POSIX_FADV_NOREUSE
	CompareConstant(POSIX_FADV_NOREUSE,5,15582,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: POSIX_FADV_NOREUSE\n");
cnt++;
#endif

#else
Msg( "No definition for POSIX_FADV_NOREUSE (15582, int) in db for this architecture\n");
#ifdef POSIX_FADV_NOREUSE
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,15582,%d,'""3.2""',NULL);\n", architecture, POSIX_FADV_NOREUSE);
#endif
#endif
#if defined __powerpc64__
#ifdef O_LARGEFILE
	CompareConstant(O_LARGEFILE,0200000,3020,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: O_LARGEFILE\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef O_LARGEFILE
	CompareConstant(O_LARGEFILE,0200000,3020,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: O_LARGEFILE\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef O_LARGEFILE
	CompareConstant(O_LARGEFILE,0,3020,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: O_LARGEFILE\n");
cnt++;
#endif

#elif defined __i386__
#ifdef O_LARGEFILE
	CompareConstant(O_LARGEFILE,0100000,3020,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: O_LARGEFILE\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef O_LARGEFILE
	CompareConstant(O_LARGEFILE,0,3020,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: O_LARGEFILE\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef O_LARGEFILE
	CompareConstant(O_LARGEFILE,0,3020,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: O_LARGEFILE\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef O_LARGEFILE
	CompareConstant(O_LARGEFILE,0100000,3020,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: O_LARGEFILE\n");
cnt++;
#endif

#else
Msg( "No definition for O_LARGEFILE (3020, int) in db for this architecture\n");
#ifdef O_LARGEFILE
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,3020,%d,'""3.2""',NULL);\n", architecture, O_LARGEFILE);
#endif
#endif
#if defined __powerpc64__
#ifdef O_DIRECTORY
	CompareConstant(O_DIRECTORY,040000,3021,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: O_DIRECTORY\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef O_DIRECTORY
	CompareConstant(O_DIRECTORY,040000,3021,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: O_DIRECTORY\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef O_DIRECTORY
	CompareConstant(O_DIRECTORY,0200000,3021,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: O_DIRECTORY\n");
cnt++;
#endif

#elif defined __i386__
#ifdef O_DIRECTORY
	CompareConstant(O_DIRECTORY,0200000,3021,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: O_DIRECTORY\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef O_DIRECTORY
	CompareConstant(O_DIRECTORY,0200000,3021,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: O_DIRECTORY\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef O_DIRECTORY
	CompareConstant(O_DIRECTORY,0200000,3021,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: O_DIRECTORY\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef O_DIRECTORY
	CompareConstant(O_DIRECTORY,0200000,3021,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: O_DIRECTORY\n");
cnt++;
#endif

#else
Msg( "No definition for O_DIRECTORY (3021, int) in db for this architecture\n");
#ifdef O_DIRECTORY
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,3021,%d,'""4.0""',NULL);\n", architecture, O_DIRECTORY);
#endif
#endif
#if defined __powerpc64__
#ifdef O_NOFOLLOW
	CompareConstant(O_NOFOLLOW,0100000,3022,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: O_NOFOLLOW\n");
cnt++;
#endif

#elif defined __powerpc__ && !defined __powerpc64__
#ifdef O_NOFOLLOW
	CompareConstant(O_NOFOLLOW,0100000,3022,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: O_NOFOLLOW\n");
cnt++;
#endif

#elif defined __ia64__
#ifdef O_NOFOLLOW
	CompareConstant(O_NOFOLLOW,0400000,3022,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: O_NOFOLLOW\n");
cnt++;
#endif

#elif defined __i386__
#ifdef O_NOFOLLOW
	CompareConstant(O_NOFOLLOW,0400000,3022,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: O_NOFOLLOW\n");
cnt++;
#endif

#elif defined __s390x__
#ifdef O_NOFOLLOW
	CompareConstant(O_NOFOLLOW,0400000,3022,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: O_NOFOLLOW\n");
cnt++;
#endif

#elif defined __x86_64__
#ifdef O_NOFOLLOW
	CompareConstant(O_NOFOLLOW,0400000,3022,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: O_NOFOLLOW\n");
cnt++;
#endif

#elif defined __s390__ && !defined __s390x__
#ifdef O_NOFOLLOW
	CompareConstant(O_NOFOLLOW,0400000,3022,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: O_NOFOLLOW\n");
cnt++;
#endif

#else
Msg( "No definition for O_NOFOLLOW (3022, int) in db for this architecture\n");
#ifdef O_NOFOLLOW
Sql( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue,ACappearedin,ACwithdrawnin) VALUES (%d,3022,%d,'""4.0""',NULL);\n", architecture, O_NOFOLLOW);
#endif
#endif
#if _LSB_DEFAULT_ARCH
#ifdef F_SETSIG
	CompareConstant(F_SETSIG,10,3023,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: F_SETSIG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef F_GETSIG
	CompareConstant(F_GETSIG,11,3024,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: F_GETSIG\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(struct flock,32, 10217, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct flock,l_whence,2,12,34303)
CheckOffset(struct flock,l_whence,2,12,34303)
CheckMemberSize(struct flock,l_start,8,12,34304)
CheckOffset(struct flock,l_start,8,12,34304)
CheckMemberSize(struct flock,l_len,8,12,34305)
CheckOffset(struct flock,l_len,16,12,34305)
CheckMemberSize(struct flock,l_pid,4,12,34306)
CheckOffset(struct flock,l_pid,24,12,34306)
#elif defined __x86_64__
CheckTypeSize(struct flock,32, 10217, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct flock,l_whence,2,11,34303)
CheckOffset(struct flock,l_whence,2,11,34303)
CheckMemberSize(struct flock,l_start,8,11,34304)
CheckOffset(struct flock,l_start,8,11,34304)
CheckMemberSize(struct flock,l_len,8,11,34305)
CheckOffset(struct flock,l_len,16,11,34305)
CheckMemberSize(struct flock,l_pid,4,11,34306)
CheckOffset(struct flock,l_pid,24,11,34306)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct flock,16, 10217, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct flock,l_whence,2,10,34303)
CheckOffset(struct flock,l_whence,2,10,34303)
CheckMemberSize(struct flock,l_start,4,10,34304)
CheckOffset(struct flock,l_start,4,10,34304)
CheckMemberSize(struct flock,l_len,4,10,34305)
CheckOffset(struct flock,l_len,8,10,34305)
CheckMemberSize(struct flock,l_pid,4,10,34306)
CheckOffset(struct flock,l_pid,12,10,34306)
#elif defined __powerpc64__
CheckTypeSize(struct flock,32, 10217, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct flock,l_whence,2,9,34303)
CheckOffset(struct flock,l_whence,2,9,34303)
CheckMemberSize(struct flock,l_start,8,9,34304)
CheckOffset(struct flock,l_start,8,9,34304)
CheckMemberSize(struct flock,l_len,8,9,34305)
CheckOffset(struct flock,l_len,16,9,34305)
CheckMemberSize(struct flock,l_pid,4,9,34306)
CheckOffset(struct flock,l_pid,24,9,34306)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct flock,16, 10217, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct flock,l_whence,2,6,34303)
CheckOffset(struct flock,l_whence,2,6,34303)
CheckMemberSize(struct flock,l_start,4,6,34304)
CheckOffset(struct flock,l_start,4,6,34304)
CheckMemberSize(struct flock,l_len,4,6,34305)
CheckOffset(struct flock,l_len,8,6,34305)
CheckMemberSize(struct flock,l_pid,4,6,34306)
CheckOffset(struct flock,l_pid,12,6,34306)
#elif defined __ia64__
CheckTypeSize(struct flock,32, 10217, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct flock,l_whence,2,3,34303)
CheckOffset(struct flock,l_whence,2,3,34303)
CheckMemberSize(struct flock,l_start,8,3,34304)
CheckOffset(struct flock,l_start,8,3,34304)
CheckMemberSize(struct flock,l_len,8,3,34305)
CheckOffset(struct flock,l_len,16,3,34305)
CheckMemberSize(struct flock,l_pid,4,3,34306)
CheckOffset(struct flock,l_pid,24,3,34306)
#elif defined __i386__
CheckTypeSize(struct flock,16, 10217, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct flock,l_type,2,2,34302)
CheckOffset(struct flock,l_type,0,2,34302)
CheckMemberSize(struct flock,l_whence,2,2,34303)
CheckOffset(struct flock,l_whence,2,2,34303)
CheckMemberSize(struct flock,l_start,4,2,34304)
CheckOffset(struct flock,l_start,4,2,34304)
CheckMemberSize(struct flock,l_len,4,2,34305)
CheckOffset(struct flock,l_len,8,2,34305)
CheckMemberSize(struct flock,l_pid,4,2,34306)
CheckOffset(struct flock,l_pid,12,2,34306)
#else
Msg("Find size of flock (10217)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,10217,0);
#endif

#if defined __s390x__
CheckTypeSize(struct flock64,32, 10218, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct flock64,l_whence,2,12,34308)
CheckOffset(struct flock64,l_whence,2,12,34308)
CheckMemberSize(struct flock64,l_start,8,12,34309)
CheckOffset(struct flock64,l_start,8,12,34309)
CheckMemberSize(struct flock64,l_len,8,12,34310)
CheckOffset(struct flock64,l_len,16,12,34310)
CheckMemberSize(struct flock64,l_pid,4,12,34311)
CheckOffset(struct flock64,l_pid,24,12,34311)
#elif defined __x86_64__
CheckTypeSize(struct flock64,32, 10218, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct flock64,l_whence,2,11,34308)
CheckOffset(struct flock64,l_whence,2,11,34308)
CheckMemberSize(struct flock64,l_start,8,11,34309)
CheckOffset(struct flock64,l_start,8,11,34309)
CheckMemberSize(struct flock64,l_len,8,11,34310)
CheckOffset(struct flock64,l_len,16,11,34310)
CheckMemberSize(struct flock64,l_pid,4,11,34311)
CheckOffset(struct flock64,l_pid,24,11,34311)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct flock64,32, 10218, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct flock64,l_whence,2,10,34308)
CheckOffset(struct flock64,l_whence,2,10,34308)
CheckMemberSize(struct flock64,l_start,8,10,34309)
CheckOffset(struct flock64,l_start,8,10,34309)
CheckMemberSize(struct flock64,l_len,8,10,34310)
CheckOffset(struct flock64,l_len,16,10,34310)
CheckMemberSize(struct flock64,l_pid,4,10,34311)
CheckOffset(struct flock64,l_pid,24,10,34311)
#elif defined __powerpc64__
CheckTypeSize(struct flock64,32, 10218, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct flock64,l_whence,2,9,34308)
CheckOffset(struct flock64,l_whence,2,9,34308)
CheckMemberSize(struct flock64,l_start,8,9,34309)
CheckOffset(struct flock64,l_start,8,9,34309)
CheckMemberSize(struct flock64,l_len,8,9,34310)
CheckOffset(struct flock64,l_len,16,9,34310)
CheckMemberSize(struct flock64,l_pid,4,9,34311)
CheckOffset(struct flock64,l_pid,24,9,34311)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct flock64,32, 10218, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct flock64,l_whence,2,6,34308)
CheckOffset(struct flock64,l_whence,2,6,34308)
CheckMemberSize(struct flock64,l_start,8,6,34309)
CheckOffset(struct flock64,l_start,8,6,34309)
CheckMemberSize(struct flock64,l_len,8,6,34310)
CheckOffset(struct flock64,l_len,16,6,34310)
CheckMemberSize(struct flock64,l_pid,4,6,34311)
CheckOffset(struct flock64,l_pid,24,6,34311)
#elif defined __ia64__
CheckTypeSize(struct flock64,32, 10218, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct flock64,l_whence,2,3,34308)
CheckOffset(struct flock64,l_whence,2,3,34308)
CheckMemberSize(struct flock64,l_start,8,3,34309)
CheckOffset(struct flock64,l_start,8,3,34309)
CheckMemberSize(struct flock64,l_len,8,3,34310)
CheckOffset(struct flock64,l_len,16,3,34310)
CheckMemberSize(struct flock64,l_pid,4,3,34311)
CheckOffset(struct flock64,l_pid,24,3,34311)
#elif defined __i386__
CheckTypeSize(struct flock64,24, 10218, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct flock64,l_type,2,2,34307)
CheckOffset(struct flock64,l_type,0,2,34307)
CheckMemberSize(struct flock64,l_whence,2,2,34308)
CheckOffset(struct flock64,l_whence,2,2,34308)
CheckMemberSize(struct flock64,l_start,8,2,34309)
CheckOffset(struct flock64,l_start,4,2,34309)
CheckMemberSize(struct flock64,l_len,8,2,34310)
CheckOffset(struct flock64,l_len,12,2,34310)
CheckMemberSize(struct flock64,l_pid,4,2,34311)
CheckOffset(struct flock64,l_pid,20,2,34311)
#else
Msg("Find size of flock64 (10218)\n");
Sql("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0, NULL);\n",architecture,10218,0);
#endif

extern int creat_db(const char *, mode_t);
CheckInterfacedef(creat,creat_db);
extern int creat64_db(const char *, mode_t);
CheckInterfacedef(creat64,creat64_db);
extern int fcntl_db(int, int, ...);
CheckInterfacedef(fcntl,fcntl_db);
extern int open_db(const char *, int, ...);
CheckInterfacedef(open,open_db);
extern int open64_db(const char *, int, ...);
CheckInterfacedef(open64,open64_db);
extern int posix_fadvise_db(int, off_t, off_t, int);
CheckInterfacedef(posix_fadvise,posix_fadvise_db);
extern int posix_fallocate_db(int, off_t, off_t);
CheckInterfacedef(posix_fallocate,posix_fallocate_db);
extern int posix_fadvise64_db(int, off64_t, off64_t, int);
CheckInterfacedef(posix_fadvise64,posix_fadvise64_db);
extern int posix_fallocate64_db(int, off64_t, off64_t);
CheckInterfacedef(posix_fallocate64,posix_fallocate64_db);
extern int openat_db(int, const char *, int, ...);
CheckInterfacedef(openat,openat_db);
extern int openat64_db(int, const char *, int, ...);
CheckInterfacedef(openat64,openat64_db);
extern int open64_db(const char *, int, ...);
CheckInterfacedef(open64,open64_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
Msg("%d tests passed out of %d tests in fcntl.h\n\n",pcnt,cnt);
return cnt;
#endif

}
