/*
 * Test of sys/wait.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/wait.h"



int sys_wait_h()
{
int cnt=0;
CheckTypeSize(__WAIT_STATUS,0)
CheckTypeSize(idtype_t,0)
printf("%d tests in sys/wait.h\n",cnt);
return cnt;
}
