/*
 * Test of sys/types.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include <stdarg.h>
#include "sys/types.h"



#ifdef TET_TEST
void sys_types_h()
{
#else
int sys_types_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/types.h\n");
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef FD_SETSIZE
	CompareConstant(FD_SETSIZE,1024,4416,architecture)
#else
Msg( "Error: Constant not found: FD_SETSIZE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for FD_ZERO(fdsetp) */
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for FD_SET(d,set) */
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for FD_CLR(d,set) */
#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for FD_ISSET(d,set) */
#endif

#ifdef __i386__
CheckTypeSize(int8_t,1, 6995, 2)
#elif __powerpc__
CheckTypeSize(int8_t,1, 6995, 6)
#elif __ia64__
CheckTypeSize(int8_t,1, 6995, 3)
#elif __s390__
CheckTypeSize(int8_t,1, 6995, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6995,0);
Msg("Find size of int8_t (6995)\n");
#endif

#ifdef __i386__
CheckTypeSize(int16_t,2, 6996, 2)
#elif __powerpc__
CheckTypeSize(int16_t,2, 6996, 6)
#elif __ia64__
CheckTypeSize(int16_t,2, 6996, 3)
#elif __s390__
CheckTypeSize(int16_t,2, 6996, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6996,0);
Msg("Find size of int16_t (6996)\n");
#endif

#ifdef __i386__
CheckTypeSize(int32_t,4, 6997, 2)
#elif __ia64__
CheckTypeSize(int32_t,4, 6997, 3)
#elif __powerpc__
CheckTypeSize(int32_t,4, 6997, 6)
#elif __s390__
CheckTypeSize(int32_t,4, 6997, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6997,0);
Msg("Find size of int32_t (6997)\n");
#endif

#ifdef __i386__
CheckTypeSize(int64_t,8, 6998, 2)
#elif __ia64__
CheckTypeSize(int64_t,8, 6998, 3)
#elif __powerpc__
CheckTypeSize(int64_t,8, 6998, 6)
#elif __s390__
CheckTypeSize(int64_t,8, 6998, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6998,0);
Msg("Find size of int64_t (6998)\n");
#endif

#ifdef __i386__
CheckTypeSize(u_int8_t,1, 6999, 2)
#elif __powerpc__
CheckTypeSize(u_int8_t,1, 6999, 6)
#elif __ia64__
CheckTypeSize(u_int8_t,1, 6999, 3)
#elif __s390__
CheckTypeSize(u_int8_t,1, 6999, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6999,0);
Msg("Find size of u_int8_t (6999)\n");
#endif

#ifdef __i386__
CheckTypeSize(u_int16_t,2, 7000, 2)
#elif __powerpc__
CheckTypeSize(u_int16_t,2, 7000, 6)
#elif __ia64__
CheckTypeSize(u_int16_t,2, 7000, 3)
#elif __s390__
CheckTypeSize(u_int16_t,2, 7000, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7000,0);
Msg("Find size of u_int16_t (7000)\n");
#endif

#ifdef __i386__
CheckTypeSize(u_int32_t,4, 7001, 2)
#elif __powerpc__
CheckTypeSize(u_int32_t,4, 7001, 6)
#elif __ia64__
CheckTypeSize(u_int32_t,4, 7001, 3)
#elif __s390__
CheckTypeSize(u_int32_t,4, 7001, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7001,0);
Msg("Find size of u_int32_t (7001)\n");
#endif

#ifdef __i386__
CheckTypeSize(ssize_t,4, 9029, 2)
#elif __ia64__
CheckTypeSize(ssize_t,8, 9029, 3)
#elif __powerpc__
CheckTypeSize(ssize_t,4, 9029, 6)
#elif __s390__
CheckTypeSize(ssize_t,4, 9029, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9029,0);
Msg("Find size of ssize_t (9029)\n");
#endif

#ifdef __i386__
CheckTypeSize(uid_t,4, 9069, 2)
#elif __ia64__
CheckTypeSize(uid_t,4, 9069, 3)
#elif __powerpc__
CheckTypeSize(uid_t,4, 9069, 6)
#elif __s390__
CheckTypeSize(uid_t,4, 9069, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9069,0);
Msg("Find size of uid_t (9069)\n");
#endif

