/*
 * Test of rpc/svc.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "rpc/svc.h"



#ifdef TET_TEST
void rpc_svc_h()
{
#else
int rpc_svc_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in rpc/svc.h\n");
#endif

printf("Checking data structures in rpc/svc.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for svc_getcaller(x) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for svc_recv(xprt,msg) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for svc_stat(xprt) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for svc_getargs(xprt,xargs, argsp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for svc_reply(xprt,msg) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for svc_freeargs(xprt,xargs, argsp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for svc_destroy(xprt) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef RPC_ANYSOCK
	CompareConstant(RPC_ANYSOCK,-1,4376,architecture,2.0,NULL)
#else
Msg( "Error: Constant not found: RPC_ANYSOCK\n");
cnt++;
#endif

#endif

#if 1
CheckEnum("XPRT_DIED",XPRT_DIED,0,32222)
CheckEnum("XPRT_MOREREQS",XPRT_MOREREQS,(0) + 1,32223)
CheckEnum("XPRT_IDLE",XPRT_IDLE,((0) + 1) + 1,32224)
#endif

#if defined __s390x__
CheckTypeSize(struct SVCXPRT,336, 9980, 12, , NULL, 0, NULL)
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
#elif defined __x86_64__
CheckTypeSize(struct SVCXPRT,336, 9980, 11, , NULL, 0, NULL)
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
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct SVCXPRT,308, 9980, 10, , NULL, 0, NULL)
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
#elif defined __powerpc64__
CheckTypeSize(struct SVCXPRT,336, 9980, 9, , NULL, 0, NULL)
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
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct SVCXPRT,308, 9980, 6, , NULL, 0, NULL)
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
#elif defined __ia64__
CheckTypeSize(struct SVCXPRT,336, 9980, 3, , NULL, 0, NULL)
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
#elif defined __i386__
CheckTypeSize(struct SVCXPRT,308, 9980, 2, , NULL, 0, NULL)
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
#elif 1
CheckTypeSize(struct SVCXPRT,0, 9980, 1, , NULL, 0, NULL)
Msg("Missing member data for SVCXPRT on All\n");
CheckOffset(struct SVCXPRT,xp_sock,0,1,32225)
#endif

#if defined __s390x__
CheckTypeSize(SVCXPRT,336, 10390, 12, 1.3, NULL, 9980, NULL)
#elif defined __x86_64__
CheckTypeSize(SVCXPRT,336, 10390, 11, 2.0, NULL, 9980, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SVCXPRT,308, 10390, 10, 1.3, NULL, 9980, NULL)
#elif defined __powerpc64__
CheckTypeSize(SVCXPRT,336, 10390, 9, 2.0, NULL, 9980, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SVCXPRT,308, 10390, 6, 1.3, NULL, 9980, NULL)
#elif defined __ia64__
CheckTypeSize(SVCXPRT,336, 10390, 3, 1.3, NULL, 9980, NULL)
#elif defined __i386__
CheckTypeSize(SVCXPRT,308, 10390, 2, 1.3, NULL, 9980, NULL)
#else
Msg("Find size of SVCXPRT (10390)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.3""',NULL,9980,NULL);\n",architecture,10390,0);
#endif

#if defined __s390x__
CheckTypeSize(struct xp_ops,48, 9981, 12, 1.3, NULL, 0, NULL)
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
#elif defined __x86_64__
CheckTypeSize(struct xp_ops,48, 9981, 11, 2.0, NULL, 0, NULL)
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
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct xp_ops,24, 9981, 10, 1.3, NULL, 0, NULL)
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
#elif defined __powerpc64__
CheckTypeSize(struct xp_ops,48, 9981, 9, 2.0, NULL, 0, NULL)
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
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct xp_ops,24, 9981, 6, 1.3, NULL, 0, NULL)
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
#elif defined __ia64__
CheckTypeSize(struct xp_ops,48, 9981, 3, 1.3, NULL, 0, NULL)
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
#elif defined __i386__
CheckTypeSize(struct xp_ops,24, 9981, 2, 1.3, NULL, 0, NULL)
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
#else
Msg("Find size of xp_ops (9981)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.3""',NULL,0,NULL);\n",architecture,9981,0);
#endif

#if defined __s390x__
CheckTypeSize(__dispatch_fn_t,8, 9997, 12, 2.0, NULL, 9995, NULL)
#elif defined __x86_64__
CheckTypeSize(__dispatch_fn_t,8, 9997, 11, 2.0, NULL, 9995, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(__dispatch_fn_t,4, 9997, 10, 2.0, NULL, 9995, NULL)
#elif defined __powerpc64__
CheckTypeSize(__dispatch_fn_t,8, 9997, 9, 2.0, NULL, 9995, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(__dispatch_fn_t,4, 9997, 6, 2.0, NULL, 9995, NULL)
#elif defined __ia64__
CheckTypeSize(__dispatch_fn_t,8, 9997, 3, 2.0, NULL, 9995, NULL)
#elif defined __i386__
CheckTypeSize(__dispatch_fn_t,4, 9997, 2, 2.0, NULL, 9995, NULL)
#else
Msg("Find size of __dispatch_fn_t (9997)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,9995,NULL);\n",architecture,9997,0);
#endif

#if defined __s390x__
CheckTypeSize(struct svc_req,64, 9991, 12, 2.0, NULL, 0, NULL)
CheckMemberSize(struct svc_req,rq_vers,8,12,32253)
CheckOffset(struct svc_req,rq_vers,8,12,32253)
CheckMemberSize(struct svc_req,rq_proc,8,12,32254)
CheckOffset(struct svc_req,rq_proc,16,12,32254)
CheckMemberSize(struct svc_req,rq_cred,24,12,32255)
CheckOffset(struct svc_req,rq_cred,24,12,32255)
CheckMemberSize(struct svc_req,rq_clntcred,8,12,32256)
CheckOffset(struct svc_req,rq_clntcred,48,12,32256)
CheckMemberSize(struct svc_req,rq_xprt,8,12,32257)
CheckOffset(struct svc_req,rq_xprt,56,12,32257)
#elif defined __x86_64__
CheckTypeSize(struct svc_req,64, 9991, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct svc_req,rq_vers,8,11,32253)
CheckOffset(struct svc_req,rq_vers,8,11,32253)
CheckMemberSize(struct svc_req,rq_proc,8,11,32254)
CheckOffset(struct svc_req,rq_proc,16,11,32254)
CheckMemberSize(struct svc_req,rq_cred,24,11,32255)
CheckOffset(struct svc_req,rq_cred,24,11,32255)
CheckMemberSize(struct svc_req,rq_clntcred,8,11,32256)
CheckOffset(struct svc_req,rq_clntcred,48,11,32256)
CheckMemberSize(struct svc_req,rq_xprt,8,11,32257)
CheckOffset(struct svc_req,rq_xprt,56,11,32257)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct svc_req,32, 9991, 10, 2.0, NULL, 0, NULL)
CheckMemberSize(struct svc_req,rq_vers,4,10,32253)
CheckOffset(struct svc_req,rq_vers,4,10,32253)
CheckMemberSize(struct svc_req,rq_proc,4,10,32254)
CheckOffset(struct svc_req,rq_proc,8,10,32254)
CheckMemberSize(struct svc_req,rq_cred,12,10,32255)
CheckOffset(struct svc_req,rq_cred,12,10,32255)
CheckMemberSize(struct svc_req,rq_clntcred,4,10,32256)
CheckOffset(struct svc_req,rq_clntcred,24,10,32256)
CheckMemberSize(struct svc_req,rq_xprt,4,10,32257)
CheckOffset(struct svc_req,rq_xprt,28,10,32257)
#elif defined __powerpc64__
CheckTypeSize(struct svc_req,64, 9991, 9, 2.0, NULL, 0, NULL)
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
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct svc_req,32, 9991, 6, 2.0, NULL, 0, NULL)
CheckMemberSize(struct svc_req,rq_vers,4,6,32253)
CheckOffset(struct svc_req,rq_vers,4,6,32253)
CheckMemberSize(struct svc_req,rq_proc,4,6,32254)
CheckOffset(struct svc_req,rq_proc,8,6,32254)
CheckMemberSize(struct svc_req,rq_cred,12,6,32255)
CheckOffset(struct svc_req,rq_cred,12,6,32255)
CheckMemberSize(struct svc_req,rq_clntcred,4,6,32256)
CheckOffset(struct svc_req,rq_clntcred,24,6,32256)
CheckMemberSize(struct svc_req,rq_xprt,4,6,32257)
CheckOffset(struct svc_req,rq_xprt,28,6,32257)
#elif defined __ia64__
CheckTypeSize(struct svc_req,64, 9991, 3, 2.0, NULL, 0, NULL)
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
#elif defined __i386__
CheckTypeSize(struct svc_req,32, 9991, 2, 2.0, NULL, 0, NULL)
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
#else
Msg("Find size of svc_req (9991)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,0, NULL);\n",architecture,9991,0);
#endif

#if defined __s390x__
/* S390X */
typedef void (*__dispatch_fn_t_db)(struct svc_req *, SVCXPRT *);
CheckFunctionTypedef(__dispatch_fn_t,__dispatch_fn_t_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*__dispatch_fn_t_db)(struct svc_req *, SVCXPRT *);
CheckFunctionTypedef(__dispatch_fn_t,__dispatch_fn_t_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*__dispatch_fn_t_db)(struct svc_req *, SVCXPRT *);
CheckFunctionTypedef(__dispatch_fn_t,__dispatch_fn_t_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*__dispatch_fn_t_db)(struct svc_req *, SVCXPRT *);
CheckFunctionTypedef(__dispatch_fn_t,__dispatch_fn_t_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*__dispatch_fn_t_db)(struct svc_req *, SVCXPRT *);
CheckFunctionTypedef(__dispatch_fn_t,__dispatch_fn_t_db);
#elif defined __ia64__
/* IA64 */
typedef void (*__dispatch_fn_t_db)(struct svc_req *, SVCXPRT *);
CheckFunctionTypedef(__dispatch_fn_t,__dispatch_fn_t_db);
#elif defined __i386__
/* IA32 */
typedef void (*__dispatch_fn_t_db)(struct svc_req *, SVCXPRT *);
CheckFunctionTypedef(__dispatch_fn_t,__dispatch_fn_t_db);
#endif

