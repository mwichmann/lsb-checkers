/*
 * Test of sys/types.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef FD_SETSIZE
	CompareConstant(FD_SETSIZE,1024)
#else
Msg( "Error: Constant not found: FD_SETSIZE\n");
cnt++;
#endif

/* No test for FD_ZERO(fdsetp) */
/* No test for FD_SET(d,set) */
/* No test for FD_CLR(d,set) */
/* No test for FD_ISSET(d,set) */
#ifdef __i386__
CheckTypeSize(int8_t,1, 6995, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6995,0);
#endif

#ifdef __i386__
CheckTypeSize(int16_t,2, 6996, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6996,0);
#endif

#ifdef __i386__
CheckTypeSize(int32_t,4, 6997, 2)
#elif __ia64__
CheckTypeSize(int32_t,4, 6997, 3)
#elif __powerpc__
CheckTypeSize(int32_t,4, 6997, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6997,0);
#endif

#ifdef __i386__
CheckTypeSize(int64_t,8, 6998, 2)
#elif __ia64__
CheckTypeSize(int64_t,8, 6998, 3)
#elif __powerpc__
CheckTypeSize(int64_t,8, 6998, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6998,0);
#endif

#ifdef __i386__
CheckTypeSize(u_int8_t,1, 6999, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6999,0);
#endif

#ifdef __i386__
CheckTypeSize(u_int16_t,2, 7000, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7000,0);
#endif

#ifdef __i386__
CheckTypeSize(u_int32_t,4, 7001, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7001,0);
#endif

#ifdef __i386__
CheckTypeSize(ssize_t,4, 9029, 2)
#elif __ia64__
CheckTypeSize(ssize_t,8, 9029, 3)
#elif __powerpc__
CheckTypeSize(ssize_t,4, 9029, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9029,0);
#endif

#ifdef __i386__
CheckTypeSize(uid_t,4, 9069, 2)
#elif __ia64__
CheckTypeSize(uid_t,4, 9069, 3)
#elif __powerpc__
CheckTypeSize(uid_t,4, 9069, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9069,0);
#endif

#ifdef __i386__
CheckTypeSize(pid_t,4, 9094, 2)
#elif __ia64__
CheckTypeSize(pid_t,4, 9094, 3)
#elif __powerpc__
CheckTypeSize(pid_t,4, 9094, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9094,0);
#endif

#ifdef __i386__
CheckTypeSize(off_t,4, 9111, 2)
#elif __ia64__
CheckTypeSize(off_t,8, 9111, 3)
#elif __powerpc__
CheckTypeSize(off_t,4, 9111, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9111,0);
#endif

#ifdef __i386__
CheckTypeSize(key_t,4, 9116, 2)
#elif __ia64__
CheckTypeSize(key_t,4, 9116, 3)
#elif __powerpc__
CheckTypeSize(key_t,4, 9116, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9116,0);
#endif

#ifdef __i386__
CheckTypeSize(id_t,4, 9169, 2)
#elif __ia64__
CheckTypeSize(id_t,4, 9169, 3)
#elif __powerpc__
CheckTypeSize(id_t,4, 9169, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9169,0);
#endif

#ifdef __i386__
CheckTypeSize(suseconds_t,4, 9249, 2)
#elif __ia64__
CheckTypeSize(suseconds_t,8, 9249, 3)
#elif __powerpc__
CheckTypeSize(suseconds_t,4, 9249, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9249,0);
#endif

#ifdef __i386__
CheckTypeSize(blksize_t,4, 9372, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9372,0);
#endif

#ifdef __i386__
CheckTypeSize(fd_mask,4, 10131, 2)
#elif __ia64__
CheckTypeSize(fd_mask,8, 10131, 3)
#elif __powerpc__
CheckTypeSize(fd_mask,4, 10131, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10131,0);
#endif

