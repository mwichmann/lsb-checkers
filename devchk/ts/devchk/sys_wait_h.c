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

/* No test for WEXITSTATUS(status) */
/* No test for WTERMSIG(status) */
/* No test for WSTOPSIG(status) */
/* No test for WIFEXITED(status) */
/* No test for WIFSIGNALED(status) */
/* No test for WIFSTOPPED(status) */
#ifdef WCOREFLAG
	CompareConstant(WCOREFLAG,0x80)
#else
Msg( "Error: Constant not found: WCOREFLAG\n");
cnt++;
#endif

/* No test for WCOREDUMP(status) */
#ifdef WNOHANG
	CompareConstant(WNOHANG,0x00000001)
#else
Msg( "Error: Constant not found: WNOHANG\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(idtype_t,4, 9185, 2)
#elif __ia64__
CheckTypeSize(idtype_t,4, 9185, 3)
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
