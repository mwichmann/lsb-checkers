/*
 * Test of sys/resource.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/resource.h"



#ifdef TET_TEST
void sys_resource_h()
{
#else
int sys_resource_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/resource.h\n");
#endif

#ifdef RLIMIT_CPU
	CompareConstant(RLIMIT_CPU,0)
#else
Msg( "Error: Constant not found: RLIMIT_CPU\n");
cnt++;
#endif

#ifdef RLIMIT_FSIZE
	CompareConstant(RLIMIT_FSIZE,1)
#else
Msg( "Error: Constant not found: RLIMIT_FSIZE\n");
cnt++;
#endif

#ifdef RLIMIT_DATA
	CompareConstant(RLIMIT_DATA,2)
#else
Msg( "Error: Constant not found: RLIMIT_DATA\n");
cnt++;
#endif

#ifdef RLIMIT_STACK
	CompareConstant(RLIMIT_STACK,3)
#else
Msg( "Error: Constant not found: RLIMIT_STACK\n");
cnt++;
#endif

#ifdef RLIMIT_CORE
	CompareConstant(RLIMIT_CORE,4)
#else
Msg( "Error: Constant not found: RLIMIT_CORE\n");
cnt++;
#endif

#ifdef RLIMIT_NOFILE
	CompareConstant(RLIMIT_NOFILE,7)
#else
Msg( "Error: Constant not found: RLIMIT_NOFILE\n");
cnt++;
#endif

#ifdef RLIMIT_AS
	CompareConstant(RLIMIT_AS,9)
#else
Msg( "Error: Constant not found: RLIMIT_AS\n");
cnt++;
#endif

#ifdef RLIM_INFINITY
	CompareConstant(RLIM_INFINITY,(~0UL))
#else
Msg( "Error: Constant not found: RLIM_INFINITY\n");
cnt++;
#endif

#ifdef RLIM_SAVED_CUR
	CompareConstant(RLIM_SAVED_CUR,-1)
#else
Msg( "Error: Constant not found: RLIM_SAVED_CUR\n");
cnt++;
#endif

#ifdef RLIM_SAVED_MAX
	CompareConstant(RLIM_SAVED_MAX,-1)
#else
Msg( "Error: Constant not found: RLIM_SAVED_MAX\n");
cnt++;
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/resource.h\n",cnt);
return cnt;
#endif

}
