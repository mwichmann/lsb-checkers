/*
 * Test of sys/times.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6990,0);
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
