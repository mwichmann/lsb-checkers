/*
 * Test of nl_types.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "nl_types.h"



int nl_types_h()
{
int cnt=0;
CheckTypeSize(nl_catd,0)
printf("%d tests in nl_types.h\n",cnt);
return cnt;
}
