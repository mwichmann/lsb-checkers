/*
 * Test of glob.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "glob.h"



int glob_h()
{
int cnt=0;
#ifdef GLOB_NOSYS
CompareConstant(GLOB_NOSYS,4)
#else
Msg( "Warning: Constant not found: GLOB_NOSYS\n");
#endif
#ifdef GLOB_NOSPACE
CompareConstant(GLOB_NOSPACE,1)
#else
Msg( "Warning: Constant not found: GLOB_NOSPACE\n");
#endif
#ifdef GLOB_NOSORT
CompareConstant(GLOB_NOSORT,4)
#else
Msg( "Warning: Constant not found: GLOB_NOSORT\n");
#endif
#ifdef GLOB_NOMATCH
CompareConstant(GLOB_NOMATCH,3)
#else
Msg( "Warning: Constant not found: GLOB_NOMATCH\n");
#endif
#ifdef GLOB_NOESCAPE
CompareConstant(GLOB_NOESCAPE,64)
#else
Msg( "Warning: Constant not found: GLOB_NOESCAPE\n");
#endif
#ifdef GLOB_NOCHECK
CompareConstant(GLOB_NOCHECK,16)
#else
Msg( "Warning: Constant not found: GLOB_NOCHECK\n");
#endif
#ifdef GLOB_MARK
CompareConstant(GLOB_MARK,2)
#else
Msg( "Warning: Constant not found: GLOB_MARK\n");
#endif
#ifdef GLOB_ERR
CompareConstant(GLOB_ERR,1)
#else
Msg( "Warning: Constant not found: GLOB_ERR\n");
#endif
#ifdef GLOB_DOOFFS
CompareConstant(GLOB_DOOFFS,8)
#else
Msg( "Warning: Constant not found: GLOB_DOOFFS\n");
#endif
#ifdef GLOB_APPEND
CompareConstant(GLOB_APPEND,32)
#else
Msg( "Warning: Constant not found: GLOB_APPEND\n");
#endif
#ifdef GLOB_ABORTED
CompareConstant(GLOB_ABORTED,2)
#else
Msg( "Warning: Constant not found: GLOB_ABORTED\n");
#endif
printf("%d tests in glob.h\n",cnt);
return cnt;
}
