/*
 * Test of nss3/sslt.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/sslt.h"



#ifdef TET_TEST
void nss3_sslt_h()
{
#else
int nss3_sslt_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/sslt.h\n");
#endif

printf("Checking data structures in nss3/sslt.h\n");
#if 1
CheckTypeSize(SSL3Statistics,0, 1007873, 1, 4.0, NULL, 1007865, NULL)
#endif

#if 1
CheckTypeSize(SSLKEAType,0, 1007875, 1, 4.0, NULL, 1006198, NULL)
#endif

#if 1
CheckTypeSize(SSLSignType,0, 1007877, 1, 4.0, NULL, 1006867, NULL)
#endif

#if 1
CheckTypeSize(SSLAuthType,0, 1007879, 1, 4.0, NULL, 1006349, NULL)
#endif

#if 1
CheckTypeSize(SSLCipherAlgorithm,0, 1007880, 1, 4.0, NULL, 1006957, NULL)
#endif

#if 1
CheckTypeSize(SSLMACAlgorithm,0, 1007882, 1, 4.0, NULL, 1006674, NULL)
#endif

#if 1
CheckTypeSize(SSLChannelInfo,0, 1007884, 1, 4.0, NULL, 1007883, NULL)
#endif

#if 1
CheckTypeSize(SSLCipherSuiteInfo,0, 1007887, 1, 4.0, NULL, 1007885, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/sslt.h\n\n",pcnt,cnt);
return cnt;
#endif

}
