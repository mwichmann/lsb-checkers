/*
 * Test of stdio.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "stdio.h"



int stdio_h()
{
int cnt=0;
CheckTypeSize(fpos_t,4)
CheckTypeSize(FILE,148)
printf("%d tests in stdio.h\n",cnt);
return cnt;
}
