/*
 * Test of sys/socket.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/socket.h"



int sys_socket_h()
{
int cnt=0;
CheckTypeSize(__SOCKADDR_ARG,0)
CheckTypeSize(__CONST_SOCKADDR_ARG,0)
printf("%d tests in sys/socket.h\n",cnt);
return cnt;
}
