/*
 * Test of rpc/svc.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "rpc/svc.h"



#ifdef TET_TEST
void rpc_svc_h()
{
#else
int rpc_svc_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in rpc/svc.h\n");
#endif

#ifdef __i386__
CheckTypeSize(struct SVCXPRT,308, 9980, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9980,0);
Msg("Find size of SVCXPRT (9980)\n");
#endif

#ifdef __i386__
CheckTypeSize(SVCXPRT,308, 10390, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10390,0);
Msg("Find size of SVCXPRT (10390)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct xp_ops,24, 9981, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9981,0);
Msg("Find size of xp_ops (9981)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in rpc/svc.h\n",cnt);
return cnt;
#endif

}