#ifdef __i386__
CheckTypeSize(pid_t,4, 9094, 2)
#elif __ia64__
CheckTypeSize(pid_t,4, 9094, 3)
#elif __powerpc__
CheckTypeSize(pid_t,4, 9094, 6)
#elif __s390__
CheckTypeSize(pid_t,4, 9094, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9094,0);
Msg("Find size of pid_t (9094)\n");
#endif

#ifdef __i386__
CheckTypeSize(off_t,4, 9111, 2)
#elif __ia64__
CheckTypeSize(off_t,8, 9111, 3)
#elif __powerpc__
CheckTypeSize(off_t,4, 9111, 6)
#elif __s390__
CheckTypeSize(off_t,4, 9111, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9111,0);
Msg("Find size of off_t (9111)\n");
#endif

#ifdef __i386__
CheckTypeSize(key_t,4, 9116, 2)
#elif __ia64__
CheckTypeSize(key_t,4, 9116, 3)
#elif __powerpc__
CheckTypeSize(key_t,4, 9116, 6)
#elif __s390__
CheckTypeSize(key_t,4, 9116, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9116,0);
Msg("Find size of key_t (9116)\n");
#endif

#ifdef __i386__
CheckTypeSize(id_t,4, 9169, 2)
#elif __ia64__
CheckTypeSize(id_t,4, 9169, 3)
#elif __powerpc__
CheckTypeSize(id_t,4, 9169, 6)
#elif __s390__
CheckTypeSize(id_t,4, 9169, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9169,0);
Msg("Find size of id_t (9169)\n");
#endif

#ifdef __i386__
CheckTypeSize(suseconds_t,4, 9249, 2)
#elif __ia64__
CheckTypeSize(suseconds_t,8, 9249, 3)
#elif __powerpc__
CheckTypeSize(suseconds_t,4, 9249, 6)
#elif __s390__
CheckTypeSize(suseconds_t,4, 9249, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9249,0);
Msg("Find size of suseconds_t (9249)\n");
#endif

#ifdef __i386__
CheckTypeSize(fsid_t,8, 9367, 2)
#elif __ia64__
CheckTypeSize(fsid_t,8, 9367, 3)
#elif __s390__
CheckTypeSize(fsid_t,8, 9367, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9367,0);
Msg("Find size of fsid_t (9367)\n");
#endif

#ifdef __i386__
CheckTypeSize(blksize_t,4, 9372, 2)
#elif __powerpc__
CheckTypeSize(blksize_t,4, 9372, 6)
#elif __ia64__
CheckTypeSize(blksize_t,8, 9372, 3)
#elif __s390__
CheckTypeSize(blksize_t,4, 9372, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9372,0);
Msg("Find size of blksize_t (9372)\n");
#endif

#ifdef __i386__
CheckTypeSize(fd_mask,4, 10131, 2)
#elif __ia64__
CheckTypeSize(fd_mask,8, 10131, 3)
#elif __powerpc__
CheckTypeSize(fd_mask,4, 10131, 6)
#elif __s390__
CheckTypeSize(fd_mask,4, 10131, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10131,0);
Msg("Find size of fd_mask (10131)\n");
#endif

#ifdef __i386__
CheckTypeSize(timer_t,4, 10208, 2)
#elif __ia64__
CheckTypeSize(timer_t,4, 10208, 3)
#elif __powerpc__
CheckTypeSize(timer_t,4, 10208, 6)
#elif __s390__
CheckTypeSize(timer_t,4, 10208, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10208,0);
Msg("Find size of timer_t (10208)\n");
#endif

#ifdef __i386__
CheckTypeSize(clockid_t,4, 10209, 2)
#elif __ia64__
CheckTypeSize(clockid_t,4, 10209, 3)
#elif __powerpc__
CheckTypeSize(clockid_t,4, 10209, 6)
#elif __s390__
CheckTypeSize(clockid_t,4, 10209, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10209,0);
Msg("Find size of clockid_t (10209)\n");
#endif

#ifdef __i386__
CheckTypeSize(ino_t,4, 8985, 2)
#elif __ia64__
CheckTypeSize(ino_t,8, 8985, 3)
#elif __powerpc__
CheckTypeSize(ino_t,4, 8985, 6)
#elif __s390__
CheckTypeSize(ino_t,4, 8985, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8985,0);
Msg("Find size of ino_t (8985)\n");
#endif

