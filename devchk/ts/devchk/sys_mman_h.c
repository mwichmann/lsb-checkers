/*
 * Test of sys/mman.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/mman.h"



#ifdef TET_TEST
void sys_mman_h()
{
#else
int sys_mman_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/mman.h\n");
#endif

#ifdef PROT_READ
	CompareConstant(PROT_READ,0x1)
#else
Msg( "Error: Constant not found: PROT_READ\n");
cnt++;
#endif

#ifdef MAP_SHARED
	CompareConstant(MAP_SHARED,0x01)
#else
Msg( "Error: Constant not found: MAP_SHARED\n");
cnt++;
#endif

#ifdef MAP_PRIVATE
	CompareConstant(MAP_PRIVATE,0x02)
#else
Msg( "Error: Constant not found: MAP_PRIVATE\n");
cnt++;
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/mman.h\n",cnt);
return cnt;
#endif

}
