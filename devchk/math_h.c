/*
 * Test of math.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "math.h"



int math_h()
{
int cnt=0;
CheckTypeSize(_LIB_VERSION_TYPE,4)
CheckTypeSize(struct exception,0)
CheckOffset(struct exception,type,0)
CheckOffset(struct exception,name,4)
CheckOffset(struct exception,arg1,8)
CheckOffset(struct exception,arg2,16)
CheckOffset(struct exception,retval,24)
printf("%d tests in math.h\n",cnt);
return cnt;
}