#ifdef __i386__
CheckTypeSize(timer_t,4, 10208, 2)
#elif __ia64__
CheckTypeSize(timer_t,4, 10208, 3)
#elif __powerpc__
CheckTypeSize(timer_t,4, 10208, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10208,0);
#endif

#ifdef __i386__
CheckTypeSize(clockid_t,4, 10209, 2)
#elif __ia64__
CheckTypeSize(clockid_t,4, 10209, 3)
#elif __powerpc__
CheckTypeSize(clockid_t,4, 10209, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10209,0);
#endif

#ifdef __i386__
CheckTypeSize(ino_t,4, 8985, 2)
#elif __ia64__
CheckTypeSize(ino_t,8, 8985, 3)
#elif __powerpc__
CheckTypeSize(ino_t,4, 8985, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8985,0);
#endif

#ifdef __i386__
CheckTypeSize(gid_t,4, 9012, 2)
#elif __ia64__
CheckTypeSize(gid_t,4, 9012, 3)
#elif __powerpc__
CheckTypeSize(gid_t,4, 9012, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9012,0);
#endif

#ifdef __i386__
CheckTypeSize(dev_t,8, 9159, 2)
#elif __ia64__
CheckTypeSize(dev_t,8, 9159, 3)
#elif __powerpc__
CheckTypeSize(dev_t,8, 9159, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9159,0);
#endif

#ifdef __i386__
CheckTypeSize(mode_t,4, 9160, 2)
#elif __ia64__
CheckTypeSize(mode_t,4, 9160, 3)
#elif __powerpc__
CheckTypeSize(mode_t,4, 9160, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9160,0);
#endif

#ifdef __i386__
CheckTypeSize(nlink_t,4, 9162, 2)
#elif __ia64__
CheckTypeSize(nlink_t,8, 9162, 3)
#elif __powerpc__
CheckTypeSize(nlink_t,4, 9162, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9162,0);
#endif

#ifdef __i386__
CheckTypeSize(caddr_t,4, 9258, 2)
#elif __ia64__
CheckTypeSize(caddr_t,8, 9258, 3)
#elif __powerpc__
CheckTypeSize(caddr_t,4, 9258, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9258,0);
#endif

#ifdef __i386__
CheckTypeSize(ushort,2, 9264, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9264,0);
#endif

#ifdef __i386__
CheckTypeSize(ino64_t,8, 8987, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8987,0);
#endif

#ifdef __i386__
CheckTypeSize(loff_t,8, 9167, 2)
#elif __ia64__
CheckTypeSize(loff_t,8, 9167, 3)
#elif __powerpc__
CheckTypeSize(loff_t,8, 9167, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9167,0);
#endif

#ifdef __i386__
CheckTypeSize(blkcnt_t,4, 9172, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9172,0);
#endif

#ifdef __i386__
CheckTypeSize(blkcnt64_t,8, 9178, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9178,0);
#endif

#ifdef __i386__
CheckTypeSize(u_char,1, 9259, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9259,0);
#endif

#ifdef __i386__
CheckTypeSize(u_short,2, 9260, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9260,0);
#endif

#ifdef __i386__
CheckTypeSize(u_long,4, 9262, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9262,0);
#endif

#ifdef __i386__
CheckTypeSize(fd_set,128, 10133, 2)
#elif __ia64__
CheckTypeSize(fd_set,128, 10133, 3)
#elif __powerpc__
CheckTypeSize(fd_set,128, 10133, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10133,0);
#endif

#ifdef __i386__
CheckTypeSize(clock_t,4, 9164, 2)
#elif __ia64__
CheckTypeSize(clock_t,8, 9164, 3)
#elif __powerpc__
CheckTypeSize(clock_t,4, 9164, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9164,0);
#endif

#ifdef __i386__
CheckTypeSize(time_t,4, 9191, 2)
#elif __ia64__
CheckTypeSize(time_t,8, 9191, 3)
#elif __powerpc__
CheckTypeSize(time_t,4, 9191, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9191,0);
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
