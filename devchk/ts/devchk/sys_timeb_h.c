/*
 * Test of sys/timeb.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10216,0);
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
