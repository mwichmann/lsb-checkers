/*
 * Test of netdb.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "netdb.h"



#ifdef TET_TEST
void netdb_h()
{
#else
int netdb_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in netdb.h\n");
#endif

/* No test for h_addr */
#ifdef __i386__
CheckTypeSize(struct servent,16, 10134, 2)
#elif __ia64__
CheckTypeSize(struct servent,32, 10134, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10134,0);
#endif

#ifdef __i386__
CheckTypeSize(struct hostent,20, 10136, 2)
#elif __ia64__
CheckTypeSize(struct hostent,32, 10136, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10136,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in netdb.h\n",cnt);
return cnt;
#endif

}
