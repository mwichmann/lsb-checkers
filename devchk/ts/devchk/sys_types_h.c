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

#ifdef NULL
	CompareConstant(NULL,((void*)0))
#else
Msg( "Error: Constant not found: NULL\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(__ssize_t,4, 8970, 2)
#elif __ia64__
CheckTypeSize(__ssize_t,0, 8970, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8970,0);
#endif

#ifdef __i386__
CheckTypeSize(__off_t,4, 8971, 2)
#elif __ia64__
CheckTypeSize(__off_t,0, 8971, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8971,0);
#endif

#ifdef __i386__
CheckTypeSize(__off64_t,8, 8972, 2)
#elif __ia64__
CheckTypeSize(__off64_t,0, 8972, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8972,0);
#endif

#ifdef __i386__
CheckTypeSize(__uid_t,4, 9068, 2)
#elif __ia64__
CheckTypeSize(__uid_t,0, 9068, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9068,0);
#endif

#ifdef __i386__
CheckTypeSize(key_t,4, 9116, 2)
#elif __ia64__
CheckTypeSize(key_t,4, 9116, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9116,0);
#endif

#ifdef __i386__
CheckTypeSize(mode_t,4, 9160, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9160,0);
#endif

#ifdef __i386__
CheckTypeSize(caddr_t,4, 9258, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9258,0);
#endif

#ifdef __i386__
CheckTypeSize(__gid_t,4, 9011, 2)
#elif __ia64__
CheckTypeSize(__gid_t,0, 9011, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9011,0);
#endif

#ifdef __i386__
CheckTypeSize(loff_t,8, 9167, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9167,0);
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
