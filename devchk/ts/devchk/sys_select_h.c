/*
 * Test of sys/select.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/select.h"



#ifdef TET_TEST
void sys_select_h()
{
#else
int sys_select_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/select.h\n");
#endif

#ifdef FD_SETSIZE
	CompareConstant(FD_SETSIZE,1024)
#else
Msg( "Error: Constant not found: FD_SETSIZE\n");
cnt++;
#endif

/* No test for FD_ZERO(fdsetp) */
/* No test for FD_SET(d,set) */
/* No test for FD_CLR(d,set) */
/* No test for FD_ISSET(d,set) */
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/select.h\n",cnt);
return cnt;
#endif

}
