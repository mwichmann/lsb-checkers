/*
 * Test of nss3/sslerr.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/sslerr.h"



#ifdef TET_TEST
void nss3_sslerr_h()
{
#else
int nss3_sslerr_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/sslerr.h\n");
#endif

printf("Checking data structures in nss3/sslerr.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef SSL_ERROR_BASE
	CompareConstant(SSL_ERROR_BASE,(-0x3000),16189,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_ERROR_BASE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SSL_ERROR_LIMIT
	CompareConstant(SSL_ERROR_LIMIT,(SSL_ERROR_BASE + 1000),16190,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: SSL_ERROR_LIMIT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for IS_SSL_ERROR(code) */
#endif

#if 1
CheckTypeSize(SSLErrorCodes,0, 1008216, 1, 4.0, NULL, 1008215, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/sslerr.h\n\n",pcnt,cnt);
return cnt;
#endif

}
