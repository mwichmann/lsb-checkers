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

#ifdef __i386__
CheckTypeSize(int64_t,8, 6998, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6998,0);
#endif

#ifdef __i386__
CheckTypeSize(ssize_t,4, 9029, 2)
#elif __ia64__
CheckTypeSize(ssize_t,8, 9029, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9029,0);
#endif

#ifdef __i386__
CheckTypeSize(uid_t,4, 9069, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9069,0);
#endif

#ifdef __i386__
CheckTypeSize(pid_t,4, 9094, 2)
#elif __ia64__
CheckTypeSize(pid_t,4, 9094, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9094,0);
#endif

#ifdef __i386__
CheckTypeSize(off_t,4, 9111, 2)
#elif __ia64__
CheckTypeSize(off_t,8, 9111, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9111,0);
#endif

#ifdef __i386__
CheckTypeSize(key_t,4, 9116, 2)
#elif __ia64__
CheckTypeSize(key_t,4, 9116, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9116,0);
#endif

#ifdef __i386__
CheckTypeSize(id_t,4, 9169, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9169,0);
#endif

#ifdef __i386__
CheckTypeSize(suseconds_t,4, 9249, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9249,0);
#endif

#ifdef __i386__
CheckTypeSize(fd_mask,4, 10131, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10131,0);
#endif

#ifdef __i386__
CheckTypeSize(timer_t,4, 10208, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10208,0);
#endif

#ifdef __i386__
CheckTypeSize(clockid_t,4, 10209, 2)
#elif __ia64__
CheckTypeSize(clockid_t,8, 10209, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10209,0);
#endif

#ifdef __i386__
CheckTypeSize(ino_t,4, 8985, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8985,0);
#endif

#ifdef __i386__
CheckTypeSize(gid_t,4, 9012, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9012,0);
#endif

#ifdef __i386__
CheckTypeSize(dev_t,8, 9159, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9159,0);
#endif

#ifdef __i386__
CheckTypeSize(mode_t,4, 9160, 2)
#elif __ia64__
CheckTypeSize(mode_t,4, 9160, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9160,0);
#endif

#ifdef __i386__
CheckTypeSize(nlink_t,4, 9162, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9162,0);
#endif

#ifdef __i386__
CheckTypeSize(caddr_t,4, 9258, 2)
#elif __ia64__
CheckTypeSize(caddr_t,8, 9258, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9258,0);
#endif

#ifdef __i386__
CheckTypeSize(loff_t,8, 9167, 2)
#elif __ia64__
CheckTypeSize(loff_t,8, 9167, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9167,0);
#endif

#ifdef __i386__
CheckTypeSize(fd_set,128, 10133, 2)
#elif __ia64__
CheckTypeSize(fd_set,128, 10133, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10133,0);
#endif

#ifdef __i386__
CheckTypeSize(clock_t,4, 9164, 2)
#elif __ia64__
CheckTypeSize(clock_t,8, 9164, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9164,0);
#endif

#ifdef __i386__
CheckTypeSize(time_t,4, 9191, 2)
#elif __ia64__
CheckTypeSize(time_t,8, 9191, 3)
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
