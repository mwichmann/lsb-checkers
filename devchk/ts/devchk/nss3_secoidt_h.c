/*
 * Test of nss3/secoidt.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/secoidt.h"



#ifdef TET_TEST
void nss3_secoidt_h()
{
#else
int nss3_secoidt_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/secoidt.h\n");
#endif

printf("Checking data structures in nss3/secoidt.h\n");
#if 1
CheckTypeSize(SECOidData,0, 1005738, 1, 4.0, NULL, 1005982, NULL)
#endif

#if 1
CheckTypeSize(SECAlgorithmID,0, 1005740, 1, 4.0, NULL, 1005744, NULL)
#endif

#if 1
CheckTypeSize(SECOidTag,0, 1005977, 1, 4.0, NULL, 1003426, NULL)
#endif

#if 1
CheckTypeSize(SECSupportExtenTag,0, 1005981, 1, 4.0, NULL, 1002317, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/secoidt.h\n\n",pcnt,cnt);
return cnt;
#endif

}
