/*
 * Test of unistd.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "unistd.h"



int unistd_h()
{
int cnt=0;
CheckTypeSize(ssize_t,4,)
printf("%d tests in unistd.h\n",cnt);
return cnt;
}
