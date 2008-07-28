/*
 * Test of nss3/ocspt.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#ifndef LSBCC_MODE
#include "nss3/pkcs11t.h"
#include "nss3/seccomon.h"
#include "nspr4/prinrval.h"
#include "nspr4/prio.h"
#include "nspr4/prtypes.h"
#endif
#include "nss3/ocspt.h"



#ifdef TET_TEST
void nss3_ocspt_h()
{
#else
int nss3_ocspt_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in nss3/ocspt.h\n");
#endif

printf("Checking data structures in nss3/ocspt.h\n");
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in nss3/ocspt.h\n\n",pcnt,cnt);
return cnt;
#endif

}
