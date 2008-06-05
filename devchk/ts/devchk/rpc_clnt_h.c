/*
 * Test of rpc/clnt.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "rpc/clnt.h"



#ifdef TET_TEST
void rpc_clnt_h()
{
#else
int rpc_clnt_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in rpc/clnt.h\n");
#endif

printf("Checking data structures in rpc/clnt.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for clnt_call(rh, proc, xargs, argsp, xres, resp, secs) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for clnt_abort(rh) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for clnt_geterr(rh,errp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for clnt_freeres(rh,xres,resp) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for clnt_control(cl,rq,in) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLSET_TIMEOUT
	CompareConstant(CLSET_TIMEOUT,1,4286,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLSET_TIMEOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLGET_TIMEOUT
	CompareConstant(CLGET_TIMEOUT,2,4287,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLGET_TIMEOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLGET_SERVER_ADDR
	CompareConstant(CLGET_SERVER_ADDR,3,4288,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLGET_SERVER_ADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLGET_FD
	CompareConstant(CLGET_FD,6,4289,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLGET_FD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLGET_SVC_ADDR
	CompareConstant(CLGET_SVC_ADDR,7,4290,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLGET_SVC_ADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLSET_FD_CLOSE
	CompareConstant(CLSET_FD_CLOSE,8,4291,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLSET_FD_CLOSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLSET_FD_NCLOSE
	CompareConstant(CLSET_FD_NCLOSE,9,4292,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLSET_FD_NCLOSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLGET_XID
	CompareConstant(CLGET_XID,10,4293,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLGET_XID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLSET_XID
	CompareConstant(CLSET_XID,11,4294,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLSET_XID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLGET_VERS
	CompareConstant(CLGET_VERS,12,4295,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLGET_VERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLSET_VERS
	CompareConstant(CLSET_VERS,13,4296,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLSET_VERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLGET_PROG
	CompareConstant(CLGET_PROG,14,4297,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLGET_PROG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLSET_PROG
	CompareConstant(CLSET_PROG,15,4298,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLSET_PROG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLSET_RETRY_TIMEOUT
	CompareConstant(CLSET_RETRY_TIMEOUT,4,4302,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLSET_RETRY_TIMEOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLGET_RETRY_TIMEOUT
	CompareConstant(CLGET_RETRY_TIMEOUT,5,4303,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: CLGET_RETRY_TIMEOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for clnt_destroy(rh) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef NULLPROC
	CompareConstant(NULLPROC,((u_long)0),4310,architecture,1.3,NULL)
#else
Msg( "Error: Constant not found: NULLPROC\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckEnum("RPC_SUCCESS",RPC_SUCCESS,0,32067)
CheckEnum("RPC_CANTENCODEARGS",RPC_CANTENCODEARGS,1,32068)
CheckEnum("RPC_CANTDECODERES",RPC_CANTDECODERES,2,32069)
CheckEnum("RPC_CANTSEND",RPC_CANTSEND,3,32070)
CheckEnum("RPC_CANTRECV",RPC_CANTRECV,4,32071)
CheckEnum("RPC_TIMEDOUT",RPC_TIMEDOUT,5,32072)
CheckEnum("RPC_VERSMISMATCH",RPC_VERSMISMATCH,6,32073)
CheckEnum("RPC_AUTHERROR",RPC_AUTHERROR,7,32074)
CheckEnum("RPC_PROGUNAVAIL",RPC_PROGUNAVAIL,8,32075)
CheckEnum("RPC_PROGVERSMISMATCH",RPC_PROGVERSMISMATCH,9,32076)
CheckEnum("RPC_PROCUNAVAIL",RPC_PROCUNAVAIL,10,32077)
CheckEnum("RPC_CANTDECODEARGS",RPC_CANTDECODEARGS,11,32078)
CheckEnum("RPC_SYSTEMERROR",RPC_SYSTEMERROR,12,32079)
CheckEnum("RPC_NOBROADCAST",RPC_NOBROADCAST,21,32080)
CheckEnum("RPC_UNKNOWNHOST",RPC_UNKNOWNHOST,13,32081)
CheckEnum("RPC_UNKNOWNPROTO",RPC_UNKNOWNPROTO,17,32082)
CheckEnum("RPC_UNKNOWNADDR",RPC_UNKNOWNADDR,19,32083)
CheckEnum("RPC_RPCBFAILURE",RPC_RPCBFAILURE,14,32084)
CheckEnum("RPC_PROGNOTREGISTERED",RPC_PROGNOTREGISTERED,15,32085)
CheckEnum("RPC_N2AXLATEFAILURE",RPC_N2AXLATEFAILURE,22,32086)
CheckEnum("RPC_FAILED",RPC_FAILED,16,32087)
CheckEnum("RPC_INTR",RPC_INTR,18,32088)
CheckEnum("RPC_TLIERROR",RPC_TLIERROR,20,32089)
CheckEnum("RPC_UDERROR",RPC_UDERROR,23,32090)
CheckEnum("RPC_INPROGRESS",RPC_INPROGRESS,24,32091)
CheckEnum("RPC_STALERACHANDLE",RPC_STALERACHANDLE,25,32092)
#elif defined __x86_64__
CheckEnum("RPC_SUCCESS",RPC_SUCCESS,0,32067)
CheckEnum("RPC_CANTENCODEARGS",RPC_CANTENCODEARGS,1,32068)
CheckEnum("RPC_CANTDECODERES",RPC_CANTDECODERES,2,32069)
CheckEnum("RPC_CANTSEND",RPC_CANTSEND,3,32070)
CheckEnum("RPC_CANTRECV",RPC_CANTRECV,4,32071)
CheckEnum("RPC_TIMEDOUT",RPC_TIMEDOUT,5,32072)
CheckEnum("RPC_VERSMISMATCH",RPC_VERSMISMATCH,6,32073)
CheckEnum("RPC_AUTHERROR",RPC_AUTHERROR,7,32074)
CheckEnum("RPC_PROGUNAVAIL",RPC_PROGUNAVAIL,8,32075)
CheckEnum("RPC_PROGVERSMISMATCH",RPC_PROGVERSMISMATCH,9,32076)
CheckEnum("RPC_PROCUNAVAIL",RPC_PROCUNAVAIL,10,32077)
CheckEnum("RPC_CANTDECODEARGS",RPC_CANTDECODEARGS,11,32078)
CheckEnum("RPC_SYSTEMERROR",RPC_SYSTEMERROR,12,32079)
CheckEnum("RPC_NOBROADCAST",RPC_NOBROADCAST,21,32080)
CheckEnum("RPC_UNKNOWNHOST",RPC_UNKNOWNHOST,13,32081)
CheckEnum("RPC_UNKNOWNPROTO",RPC_UNKNOWNPROTO,17,32082)
CheckEnum("RPC_UNKNOWNADDR",RPC_UNKNOWNADDR,19,32083)
CheckEnum("RPC_RPCBFAILURE",RPC_RPCBFAILURE,14,32084)
CheckEnum("RPC_PROGNOTREGISTERED",RPC_PROGNOTREGISTERED,15,32085)
CheckEnum("RPC_N2AXLATEFAILURE",RPC_N2AXLATEFAILURE,22,32086)
CheckEnum("RPC_FAILED",RPC_FAILED,16,32087)
CheckEnum("RPC_INTR",RPC_INTR,18,32088)
CheckEnum("RPC_TLIERROR",RPC_TLIERROR,20,32089)
CheckEnum("RPC_UDERROR",RPC_UDERROR,23,32090)
CheckEnum("RPC_INPROGRESS",RPC_INPROGRESS,24,32091)
CheckEnum("RPC_STALERACHANDLE",RPC_STALERACHANDLE,25,32092)
#elif defined __s390__ && !defined __s390x__
CheckEnum("RPC_SUCCESS",RPC_SUCCESS,0,32067)
CheckEnum("RPC_CANTENCODEARGS",RPC_CANTENCODEARGS,1,32068)
CheckEnum("RPC_CANTDECODERES",RPC_CANTDECODERES,2,32069)
CheckEnum("RPC_CANTSEND",RPC_CANTSEND,3,32070)
CheckEnum("RPC_CANTRECV",RPC_CANTRECV,4,32071)
CheckEnum("RPC_TIMEDOUT",RPC_TIMEDOUT,5,32072)
CheckEnum("RPC_VERSMISMATCH",RPC_VERSMISMATCH,6,32073)
CheckEnum("RPC_AUTHERROR",RPC_AUTHERROR,7,32074)
CheckEnum("RPC_PROGUNAVAIL",RPC_PROGUNAVAIL,8,32075)
CheckEnum("RPC_PROGVERSMISMATCH",RPC_PROGVERSMISMATCH,9,32076)
CheckEnum("RPC_PROCUNAVAIL",RPC_PROCUNAVAIL,10,32077)
CheckEnum("RPC_CANTDECODEARGS",RPC_CANTDECODEARGS,11,32078)
CheckEnum("RPC_SYSTEMERROR",RPC_SYSTEMERROR,12,32079)
CheckEnum("RPC_NOBROADCAST",RPC_NOBROADCAST,21,32080)
CheckEnum("RPC_UNKNOWNHOST",RPC_UNKNOWNHOST,13,32081)
CheckEnum("RPC_UNKNOWNPROTO",RPC_UNKNOWNPROTO,17,32082)
CheckEnum("RPC_UNKNOWNADDR",RPC_UNKNOWNADDR,19,32083)
CheckEnum("RPC_RPCBFAILURE",RPC_RPCBFAILURE,14,32084)
CheckEnum("RPC_PROGNOTREGISTERED",RPC_PROGNOTREGISTERED,15,32085)
CheckEnum("RPC_N2AXLATEFAILURE",RPC_N2AXLATEFAILURE,22,32086)
CheckEnum("RPC_FAILED",RPC_FAILED,16,32087)
CheckEnum("RPC_INTR",RPC_INTR,18,32088)
CheckEnum("RPC_TLIERROR",RPC_TLIERROR,20,32089)
CheckEnum("RPC_UDERROR",RPC_UDERROR,23,32090)
CheckEnum("RPC_INPROGRESS",RPC_INPROGRESS,24,32091)
CheckEnum("RPC_STALERACHANDLE",RPC_STALERACHANDLE,25,32092)
#elif defined __powerpc64__
CheckEnum("RPC_SUCCESS",RPC_SUCCESS,0,32067)
CheckEnum("RPC_CANTENCODEARGS",RPC_CANTENCODEARGS,1,32068)
CheckEnum("RPC_CANTDECODERES",RPC_CANTDECODERES,2,32069)
CheckEnum("RPC_CANTSEND",RPC_CANTSEND,3,32070)
CheckEnum("RPC_CANTRECV",RPC_CANTRECV,4,32071)
CheckEnum("RPC_TIMEDOUT",RPC_TIMEDOUT,5,32072)
CheckEnum("RPC_VERSMISMATCH",RPC_VERSMISMATCH,6,32073)
CheckEnum("RPC_AUTHERROR",RPC_AUTHERROR,7,32074)
CheckEnum("RPC_PROGUNAVAIL",RPC_PROGUNAVAIL,8,32075)
CheckEnum("RPC_PROGVERSMISMATCH",RPC_PROGVERSMISMATCH,9,32076)
CheckEnum("RPC_PROCUNAVAIL",RPC_PROCUNAVAIL,10,32077)
CheckEnum("RPC_CANTDECODEARGS",RPC_CANTDECODEARGS,11,32078)
CheckEnum("RPC_SYSTEMERROR",RPC_SYSTEMERROR,12,32079)
CheckEnum("RPC_NOBROADCAST",RPC_NOBROADCAST,21,32080)
CheckEnum("RPC_UNKNOWNHOST",RPC_UNKNOWNHOST,13,32081)
CheckEnum("RPC_UNKNOWNPROTO",RPC_UNKNOWNPROTO,17,32082)
CheckEnum("RPC_UNKNOWNADDR",RPC_UNKNOWNADDR,19,32083)
CheckEnum("RPC_RPCBFAILURE",RPC_RPCBFAILURE,14,32084)
CheckEnum("RPC_PROGNOTREGISTERED",RPC_PROGNOTREGISTERED,15,32085)
CheckEnum("RPC_N2AXLATEFAILURE",RPC_N2AXLATEFAILURE,22,32086)
CheckEnum("RPC_FAILED",RPC_FAILED,16,32087)
CheckEnum("RPC_INTR",RPC_INTR,18,32088)
CheckEnum("RPC_TLIERROR",RPC_TLIERROR,20,32089)
CheckEnum("RPC_UDERROR",RPC_UDERROR,23,32090)
CheckEnum("RPC_INPROGRESS",RPC_INPROGRESS,24,32091)
CheckEnum("RPC_STALERACHANDLE",RPC_STALERACHANDLE,25,32092)
#elif defined __powerpc__ && !defined __powerpc64__
CheckEnum("RPC_SUCCESS",RPC_SUCCESS,0,32067)
CheckEnum("RPC_CANTENCODEARGS",RPC_CANTENCODEARGS,1,32068)
CheckEnum("RPC_CANTDECODERES",RPC_CANTDECODERES,2,32069)
CheckEnum("RPC_CANTSEND",RPC_CANTSEND,3,32070)
CheckEnum("RPC_CANTRECV",RPC_CANTRECV,4,32071)
CheckEnum("RPC_TIMEDOUT",RPC_TIMEDOUT,5,32072)
CheckEnum("RPC_VERSMISMATCH",RPC_VERSMISMATCH,6,32073)
CheckEnum("RPC_AUTHERROR",RPC_AUTHERROR,7,32074)
CheckEnum("RPC_PROGUNAVAIL",RPC_PROGUNAVAIL,8,32075)
CheckEnum("RPC_PROGVERSMISMATCH",RPC_PROGVERSMISMATCH,9,32076)
CheckEnum("RPC_PROCUNAVAIL",RPC_PROCUNAVAIL,10,32077)
CheckEnum("RPC_CANTDECODEARGS",RPC_CANTDECODEARGS,11,32078)
CheckEnum("RPC_SYSTEMERROR",RPC_SYSTEMERROR,12,32079)
CheckEnum("RPC_NOBROADCAST",RPC_NOBROADCAST,21,32080)
CheckEnum("RPC_UNKNOWNHOST",RPC_UNKNOWNHOST,13,32081)
CheckEnum("RPC_UNKNOWNPROTO",RPC_UNKNOWNPROTO,17,32082)
CheckEnum("RPC_UNKNOWNADDR",RPC_UNKNOWNADDR,19,32083)
CheckEnum("RPC_RPCBFAILURE",RPC_RPCBFAILURE,14,32084)
CheckEnum("RPC_PROGNOTREGISTERED",RPC_PROGNOTREGISTERED,15,32085)
CheckEnum("RPC_N2AXLATEFAILURE",RPC_N2AXLATEFAILURE,22,32086)
CheckEnum("RPC_FAILED",RPC_FAILED,16,32087)
CheckEnum("RPC_INTR",RPC_INTR,18,32088)
CheckEnum("RPC_TLIERROR",RPC_TLIERROR,20,32089)
CheckEnum("RPC_UDERROR",RPC_UDERROR,23,32090)
CheckEnum("RPC_INPROGRESS",RPC_INPROGRESS,24,32091)
CheckEnum("RPC_STALERACHANDLE",RPC_STALERACHANDLE,25,32092)
#elif defined __ia64__
CheckEnum("RPC_SUCCESS",RPC_SUCCESS,0,32067)
CheckEnum("RPC_CANTENCODEARGS",RPC_CANTENCODEARGS,1,32068)
CheckEnum("RPC_CANTDECODERES",RPC_CANTDECODERES,2,32069)
CheckEnum("RPC_CANTSEND",RPC_CANTSEND,3,32070)
CheckEnum("RPC_CANTRECV",RPC_CANTRECV,4,32071)
CheckEnum("RPC_TIMEDOUT",RPC_TIMEDOUT,5,32072)
CheckEnum("RPC_VERSMISMATCH",RPC_VERSMISMATCH,6,32073)
CheckEnum("RPC_AUTHERROR",RPC_AUTHERROR,7,32074)
CheckEnum("RPC_PROGUNAVAIL",RPC_PROGUNAVAIL,8,32075)
CheckEnum("RPC_PROGVERSMISMATCH",RPC_PROGVERSMISMATCH,9,32076)
CheckEnum("RPC_PROCUNAVAIL",RPC_PROCUNAVAIL,10,32077)
CheckEnum("RPC_CANTDECODEARGS",RPC_CANTDECODEARGS,11,32078)
CheckEnum("RPC_SYSTEMERROR",RPC_SYSTEMERROR,12,32079)
CheckEnum("RPC_NOBROADCAST",RPC_NOBROADCAST,21,32080)
CheckEnum("RPC_UNKNOWNHOST",RPC_UNKNOWNHOST,13,32081)
CheckEnum("RPC_UNKNOWNPROTO",RPC_UNKNOWNPROTO,17,32082)
CheckEnum("RPC_UNKNOWNADDR",RPC_UNKNOWNADDR,19,32083)
CheckEnum("RPC_RPCBFAILURE",RPC_RPCBFAILURE,14,32084)
CheckEnum("RPC_PROGNOTREGISTERED",RPC_PROGNOTREGISTERED,15,32085)
CheckEnum("RPC_N2AXLATEFAILURE",RPC_N2AXLATEFAILURE,22,32086)
CheckEnum("RPC_FAILED",RPC_FAILED,16,32087)
CheckEnum("RPC_INTR",RPC_INTR,18,32088)
CheckEnum("RPC_TLIERROR",RPC_TLIERROR,20,32089)
CheckEnum("RPC_UDERROR",RPC_UDERROR,23,32090)
CheckEnum("RPC_INPROGRESS",RPC_INPROGRESS,24,32091)
CheckEnum("RPC_STALERACHANDLE",RPC_STALERACHANDLE,25,32092)
#elif defined __i386__
CheckEnum("RPC_SUCCESS",RPC_SUCCESS,0,32067)
CheckEnum("RPC_CANTENCODEARGS",RPC_CANTENCODEARGS,1,32068)
CheckEnum("RPC_CANTDECODERES",RPC_CANTDECODERES,2,32069)
CheckEnum("RPC_CANTSEND",RPC_CANTSEND,3,32070)
CheckEnum("RPC_CANTRECV",RPC_CANTRECV,4,32071)
CheckEnum("RPC_TIMEDOUT",RPC_TIMEDOUT,5,32072)
CheckEnum("RPC_VERSMISMATCH",RPC_VERSMISMATCH,6,32073)
CheckEnum("RPC_AUTHERROR",RPC_AUTHERROR,7,32074)
CheckEnum("RPC_PROGUNAVAIL",RPC_PROGUNAVAIL,8,32075)
CheckEnum("RPC_PROGVERSMISMATCH",RPC_PROGVERSMISMATCH,9,32076)
CheckEnum("RPC_PROCUNAVAIL",RPC_PROCUNAVAIL,10,32077)
CheckEnum("RPC_CANTDECODEARGS",RPC_CANTDECODEARGS,11,32078)
CheckEnum("RPC_SYSTEMERROR",RPC_SYSTEMERROR,12,32079)
CheckEnum("RPC_NOBROADCAST",RPC_NOBROADCAST,21,32080)
CheckEnum("RPC_UNKNOWNHOST",RPC_UNKNOWNHOST,13,32081)
CheckEnum("RPC_UNKNOWNPROTO",RPC_UNKNOWNPROTO,17,32082)
CheckEnum("RPC_UNKNOWNADDR",RPC_UNKNOWNADDR,19,32083)
CheckEnum("RPC_RPCBFAILURE",RPC_RPCBFAILURE,14,32084)
CheckEnum("RPC_PROGNOTREGISTERED",RPC_PROGNOTREGISTERED,15,32085)
CheckEnum("RPC_N2AXLATEFAILURE",RPC_N2AXLATEFAILURE,22,32086)
CheckEnum("RPC_FAILED",RPC_FAILED,16,32087)
CheckEnum("RPC_INTR",RPC_INTR,18,32088)
CheckEnum("RPC_TLIERROR",RPC_TLIERROR,20,32089)
CheckEnum("RPC_UDERROR",RPC_UDERROR,23,32090)
CheckEnum("RPC_INPROGRESS",RPC_INPROGRESS,24,32091)
CheckEnum("RPC_STALERACHANDLE",RPC_STALERACHANDLE,25,32092)
#else
Msg("Find size of clnt_stat (9916)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.3""',NULL,0,NULL);\n",architecture,9916,0);
#endif

#if defined __s390x__
CheckTypeSize(struct rpc_err,24, 9917, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct rpc_err,ru,16,12,32102)
CheckOffset(struct rpc_err,ru,8,12,32102)
#elif defined __x86_64__
CheckTypeSize(struct rpc_err,24, 9917, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct rpc_err,ru,16,11,32102)
CheckOffset(struct rpc_err,ru,8,11,32102)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct rpc_err,12, 9917, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct rpc_err,ru,8,10,32102)
CheckOffset(struct rpc_err,ru,4,10,32102)
#elif defined __powerpc64__
CheckTypeSize(struct rpc_err,24, 9917, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct rpc_err,ru,16,9,32102)
CheckOffset(struct rpc_err,ru,8,9,32102)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct rpc_err,12, 9917, 6, 1.3, NULL, 0, NULL)
CheckMemberSize(struct rpc_err,ru,8,6,32102)
CheckOffset(struct rpc_err,ru,4,6,32102)
#elif defined __ia64__
CheckTypeSize(struct rpc_err,24, 9917, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct rpc_err,ru,16,3,32102)
CheckOffset(struct rpc_err,ru,8,3,32102)
#elif defined __i386__
CheckTypeSize(struct rpc_err,12, 9917, 2, 1.3, NULL, 0, NULL)
CheckMemberSize(struct rpc_err,ru,8,2,32102)
CheckOffset(struct rpc_err,ru,4,2,32102)
#else
Msg("Find size of rpc_err (9917)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.3""',NULL,0,NULL);\n",architecture,9917,0);
#endif

#if defined __s390x__
CheckTypeSize(struct clnt_ops,48, 9922, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct clnt_ops,cl_abort,8,12,32105)
CheckOffset(struct clnt_ops,cl_abort,8,12,32105)
CheckMemberSize(struct clnt_ops,cl_geterr,8,12,32106)
CheckOffset(struct clnt_ops,cl_geterr,16,12,32106)
CheckMemberSize(struct clnt_ops,cl_freeres,8,12,32107)
CheckOffset(struct clnt_ops,cl_freeres,24,12,32107)
CheckMemberSize(struct clnt_ops,cl_destroy,8,12,32108)
CheckOffset(struct clnt_ops,cl_destroy,32,12,32108)
CheckMemberSize(struct clnt_ops,cl_control,8,12,32109)
CheckOffset(struct clnt_ops,cl_control,40,12,32109)
#elif defined __x86_64__
CheckTypeSize(struct clnt_ops,48, 9922, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct clnt_ops,cl_abort,8,11,32105)
CheckOffset(struct clnt_ops,cl_abort,8,11,32105)
CheckMemberSize(struct clnt_ops,cl_geterr,8,11,32106)
CheckOffset(struct clnt_ops,cl_geterr,16,11,32106)
CheckMemberSize(struct clnt_ops,cl_freeres,8,11,32107)
CheckOffset(struct clnt_ops,cl_freeres,24,11,32107)
CheckMemberSize(struct clnt_ops,cl_destroy,8,11,32108)
CheckOffset(struct clnt_ops,cl_destroy,32,11,32108)
CheckMemberSize(struct clnt_ops,cl_control,8,11,32109)
CheckOffset(struct clnt_ops,cl_control,40,11,32109)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct clnt_ops,24, 9922, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct clnt_ops,cl_abort,4,10,32105)
CheckOffset(struct clnt_ops,cl_abort,4,10,32105)
CheckMemberSize(struct clnt_ops,cl_geterr,4,10,32106)
CheckOffset(struct clnt_ops,cl_geterr,8,10,32106)
CheckMemberSize(struct clnt_ops,cl_freeres,4,10,32107)
CheckOffset(struct clnt_ops,cl_freeres,12,10,32107)
CheckMemberSize(struct clnt_ops,cl_destroy,4,10,32108)
CheckOffset(struct clnt_ops,cl_destroy,16,10,32108)
CheckMemberSize(struct clnt_ops,cl_control,4,10,32109)
CheckOffset(struct clnt_ops,cl_control,20,10,32109)
#elif defined __powerpc64__
CheckTypeSize(struct clnt_ops,48, 9922, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct clnt_ops,cl_abort,8,9,32105)
CheckOffset(struct clnt_ops,cl_abort,8,9,32105)
CheckMemberSize(struct clnt_ops,cl_geterr,8,9,32106)
CheckOffset(struct clnt_ops,cl_geterr,16,9,32106)
CheckMemberSize(struct clnt_ops,cl_freeres,8,9,32107)
CheckOffset(struct clnt_ops,cl_freeres,24,9,32107)
CheckMemberSize(struct clnt_ops,cl_destroy,8,9,32108)
CheckOffset(struct clnt_ops,cl_destroy,32,9,32108)
CheckMemberSize(struct clnt_ops,cl_control,8,9,32109)
CheckOffset(struct clnt_ops,cl_control,40,9,32109)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct clnt_ops,24, 9922, 6, 1.3, NULL, 0, NULL)
CheckMemberSize(struct clnt_ops,cl_abort,4,6,32105)
CheckOffset(struct clnt_ops,cl_abort,4,6,32105)
CheckMemberSize(struct clnt_ops,cl_geterr,4,6,32106)
CheckOffset(struct clnt_ops,cl_geterr,8,6,32106)
CheckMemberSize(struct clnt_ops,cl_freeres,4,6,32107)
CheckOffset(struct clnt_ops,cl_freeres,12,6,32107)
CheckMemberSize(struct clnt_ops,cl_destroy,4,6,32108)
CheckOffset(struct clnt_ops,cl_destroy,16,6,32108)
CheckMemberSize(struct clnt_ops,cl_control,4,6,32109)
CheckOffset(struct clnt_ops,cl_control,20,6,32109)
#elif defined __ia64__
CheckTypeSize(struct clnt_ops,48, 9922, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct clnt_ops,cl_abort,8,3,32105)
CheckOffset(struct clnt_ops,cl_abort,8,3,32105)
CheckMemberSize(struct clnt_ops,cl_geterr,8,3,32106)
CheckOffset(struct clnt_ops,cl_geterr,16,3,32106)
CheckMemberSize(struct clnt_ops,cl_freeres,8,3,32107)
CheckOffset(struct clnt_ops,cl_freeres,24,3,32107)
CheckMemberSize(struct clnt_ops,cl_destroy,8,3,32108)
CheckOffset(struct clnt_ops,cl_destroy,32,3,32108)
CheckMemberSize(struct clnt_ops,cl_control,8,3,32109)
CheckOffset(struct clnt_ops,cl_control,40,3,32109)
#elif defined __i386__
CheckTypeSize(struct clnt_ops,24, 9922, 2, 1.3, NULL, 0, NULL)
CheckMemberSize(struct clnt_ops,cl_abort,4,2,32105)
CheckOffset(struct clnt_ops,cl_abort,4,2,32105)
CheckMemberSize(struct clnt_ops,cl_geterr,4,2,32106)
CheckOffset(struct clnt_ops,cl_geterr,8,2,32106)
CheckMemberSize(struct clnt_ops,cl_freeres,4,2,32107)
CheckOffset(struct clnt_ops,cl_freeres,12,2,32107)
CheckMemberSize(struct clnt_ops,cl_destroy,4,2,32108)
CheckOffset(struct clnt_ops,cl_destroy,16,2,32108)
CheckMemberSize(struct clnt_ops,cl_control,4,2,32109)
CheckOffset(struct clnt_ops,cl_control,20,2,32109)
#else
Msg("Find size of clnt_ops (9922)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.3""',NULL,0,NULL);\n",architecture,9922,0);
#endif

#if defined __s390x__
CheckTypeSize(struct CLIENT,24, 9921, 12, 4.0, NULL, 0, NULL)
CheckMemberSize(struct CLIENT,cl_ops,8,12,32110)
CheckOffset(struct CLIENT,cl_ops,8,12,32110)
CheckMemberSize(struct CLIENT,cl_private,8,12,32111)
CheckOffset(struct CLIENT,cl_private,16,12,32111)
#elif defined __x86_64__
CheckTypeSize(struct CLIENT,24, 9921, 11, 4.0, NULL, 0, NULL)
CheckMemberSize(struct CLIENT,cl_ops,8,11,32110)
CheckOffset(struct CLIENT,cl_ops,8,11,32110)
CheckMemberSize(struct CLIENT,cl_private,8,11,32111)
CheckOffset(struct CLIENT,cl_private,16,11,32111)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct CLIENT,12, 9921, 10, 4.0, NULL, 0, NULL)
CheckMemberSize(struct CLIENT,cl_ops,4,10,32110)
CheckOffset(struct CLIENT,cl_ops,4,10,32110)
CheckMemberSize(struct CLIENT,cl_private,4,10,32111)
CheckOffset(struct CLIENT,cl_private,8,10,32111)
#elif defined __powerpc64__
CheckTypeSize(struct CLIENT,24, 9921, 9, 4.0, NULL, 0, NULL)
CheckMemberSize(struct CLIENT,cl_ops,8,9,32110)
CheckOffset(struct CLIENT,cl_ops,8,9,32110)
CheckMemberSize(struct CLIENT,cl_private,8,9,32111)
CheckOffset(struct CLIENT,cl_private,16,9,32111)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct CLIENT,12, 9921, 6, 4.0, NULL, 0, NULL)
CheckMemberSize(struct CLIENT,cl_ops,4,6,32110)
CheckOffset(struct CLIENT,cl_ops,4,6,32110)
CheckMemberSize(struct CLIENT,cl_private,4,6,32111)
CheckOffset(struct CLIENT,cl_private,8,6,32111)
#elif defined __ia64__
CheckTypeSize(struct CLIENT,24, 9921, 3, 4.0, NULL, 0, NULL)
CheckMemberSize(struct CLIENT,cl_ops,8,3,32110)
CheckOffset(struct CLIENT,cl_ops,8,3,32110)
CheckMemberSize(struct CLIENT,cl_private,8,3,32111)
CheckOffset(struct CLIENT,cl_private,16,3,32111)
#elif defined __i386__
CheckTypeSize(struct CLIENT,12, 9921, 2, 4.0, NULL, 0, NULL)
CheckMemberSize(struct CLIENT,cl_ops,4,2,32110)
CheckOffset(struct CLIENT,cl_ops,4,2,32110)
CheckMemberSize(struct CLIENT,cl_private,4,2,32111)
CheckOffset(struct CLIENT,cl_private,8,2,32111)
#else
Msg("Find size of CLIENT (9921)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""4.0""',NULL,0,NULL);\n",architecture,9921,0);
#endif

#if defined __s390x__
CheckTypeSize(CLIENT,24, 10389, 12, 1.3, NULL, 9921, NULL)
#elif defined __x86_64__
CheckTypeSize(CLIENT,24, 10389, 11, 2.0, NULL, 9921, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(CLIENT,12, 10389, 10, 1.3, NULL, 9921, NULL)
#elif defined __powerpc64__
CheckTypeSize(CLIENT,24, 10389, 9, 2.0, NULL, 9921, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(CLIENT,12, 10389, 6, 1.3, NULL, 9921, NULL)
#elif defined __ia64__
CheckTypeSize(CLIENT,24, 10389, 3, 1.3, NULL, 9921, NULL)
#elif defined __i386__
CheckTypeSize(CLIENT,12, 10389, 2, 1.3, NULL, 9921, NULL)
#else
Msg("Find size of CLIENT (10389)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.3""',NULL,9921, NULL);\n",architecture,10389,0);
#endif

extern struct CLIENT * clntraw_create_db(u_long, u_long);
CheckInterfacedef(clntraw_create,clntraw_create_db);
extern struct CLIENT * clnttcp_create_db(struct sockaddr_in *, u_long, u_long, int *, u_int, u_int);
CheckInterfacedef(clnttcp_create,clnttcp_create_db);
extern struct CLIENT * clntudp_bufcreate_db(struct sockaddr_in *, u_long, u_long, struct timeval, int *, u_int, u_int);
CheckInterfacedef(clntudp_bufcreate,clntudp_bufcreate_db);
extern struct CLIENT * clntudp_create_db(struct sockaddr_in *, u_long, u_long, struct timeval, int *);
CheckInterfacedef(clntudp_create,clntudp_create_db);
extern int callrpc_db(char *, u_long, u_long, u_long, xdrproc_t, char *, xdrproc_t, char *);
CheckInterfacedef(callrpc,callrpc_db);
extern struct CLIENT * clnt_create_db(const char *, const u_long, const u_long, const char *);
CheckInterfacedef(clnt_create,clnt_create_db);
extern void clnt_pcreateerror_db(const char *);
CheckInterfacedef(clnt_pcreateerror,clnt_pcreateerror_db);
extern void clnt_perrno_db(enum clnt_stat);
CheckInterfacedef(clnt_perrno,clnt_perrno_db);
extern void clnt_perror_db(struct CLIENT *, const char *);
CheckInterfacedef(clnt_perror,clnt_perror_db);
extern char * clnt_spcreateerror_db(const char *);
CheckInterfacedef(clnt_spcreateerror,clnt_spcreateerror_db);
extern char * clnt_sperrno_db(enum clnt_stat);
CheckInterfacedef(clnt_sperrno,clnt_sperrno_db);
extern char * clnt_sperror_db(struct CLIENT *, const char *);
CheckInterfacedef(clnt_sperror,clnt_sperror_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in rpc/clnt.h\n\n",pcnt,cnt);
return cnt;
#endif

}
