/*
 * Test of glob.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "glob.h"



#ifdef TET_TEST
void glob_h()
{
#else
int glob_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in glob.h\n");
#endif

#ifdef GLOB_ERR
	CompareConstant(GLOB_ERR,(1<<0))
#else
Msg( "Warning: Constant not found: GLOB_ERR\n");
#endif

#ifdef GLOB_MARK
	CompareConstant(GLOB_MARK,(1<<1))
#else
Msg( "Warning: Constant not found: GLOB_MARK\n");
#endif

#ifdef GLOB_NOSORT
	CompareConstant(GLOB_NOSORT,(1<<2))
#else
Msg( "Warning: Constant not found: GLOB_NOSORT\n");
#endif

#ifdef GLOB_DOOFFS
	CompareConstant(GLOB_DOOFFS,(1<<3))
#else
Msg( "Warning: Constant not found: GLOB_DOOFFS\n");
#endif

#ifdef GLOB_NOCHECK
	CompareConstant(GLOB_NOCHECK,(1<<4))
#else
Msg( "Warning: Constant not found: GLOB_NOCHECK\n");
#endif

#ifdef GLOB_APPEND
	CompareConstant(GLOB_APPEND,(1<<5))
#else
Msg( "Warning: Constant not found: GLOB_APPEND\n");
#endif

#ifdef GLOB_NOESCAPE
	CompareConstant(GLOB_NOESCAPE,(1<<6))
#else
Msg( "Warning: Constant not found: GLOB_NOESCAPE\n");
#endif

#ifdef GLOB_PERIOD
	CompareConstant(GLOB_PERIOD,(1<<7))
#else
Msg( "Warning: Constant not found: GLOB_PERIOD\n");
#endif

#ifdef GLOB_MAGCHAR
	CompareConstant(GLOB_MAGCHAR,(1<<8))
#else
Msg( "Warning: Constant not found: GLOB_MAGCHAR\n");
#endif

#ifdef GLOB_ALTDIRFUNC
	CompareConstant(GLOB_ALTDIRFUNC,(1<<9))
#else
Msg( "Warning: Constant not found: GLOB_ALTDIRFUNC\n");
#endif

#ifdef GLOB_BRACE
	CompareConstant(GLOB_BRACE,(1<<10))
#else
Msg( "Warning: Constant not found: GLOB_BRACE\n");
#endif

#ifdef GLOB_NOMAGIC
	CompareConstant(GLOB_NOMAGIC,(1<<11))
#else
Msg( "Warning: Constant not found: GLOB_NOMAGIC\n");
#endif

#ifdef GLOB_TILDE
	CompareConstant(GLOB_TILDE,(1<<12))
#else
Msg( "Warning: Constant not found: GLOB_TILDE\n");
#endif

#ifdef GLOB_ONLYDIR
	CompareConstant(GLOB_ONLYDIR,(1<<13))
#else
Msg( "Warning: Constant not found: GLOB_ONLYDIR\n");
#endif

#ifdef GLOB_TILDE_CHECK
	CompareConstant(GLOB_TILDE_CHECK,(1<<14))
#else
Msg( "Warning: Constant not found: GLOB_TILDE_CHECK\n");
#endif

#ifdef GLOB_NOSPACE
	CompareConstant(GLOB_NOSPACE,1)
#else
Msg( "Warning: Constant not found: GLOB_NOSPACE\n");
#endif

#ifdef GLOB_ABORTED
	CompareConstant(GLOB_ABORTED,2)
#else
Msg( "Warning: Constant not found: GLOB_ABORTED\n");
#endif

#ifdef GLOB_NOMATCH
	CompareConstant(GLOB_NOMATCH,3)
#else
Msg( "Warning: Constant not found: GLOB_NOMATCH\n");
#endif

#ifdef GLOB_NOSYS
	CompareConstant(GLOB_NOSYS,4)
#else
Msg( "Warning: Constant not found: GLOB_NOSYS\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in glob.h\n",cnt);
return cnt;
#endif

}
