/*
 * Test of nss3/secport.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/secport.h"



#ifdef TET_TEST
void nss3_secport_h()
{
#else
int nss3_secport_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/secport.h\n");
#endif

printf("Checking data structures in nss3/secport.h\n");
#if 1
CheckTypeSize(PORTCharConversionWSwapFunc,0, 1005901, 1, 4.0, NULL, 1000539, NULL)
#endif

#if 1
CheckTypeSize(PORTCharConversionFunc,0, 1005903, 1, 4.0, NULL, 1004165, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/secport.h\n\n",pcnt,cnt);
return cnt;
#endif

}
