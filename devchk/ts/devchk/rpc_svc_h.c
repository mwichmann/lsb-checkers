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
CheckOffset(struct SVCXPRT,xp_port,4,2,32226)
CheckOffset(struct SVCXPRT,xp_ops,8,2,32245)
CheckOffset(struct SVCXPRT,xp_addrlen,12,2,32246)
CheckOffset(struct SVCXPRT,xp_raddr,16,2,32247)
CheckOffset(struct SVCXPRT,xp_verf,32,2,32248)
CheckOffset(struct SVCXPRT,xp_p1,44,2,32249)
CheckOffset(struct SVCXPRT,xp_p2,48,2,32250)
CheckOffset(struct SVCXPRT,xp_pad,52,2,32251)
#elif __s390__
CheckTypeSize(struct SVCXPRT,308, 9980, 10)
Msg("Missing member data for SVCXPRT on S390\n");
CheckOffset(struct SVCXPRT,xp_sock,0,10,32225)
CheckOffset(struct SVCXPRT,xp_port,0,10,32226)
CheckOffset(struct SVCXPRT,xp_ops,0,10,32245)
CheckOffset(struct SVCXPRT,xp_addrlen,0,10,32246)
CheckOffset(struct SVCXPRT,xp_raddr,0,10,32247)
CheckOffset(struct SVCXPRT,xp_verf,0,10,32248)
CheckOffset(struct SVCXPRT,xp_p1,0,10,32249)
CheckOffset(struct SVCXPRT,xp_p2,0,10,32250)
CheckOffset(struct SVCXPRT,xp_pad,0,10,32251)
#elif __ia64__
CheckTypeSize(struct SVCXPRT,336, 9980, 3)
CheckOffset(struct SVCXPRT,xp_port,4,3,32226)
CheckOffset(struct SVCXPRT,xp_ops,8,3,32245)
CheckOffset(struct SVCXPRT,xp_addrlen,16,3,32246)
CheckOffset(struct SVCXPRT,xp_raddr,20,3,32247)
CheckOffset(struct SVCXPRT,xp_verf,40,3,32248)
CheckOffset(struct SVCXPRT,xp_p1,64,3,32249)
CheckOffset(struct SVCXPRT,xp_p2,72,3,32250)
CheckOffset(struct SVCXPRT,xp_pad,80,3,32251)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9980,0);
Msg("Find size of SVCXPRT (9980)\n");
#endif

#ifdef __i386__
CheckTypeSize(SVCXPRT,308, 10390, 2)
#elif __s390__
CheckTypeSize(SVCXPRT,308, 10390, 10)
#elif __ia64__
CheckTypeSize(SVCXPRT,336, 10390, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10390,0);
Msg("Find size of SVCXPRT (10390)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct xp_ops,24, 9981, 2)
CheckOffset(struct xp_ops,xp_stat,4,2,32231)
CheckOffset(struct xp_ops,xp_getargs,8,2,32235)
CheckOffset(struct xp_ops,xp_reply,12,2,32238)
CheckOffset(struct xp_ops,xp_freeargs,16,2,32242)
CheckOffset(struct xp_ops,xp_destroy,20,2,32244)
#elif __s390__
CheckTypeSize(struct xp_ops,24, 9981, 10)
Msg("Missing member data for xp_ops on S390\n");
CheckOffset(struct xp_ops,xp_recv,0,10,32229)
CheckOffset(struct xp_ops,xp_stat,0,10,32231)
CheckOffset(struct xp_ops,xp_getargs,0,10,32235)
CheckOffset(struct xp_ops,xp_reply,0,10,32238)
CheckOffset(struct xp_ops,xp_freeargs,0,10,32242)
CheckOffset(struct xp_ops,xp_destroy,0,10,32244)
#elif __ia64__
CheckTypeSize(struct xp_ops,48, 9981, 3)
CheckOffset(struct xp_ops,xp_stat,8,3,32231)
CheckOffset(struct xp_ops,xp_getargs,16,3,32235)
CheckOffset(struct xp_ops,xp_reply,24,3,32238)
CheckOffset(struct xp_ops,xp_freeargs,32,3,32242)
CheckOffset(struct xp_ops,xp_destroy,40,3,32244)
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
