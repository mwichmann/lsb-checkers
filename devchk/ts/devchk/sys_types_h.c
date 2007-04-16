/*
 * Test of sys/types.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in sys/types.h\n");
#endif

printf("Checking data structures in sys/types.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef TRUE
	CompareConstant(TRUE,1,2507,architecture)
#else
Msg( "Error: Constant not found: TRUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FALSE
	CompareConstant(FALSE,0,2508,architecture)
#else
Msg( "Error: Constant not found: FALSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FD_SETSIZE
	CompareConstant(FD_SETSIZE,1024,4416,architecture)
#else
Msg( "Error: Constant not found: FD_SETSIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for FD_ZERO(fdsetp) */
#endif

#if __powerpc64__
#ifdef __FDSET_LONGS
	CompareConstant(__FDSET_LONGS,16,4558,architecture)
#else
Msg( "Error: Constant not found: __FDSET_LONGS\n");
cnt++;
#endif

#elif __powerpc__ && !__powerpc64__
#ifdef __FDSET_LONGS
	CompareConstant(__FDSET_LONGS,32,4558,architecture)
#else
Msg( "Error: Constant not found: __FDSET_LONGS\n");
cnt++;
#endif

#elif __ia64__
#ifdef __FDSET_LONGS
	CompareConstant(__FDSET_LONGS,16,4558,architecture)
#else
Msg( "Error: Constant not found: __FDSET_LONGS\n");
cnt++;
#endif

#elif __i386__
#ifdef __FDSET_LONGS
	CompareConstant(__FDSET_LONGS,32,4558,architecture)
#else
Msg( "Error: Constant not found: __FDSET_LONGS\n");
cnt++;
#endif

#elif __s390x__
#ifdef __FDSET_LONGS
	CompareConstant(__FDSET_LONGS,16,4558,architecture)
#else
Msg( "Error: Constant not found: __FDSET_LONGS\n");
cnt++;
#endif

#elif __x86_64__
#ifdef __FDSET_LONGS
	CompareConstant(__FDSET_LONGS,16,4558,architecture)
#else
Msg( "Error: Constant not found: __FDSET_LONGS\n");
cnt++;
#endif

#elif __s390__ && !__s390x__
#ifdef __FDSET_LONGS
	CompareConstant(__FDSET_LONGS,32,4558,architecture)
#else
Msg( "Error: Constant not found: __FDSET_LONGS\n");
cnt++;
#endif

#else
Msg( "No definition for __FDSET_LONGS (4558, int) in db\n");
#ifdef __FDSET_LONGS
Msg( "REPLACE INTO ArchConst (ACaid,ACcid,ACvalue) VALUES (%d,4558,%d);\n", architecture, __FDSET_LONGS);
#endif
#endif
#if _LSB_DEFAULT_ARCH
/* No test for FD_SET(d,set) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FD_CLR(d,set) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FD_ISSET(d,set) */
#endif

