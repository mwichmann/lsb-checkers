/*
 * Test of nss3/nssbaset.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "nss3/nssbaset.h"



#ifdef TET_TEST
void nss3_nssbaset_h()
{
#else
int nss3_nssbaset_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/nssbaset.h\n");
#endif

printf("Checking data structures in nss3/nssbaset.h\n");
#if 1
CheckTypeSize(NSSItem,0, 1005841, 1, 4.0, NULL, 1005838, NULL)
#endif

#if 1
CheckTypeSize(NSSBER,0, 1005846, 1, 4.0, NULL, 1005841, NULL)
#endif

#if 1
CheckTypeSize(NSSDER,0, 1005856, 1, 4.0, NULL, 1005846, NULL)
#endif

#if 1
CheckTypeSize(NSSUTF8,0, 1005870, 1, 4.0, NULL, 2, NULL)
#endif

#if 1
CheckTypeSize(NSSASCII7,0, 1005876, 1, 4.0, NULL, 2, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/nssbaset.h\n\n",pcnt,cnt);
return cnt;
#endif

}
