/*
 * Test of nss3/secasn1t.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#ifndef LSBCC_MODE
#include "nspr4/prtypes.h"
#endif
#include "nss3/secasn1t.h"



#ifdef TET_TEST
void nss3_secasn1t_h()
{
#else
int nss3_secasn1t_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/secasn1t.h\n");
#endif

printf("Checking data structures in nss3/secasn1t.h\n");
#if 1
CheckTypeSize(SEC_ASN1Template,0, 1005811, 1, 4.0, NULL, 1005748, NULL)
#endif

#if 1
CheckTypeSize(SEC_ASN1EncodingPart,0, 1005928, 1, 4.0, NULL, 1001979, NULL)
#endif

#if 1
CheckTypeSize(SEC_ASN1NotifyProc,0, 1005929, 1, 4.0, NULL, 1001110, NULL)
#endif

#if 1
CheckTypeSize(SEC_ASN1WriteProc,0, 1005937, 1, 4.0, NULL, 1001268, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/secasn1t.h\n\n",pcnt,cnt);
return cnt;
#endif

}
