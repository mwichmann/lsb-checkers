/*
 * Test of sys/types.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <stdarg.h>
#include "sys/types.h"



int sys_types_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(int32_t,4,6997)
#elif __ia64__
CheckTypeSize(int32_t,4,6997)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6997,0);
#endif
#ifdef __i386__
CheckTypeSize(__ssize_t,4,8970)
#elif __ia64__
CheckTypeSize(__ssize_t,0,8970)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8970,0);
#endif
#ifdef __i386__
CheckTypeSize(__off_t,4,8971)
#elif __ia64__
CheckTypeSize(__off_t,0,8971)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8971,0);
#endif
#ifdef __i386__
CheckTypeSize(__off64_t,8,8972)
#elif __ia64__
CheckTypeSize(__off64_t,0,8972)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8972,0);
#endif
#ifdef __i386__
CheckTypeSize(va_list,4,8983)
#elif __ia64__
CheckTypeSize(va_list,0,8983)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8983,0);
#endif
#ifdef __i386__
CheckTypeSize(__mode_t,4,8988)
#elif __ia64__
CheckTypeSize(__mode_t,0,8988)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8988,0);
#endif
#ifdef __i386__
CheckTypeSize(__gid_t,4,9011)
#elif __ia64__
CheckTypeSize(__gid_t,0,9011)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9011,0);
#endif
#ifdef __i386__
CheckTypeSize(__uid_t,4,9068)
#elif __ia64__
CheckTypeSize(__uid_t,0,9068)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9068,0);
#endif
#ifdef __i386__
CheckTypeSize(__pid_t,4,9078)
#elif __ia64__
CheckTypeSize(__pid_t,0,9078)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9078,0);
#endif
#ifdef __i386__
CheckTypeSize(__gnuc_va_list,4,9110)
#elif __ia64__
CheckTypeSize(__gnuc_va_list,0,9110)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9110,0);
#endif
#ifdef __i386__
CheckTypeSize(key_t,4,9116)
#elif __ia64__
CheckTypeSize(key_t,4,9116)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9116,0);
#endif
#ifdef __i386__
CheckTypeSize(size_t,4,8969)
#elif __ia64__
CheckTypeSize(size_t,0,8969)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8969,0);
#endif
printf("%d tests in sys/types.h\n",cnt);
return cnt;
}
