/*
 * Test of sys/socket.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "sys/socket.h"



#ifdef TET_TEST
void sys_socket_h()
{
#else
int sys_socket_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in sys/socket.h\n");
#endif

#ifdef __i386__
CheckTypeSize(socklen_t,4)
#elif __ia64__
CheckTypeSize(socklen_t,0)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9155,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in sys/socket.h\n",cnt);
return cnt;
#endif

}
