/*
 * Test of sys/wait.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/wait.h"



int sys_wait_h()
{
int cnt=0;
CheckTypeSize(idtype_t,4)
printf("%d tests in sys/wait.h\n",cnt);
return cnt;
}