#ifdef __i386__
CheckTypeSize(gid_t,4, 9012, 2)
#elif __ia64__
CheckTypeSize(gid_t,4, 9012, 3)
#elif __powerpc__
CheckTypeSize(gid_t,4, 9012, 6)
#elif __s390__
CheckTypeSize(gid_t,4, 9012, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9012,0);
Msg("Find size of gid_t (9012)\n");
#endif

#ifdef __i386__
CheckTypeSize(dev_t,8, 9159, 2)
#elif __ia64__
CheckTypeSize(dev_t,8, 9159, 3)
#elif __powerpc__
CheckTypeSize(dev_t,8, 9159, 6)
#elif __s390__
CheckTypeSize(dev_t,8, 9159, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9159,0);
Msg("Find size of dev_t (9159)\n");
#endif

#ifdef __i386__
CheckTypeSize(mode_t,4, 9160, 2)
#elif __ia64__
CheckTypeSize(mode_t,4, 9160, 3)
#elif __powerpc__
CheckTypeSize(mode_t,4, 9160, 6)
#elif __s390__
CheckTypeSize(mode_t,4, 9160, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9160,0);
Msg("Find size of mode_t (9160)\n");
#endif

#ifdef __i386__
CheckTypeSize(nlink_t,4, 9162, 2)
#elif __ia64__
CheckTypeSize(nlink_t,8, 9162, 3)
#elif __powerpc__
CheckTypeSize(nlink_t,4, 9162, 6)
#elif __s390__
CheckTypeSize(nlink_t,4, 9162, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9162,0);
Msg("Find size of nlink_t (9162)\n");
#endif

#ifdef __i386__
CheckTypeSize(caddr_t,4, 9258, 2)
#elif __ia64__
CheckTypeSize(caddr_t,8, 9258, 3)
#elif __powerpc__
CheckTypeSize(caddr_t,4, 9258, 6)
#elif __s390__
CheckTypeSize(caddr_t,4, 9258, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9258,0);
Msg("Find size of caddr_t (9258)\n");
#endif

#ifdef __i386__
CheckTypeSize(ushort,2, 9264, 2)
#elif __powerpc__
CheckTypeSize(ushort,2, 9264, 6)
#elif __ia64__
CheckTypeSize(ushort,2, 9264, 3)
#elif __s390__
CheckTypeSize(ushort,2, 9264, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9264,0);
Msg("Find size of ushort (9264)\n");
#endif

#ifdef __i386__
CheckTypeSize(ino64_t,8, 8987, 2)
#elif __powerpc__
CheckTypeSize(ino64_t,8, 8987, 6)
#elif __ia64__
CheckTypeSize(ino64_t,8, 8987, 3)
#elif __s390__
CheckTypeSize(ino64_t,8, 8987, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8987,0);
Msg("Find size of ino64_t (8987)\n");
#endif

#ifdef __i386__
CheckTypeSize(loff_t,8, 9167, 2)
#elif __ia64__
CheckTypeSize(loff_t,8, 9167, 3)
#elif __powerpc__
CheckTypeSize(loff_t,8, 9167, 6)
#elif __s390__
CheckTypeSize(loff_t,8, 9167, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9167,0);
Msg("Find size of loff_t (9167)\n");
#endif

#ifdef __i386__
CheckTypeSize(blkcnt_t,4, 9172, 2)
#elif __powerpc__
CheckTypeSize(blkcnt_t,4, 9172, 6)
#elif __ia64__
CheckTypeSize(blkcnt_t,8, 9172, 3)
#elif __s390__
CheckTypeSize(blkcnt_t,4, 9172, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9172,0);
Msg("Find size of blkcnt_t (9172)\n");
#endif

#ifdef __ia64__
CheckTypeSize(fsblkcnt_t,8, 9174, 3)
#elif __i386__
CheckTypeSize(fsblkcnt_t,4, 9174, 2)
#elif __s390__
CheckTypeSize(fsblkcnt_t,4, 9174, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9174,0);
Msg("Find size of fsblkcnt_t (9174)\n");
#endif

