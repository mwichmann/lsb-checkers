/*
 * Test of netinet/in.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "netinet/in.h"



#ifdef TET_TEST
void netinet_in_h()
{
#else
int netinet_in_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in netinet/in.h\n");
#endif

#ifdef INADDR_ANY
	CompareConstant(INADDR_ANY,0)
#else
Msg( "Error: Constant not found: INADDR_ANY\n");
cnt++;
#endif

#ifdef __i386__
CheckTypeSize(struct in_addr,4, 10143, 2)
CheckOffset(struct in_addr,s_addr,0)
#elif __ia64__
CheckTypeSize(struct in_addr,0, 10143, 3)
CheckOffset(struct in_addr,s_addr,0)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10143,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in netinet/in.h\n",cnt);
return cnt;
#endif

}
