/*
 * Test of sys/param.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/param.h"



#ifdef TET_TEST
void sys_param_h()
{
#else
int sys_param_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/param.h\n");
#endif

#ifdef MAXPATHLEN
	CompareConstant(MAXPATHLEN,4095)
#else
Msg( "Error: Constant not found: MAXPATHLEN\n");
cnt++;
#endif

#ifdef MAXPATHLEN
	CompareConstant(MAXPATHLEN,PATH_MAX)
#else
Msg( "Error: Constant not found: MAXPATHLEN\n");
cnt++;
#endif

#ifdef NOFILE
	CompareConstant(NOFILE,256)
#else
Msg( "Error: Constant not found: NOFILE\n");
cnt++;
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/param.h\n",cnt);
return cnt;
#endif

}
