/*
 * Test of stddef.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "stddef.h"



#ifdef TET_TEST
void stddef_h()
{
#else
int stddef_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in stddef.h\n");
#endif

#ifdef NULL
	CompareConstant(NULL,((void*)0))
#else
Msg( "Warning: Constant not found: NULL\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in stddef.h\n",cnt);
return cnt;
#endif

}
