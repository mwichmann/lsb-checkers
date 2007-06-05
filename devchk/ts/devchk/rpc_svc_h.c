/*
 * Test of rpc/svc.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
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

int pcnt=0;
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
	CompareConstant(RPC_ANYSOCK,-1,4376,architecture)
#else
Msg( "Error: Constant not found: RPC_ANYSOCK\n");
cnt++;
#endif

#endif

#if 1
CheckEnum("XPRT_DIED",XPRT_DIED,0,32222);
CheckEnum("XPRT_MOREREQS",XPRT_MOREREQS,(0) + 1,32223);
CheckEnum("XPRT_IDLE",XPRT_IDLE,((0) + 1) + 1,32224);
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
#elif __s390__ && !__s390x__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390x__
#elif __x86_64__
#elif __powerpc64__
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
CheckTypeSize(__dispatch_fn_t,4, 9997, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(__dispatch_fn_t,4, 9997, 10)
#elif __s390x__
CheckTypeSize(__dispatch_fn_t,8, 9997, 12)
#elif __x86_64__
CheckTypeSize(__dispatch_fn_t,8, 9997, 11)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9997,0);
Msg("Find size of __dispatch_fn_t (9997)\n");
#endif

#if __i386__
#elif __powerpc64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#elif __x86_64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9991,0);
Msg("Find size of svc_req (9991)\n");
#endif

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
