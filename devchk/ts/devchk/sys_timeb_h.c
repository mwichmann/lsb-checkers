/*
 * Test of sys/timeb.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "sys/timeb.h"



#ifdef TET_TEST
void sys_timeb_h()
{
#else
int sys_timeb_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/timeb.h\n");
#endif

#ifdef __i386__
CheckTypeSize(struct timeb,12, 10216, 2)
#elif __ia64__
CheckTypeSize(struct timeb,16, 10216, 3)
#elif __powerpc__
CheckTypeSize(struct timeb,12, 10216, 6)
#elif __s390__
CheckTypeSize(struct timeb,0, 10216, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10216,0);
Msg("Find size of timeb (10216)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/timeb.h\n",cnt);
return cnt;
#endif

}
