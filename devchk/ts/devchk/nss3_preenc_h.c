/*
 * Test of nss3/preenc.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/preenc.h"



#ifdef TET_TEST
void nss3_preenc_h()
{
#else
int nss3_preenc_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/preenc.h\n");
#endif

printf("Checking data structures in nss3/preenc.h\n");
#if 1
CheckTypeSize(PERSAKeyHeader,0, 1007866, 1, 4.0, NULL, 1007876, NULL)
#endif

#if 1
CheckTypeSize(PEFortezzaHeader,0, 1007867, 1, 4.0, NULL, 1007871, NULL)
#endif

#if 1
CheckTypeSize(PEFortezzaGeneratedHeader,0, 1007868, 1, 4.0, NULL, 1007872, NULL)
#endif

#if 1
CheckTypeSize(PEFixedKeyHeader,0, 1007869, 1, 4.0, NULL, 1007874, NULL)
#endif

#if 1
CheckTypeSize(PEHeader,0, 1007870, 1, 4.0, NULL, 1007878, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/preenc.h\n\n",pcnt,cnt);
return cnt;
#endif

}
