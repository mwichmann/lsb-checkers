/*
 * Test of rpc/xdr.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "rpc/xdr.h"



#ifdef TET_TEST
void rpc_xdr_h()
{
#else
int rpc_xdr_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in rpc/xdr.h\n");
#endif

#ifdef __i386__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9933,0);
Msg("Find size of xdr_op (9933)\n");
#endif

#ifdef __i386__
CheckTypeSize(struct xdr_ops,40, 9935, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9935,0);
Msg("Find size of xdr_ops (9935)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in rpc/xdr.h\n",cnt);
return cnt;
#endif

}
