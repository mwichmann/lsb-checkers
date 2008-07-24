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
#if 1
CheckTypeSize(SEC_HTTP_SERVER_SESSION,0, 1005801, 1, 4.0, NULL, 40, NULL)
#endif

#if 1
CheckTypeSize(SEC_HTTP_REQUEST_SESSION,0, 1005803, 1, 4.0, NULL, 40, NULL)
#endif

#if 1
CheckTypeSize(SEC_HttpServer_CreateSessionFcn,0, 1005825, 1, 4.0, NULL, 1005136, NULL)
#endif

#if 1
CheckTypeSize(SEC_HttpServer_KeepAliveSessionFcn,0, 1005847, 1, 4.0, NULL, 1004613, NULL)
#endif

#if 1
CheckTypeSize(SEC_HttpServer_FreeSessionFcn,0, 1005858, 1, 4.0, NULL, 1003164, NULL)
#endif

#if 1
CheckTypeSize(SEC_HttpRequest_CreateFcn,0, 1005872, 1, 4.0, NULL, 1004137, NULL)
#endif

#if 1
CheckTypeSize(SEC_HttpRequest_SetPostDataFcn,0, 1005888, 1, 4.0, NULL, 1000316, NULL)
#endif

#if 1
CheckTypeSize(SEC_HttpRequest_AddHeaderFcn,0, 1005896, 1, 4.0, NULL, 1002418, NULL)
#endif

#if 1
CheckTypeSize(SEC_HttpRequest_TrySendAndReceiveFcn,0, 1005917, 1, 4.0, NULL, 1001113, NULL)
#endif

#if 1
CheckTypeSize(SEC_HttpRequest_CancelFcn,0, 1005926, 1, 4.0, NULL, 1004466, NULL)
#endif

#if 1
CheckTypeSize(SEC_HttpRequest_FreeFcn,0, 1005930, 1, 4.0, NULL, 1004466, NULL)
#endif

#if 1
CheckTypeSize(SEC_HttpClientFcnV1,0, 1005933, 1, 4.0, NULL, 1005931, NULL)
#endif

#if 1
CheckTypeSize(SEC_HttpClientFcn,0, 1005935, 1, 4.0, NULL, 1005934, NULL)
#endif

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
