/*
 * Test of ulimit.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "ulimit.h"



int ulimit_h()
{
int cnt=0;
#ifdef UL_GETFSIZE
CompareConstant(UL_GETFSIZE,1)
#else
Msg( "Warning: Constant not found: UL_GETFSIZE\n");
#endif
#ifdef UL_SETFSIZE
CompareConstant(UL_SETFSIZE,2)
#else
Msg( "Warning: Constant not found: UL_SETFSIZE\n");
#endif
printf("%d tests in ulimit.h\n",cnt);
return cnt;
}
