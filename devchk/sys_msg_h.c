/*
 * Test of sys/msg.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/msg.h"



int sys_msg_h()
{
int cnt=0;
CheckTypeSize(struct msgbuf,0)
CheckOffset(struct msgbuf,mtype,0)
CheckOffset(struct msgbuf,mtext,4)
printf("%d tests in sys/msg.h\n",cnt);
return cnt;
}
