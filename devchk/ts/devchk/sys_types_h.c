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
CheckTypeSize(int32_t,4)
#elif __ia64__
CheckTypeSize(int32_t,4)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6997,0);
#endif

#ifdef __i386__
CheckTypeSize(__ssize_t,4)
#elif __ia64__
CheckTypeSize(__ssize_t,0)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8970,0);
#endif

#ifdef __i386__
CheckTypeSize(__off_t,4)
#elif __ia64__
CheckTypeSize(__off_t,0)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8971,0);
#endif

#ifdef __i386__
CheckTypeSize(__off64_t,8)
#elif __ia64__
CheckTypeSize(__off64_t,0)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8972,0);
#endif

#ifdef __i386__
CheckTypeSize(va_list,4)
#elif __ia64__
CheckTypeSize(va_list,0)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8983,0);
#endif

#ifdef __i386__
CheckTypeSize(__mode_t,4)
#elif __ia64__
CheckTypeSize(__mode_t,0)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8988,0);
#endif

#ifdef __i386__
CheckTypeSize(__gid_t,4)
#elif __ia64__
CheckTypeSize(__gid_t,0)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9011,0);
#endif

#ifdef __i386__
CheckTypeSize(__uid_t,4)
#elif __ia64__
CheckTypeSize(__uid_t,0)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9068,0);
#endif

#ifdef __i386__
CheckTypeSize(__pid_t,4)
#elif __ia64__
CheckTypeSize(__pid_t,0)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9078,0);
#endif

#ifdef __i386__
CheckTypeSize(__gnuc_va_list,4)
#elif __ia64__
CheckTypeSize(__gnuc_va_list,0)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9110,0);
#endif

#ifdef __i386__
CheckTypeSize(key_t,4)
#elif __ia64__
CheckTypeSize(key_t,4)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9116,0);
#endif

#ifdef __i386__
CheckTypeSize(size_t,4)
#elif __ia64__
CheckTypeSize(size_t,0)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8969,0);
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
