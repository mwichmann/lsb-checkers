/*
 * Test of sys/msg.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/msg.h"



int sys_msg_h()
{
int cnt=0;
#ifdef MSG_NOERROR
CompareConstant(MSG_NOERROR,4096)
#else
Msg( "Warning: Constant not found: MSG_NOERROR\n");
#endif
printf("%d tests in sys/msg.h\n",cnt);
return cnt;
}
