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

#ifdef __i386__
CheckTypeSize(struct clnt_ops,24, 9922, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9922,0);
Msg("Find size of clnt_ops (9922)\n");
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
