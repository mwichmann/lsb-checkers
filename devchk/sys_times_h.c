/*
 * Test of sys/times.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/times.h"



int sys_times_h()
{
int cnt=0;
CheckTypeSize(struct tms,0)
CheckOffset(struct tms,tms_utime,0)
CheckOffset(struct tms,tms_stime,4)
CheckOffset(struct tms,tms_cutime,8)
CheckOffset(struct tms,tms_cstime,12)
printf("%d tests in sys/times.h\n",cnt);
return cnt;
}
