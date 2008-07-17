/*
 * Test of nss3/pkcs7t.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/pkcs7t.h"



#ifdef TET_TEST
void nss3_pkcs7t_h()
{
#else
int nss3_pkcs7t_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/pkcs7t.h\n");
#endif

printf("Checking data structures in nss3/pkcs7t.h\n");
#if 1
CheckTypeSize(SEC_PKCS7RecipientInfo,0, 1005824, 1, 4.0, NULL, 1005900, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/pkcs7t.h\n\n",pcnt,cnt);
return cnt;
#endif

}
