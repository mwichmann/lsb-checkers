/*
 * Test of sys/socket.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/socket.h"



int sys_socket_h()
{
int cnt=0;
#ifdef __i386__
CheckTypeSize(__SOCKADDR_ARG,4,6985)
#elif __ia64__
CheckTypeSize(__SOCKADDR_ARG,8,6985)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6985,0);
#endif
#ifdef __i386__
CheckTypeSize(__CONST_SOCKADDR_ARG,4,6987)
#elif __ia64__
CheckTypeSize(__CONST_SOCKADDR_ARG,8,6987)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,6987,0);
#endif
printf("%d tests in sys/socket.h\n",cnt);
return cnt;
}
