/*
 * Test of sys/wait.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include <signal.h>
#include "sys/wait.h"



#ifdef TET_TEST
void sys_wait_h()
{
#else
int sys_wait_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/wait.h\n");
#endif

#ifdef __i386__
CheckTypeSize(idtype_t,4)
#elif __ia64__
CheckTypeSize(idtype_t,4)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9185,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/wait.h\n",cnt);
return cnt;
#endif

}
