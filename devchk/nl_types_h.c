/*
 * Test of nl_types.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "nl_types.h"



int nl_types_h()
{
int cnt=0;
#ifdef NL_CAT_LOCALE
CompareConstant(NL_CAT_LOCALE,1)
#else
Msg( "Warning: Constant not found: NL_CAT_LOCALE\n");
#endif
#ifdef NL_SETD
CompareConstant(NL_SETD,1)
#else
Msg( "Warning: Constant not found: NL_SETD\n");
#endif
printf("%d tests in nl_types.h\n",cnt);
return cnt;
}
