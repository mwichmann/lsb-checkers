/*
 * Test of signal.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "signal.h"



int signal_h()
{
int cnt=0;
CheckTypeSize(__sighandler_t,0)
printf("%d tests in signal.h\n",cnt);
return cnt;
}
