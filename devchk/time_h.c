/*
 * Test of time.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "time.h"



int time_h()
{
int cnt=0;
CheckTypeSize(time_t,4)
CheckTypeSize(clock_t,4)
printf("%d tests in time.h\n",cnt);
return cnt;
}