#ifdef __i386__
CheckTypeSize(fsfilcnt_t,4, 9176, 2)
#elif __ia64__
CheckTypeSize(fsfilcnt_t,8, 9176, 3)
#elif __powerpc__
CheckTypeSize(fsfilcnt_t,4, 9176, 6)
#elif __s390__
CheckTypeSize(fsfilcnt_t,4, 9176, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9176,0);
Msg("Find size of fsfilcnt_t (9176)\n");
#endif

#ifdef __i386__
CheckTypeSize(blkcnt64_t,8, 9178, 2)
#elif __powerpc__
CheckTypeSize(blkcnt64_t,8, 9178, 6)
#elif __ia64__
CheckTypeSize(blkcnt64_t,8, 9178, 3)
#elif __s390__
CheckTypeSize(blkcnt64_t,8, 9178, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9178,0);
Msg("Find size of blkcnt64_t (9178)\n");
#endif

#ifdef __i386__
CheckTypeSize(fsblkcnt64_t,8, 9180, 2)
#elif __powerpc__
CheckTypeSize(fsblkcnt64_t,8, 9180, 6)
#elif __ia64__
CheckTypeSize(fsblkcnt64_t,8, 9180, 3)
#elif __s390__
CheckTypeSize(fsblkcnt64_t,8, 9180, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9180,0);
Msg("Find size of fsblkcnt64_t (9180)\n");
#endif

#ifdef __i386__
CheckTypeSize(fsfilcnt64_t,8, 9182, 2)
#elif __ia64__
CheckTypeSize(fsfilcnt64_t,8, 9182, 3)
#elif __powerpc__
CheckTypeSize(fsfilcnt64_t,8, 9182, 6)
#elif __s390__
CheckTypeSize(fsfilcnt64_t,8, 9182, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9182,0);
Msg("Find size of fsfilcnt64_t (9182)\n");
#endif

#ifdef __i386__
CheckTypeSize(u_char,1, 9259, 2)
#elif __powerpc__
CheckTypeSize(u_char,1, 9259, 6)
#elif __ia64__
CheckTypeSize(u_char,1, 9259, 3)
#elif __s390__
CheckTypeSize(u_char,1, 9259, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9259,0);
Msg("Find size of u_char (9259)\n");
#endif

#ifdef __i386__
CheckTypeSize(u_short,2, 9260, 2)
#elif __powerpc__
CheckTypeSize(u_short,2, 9260, 6)
#elif __ia64__
CheckTypeSize(u_short,2, 9260, 3)
#elif __s390__
CheckTypeSize(u_short,2, 9260, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9260,0);
Msg("Find size of u_short (9260)\n");
#endif

#ifdef __i386__
CheckTypeSize(u_long,4, 9262, 2)
#elif __powerpc__
CheckTypeSize(u_long,4, 9262, 6)
#elif __ia64__
CheckTypeSize(u_long,8, 9262, 3)
#elif __s390__
CheckTypeSize(u_long,4, 9262, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9262,0);
Msg("Find size of u_long (9262)\n");
#endif

#ifdef __i386__
CheckTypeSize(fd_set,128, 10133, 2)
#elif __ia64__
CheckTypeSize(fd_set,128, 10133, 3)
#elif __powerpc__
CheckTypeSize(fd_set,128, 10133, 6)
#elif __s390__
CheckTypeSize(fd_set,128, 10133, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10133,0);
Msg("Find size of fd_set (10133)\n");
#endif

#ifdef __i386__
CheckTypeSize(clock_t,4, 9164, 2)
#elif __ia64__
CheckTypeSize(clock_t,8, 9164, 3)
#elif __powerpc__
CheckTypeSize(clock_t,4, 9164, 6)
#elif __s390__
CheckTypeSize(clock_t,4, 9164, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9164,0);
Msg("Find size of clock_t (9164)\n");
#endif

#ifdef __i386__
CheckTypeSize(time_t,4, 9191, 2)
#elif __ia64__
CheckTypeSize(time_t,8, 9191, 3)
#elif __powerpc__
CheckTypeSize(time_t,4, 9191, 6)
#elif __s390__
CheckTypeSize(time_t,4, 9191, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9191,0);
Msg("Find size of time_t (9191)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/types.h\n",cnt);
return cnt;
#endif

}
