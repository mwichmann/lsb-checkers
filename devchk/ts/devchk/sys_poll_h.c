/*
 * Test of sys/poll.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/poll.h"



#ifdef TET_TEST
void sys_poll_h()
{
#else
int sys_poll_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/poll.h\n");
#endif

#ifdef POLLIN
	CompareConstant(POLLIN,0x0001)
#else
Msg( "Error: Constant not found: POLLIN\n");
cnt++;
#endif

#ifdef POLLPRI
	CompareConstant(POLLPRI,0x0002)
#else
Msg( "Error: Constant not found: POLLPRI\n");
cnt++;
#endif

#ifdef POLLOUT
	CompareConstant(POLLOUT,0x0004)
#else
Msg( "Error: Constant not found: POLLOUT\n");
cnt++;
#endif

#ifdef POLLERR
	CompareConstant(POLLERR,0x0008)
#else
Msg( "Error: Constant not found: POLLERR\n");
cnt++;
#endif

#ifdef POLLHUP
	CompareConstant(POLLHUP,0x0010)
#else
Msg( "Error: Constant not found: POLLHUP\n");
cnt++;
#endif

#ifdef POLLNVAL
	CompareConstant(POLLNVAL,0x0020)
#else
Msg( "Error: Constant not found: POLLNVAL\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(struct pollfd,8, 9913, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9913,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/poll.h\n",cnt);
return cnt;
#endif

}
