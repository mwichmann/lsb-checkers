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

#ifdef _LSB_DEFAULT_ARCH
#ifdef CLSET_RETRY_TIMEOUT
	CompareConstant(CLSET_RETRY_TIMEOUT,4,4302,architecture)
#else
Msg( "Error: Constant not found: CLSET_RETRY_TIMEOUT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef CLGET_RETRY_TIMEOUT
	CompareConstant(CLGET_RETRY_TIMEOUT,5,4303,architecture)
#else
Msg( "Error: Constant not found: CLGET_RETRY_TIMEOUT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef NULLPROC
	CompareConstant(NULLPROC,((u_long)0),4310,architecture)
#else
Msg( "Error: Constant not found: NULLPROC\n");
cnt++;
#endif

#elif 
#ifdef NULLPROC
	CompareConstant(NULLPROC,,4310,architecture)
#else
Msg( "Error: Constant not found: NULLPROC\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef CLSET_TIMEOUT
	CompareConstant(CLSET_TIMEOUT,1,4286,architecture)
#else
Msg( "Error: Constant not found: CLSET_TIMEOUT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef CLGET_TIMEOUT
	CompareConstant(CLGET_TIMEOUT,2,4287,architecture)
#else
Msg( "Error: Constant not found: CLGET_TIMEOUT\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef CLGET_SERVER_ADDR
	CompareConstant(CLGET_SERVER_ADDR,3,4288,architecture)
#else
Msg( "Error: Constant not found: CLGET_SERVER_ADDR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef CLGET_FD
	CompareConstant(CLGET_FD,6,4289,architecture)
#else
Msg( "Error: Constant not found: CLGET_FD\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef CLGET_SVC_ADDR
	CompareConstant(CLGET_SVC_ADDR,7,4290,architecture)
#else
Msg( "Error: Constant not found: CLGET_SVC_ADDR\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef CLSET_FD_CLOSE
	CompareConstant(CLSET_FD_CLOSE,8,4291,architecture)
#else
Msg( "Error: Constant not found: CLSET_FD_CLOSE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef CLSET_FD_NCLOSE
	CompareConstant(CLSET_FD_NCLOSE,9,4292,architecture)
#else
Msg( "Error: Constant not found: CLSET_FD_NCLOSE\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef CLGET_XID
	CompareConstant(CLGET_XID,10,4293,architecture)
#else
Msg( "Error: Constant not found: CLGET_XID\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef CLSET_XID
	CompareConstant(CLSET_XID,11,4294,architecture)
#else
Msg( "Error: Constant not found: CLSET_XID\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef CLGET_VERS
	CompareConstant(CLGET_VERS,12,4295,architecture)
#else
Msg( "Error: Constant not found: CLGET_VERS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef CLSET_VERS
	CompareConstant(CLSET_VERS,13,4296,architecture)
#else
Msg( "Error: Constant not found: CLSET_VERS\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef CLGET_PROG
	CompareConstant(CLGET_PROG,14,4297,architecture)
#else
Msg( "Error: Constant not found: CLGET_PROG\n");
cnt++;
#endif

#endif

#ifdef _LSB_DEFAULT_ARCH
#ifdef CLSET_PROG
	CompareConstant(CLSET_PROG,15,4298,architecture)
#else
Msg( "Error: Constant not found: CLSET_PROG\n");
cnt++;
#endif

#endif

#ifdef __i386__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9916,0);
Msg("Find size of clnt_stat (9916)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct clnt_ops,24, 9922, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9922,0);
Msg("Find size of clnt_ops (9922)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct CLIENT,12, 9921, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9921,0);
Msg("Find size of CLIENT (9921)\n");
#endif

#ifdef __i386__
CheckTypeSize(CLIENT,12, 10389, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,10389,0);
Msg("Find size of CLIENT (10389)\n");
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
