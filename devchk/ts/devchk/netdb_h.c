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

#ifdef NETDB_INTERNAL
	CompareConstant(NETDB_INTERNAL,-1)
#else
Msg( "Error: Constant not found: NETDB_INTERNAL\n");
cnt++;
#endif

#ifdef NETDB_SUCCESS
	CompareConstant(NETDB_SUCCESS,0)
#else
Msg( "Error: Constant not found: NETDB_SUCCESS\n");
cnt++;
#endif

#ifdef HOST_NOT_FOUND
	CompareConstant(HOST_NOT_FOUND,1)
#else
Msg( "Error: Constant not found: HOST_NOT_FOUND\n");
cnt++;
#endif

#ifdef TRY_AGAIN
	CompareConstant(TRY_AGAIN,2)
#else
Msg( "Error: Constant not found: TRY_AGAIN\n");
cnt++;
#endif

#ifdef NO_RECOVERY
	CompareConstant(NO_RECOVERY,3)
#else
Msg( "Error: Constant not found: NO_RECOVERY\n");
cnt++;
#endif

#ifdef NO_DATA
	CompareConstant(NO_DATA,4)
#else
Msg( "Error: Constant not found: NO_DATA\n");
cnt++;
#endif

#ifdef NO_ADDRESS
	CompareConstant(NO_ADDRESS,NO_DATA)
#else
Msg( "Error: Constant not found: NO_ADDRESS\n");
cnt++;
#endif

/* No test for h_addr */
#ifdef __i386__
CheckTypeSize(struct servent,16, 10134, 2)
#elif __ia64__
CheckTypeSize(struct servent,32, 10134, 3)
#elif __powerpc__
CheckTypeSize(struct servent,16, 10134, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10134,0);
#endif

#ifdef __i386__
CheckTypeSize(struct hostent,20, 10136, 2)
#elif __ia64__
CheckTypeSize(struct hostent,32, 10136, 3)
#elif __powerpc__
CheckTypeSize(struct hostent,20, 10136, 6)
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
