/*
 * Test of fnmatch.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "fnmatch.h"



int fnmatch_h()
{
int cnt=0;
#ifdef FNM_NOSYS
CompareConstant(FNM_NOSYS,(-1))
#else
Msg( "Warning: Constant not found: FNM_NOSYS\n");
#endif
#ifdef FNM_NOESCAPE
CompareConstant(FNM_NOESCAPE,2)
#else
Msg( "Warning: Constant not found: FNM_NOESCAPE\n");
#endif
#ifdef FNM_PERIOD
CompareConstant(FNM_PERIOD,4)
#else
Msg( "Warning: Constant not found: FNM_PERIOD\n");
#endif
#ifdef FNM_PATHNAME
CompareConstant(FNM_PATHNAME,1)
#else
Msg( "Warning: Constant not found: FNM_PATHNAME\n");
#endif
#ifdef FNM_NOMATCH
CompareConstant(FNM_NOMATCH,1)
#else
Msg( "Warning: Constant not found: FNM_NOMATCH\n");
#endif
printf("%d tests in fnmatch.h\n",cnt);
return cnt;
}
