/*
 * Test of sys/shm.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/shm.h"



#ifdef TET_TEST
void sys_shm_h()
{
#else
int sys_shm_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/shm.h\n");
#endif

/* No test for SHMLBA */
#ifdef SHM_RDONLY
	CompareConstant(SHM_RDONLY,4096)
#else
Msg( "Error: Constant not found: SHM_RDONLY\n");
cnt++;
#endif

#ifdef SHM_RND
	CompareConstant(SHM_RND,020000)
#else
Msg( "Error: Constant not found: SHM_RND\n");
cnt++;
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/shm.h\n",cnt);
return cnt;
#endif

}
