/*
 * Test of sys/types.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/types.h"



int sys_types_h()
{
int cnt=0;
CheckTypeSize(int32_t,0)
CheckTypeSize(ssize_t,0)
CheckTypeSize(key_t,0)
printf("%d tests in sys/types.h\n",cnt);
return cnt;
}
