/*
 * Test of sys/ioctl.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/ioctl.h"



#ifdef TET_TEST
void sys_ioctl_h()
{
#else
int sys_ioctl_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/ioctl.h\n");
#endif

#ifdef FIONREAD
	CompareConstant(FIONREAD,0x541B)
#else
Msg( "Error: Constant not found: FIONREAD\n");
cnt++;
#endif

#ifdef TIOCNOTTY
	CompareConstant(TIOCNOTTY,0x5422)
#else
Msg( "Error: Constant not found: TIOCNOTTY\n");
cnt++;
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/ioctl.h\n",cnt);
return cnt;
#endif

}
