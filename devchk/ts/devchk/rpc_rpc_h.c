/*
 * Test of rpc/rpc.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "rpc/rpc.h"



#ifdef TET_TEST
void rpc_rpc_h()
{
#else
int rpc_rpc_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in rpc/rpc.h\n");
#endif

printf("Checking data structures in rpc/rpc.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on rpc/types.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on netinet/in.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on rpc/xdr.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on rpc/auth.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on rpc/clnt.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on rpc/rpc_msg.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on rpc/auth_unix.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on rpc/auth_des.h */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for rpc/rpc.h depends on rpc/svc.h */
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in rpc/rpc.h\n\n",pcnt,cnt);
return cnt;
#endif

}
