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

#if _LSB_DEFAULT_ARCH
/* No test for svc_getargs(xprt,xargs, argsp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for svc_freeargs(xprt,xargs, argsp) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef RPC_ANYSOCK
	CompareConstant(RPC_ANYSOCK,-1,4376,architecture)
#else
Msg( "Error: Constant not found: RPC_ANYSOCK\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(struct SVCXPRT,308, 9980, 2)
CheckMemberSize(struct SVCXPRT,xp_port,2,2,32226)
CheckOffset(struct SVCXPRT,xp_port,4,2,32226)
CheckMemberSize(struct SVCXPRT,xp_ops,4,2,32245)
CheckOffset(struct SVCXPRT,xp_ops,8,2,32245)
CheckMemberSize(struct SVCXPRT,xp_addrlen,4,2,32246)
CheckOffset(struct SVCXPRT,xp_addrlen,12,2,32246)
CheckMemberSize(struct SVCXPRT,xp_raddr,16,2,32247)
CheckOffset(struct SVCXPRT,xp_raddr,16,2,32247)
CheckMemberSize(struct SVCXPRT,xp_verf,12,2,32248)
CheckOffset(struct SVCXPRT,xp_verf,32,2,32248)
CheckMemberSize(struct SVCXPRT,xp_p1,4,2,32249)
CheckOffset(struct SVCXPRT,xp_p1,44,2,32249)
CheckMemberSize(struct SVCXPRT,xp_p2,4,2,32250)
CheckOffset(struct SVCXPRT,xp_p2,48,2,32250)
CheckMemberSize(struct SVCXPRT,xp_pad,256,2,32251)
CheckOffset(struct SVCXPRT,xp_pad,52,2,32251)
#elif __s390__ && !__s390x__
CheckTypeSize(struct SVCXPRT,308, 9980, 10)
CheckMemberSize(struct SVCXPRT,xp_port,2,10,32226)
CheckOffset(struct SVCXPRT,xp_port,4,10,32226)
CheckMemberSize(struct SVCXPRT,xp_ops,4,10,32245)
CheckOffset(struct SVCXPRT,xp_ops,8,10,32245)
CheckMemberSize(struct SVCXPRT,xp_addrlen,4,10,32246)
CheckOffset(struct SVCXPRT,xp_addrlen,12,10,32246)
CheckMemberSize(struct SVCXPRT,xp_raddr,16,10,32247)
CheckOffset(struct SVCXPRT,xp_raddr,16,10,32247)
CheckMemberSize(struct SVCXPRT,xp_verf,12,10,32248)
CheckOffset(struct SVCXPRT,xp_verf,32,10,32248)
CheckMemberSize(struct SVCXPRT,xp_p1,4,10,32249)
CheckOffset(struct SVCXPRT,xp_p1,44,10,32249)
CheckMemberSize(struct SVCXPRT,xp_p2,4,10,32250)
CheckOffset(struct SVCXPRT,xp_p2,48,10,32250)
CheckMemberSize(struct SVCXPRT,xp_pad,256,10,32251)
CheckOffset(struct SVCXPRT,xp_pad,52,10,32251)
#elif __ia64__
CheckTypeSize(struct SVCXPRT,336, 9980, 3)
CheckMemberSize(struct SVCXPRT,xp_port,2,3,32226)
CheckOffset(struct SVCXPRT,xp_port,4,3,32226)
CheckMemberSize(struct SVCXPRT,xp_ops,8,3,32245)
CheckOffset(struct SVCXPRT,xp_ops,8,3,32245)
CheckMemberSize(struct SVCXPRT,xp_addrlen,4,3,32246)
CheckOffset(struct SVCXPRT,xp_addrlen,16,3,32246)
CheckMemberSize(struct SVCXPRT,xp_raddr,16,3,32247)
CheckOffset(struct SVCXPRT,xp_raddr,20,3,32247)
CheckMemberSize(struct SVCXPRT,xp_verf,24,3,32248)
CheckOffset(struct SVCXPRT,xp_verf,40,3,32248)
CheckMemberSize(struct SVCXPRT,xp_p1,8,3,32249)
CheckOffset(struct SVCXPRT,xp_p1,64,3,32249)
CheckMemberSize(struct SVCXPRT,xp_p2,8,3,32250)
CheckOffset(struct SVCXPRT,xp_p2,72,3,32250)
CheckMemberSize(struct SVCXPRT,xp_pad,256,3,32251)
CheckOffset(struct SVCXPRT,xp_pad,80,3,32251)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct SVCXPRT,308, 9980, 6)
CheckMemberSize(struct SVCXPRT,xp_port,2,6,32226)
CheckOffset(struct SVCXPRT,xp_port,4,6,32226)
CheckMemberSize(struct SVCXPRT,xp_ops,4,6,32245)
CheckOffset(struct SVCXPRT,xp_ops,8,6,32245)
CheckMemberSize(struct SVCXPRT,xp_addrlen,4,6,32246)
CheckOffset(struct SVCXPRT,xp_addrlen,12,6,32246)
CheckMemberSize(struct SVCXPRT,xp_raddr,16,6,32247)
CheckOffset(struct SVCXPRT,xp_raddr,16,6,32247)
CheckMemberSize(struct SVCXPRT,xp_verf,12,6,32248)
CheckOffset(struct SVCXPRT,xp_verf,32,6,32248)
CheckMemberSize(struct SVCXPRT,xp_p1,4,6,32249)
CheckOffset(struct SVCXPRT,xp_p1,44,6,32249)
CheckMemberSize(struct SVCXPRT,xp_p2,4,6,32250)
CheckOffset(struct SVCXPRT,xp_p2,48,6,32250)
CheckMemberSize(struct SVCXPRT,xp_pad,256,6,32251)
CheckOffset(struct SVCXPRT,xp_pad,52,6,32251)
#elif __powerpc64__
CheckTypeSize(struct SVCXPRT,336, 9980, 9)
CheckMemberSize(struct SVCXPRT,xp_port,2,9,32226)
CheckOffset(struct SVCXPRT,xp_port,4,9,32226)
CheckMemberSize(struct SVCXPRT,xp_ops,8,9,32245)
CheckOffset(struct SVCXPRT,xp_ops,8,9,32245)
CheckMemberSize(struct SVCXPRT,xp_addrlen,4,9,32246)
CheckOffset(struct SVCXPRT,xp_addrlen,16,9,32246)
CheckMemberSize(struct SVCXPRT,xp_raddr,16,9,32247)
CheckOffset(struct SVCXPRT,xp_raddr,20,9,32247)
CheckMemberSize(struct SVCXPRT,xp_verf,24,9,32248)
CheckOffset(struct SVCXPRT,xp_verf,40,9,32248)
CheckMemberSize(struct SVCXPRT,xp_p1,8,9,32249)
CheckOffset(struct SVCXPRT,xp_p1,64,9,32249)
CheckMemberSize(struct SVCXPRT,xp_p2,8,9,32250)
CheckOffset(struct SVCXPRT,xp_p2,72,9,32250)
CheckMemberSize(struct SVCXPRT,xp_pad,256,9,32251)
CheckOffset(struct SVCXPRT,xp_pad,80,9,32251)
#elif __s390x__
CheckTypeSize(struct SVCXPRT,336, 9980, 12)
CheckMemberSize(struct SVCXPRT,xp_port,2,12,32226)
CheckOffset(struct SVCXPRT,xp_port,4,12,32226)
CheckMemberSize(struct SVCXPRT,xp_ops,8,12,32245)
CheckOffset(struct SVCXPRT,xp_ops,8,12,32245)
CheckMemberSize(struct SVCXPRT,xp_addrlen,4,12,32246)
CheckOffset(struct SVCXPRT,xp_addrlen,16,12,32246)
CheckMemberSize(struct SVCXPRT,xp_raddr,16,12,32247)
CheckOffset(struct SVCXPRT,xp_raddr,20,12,32247)
CheckMemberSize(struct SVCXPRT,xp_verf,24,12,32248)
CheckOffset(struct SVCXPRT,xp_verf,40,12,32248)
CheckMemberSize(struct SVCXPRT,xp_p1,8,12,32249)
CheckOffset(struct SVCXPRT,xp_p1,64,12,32249)
CheckMemberSize(struct SVCXPRT,xp_p2,8,12,32250)
CheckOffset(struct SVCXPRT,xp_p2,72,12,32250)
CheckMemberSize(struct SVCXPRT,xp_pad,256,12,32251)
CheckOffset(struct SVCXPRT,xp_pad,80,12,32251)
#elif __x86_64__
CheckTypeSize(struct SVCXPRT,336, 9980, 11)
CheckMemberSize(struct SVCXPRT,xp_port,2,11,32226)
CheckOffset(struct SVCXPRT,xp_port,4,11,32226)
CheckMemberSize(struct SVCXPRT,xp_ops,8,11,32245)
CheckOffset(struct SVCXPRT,xp_ops,8,11,32245)
CheckMemberSize(struct SVCXPRT,xp_addrlen,4,11,32246)
CheckOffset(struct SVCXPRT,xp_addrlen,16,11,32246)
CheckMemberSize(struct SVCXPRT,xp_raddr,16,11,32247)
CheckOffset(struct SVCXPRT,xp_raddr,20,11,32247)
CheckMemberSize(struct SVCXPRT,xp_verf,24,11,32248)
CheckOffset(struct SVCXPRT,xp_verf,40,11,32248)
CheckMemberSize(struct SVCXPRT,xp_p1,8,11,32249)
CheckOffset(struct SVCXPRT,xp_p1,64,11,32249)
CheckMemberSize(struct SVCXPRT,xp_p2,8,11,32250)
CheckOffset(struct SVCXPRT,xp_p2,72,11,32250)
CheckMemberSize(struct SVCXPRT,xp_pad,256,11,32251)
CheckOffset(struct SVCXPRT,xp_pad,80,11,32251)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9980,0);
Msg("Find size of SVCXPRT (9980)\n");
#endif

#if __i386__
CheckTypeSize(SVCXPRT,308, 10390, 2)
#elif __s390__ && !__s390x__
CheckTypeSize(SVCXPRT,308, 10390, 10)
#elif __ia64__
CheckTypeSize(SVCXPRT,336, 10390, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SVCXPRT,308, 10390, 6)
#elif __powerpc64__
CheckTypeSize(SVCXPRT,336, 10390, 9)
#elif __s390x__
CheckTypeSize(SVCXPRT,336, 10390, 12)
#elif __x86_64__
CheckTypeSize(SVCXPRT,336, 10390, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10390,0);
Msg("Find size of SVCXPRT (10390)\n");
#endif

#if __i386__
CheckTypeSize(struct xp_ops,24, 9981, 2)
CheckMemberSize(struct xp_ops,xp_stat,4,2,32231)
CheckOffset(struct xp_ops,xp_stat,4,2,32231)
CheckMemberSize(struct xp_ops,xp_getargs,4,2,32235)
CheckOffset(struct xp_ops,xp_getargs,8,2,32235)
CheckMemberSize(struct xp_ops,xp_reply,4,2,32238)
CheckOffset(struct xp_ops,xp_reply,12,2,32238)
CheckMemberSize(struct xp_ops,xp_freeargs,4,2,32242)
CheckOffset(struct xp_ops,xp_freeargs,16,2,32242)
CheckMemberSize(struct xp_ops,xp_destroy,4,2,32244)
CheckOffset(struct xp_ops,xp_destroy,20,2,32244)
#elif __s390__ && !__s390x__
CheckTypeSize(struct xp_ops,24, 9981, 10)
CheckMemberSize(struct xp_ops,xp_stat,4,10,32231)
CheckOffset(struct xp_ops,xp_stat,4,10,32231)
CheckMemberSize(struct xp_ops,xp_getargs,4,10,32235)
CheckOffset(struct xp_ops,xp_getargs,8,10,32235)
CheckMemberSize(struct xp_ops,xp_reply,4,10,32238)
CheckOffset(struct xp_ops,xp_reply,12,10,32238)
CheckMemberSize(struct xp_ops,xp_freeargs,4,10,32242)
CheckOffset(struct xp_ops,xp_freeargs,16,10,32242)
CheckMemberSize(struct xp_ops,xp_destroy,4,10,32244)
CheckOffset(struct xp_ops,xp_destroy,20,10,32244)
#elif __ia64__
CheckTypeSize(struct xp_ops,48, 9981, 3)
CheckMemberSize(struct xp_ops,xp_stat,8,3,32231)
CheckOffset(struct xp_ops,xp_stat,8,3,32231)
CheckMemberSize(struct xp_ops,xp_getargs,8,3,32235)
CheckOffset(struct xp_ops,xp_getargs,16,3,32235)
CheckMemberSize(struct xp_ops,xp_reply,8,3,32238)
CheckOffset(struct xp_ops,xp_reply,24,3,32238)
CheckMemberSize(struct xp_ops,xp_freeargs,8,3,32242)
CheckOffset(struct xp_ops,xp_freeargs,32,3,32242)
CheckMemberSize(struct xp_ops,xp_destroy,8,3,32244)
CheckOffset(struct xp_ops,xp_destroy,40,3,32244)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct xp_ops,24, 9981, 6)
CheckMemberSize(struct xp_ops,xp_stat,4,6,32231)
CheckOffset(struct xp_ops,xp_stat,4,6,32231)
CheckMemberSize(struct xp_ops,xp_getargs,4,6,32235)
CheckOffset(struct xp_ops,xp_getargs,8,6,32235)
CheckMemberSize(struct xp_ops,xp_reply,4,6,32238)
CheckOffset(struct xp_ops,xp_reply,12,6,32238)
CheckMemberSize(struct xp_ops,xp_freeargs,4,6,32242)
CheckOffset(struct xp_ops,xp_freeargs,16,6,32242)
CheckMemberSize(struct xp_ops,xp_destroy,4,6,32244)
CheckOffset(struct xp_ops,xp_destroy,20,6,32244)
#elif __s390x__
CheckTypeSize(struct xp_ops,48, 9981, 12)
CheckMemberSize(struct xp_ops,xp_stat,8,12,32231)
CheckOffset(struct xp_ops,xp_stat,8,12,32231)
CheckMemberSize(struct xp_ops,xp_getargs,8,12,32235)
CheckOffset(struct xp_ops,xp_getargs,16,12,32235)
CheckMemberSize(struct xp_ops,xp_reply,8,12,32238)
CheckOffset(struct xp_ops,xp_reply,24,12,32238)
CheckMemberSize(struct xp_ops,xp_freeargs,8,12,32242)
CheckOffset(struct xp_ops,xp_freeargs,32,12,32242)
CheckMemberSize(struct xp_ops,xp_destroy,8,12,32244)
CheckOffset(struct xp_ops,xp_destroy,40,12,32244)
#elif __x86_64__
CheckTypeSize(struct xp_ops,48, 9981, 11)
CheckMemberSize(struct xp_ops,xp_stat,8,11,32231)
CheckOffset(struct xp_ops,xp_stat,8,11,32231)
CheckMemberSize(struct xp_ops,xp_getargs,8,11,32235)
CheckOffset(struct xp_ops,xp_getargs,16,11,32235)
CheckMemberSize(struct xp_ops,xp_reply,8,11,32238)
CheckOffset(struct xp_ops,xp_reply,24,11,32238)
CheckMemberSize(struct xp_ops,xp_freeargs,8,11,32242)
CheckOffset(struct xp_ops,xp_freeargs,32,11,32242)
CheckMemberSize(struct xp_ops,xp_destroy,8,11,32244)
CheckOffset(struct xp_ops,xp_destroy,40,11,32244)
#elif __powerpc64__
CheckTypeSize(struct xp_ops,48, 9981, 9)
CheckMemberSize(struct xp_ops,xp_stat,8,9,32231)
CheckOffset(struct xp_ops,xp_stat,8,9,32231)
CheckMemberSize(struct xp_ops,xp_getargs,8,9,32235)
CheckOffset(struct xp_ops,xp_getargs,16,9,32235)
CheckMemberSize(struct xp_ops,xp_reply,8,9,32238)
CheckOffset(struct xp_ops,xp_reply,24,9,32238)
CheckMemberSize(struct xp_ops,xp_freeargs,8,9,32242)
CheckOffset(struct xp_ops,xp_freeargs,32,9,32242)
CheckMemberSize(struct xp_ops,xp_destroy,8,9,32244)
CheckOffset(struct xp_ops,xp_destroy,40,9,32244)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9981,0);
Msg("Find size of xp_ops (9981)\n");
#endif

#if __i386__
CheckTypeSize(__dispatch_fn_t,4, 9997, 2)
#elif __powerpc64__
CheckTypeSize(__dispatch_fn_t,8, 9997, 9)
#elif __ia64__
CheckTypeSize(__dispatch_fn_t,8, 9997, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(__dispatch_fn_t,0, 9997, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(__dispatch_fn_t,0, 9997, 10)
#elif __s390x__
CheckTypeSize(__dispatch_fn_t,0, 9997, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9997,0);
Msg("Find size of __dispatch_fn_t (9997)\n");
#endif

#if __i386__
CheckTypeSize(struct svc_req,32, 9991, 2)
CheckMemberSize(struct svc_req,rq_vers,4,2,32253)
CheckOffset(struct svc_req,rq_vers,4,2,32253)
CheckMemberSize(struct svc_req,rq_proc,4,2,32254)
CheckOffset(struct svc_req,rq_proc,8,2,32254)
CheckMemberSize(struct svc_req,rq_cred,12,2,32255)
CheckOffset(struct svc_req,rq_cred,12,2,32255)
CheckMemberSize(struct svc_req,rq_clntcred,4,2,32256)
CheckOffset(struct svc_req,rq_clntcred,24,2,32256)
CheckMemberSize(struct svc_req,rq_xprt,4,2,32257)
CheckOffset(struct svc_req,rq_xprt,28,2,32257)
#elif __powerpc64__
CheckTypeSize(struct svc_req,64, 9991, 9)
CheckMemberSize(struct svc_req,rq_vers,8,9,32253)
CheckOffset(struct svc_req,rq_vers,8,9,32253)
CheckMemberSize(struct svc_req,rq_proc,8,9,32254)
CheckOffset(struct svc_req,rq_proc,16,9,32254)
CheckMemberSize(struct svc_req,rq_cred,24,9,32255)
CheckOffset(struct svc_req,rq_cred,24,9,32255)
CheckMemberSize(struct svc_req,rq_clntcred,8,9,32256)
CheckOffset(struct svc_req,rq_clntcred,48,9,32256)
CheckMemberSize(struct svc_req,rq_xprt,8,9,32257)
CheckOffset(struct svc_req,rq_xprt,56,9,32257)
#elif __ia64__
CheckTypeSize(struct svc_req,64, 9991, 3)
CheckMemberSize(struct svc_req,rq_vers,8,3,32253)
CheckOffset(struct svc_req,rq_vers,8,3,32253)
CheckMemberSize(struct svc_req,rq_proc,8,3,32254)
CheckOffset(struct svc_req,rq_proc,16,3,32254)
CheckMemberSize(struct svc_req,rq_cred,24,3,32255)
CheckOffset(struct svc_req,rq_cred,24,3,32255)
CheckMemberSize(struct svc_req,rq_clntcred,8,3,32256)
CheckOffset(struct svc_req,rq_clntcred,48,3,32256)
CheckMemberSize(struct svc_req,rq_xprt,8,3,32257)
CheckOffset(struct svc_req,rq_xprt,56,3,32257)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct svc_req,0, 9991, 6)
Msg("Missing member data for svc_req on PPC32\n");
CheckOffset(struct svc_req,rq_prog,0,6,32252)
CheckOffset(struct svc_req,rq_vers,0,6,32253)
CheckOffset(struct svc_req,rq_proc,0,6,32254)
CheckOffset(struct svc_req,rq_cred,0,6,32255)
CheckOffset(struct svc_req,rq_clntcred,0,6,32256)
CheckOffset(struct svc_req,rq_xprt,0,6,32257)
#elif __s390__ && !__s390x__
CheckTypeSize(struct svc_req,0, 9991, 10)
Msg("Missing member data for svc_req on S390\n");
CheckOffset(struct svc_req,rq_prog,0,10,32252)
CheckOffset(struct svc_req,rq_vers,0,10,32253)
CheckOffset(struct svc_req,rq_proc,0,10,32254)
CheckOffset(struct svc_req,rq_cred,0,10,32255)
CheckOffset(struct svc_req,rq_clntcred,0,10,32256)
CheckOffset(struct svc_req,rq_xprt,0,10,32257)
#elif __s390x__
CheckTypeSize(struct svc_req,0, 9991, 12)
Msg("Missing member data for svc_req on S390X\n");
CheckOffset(struct svc_req,rq_prog,0,12,32252)
CheckOffset(struct svc_req,rq_vers,0,12,32253)
CheckOffset(struct svc_req,rq_proc,0,12,32254)
CheckOffset(struct svc_req,rq_cred,0,12,32255)
CheckOffset(struct svc_req,rq_clntcred,0,12,32256)
CheckOffset(struct svc_req,rq_xprt,0,12,32257)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9991,0);
Msg("Find size of svc_req (9991)\n");
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
