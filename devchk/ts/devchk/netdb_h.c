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
#ifdef NI_NOFQDN
	CompareConstant(NI_NOFQDN,4,3356,architecture)
#else
Msg( "Error: Constant not found: NI_NOFQDN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef NI_NUMERICHOST
	CompareConstant(NI_NUMERICHOST,1,3357,architecture)
#else
Msg( "Error: Constant not found: NI_NUMERICHOST\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef NI_NAMEREQD
	CompareConstant(NI_NAMEREQD,8,3358,architecture)
#else
Msg( "Error: Constant not found: NI_NAMEREQD\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef NI_NUMERICSERV
	CompareConstant(NI_NUMERICSERV,2,3359,architecture)
#else
Msg( "Error: Constant not found: NI_NUMERICSERV\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef NI_DGRAM
	CompareConstant(NI_DGRAM,16,3360,architecture)
#else
Msg( "Error: Constant not found: NI_DGRAM\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EAI_FAMILY
	CompareConstant(EAI_FAMILY,-6,3361,architecture)
#else
Msg( "Error: Constant not found: EAI_FAMILY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EAI_SOCKTYPE
	CompareConstant(EAI_SOCKTYPE,-7,3362,architecture)
#else
Msg( "Error: Constant not found: EAI_SOCKTYPE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EAI_BADFLAGS
	CompareConstant(EAI_BADFLAGS,-1,3363,architecture)
#else
Msg( "Error: Constant not found: EAI_BADFLAGS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EAI_NONAME
	CompareConstant(EAI_NONAME,-2,3364,architecture)
#else
Msg( "Error: Constant not found: EAI_NONAME\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EAI_SERVICE
	CompareConstant(EAI_SERVICE,-8,3365,architecture)
#else
Msg( "Error: Constant not found: EAI_SERVICE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EAI_ADDRFAMILY
	CompareConstant(EAI_ADDRFAMILY,-9,3366,architecture)
#else
Msg( "Error: Constant not found: EAI_ADDRFAMILY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EAI_NODATA
	CompareConstant(EAI_NODATA,-5,3367,architecture)
#else
Msg( "Error: Constant not found: EAI_NODATA\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EAI_MEMORY
	CompareConstant(EAI_MEMORY,-10,3368,architecture)
#else
Msg( "Error: Constant not found: EAI_MEMORY\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EAI_FAIL
	CompareConstant(EAI_FAIL,-4,3369,architecture)
#else
Msg( "Error: Constant not found: EAI_FAIL\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EAI_AGAIN
	CompareConstant(EAI_AGAIN,-3,3370,architecture)
#else
Msg( "Error: Constant not found: EAI_AGAIN\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef EAI_SYSTEM
	CompareConstant(EAI_SYSTEM,-11,3371,architecture)
#else
Msg( "Error: Constant not found: EAI_SYSTEM\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef AI_NUMERICHOST
	CompareConstant(AI_NUMERICHOST,0x0004,3372,architecture)
#else
Msg( "Error: Constant not found: AI_NUMERICHOST\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef AI_CANONNAME
	CompareConstant(AI_CANONNAME,0x0002,3373,architecture)
#else
Msg( "Error: Constant not found: AI_CANONNAME\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef AI_PASSIVE
	CompareConstant(AI_PASSIVE,0x0001,3374,architecture)
#else
Msg( "Error: Constant not found: AI_PASSIVE\n");
cnt++;
#endif

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

#ifdef _LSB_DEFAULT_ARCH
#ifdef NI_MAXHOST
	CompareConstant(NI_MAXHOST,1025,4441,architecture)
#else
Msg( "Error: Constant not found: NI_MAXHOST\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef NI_MAXSERV
	CompareConstant(NI_MAXSERV,32,4442,architecture)
#else
Msg( "Error: Constant not found: NI_MAXSERV\n");
cnt++;
#endif

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

#ifdef __i386__
CheckTypeSize(struct netent,16, 10141, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10141,0);
Msg("Find size of netent (10141)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct addrinfo,32, 10125, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10125,0);
Msg("Find size of addrinfo (10125)\n");
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
