/*
 * Test of inttypes.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "inttypes.h"



int inttypes_h()
{
int cnt=0;
CheckTypeSize(imaxdiv_t,16,)
printf("%d tests in inttypes.h\n",cnt);
return cnt;
}
