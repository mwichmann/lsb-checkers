/*
 * Test of utime.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "utime.h"



int utime_h()
{
int cnt=0;
CheckTypeSize(struct utimbuf,0)
CheckOffset(struct utimbuf,actime,0)
CheckOffset(struct utimbuf,modtime,4)
printf("%d tests in utime.h\n",cnt);
return cnt;
}
