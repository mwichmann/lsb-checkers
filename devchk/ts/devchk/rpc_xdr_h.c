/*
 * Test of rpc/xdr.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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
CheckTypeSize(xdrproc_t,4, 9948, 2)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,9948,0);
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
