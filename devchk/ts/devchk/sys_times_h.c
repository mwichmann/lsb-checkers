/*
 * Test of sys/times.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/times.h"



#ifdef TET_TEST
void sys_times_h()
{
#else
int sys_times_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/times.h\n");
#endif

#ifdef __i386__
CheckTypeSize(struct tms,16, 6990, 2)
#elif __ia64__
CheckTypeSize(struct tms,32, 6990, 3)
#elif __powerpc__
CheckTypeSize(struct tms,16, 6990, 6)
#elif __s390__
CheckTypeSize(struct tms,0, 6990, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6990,0);
Msg("Find size of tms (6990)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/times.h\n",cnt);
return cnt;
#endif

}
