/*
 * Test of rpc/rpc.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "rpc/rpc.h"



#ifdef TET_TEST
void rpc_rpc_h()
{
#else
int rpc_rpc_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in rpc/rpc.h\n");
#endif

#ifdef __i386__
CheckTypeSize(struct opaque_auth,12, 9894, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9894,0);
Msg("Find size of opaque_auth (9894)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct AUTH,40, 9896, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9896,0);
Msg("Find size of AUTH (9896)\n");
#endif

#ifdef __i386__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9916,0);
Msg("Find size of clnt_stat (9916)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct CLIENT,12, 9921, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9921,0);
Msg("Find size of CLIENT (9921)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct XDR,24, 9934, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9934,0);
Msg("Find size of XDR (9934)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct SVCXPRT,308, 9980, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9980,0);
Msg("Find size of SVCXPRT (9980)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in rpc/rpc.h\n",cnt);
return cnt;
#endif

}
