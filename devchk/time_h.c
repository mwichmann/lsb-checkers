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
CheckTypeSize(struct tm,0)
CheckOffset(struct tm,tm_sec,0)
CheckOffset(struct tm,tm_min,4)
CheckOffset(struct tm,tm_hour,8)
CheckOffset(struct tm,tm_mday,12)
CheckOffset(struct tm,tm_mon,16)
CheckOffset(struct tm,tm_year,20)
CheckOffset(struct tm,tm_wday,24)
CheckOffset(struct tm,tm_yday,28)
CheckOffset(struct tm,tm_isdst,32)
CheckOffset(struct tm,tm_gmtoff,36)
CheckOffset(struct tm,tm_zone,40)
printf("%d tests in time.h\n",cnt);
return cnt;
}