extern SVCXPRT * svcraw_create_db(void);
CheckInterfacedef(svcraw_create,svcraw_create_db);
extern void svc_getreqset_db(fd_set *);
CheckInterfacedef(svc_getreqset,svc_getreqset_db);
extern bool_t svc_register_db(SVCXPRT *, rpcprog_t, rpcvers_t, __dispatch_fn_t, rpcprot_t);
CheckInterfacedef(svc_register,svc_register_db);
extern void svc_run_db(void);
CheckInterfacedef(svc_run,svc_run_db);
extern bool_t svc_sendreply_db(SVCXPRT *, xdrproc_t, caddr_t);
CheckInterfacedef(svc_sendreply,svc_sendreply_db);
extern void svcerr_auth_db(SVCXPRT *, enum auth_stat);
CheckInterfacedef(svcerr_auth,svcerr_auth_db);
extern void svcerr_decode_db(SVCXPRT *);
CheckInterfacedef(svcerr_decode,svcerr_decode_db);
extern void svcerr_noproc_db(SVCXPRT *);
CheckInterfacedef(svcerr_noproc,svcerr_noproc_db);
extern void svcerr_noprog_db(SVCXPRT *);
CheckInterfacedef(svcerr_noprog,svcerr_noprog_db);
extern void svcerr_progvers_db(SVCXPRT *, rpcvers_t, rpcvers_t);
CheckInterfacedef(svcerr_progvers,svcerr_progvers_db);
extern void svcerr_systemerr_db(SVCXPRT *);
CheckInterfacedef(svcerr_systemerr,svcerr_systemerr_db);
extern void svcerr_weakauth_db(SVCXPRT *);
CheckInterfacedef(svcerr_weakauth,svcerr_weakauth_db);
extern SVCXPRT * svctcp_create_db(int, u_int, u_int);
CheckInterfacedef(svctcp_create,svctcp_create_db);
extern SVCXPRT * svcudp_create_db(int);
CheckInterfacedef(svcudp_create,svcudp_create_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in rpc/svc.h\n\n",pcnt,cnt);
return cnt;
#endif

}
