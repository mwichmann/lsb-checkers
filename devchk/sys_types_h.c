/*
 * Test of sys/types.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/types.h"



int sys_types_h()
{
int cnt=0;
CheckTypeSize(size_t,4)
printf("%d tests in sys/types.h\n",cnt);
return cnt;
}
