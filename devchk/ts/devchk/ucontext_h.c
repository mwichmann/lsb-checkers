/*
 * Test of ucontext.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "ucontext.h"



#ifdef TET_TEST
void ucontext_h()
{
#else
int ucontext_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in ucontext.h\n");
#endif

#ifdef NGREG
	CompareConstant(NGREG,19)
#else
Msg( "Error: Constant not found: NGREG\n");
cnt++;
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in ucontext.h\n",cnt);
return cnt;
#endif

}
