/*
 * Test of sys/socket.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/socket.h"



int sys_socket_h()
{
int cnt=0;
CheckTypeSize(__SOCKADDR_ARG,4)
CheckTypeSize(struct osockaddr,0)
CheckOffset(struct osockaddr,sa_family,0)
CheckOffset(struct osockaddr,sa_data,2)
CheckTypeSize(__CONST_SOCKADDR_ARG,4)
printf("%d tests in sys/socket.h\n",cnt);
return cnt;
}
