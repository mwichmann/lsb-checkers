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
CheckTypeSize(socklen_t,4,9155)
#elif __ia64__
CheckTypeSize(socklen_t,0,9155)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9155,0);
#endif
printf("%d tests in sys/socket.h\n",cnt);
return cnt;
}