#if __i386__
CheckTypeSize(int8_t,1, 6995, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(int8_t,1, 6995, 6);
#elif __ia64__
CheckTypeSize(int8_t,1, 6995, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(int8_t,1, 6995, 10);
#elif __powerpc64__
CheckTypeSize(int8_t,1, 6995, 9);
#elif __s390x__
CheckTypeSize(int8_t,1, 6995, 12);
#elif __x86_64__
CheckTypeSize(int8_t,1, 6995, 11);
#elif 1
CheckTypeSize(int8_t,0, 6995, 1);
#endif

#if __i386__
CheckTypeSize(int16_t,2, 6996, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(int16_t,2, 6996, 6);
#elif __ia64__
CheckTypeSize(int16_t,2, 6996, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(int16_t,2, 6996, 10);
#elif __powerpc64__
CheckTypeSize(int16_t,2, 6996, 9);
#elif __s390x__
CheckTypeSize(int16_t,2, 6996, 12);
#elif __x86_64__
CheckTypeSize(int16_t,2, 6996, 11);
#elif 1
CheckTypeSize(int16_t,0, 6996, 1);
#endif

#if __i386__
CheckTypeSize(int32_t,4, 6997, 2);
#elif __ia64__
CheckTypeSize(int32_t,4, 6997, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(int32_t,4, 6997, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(int32_t,4, 6997, 10);
#elif __powerpc64__
CheckTypeSize(int32_t,4, 6997, 9);
#elif __s390x__
CheckTypeSize(int32_t,4, 6997, 12);
#elif __x86_64__
CheckTypeSize(int32_t,4, 6997, 11);
#elif 1
CheckTypeSize(int32_t,0, 6997, 1);
#endif

#if __i386__
CheckTypeSize(int64_t,8, 6998, 2);
#endif

#if __i386__
CheckTypeSize(u_int8_t,1, 6999, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(u_int8_t,1, 6999, 6);
#elif __ia64__
CheckTypeSize(u_int8_t,1, 6999, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(u_int8_t,1, 6999, 10);
#elif __powerpc64__
CheckTypeSize(u_int8_t,1, 6999, 9);
#elif __s390x__
CheckTypeSize(u_int8_t,1, 6999, 12);
#elif __x86_64__
CheckTypeSize(u_int8_t,1, 6999, 11);
#elif 1
CheckTypeSize(u_int8_t,0, 6999, 1);
#endif

#if __i386__
CheckTypeSize(u_int16_t,2, 7000, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(u_int16_t,2, 7000, 6);
#elif __ia64__
CheckTypeSize(u_int16_t,2, 7000, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(u_int16_t,2, 7000, 10);
#elif __powerpc64__
CheckTypeSize(u_int16_t,2, 7000, 9);
#elif __s390x__
CheckTypeSize(u_int16_t,2, 7000, 12);
#elif __x86_64__
CheckTypeSize(u_int16_t,2, 7000, 11);
#elif 1
CheckTypeSize(u_int16_t,0, 7000, 1);
#endif

#if __i386__
CheckTypeSize(u_int32_t,4, 7001, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(u_int32_t,4, 7001, 6);
#elif __ia64__
CheckTypeSize(u_int32_t,4, 7001, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(u_int32_t,4, 7001, 10);
#elif __powerpc64__
CheckTypeSize(u_int32_t,4, 7001, 9);
#elif __s390x__
CheckTypeSize(u_int32_t,4, 7001, 12);
#elif __x86_64__
CheckTypeSize(u_int32_t,4, 7001, 11);
#elif 1
CheckTypeSize(u_int32_t,0, 7001, 1);
#endif

#if __i386__
CheckTypeSize(uid_t,4, 9069, 2);
#elif __ia64__
CheckTypeSize(uid_t,4, 9069, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(uid_t,4, 9069, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(uid_t,4, 9069, 10);
#elif __powerpc64__
CheckTypeSize(uid_t,4, 9069, 9);
#elif __s390x__
CheckTypeSize(uid_t,4, 9069, 12);
#elif __x86_64__
CheckTypeSize(uid_t,4, 9069, 11);
#elif 1
CheckTypeSize(uid_t,0, 9069, 1);
#endif

#if __i386__
CheckTypeSize(pid_t,4, 9094, 2);
#elif __ia64__
CheckTypeSize(pid_t,4, 9094, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(pid_t,4, 9094, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(pid_t,4, 9094, 10);
#elif __powerpc64__
CheckTypeSize(pid_t,4, 9094, 9);
#elif __s390x__
CheckTypeSize(pid_t,4, 9094, 12);
#elif __x86_64__
CheckTypeSize(pid_t,4, 9094, 11);
#elif 1
CheckTypeSize(pid_t,0, 9094, 1);
#endif

#if __i386__
CheckTypeSize(off_t,4, 9111, 2);
#elif __ia64__
CheckTypeSize(off_t,8, 9111, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(off_t,4, 9111, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(off_t,4, 9111, 10);
#elif __powerpc64__
CheckTypeSize(off_t,8, 9111, 9);
#elif __s390x__
CheckTypeSize(off_t,8, 9111, 12);
#elif __x86_64__
CheckTypeSize(off_t,8, 9111, 11);
#elif 1
CheckTypeSize(off_t,0, 9111, 1);
#endif

#if __i386__
CheckTypeSize(key_t,4, 9116, 2);
#elif __ia64__
CheckTypeSize(key_t,4, 9116, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(key_t,4, 9116, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(key_t,4, 9116, 10);
#elif __powerpc64__
CheckTypeSize(key_t,4, 9116, 9);
#elif __s390x__
CheckTypeSize(key_t,4, 9116, 12);
#elif __x86_64__
CheckTypeSize(key_t,4, 9116, 11);
#elif 1
CheckTypeSize(key_t,0, 9116, 1);
#endif

#if __i386__
CheckTypeSize(suseconds_t,4, 9249, 2);
#elif __ia64__
CheckTypeSize(suseconds_t,8, 9249, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(suseconds_t,4, 9249, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(suseconds_t,4, 9249, 10);
#elif __powerpc64__
CheckTypeSize(suseconds_t,8, 9249, 9);
#elif __s390x__
CheckTypeSize(suseconds_t,8, 9249, 12);
#elif __x86_64__
CheckTypeSize(suseconds_t,8, 9249, 11);
#elif 1
CheckTypeSize(suseconds_t,0, 9249, 1);
#endif

#if __i386__
CheckTypeSize(u_int,4, 9261, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(u_int,4, 9261, 6);
#elif __ia64__
CheckTypeSize(u_int,4, 9261, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(u_int,4, 9261, 10);
#elif __powerpc64__
CheckTypeSize(u_int,4, 9261, 9);
#elif __s390x__
CheckTypeSize(u_int,4, 9261, 12);
#elif __x86_64__
CheckTypeSize(u_int,4, 9261, 11);
#elif 1
CheckTypeSize(u_int,0, 9261, 1);
#endif

#if __i386__
CheckTypeSize(fsid_t,8, 9367, 2);
#elif __ia64__
CheckTypeSize(fsid_t,8, 9367, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(fsid_t,8, 9367, 10);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(fsid_t,8, 9367, 6);
#elif __powerpc64__
CheckTypeSize(fsid_t,8, 9367, 9);
#elif __s390x__
CheckTypeSize(fsid_t,8, 9367, 12);
#elif __x86_64__
CheckTypeSize(fsid_t,8, 9367, 11);
#elif 1
CheckTypeSize(fsid_t,0, 9367, 1);
#endif

#if __i386__
CheckTypeSize(useconds_t,4, 9369, 2);
#elif __powerpc64__
CheckTypeSize(useconds_t,4, 9369, 9);
#elif __ia64__
CheckTypeSize(useconds_t,4, 9369, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(useconds_t,4, 9369, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(useconds_t,4, 9369, 10);
#elif __s390x__
CheckTypeSize(useconds_t,4, 9369, 12);
#elif __x86_64__
CheckTypeSize(useconds_t,4, 9369, 11);
#elif 1
CheckTypeSize(useconds_t,0, 9369, 1);
#endif

#if __i386__
CheckTypeSize(blksize_t,4, 9372, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(blksize_t,4, 9372, 6);
#elif __ia64__
CheckTypeSize(blksize_t,8, 9372, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(blksize_t,4, 9372, 10);
#elif __powerpc64__
CheckTypeSize(blksize_t,8, 9372, 9);
#elif __s390x__
CheckTypeSize(blksize_t,8, 9372, 12);
#elif __x86_64__
CheckTypeSize(blksize_t,8, 9372, 11);
#elif 1
CheckTypeSize(blksize_t,0, 9372, 1);
#endif

#if __i386__
CheckTypeSize(fd_mask,4, 10131, 2);
#elif __ia64__
CheckTypeSize(fd_mask,8, 10131, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(fd_mask,4, 10131, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(fd_mask,4, 10131, 10);
#elif __powerpc64__
CheckTypeSize(fd_mask,8, 10131, 9);
#elif __s390x__
CheckTypeSize(fd_mask,8, 10131, 12);
#elif __x86_64__
CheckTypeSize(fd_mask,8, 10131, 11);
#elif 1
CheckTypeSize(fd_mask,0, 10131, 1);
#endif

#if __i386__
CheckTypeSize(timer_t,4, 10208, 2);
#elif __ia64__
CheckTypeSize(timer_t,4, 10208, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(timer_t,4, 10208, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(timer_t,4, 10208, 10);
#elif __powerpc64__
CheckTypeSize(timer_t,4, 10208, 9);
#elif __s390x__
CheckTypeSize(timer_t,4, 10208, 12);
#elif __x86_64__
CheckTypeSize(timer_t,4, 10208, 11);
#elif 1
CheckTypeSize(timer_t,0, 10208, 1);
#endif

#if __i386__
CheckTypeSize(clockid_t,4, 10209, 2);
#elif __ia64__
CheckTypeSize(clockid_t,4, 10209, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(clockid_t,4, 10209, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(clockid_t,4, 10209, 10);
#elif __powerpc64__
CheckTypeSize(clockid_t,4, 10209, 9);
#elif __s390x__
CheckTypeSize(clockid_t,4, 10209, 12);
#elif __x86_64__
CheckTypeSize(clockid_t,4, 10209, 11);
#elif 1
CheckTypeSize(clockid_t,0, 10209, 1);
#endif

#if __i386__
CheckTypeSize(const int32_t,4, 10458, 2);
#elif __ia64__
CheckTypeSize(const int32_t,4, 10458, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const int32_t,4, 10458, 6);
#elif __x86_64__
CheckTypeSize(const int32_t,4, 10458, 11);
#elif __s390__ && !__s390x__
CheckTypeSize(const int32_t,4, 10458, 10);
#elif __s390x__
CheckTypeSize(const int32_t,4, 10458, 12);
#elif __powerpc64__
CheckTypeSize(const int32_t,4, 10458, 9);
#elif 1
CheckTypeSize(const int32_t,0, 10458, 1);
#endif

#if __no_sym__
#endif

#if __ia64__
CheckTypeSize(int64_t,8, 10867, 3);
#endif

#if __powerpc64__
CheckTypeSize(int64_t,8, 10868, 9);
#endif

#if __x86_64__
CheckTypeSize(int64_t,8, 10869, 11);
#endif

#if __s390x__
CheckTypeSize(int64_t,8, 10870, 12);
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(int64_t,8, 10871, 6);
#endif

#if __s390__ && !__s390x__
CheckTypeSize(int64_t,8, 10872, 10);
#endif

#if __i386__
CheckTypeSize(ssize_t,4, 9029, 2);
#endif

#if __i386__
CheckTypeSize(id_t,4, 9169, 2);
#elif __ia64__
CheckTypeSize(id_t,4, 9169, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(id_t,4, 9169, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(id_t,4, 9169, 10);
#elif __powerpc64__
CheckTypeSize(id_t,4, 9169, 9);
#elif __s390x__
CheckTypeSize(id_t,4, 9169, 12);
#elif __x86_64__
CheckTypeSize(id_t,4, 9169, 11);
#elif 1
CheckTypeSize(id_t,0, 9169, 1);
#endif

#if __powerpc__ && !__powerpc64__
CheckTypeSize(ssize_t,4, 10468, 6);
#endif

#if __ia64__
CheckTypeSize(ssize_t,8, 10469, 3);
#endif

#if __s390__ && !__s390x__
CheckTypeSize(ssize_t,4, 10471, 10);
#endif

#if __powerpc64__
CheckTypeSize(ssize_t,8, 10472, 9);
#endif

#if __x86_64__
CheckTypeSize(ssize_t,8, 10785, 11);
#endif

#if __s390x__
CheckTypeSize(ssize_t,8, 10866, 12);
#endif

#if __i386__
CheckTypeSize(ino_t,4, 8985, 2);
#elif __ia64__
CheckTypeSize(ino_t,8, 8985, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ino_t,4, 8985, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(ino_t,4, 8985, 10);
#elif __powerpc64__
CheckTypeSize(ino_t,8, 8985, 9);
#elif __s390x__
CheckTypeSize(ino_t,8, 8985, 12);
#elif __x86_64__
CheckTypeSize(ino_t,8, 8985, 11);
#elif 1
CheckTypeSize(ino_t,0, 8985, 1);
#endif

#if __i386__
CheckTypeSize(gid_t,4, 9012, 2);
#elif __ia64__
CheckTypeSize(gid_t,4, 9012, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(gid_t,4, 9012, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(gid_t,4, 9012, 10);
#elif __powerpc64__
CheckTypeSize(gid_t,4, 9012, 9);
#elif __s390x__
CheckTypeSize(gid_t,4, 9012, 12);
#elif __x86_64__
CheckTypeSize(gid_t,4, 9012, 11);
#elif 1
CheckTypeSize(gid_t,0, 9012, 1);
#endif

#if __i386__
CheckTypeSize(dev_t,8, 9159, 2);
#elif __ia64__
CheckTypeSize(dev_t,8, 9159, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(dev_t,8, 9159, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(dev_t,8, 9159, 10);
#elif __powerpc64__
CheckTypeSize(dev_t,8, 9159, 9);
#elif __s390x__
CheckTypeSize(dev_t,8, 9159, 12);
#elif __x86_64__
CheckTypeSize(dev_t,8, 9159, 11);
#elif 1
CheckTypeSize(dev_t,0, 9159, 1);
#endif

#if __i386__
CheckTypeSize(mode_t,4, 9160, 2);
#elif __ia64__
CheckTypeSize(mode_t,4, 9160, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(mode_t,4, 9160, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(mode_t,4, 9160, 10);
#elif __powerpc64__
CheckTypeSize(mode_t,4, 9160, 9);
#elif __s390x__
CheckTypeSize(mode_t,4, 9160, 12);
#elif __x86_64__
CheckTypeSize(mode_t,4, 9160, 11);
#elif 1
CheckTypeSize(mode_t,0, 9160, 1);
#endif

#if __i386__
CheckTypeSize(nlink_t,4, 9162, 2);
#elif __ia64__
CheckTypeSize(nlink_t,8, 9162, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(nlink_t,4, 9162, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(nlink_t,4, 9162, 10);
#elif __powerpc64__
CheckTypeSize(nlink_t,8, 9162, 9);
#elif __s390x__
CheckTypeSize(nlink_t,8, 9162, 12);
#elif __x86_64__
CheckTypeSize(nlink_t,8, 9162, 11);
#elif 1
CheckTypeSize(nlink_t,0, 9162, 1);
#endif

#if __i386__
CheckTypeSize(caddr_t,4, 9258, 2);
#elif __ia64__
CheckTypeSize(caddr_t,8, 9258, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(caddr_t,4, 9258, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(caddr_t,4, 9258, 10);
#elif __powerpc64__
CheckTypeSize(caddr_t,8, 9258, 9);
#elif __s390x__
CheckTypeSize(caddr_t,8, 9258, 12);
#elif __x86_64__
CheckTypeSize(caddr_t,8, 9258, 11);
#elif 1
CheckTypeSize(caddr_t,0, 9258, 1);
#endif

#if __i386__
CheckTypeSize(ino64_t,8, 8987, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(ino64_t,8, 8987, 6);
#elif __ia64__
CheckTypeSize(ino64_t,8, 8987, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(ino64_t,8, 8987, 10);
#elif __powerpc64__
CheckTypeSize(ino64_t,8, 8987, 9);
#elif __s390x__
CheckTypeSize(ino64_t,8, 8987, 12);
#elif __x86_64__
CheckTypeSize(ino64_t,8, 8987, 11);
#elif 1
CheckTypeSize(ino64_t,0, 8987, 1);
#endif

#if __i386__
CheckTypeSize(loff_t,8, 9167, 2);
#elif __ia64__
CheckTypeSize(loff_t,8, 9167, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(loff_t,8, 9167, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(loff_t,8, 9167, 10);
#elif __powerpc64__
CheckTypeSize(loff_t,8, 9167, 9);
#elif __s390x__
CheckTypeSize(loff_t,8, 9167, 12);
#elif __x86_64__
CheckTypeSize(loff_t,8, 9167, 11);
#elif 1
CheckTypeSize(loff_t,0, 9167, 1);
#endif

#if __i386__
CheckTypeSize(blkcnt_t,4, 9172, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(blkcnt_t,4, 9172, 6);
#elif __ia64__
CheckTypeSize(blkcnt_t,8, 9172, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(blkcnt_t,4, 9172, 10);
#elif __powerpc64__
CheckTypeSize(blkcnt_t,8, 9172, 9);
#elif __s390x__
CheckTypeSize(blkcnt_t,8, 9172, 12);
#elif __x86_64__
CheckTypeSize(blkcnt_t,8, 9172, 11);
#elif 1
CheckTypeSize(blkcnt_t,0, 9172, 1);
#endif

#if __ia64__
CheckTypeSize(fsblkcnt_t,8, 9174, 3);
#elif __i386__
CheckTypeSize(fsblkcnt_t,4, 9174, 2);
#elif __s390__ && !__s390x__
CheckTypeSize(fsblkcnt_t,4, 9174, 10);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(fsblkcnt_t,4, 9174, 6);
#elif __powerpc64__
CheckTypeSize(fsblkcnt_t,8, 9174, 9);
#elif __s390x__
CheckTypeSize(fsblkcnt_t,8, 9174, 12);
#elif __x86_64__
CheckTypeSize(fsblkcnt_t,8, 9174, 11);
#elif 1
CheckTypeSize(fsblkcnt_t,0, 9174, 1);
#endif

#if __i386__
CheckTypeSize(fsfilcnt_t,4, 9176, 2);
#elif __ia64__
CheckTypeSize(fsfilcnt_t,8, 9176, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(fsfilcnt_t,4, 9176, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(fsfilcnt_t,4, 9176, 10);
#elif __powerpc64__
CheckTypeSize(fsfilcnt_t,8, 9176, 9);
#elif __s390x__
CheckTypeSize(fsfilcnt_t,8, 9176, 12);
#elif __x86_64__
CheckTypeSize(fsfilcnt_t,8, 9176, 11);
#elif 1
CheckTypeSize(fsfilcnt_t,0, 9176, 1);
#endif

#if __i386__
CheckTypeSize(blkcnt64_t,8, 9178, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(blkcnt64_t,8, 9178, 6);
#elif __ia64__
CheckTypeSize(blkcnt64_t,8, 9178, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(blkcnt64_t,8, 9178, 10);
#elif __powerpc64__
CheckTypeSize(blkcnt64_t,8, 9178, 9);
#elif __s390x__
CheckTypeSize(blkcnt64_t,8, 9178, 12);
#elif __x86_64__
CheckTypeSize(blkcnt64_t,8, 9178, 11);
#elif 1
CheckTypeSize(blkcnt64_t,0, 9178, 1);
#endif

#if __i386__
CheckTypeSize(fsblkcnt64_t,8, 9180, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(fsblkcnt64_t,8, 9180, 6);
#elif __ia64__
CheckTypeSize(fsblkcnt64_t,8, 9180, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(fsblkcnt64_t,8, 9180, 10);
#elif __powerpc64__
CheckTypeSize(fsblkcnt64_t,8, 9180, 9);
#elif __s390x__
CheckTypeSize(fsblkcnt64_t,8, 9180, 12);
#elif __x86_64__
CheckTypeSize(fsblkcnt64_t,8, 9180, 11);
#elif 1
CheckTypeSize(fsblkcnt64_t,0, 9180, 1);
#endif

#if __i386__
CheckTypeSize(fsfilcnt64_t,8, 9182, 2);
#elif __ia64__
CheckTypeSize(fsfilcnt64_t,8, 9182, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(fsfilcnt64_t,8, 9182, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(fsfilcnt64_t,8, 9182, 10);
#elif __powerpc64__
CheckTypeSize(fsfilcnt64_t,8, 9182, 9);
#elif __s390x__
CheckTypeSize(fsfilcnt64_t,8, 9182, 12);
#elif __x86_64__
CheckTypeSize(fsfilcnt64_t,8, 9182, 11);
#elif 1
CheckTypeSize(fsfilcnt64_t,0, 9182, 1);
#endif

#if __i386__
CheckTypeSize(u_char,1, 9259, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(u_char,1, 9259, 6);
#elif __ia64__
CheckTypeSize(u_char,1, 9259, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(u_char,1, 9259, 10);
#elif __powerpc64__
CheckTypeSize(u_char,1, 9259, 9);
#elif __s390x__
CheckTypeSize(u_char,1, 9259, 12);
#elif __x86_64__
CheckTypeSize(u_char,1, 9259, 11);
#elif 1
CheckTypeSize(u_char,0, 9259, 1);
#endif

#if __i386__
CheckTypeSize(u_short,2, 9260, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(u_short,2, 9260, 6);
#elif __ia64__
CheckTypeSize(u_short,2, 9260, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(u_short,2, 9260, 10);
#elif __powerpc64__
CheckTypeSize(u_short,2, 9260, 9);
#elif __s390x__
CheckTypeSize(u_short,2, 9260, 12);
#elif __x86_64__
CheckTypeSize(u_short,2, 9260, 11);
#elif 1
CheckTypeSize(u_short,0, 9260, 1);
#endif

#if __i386__
CheckTypeSize(u_long,4, 9262, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(u_long,4, 9262, 6);
#elif __ia64__
CheckTypeSize(u_long,8, 9262, 3);
#elif __s390__ && !__s390x__
CheckTypeSize(u_long,4, 9262, 10);
#elif __powerpc64__
CheckTypeSize(u_long,8, 9262, 9);
#elif __s390x__
CheckTypeSize(u_long,8, 9262, 12);
#elif __x86_64__
CheckTypeSize(u_long,8, 9262, 11);
#elif 1
CheckTypeSize(u_long,0, 9262, 1);
#endif

#if __i386__
CheckTypeSize(fd_set,128, 10133, 2);
#elif __ia64__
CheckTypeSize(fd_set,128, 10133, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(fd_set,128, 10133, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(fd_set,128, 10133, 10);
#elif __powerpc64__
CheckTypeSize(fd_set,128, 10133, 9);
#elif __s390x__
CheckTypeSize(fd_set,128, 10133, 12);
#elif __x86_64__
CheckTypeSize(fd_set,128, 10133, 11);
#elif 1
CheckTypeSize(fd_set,0, 10133, 1);
#endif

#if __i386__
CheckTypeSize(clock_t,4, 9164, 2);
#elif __ia64__
CheckTypeSize(clock_t,8, 9164, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(clock_t,4, 9164, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(clock_t,4, 9164, 10);
#elif __powerpc64__
CheckTypeSize(clock_t,8, 9164, 9);
#elif __s390x__
CheckTypeSize(clock_t,8, 9164, 12);
#elif __x86_64__
CheckTypeSize(clock_t,8, 9164, 11);
#elif 1
CheckTypeSize(clock_t,0, 9164, 1);
#endif

#if __i386__
CheckTypeSize(time_t,4, 9191, 2);
#elif __ia64__
CheckTypeSize(time_t,8, 9191, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(time_t,4, 9191, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(time_t,4, 9191, 10);
#elif __powerpc64__
CheckTypeSize(time_t,8, 9191, 9);
#elif __s390x__
CheckTypeSize(time_t,8, 9191, 12);
#elif __x86_64__
CheckTypeSize(time_t,8, 9191, 11);
#elif 1
CheckTypeSize(time_t,0, 9191, 1);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in sys/types.h\n\n",pcnt,cnt);
return cnt;
#endif

}
