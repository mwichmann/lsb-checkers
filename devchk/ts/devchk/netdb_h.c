/*
 * Test of netdb.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
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

#ifdef _LSB_DEFAULT_ARCH
/* No test for h_errno */
#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef NETDB_INTERNAL
	CompareConstant(NETDB_INTERNAL,-1,4433,architecture)
#else
Msg( "Error: Constant not found: NETDB_INTERNAL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef NETDB_SUCCESS
	CompareConstant(NETDB_SUCCESS,0,4434,architecture)
#else
Msg( "Error: Constant not found: NETDB_SUCCESS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef HOST_NOT_FOUND
	CompareConstant(HOST_NOT_FOUND,1,4435,architecture)
#else
Msg( "Error: Constant not found: HOST_NOT_FOUND\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef TRY_AGAIN
	CompareConstant(TRY_AGAIN,2,4436,architecture)
#else
Msg( "Error: Constant not found: TRY_AGAIN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef NO_RECOVERY
	CompareConstant(NO_RECOVERY,3,4437,architecture)
#else
Msg( "Error: Constant not found: NO_RECOVERY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef NO_DATA
	CompareConstant(NO_DATA,4,4438,architecture)
#else
Msg( "Error: Constant not found: NO_DATA\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef NO_ADDRESS
	CompareConstant(NO_ADDRESS,NO_DATA,4439,architecture)
#else
Msg( "Error: Constant not found: NO_ADDRESS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
/* No test for h_addr */
#endif

#ifdef __i386__
CheckTypeSize(struct servent,16, 10134, 2)
#elif __ia64__
CheckTypeSize(struct servent,32, 10134, 3)
#elif __powerpc__
CheckTypeSize(struct servent,16, 10134, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10134,0);
Msg("Find size of servent (10134)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct hostent,20, 10136, 2)
#elif __ia64__
CheckTypeSize(struct hostent,32, 10136, 3)
#elif __powerpc__
CheckTypeSize(struct hostent,20, 10136, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10136,0);
Msg("Find size of hostent (10136)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct protoent,12, 10139, 2)
CheckOffset(struct protoent,p_name,0,2,33742)
CheckOffset(struct protoent,p_aliases,4,2,33743)
CheckOffset(struct protoent,p_proto,8,2,33744)
#elif __ia64__
CheckTypeSize(struct protoent,24, 10139, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10139,0);
Msg("Find size of protoent (10139)\n");
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
