/*
 * Test of rpc/clnt.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "rpc/clnt.h"



#ifdef TET_TEST
void rpc_clnt_h()
{
#else
int rpc_clnt_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in rpc/clnt.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLSET_RETRY_TIMEOUT
	CompareConstant(CLSET_RETRY_TIMEOUT,4,4302,architecture)
#else
Msg( "Error: Constant not found: CLSET_RETRY_TIMEOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLGET_RETRY_TIMEOUT
	CompareConstant(CLGET_RETRY_TIMEOUT,5,4303,architecture)
#else
Msg( "Error: Constant not found: CLGET_RETRY_TIMEOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NULLPROC
	CompareConstant(NULLPROC,((u_long)0),4310,architecture)
#else
Msg( "Error: Constant not found: NULLPROC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLSET_TIMEOUT
	CompareConstant(CLSET_TIMEOUT,1,4286,architecture)
#else
Msg( "Error: Constant not found: CLSET_TIMEOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLGET_TIMEOUT
	CompareConstant(CLGET_TIMEOUT,2,4287,architecture)
#else
Msg( "Error: Constant not found: CLGET_TIMEOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLGET_SERVER_ADDR
	CompareConstant(CLGET_SERVER_ADDR,3,4288,architecture)
#else
Msg( "Error: Constant not found: CLGET_SERVER_ADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLGET_FD
	CompareConstant(CLGET_FD,6,4289,architecture)
#else
Msg( "Error: Constant not found: CLGET_FD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLGET_SVC_ADDR
	CompareConstant(CLGET_SVC_ADDR,7,4290,architecture)
#else
Msg( "Error: Constant not found: CLGET_SVC_ADDR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLSET_FD_CLOSE
	CompareConstant(CLSET_FD_CLOSE,8,4291,architecture)
#else
Msg( "Error: Constant not found: CLSET_FD_CLOSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLSET_FD_NCLOSE
	CompareConstant(CLSET_FD_NCLOSE,9,4292,architecture)
#else
Msg( "Error: Constant not found: CLSET_FD_NCLOSE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLGET_XID
	CompareConstant(CLGET_XID,10,4293,architecture)
#else
Msg( "Error: Constant not found: CLGET_XID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLSET_XID
	CompareConstant(CLSET_XID,11,4294,architecture)
#else
Msg( "Error: Constant not found: CLSET_XID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLGET_VERS
	CompareConstant(CLGET_VERS,12,4295,architecture)
#else
Msg( "Error: Constant not found: CLGET_VERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLSET_VERS
	CompareConstant(CLSET_VERS,13,4296,architecture)
#else
Msg( "Error: Constant not found: CLSET_VERS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLGET_PROG
	CompareConstant(CLGET_PROG,14,4297,architecture)
#else
Msg( "Error: Constant not found: CLGET_PROG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CLSET_PROG
	CompareConstant(CLSET_PROG,15,4298,architecture)
#else
Msg( "Error: Constant not found: CLSET_PROG\n");
cnt++;
#endif

#endif

#if __i386__
#elif __s390__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9916,0);
Msg("Find size of clnt_stat (9916)\n");
#endif

#if __i386__
CheckTypeSize(struct rpc_err,12, 9917, 2)
CheckMemberSize(struct rpc_err,ru,8,2,32102)
CheckOffset(struct rpc_err,ru,4,2,32102)
#elif __ia64__
CheckTypeSize(struct rpc_err,24, 9917, 3)
CheckMemberSize(struct rpc_err,ru,16,3,32102)
CheckOffset(struct rpc_err,ru,8,3,32102)
#elif __s390__
CheckTypeSize(struct rpc_err,12, 9917, 10)
CheckMemberSize(struct rpc_err,ru,0,10,32102)
CheckOffset(struct rpc_err,ru,4,10,32102)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct rpc_err,12, 9917, 6)
CheckMemberSize(struct rpc_err,ru,8,6,32102)
CheckOffset(struct rpc_err,ru,4,6,32102)
#elif __powerpc64__
CheckTypeSize(struct rpc_err,24, 9917, 9)
CheckMemberSize(struct rpc_err,ru,0,9,32102)
CheckOffset(struct rpc_err,ru,8,9,32102)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9917,0);
Msg("Find size of rpc_err (9917)\n");
#endif

#if __i386__
CheckTypeSize(struct clnt_ops,24, 9922, 2)
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
#elif __s390__
CheckTypeSize(struct clnt_ops,24, 9922, 10)
CheckMemberSize(struct clnt_ops,cl_abort,0,10,32105)
CheckOffset(struct clnt_ops,cl_abort,4,10,32105)
CheckMemberSize(struct clnt_ops,cl_geterr,0,10,32106)
CheckOffset(struct clnt_ops,cl_geterr,8,10,32106)
CheckMemberSize(struct clnt_ops,cl_freeres,0,10,32107)
CheckOffset(struct clnt_ops,cl_freeres,12,10,32107)
CheckMemberSize(struct clnt_ops,cl_destroy,0,10,32108)
CheckOffset(struct clnt_ops,cl_destroy,16,10,32108)
CheckMemberSize(struct clnt_ops,cl_control,0,10,32109)
CheckOffset(struct clnt_ops,cl_control,20,10,32109)
#elif __ia64__
CheckTypeSize(struct clnt_ops,48, 9922, 3)
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
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct clnt_ops,24, 9922, 6)
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
#elif __powerpc64__
CheckTypeSize(struct clnt_ops,48, 9922, 9)
CheckMemberSize(struct clnt_ops,cl_abort,0,9,32105)
CheckOffset(struct clnt_ops,cl_abort,8,9,32105)
CheckMemberSize(struct clnt_ops,cl_geterr,0,9,32106)
CheckOffset(struct clnt_ops,cl_geterr,16,9,32106)
CheckMemberSize(struct clnt_ops,cl_freeres,0,9,32107)
CheckOffset(struct clnt_ops,cl_freeres,24,9,32107)
CheckMemberSize(struct clnt_ops,cl_destroy,0,9,32108)
CheckOffset(struct clnt_ops,cl_destroy,32,9,32108)
CheckMemberSize(struct clnt_ops,cl_control,0,9,32109)
CheckOffset(struct clnt_ops,cl_control,40,9,32109)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9922,0);
Msg("Find size of clnt_ops (9922)\n");
#endif

#if __i386__
CheckTypeSize(struct CLIENT,12, 9921, 2)
CheckMemberSize(struct CLIENT,cl_ops,4,2,32110)
CheckOffset(struct CLIENT,cl_ops,4,2,32110)
CheckMemberSize(struct CLIENT,cl_private,4,2,32111)
CheckOffset(struct CLIENT,cl_private,8,2,32111)
#elif __s390__
CheckTypeSize(struct CLIENT,12, 9921, 10)
CheckMemberSize(struct CLIENT,cl_ops,0,10,32110)
CheckOffset(struct CLIENT,cl_ops,4,10,32110)
CheckMemberSize(struct CLIENT,cl_private,0,10,32111)
CheckOffset(struct CLIENT,cl_private,8,10,32111)
#elif __ia64__
CheckTypeSize(struct CLIENT,24, 9921, 3)
CheckMemberSize(struct CLIENT,cl_ops,8,3,32110)
CheckOffset(struct CLIENT,cl_ops,8,3,32110)
CheckMemberSize(struct CLIENT,cl_private,8,3,32111)
CheckOffset(struct CLIENT,cl_private,16,3,32111)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct CLIENT,12, 9921, 6)
CheckMemberSize(struct CLIENT,cl_ops,4,6,32110)
CheckOffset(struct CLIENT,cl_ops,4,6,32110)
CheckMemberSize(struct CLIENT,cl_private,4,6,32111)
CheckOffset(struct CLIENT,cl_private,8,6,32111)
#elif __powerpc64__
CheckTypeSize(struct CLIENT,24, 9921, 9)
CheckMemberSize(struct CLIENT,cl_ops,0,9,32110)
CheckOffset(struct CLIENT,cl_ops,8,9,32110)
CheckMemberSize(struct CLIENT,cl_private,0,9,32111)
CheckOffset(struct CLIENT,cl_private,16,9,32111)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9921,0);
Msg("Find size of CLIENT (9921)\n");
#endif

#if __i386__
CheckTypeSize(CLIENT,12, 10389, 2)
#elif __s390__
CheckTypeSize(CLIENT,12, 10389, 10)
#elif __ia64__
CheckTypeSize(CLIENT,24, 10389, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10389,0);
Msg("Find size of CLIENT (10389)\n");
#endif

#if __no_sym__
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in rpc/clnt.h\n",cnt);
return cnt;
#endif

}
