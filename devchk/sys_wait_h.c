/*
 * Test of sys/wait.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/wait.h"



int sys_wait_h()
{
int cnt=0;
#ifdef P_ALL
CompareConstant(P_ALL,(-1))
#else
Msg( "Warning: Constant not found: P_ALL\n");
#endif
#ifdef P_PGID
CompareConstant(P_PGID,(-1))
#else
Msg( "Warning: Constant not found: P_PGID\n");
#endif
#ifdef P_PID
CompareConstant(P_PID,(-1))
#else
Msg( "Warning: Constant not found: P_PID\n");
#endif
#ifdef WCONTINUED
CompareConstant(WCONTINUED,(-1))
#else
Msg( "Warning: Constant not found: WCONTINUED\n");
#endif
#ifdef WEXITED
CompareConstant(WEXITED,(-1))
#else
Msg( "Warning: Constant not found: WEXITED\n");
#endif
/* No test for WEXITSTATUS(s) */
/* No test for WIFCONTINUED(s) */
/* No test for WIFEXITED(s) */
/* No test for WIFSIGNALED(s) */
/* No test for WIFSTOPPED(s) */
#ifdef WNOHANG
CompareConstant(WNOHANG,1)
#else
Msg( "Warning: Constant not found: WNOHANG\n");
#endif
#ifdef WNOWAIT
CompareConstant(WNOWAIT,(-1))
#else
Msg( "Warning: Constant not found: WNOWAIT\n");
#endif
#ifdef WSTOPPED
CompareConstant(WSTOPPED,(-1))
#else
Msg( "Warning: Constant not found: WSTOPPED\n");
#endif
/* No test for WSTOPSIG(s) */
/* No test for WTERMSIG(s) */
#ifdef WUNTRACED
CompareConstant(WUNTRACED,2)
#else
Msg( "Warning: Constant not found: WUNTRACED\n");
#endif
printf("%d tests in sys/wait.h\n",cnt);
return cnt;
}
