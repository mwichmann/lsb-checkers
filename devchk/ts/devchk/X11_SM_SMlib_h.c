/*
 * Test of X11/SM/SMlib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
struct _SmcConn {};
struct _SmsConn {};

#include "X11/SM/SMlib.h"



#ifdef TET_TEST
void X11_SM_SMlib_h()
{
#else
int X11_SM_SMlib_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/SM/SMlib.h\n");
#endif

printf("Checking data structures in X11/SM/SMlib.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for SmsSaveYourselfP2RequestProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsSaveYourselfRequestProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsRegisterClientProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsCloseConnectionProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsSaveYourselfDoneProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsGetPropertiesProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsInteractRequestProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmcShutdownCancelledProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsSetPropertiesProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsInteractDoneProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmcSaveYourselfProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmcSaveCompleteProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmsDeletePropertiesProcMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for SmcDieProcMask */
#endif

#if 1
CheckTypeSize(SmPointer,8, 100247, 1, 1.2, NULL, 40, NULL)
#endif

#if 1
CheckTypeSize(SmPropValue,16, 100249, 1, 1.2, NULL, 100248, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(SmPropValue *,4, 100250, 10, 1.2, NULL, 100249, NULL)
#elif defined __i386__
CheckTypeSize(SmPropValue *,4, 100250, 2, 1.2, NULL, 100249, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmPropValue *,4, 100250, 6, 1.2, NULL, 100249, NULL)
#elif defined __x86_64__
CheckTypeSize(SmPropValue *,8, 100250, 11, 1.2, NULL, 100249, NULL)
#elif defined __s390x__
CheckTypeSize(SmPropValue *,8, 100250, 12, 1.2, NULL, 100249, NULL)
#elif defined __ia64__
CheckTypeSize(SmPropValue *,8, 100250, 3, 1.2, NULL, 100249, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmPropValue *,8, 100250, 9, 1.2, NULL, 100249, NULL)
#else
Msg("Find size of SmPropValue * (100250)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100249,NULL);\n",architecture,100250,0);
#endif

#if 1
CheckTypeSize(SmProp,32, 100252, 1, 1.2, NULL, 100251, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(SmProp *,4, 100253, 10, 1.2, NULL, 100252, NULL)
#elif defined __i386__
CheckTypeSize(SmProp *,4, 100253, 2, 1.2, NULL, 100252, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmProp *,4, 100253, 6, 1.2, NULL, 100252, NULL)
#elif defined __x86_64__
CheckTypeSize(SmProp *,8, 100253, 11, 1.2, NULL, 100252, NULL)
#elif defined __s390x__
CheckTypeSize(SmProp *,8, 100253, 12, 1.2, NULL, 100252, NULL)
#elif defined __ia64__
CheckTypeSize(SmProp *,8, 100253, 3, 1.2, NULL, 100252, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmProp *,8, 100253, 9, 1.2, NULL, 100252, NULL)
#else
Msg("Find size of SmProp * (100253)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100252,NULL);\n",architecture,100253,0);
#endif

#if 1
#endif

#if 1
CheckTypeSize(struct _SmcConn,0, 100255, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _SmcConn on All\n");
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _SmcConn *,4, 100256, 10, 1.2, NULL, 100255, NULL)
#elif defined __i386__
CheckTypeSize(struct _SmcConn *,4, 100256, 2, 1.2, NULL, 100255, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _SmcConn *,4, 100256, 6, 1.2, NULL, 100255, NULL)
#elif defined __x86_64__
CheckTypeSize(struct _SmcConn *,8, 100256, 11, 1.2, NULL, 100255, NULL)
#elif defined __s390x__
CheckTypeSize(struct _SmcConn *,8, 100256, 12, 1.2, NULL, 100255, NULL)
#elif defined __ia64__
CheckTypeSize(struct _SmcConn *,8, 100256, 3, 1.2, NULL, 100255, NULL)
#elif defined __powerpc64__
CheckTypeSize(struct _SmcConn *,8, 100256, 9, 1.2, NULL, 100255, NULL)
#else
Msg("Find size of _SmcConn * (100256)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100255,NULL);\n",architecture,100256,0);
#endif

#if 1
CheckTypeSize(SmcConn,8, 100257, 1, 1.2, NULL, 100256, NULL)
#endif

#if 1
CheckTypeSize(SmcSaveYourselfProc,8, 100259, 1, 1.2, NULL, 100258, NULL)
#endif

#if 1
CheckTypeSize(SmcDieProc,8, 100262, 1, 1.2, NULL, 100261, NULL)
#endif

#if 1
CheckTypeSize(SmcSaveCompleteProc,8, 100264, 1, 1.2, NULL, 100261, NULL)
#endif

#if 1
CheckTypeSize(SmcShutdownCancelledProc,8, 100266, 1, 1.2, NULL, 100261, NULL)
#endif

#if 1
CheckTypeSize(SmcCallbacks,64, 100269, 1, 1.2, NULL, 100268, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(SmcCallbacks *,4, 100270, 10, 1.2, NULL, 100269, NULL)
#elif defined __i386__
CheckTypeSize(SmcCallbacks *,4, 100270, 2, 1.2, NULL, 100269, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcCallbacks *,4, 100270, 6, 1.2, NULL, 100269, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcCallbacks *,8, 100270, 11, 1.2, NULL, 100269, NULL)
#elif defined __s390x__
CheckTypeSize(SmcCallbacks *,8, 100270, 12, 1.2, NULL, 100269, NULL)
#elif defined __ia64__
CheckTypeSize(SmcCallbacks *,8, 100270, 3, 1.2, NULL, 100269, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcCallbacks *,8, 100270, 9, 1.2, NULL, 100269, NULL)
#else
Msg("Find size of SmcCallbacks * (100270)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100269,NULL);\n",architecture,100270,0);
#endif

#if 1
CheckTypeSize(struct _SmsConn,0, 100271, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _SmsConn on All\n");
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _SmsConn *,4, 100272, 10, 1.2, NULL, 100271, NULL)
#elif defined __i386__
CheckTypeSize(struct _SmsConn *,4, 100272, 2, 1.2, NULL, 100271, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _SmsConn *,4, 100272, 6, 1.2, NULL, 100271, NULL)
#elif defined __x86_64__
CheckTypeSize(struct _SmsConn *,8, 100272, 11, 1.2, NULL, 100271, NULL)
#elif defined __s390x__
CheckTypeSize(struct _SmsConn *,8, 100272, 12, 1.2, NULL, 100271, NULL)
#elif defined __ia64__
CheckTypeSize(struct _SmsConn *,8, 100272, 3, 1.2, NULL, 100271, NULL)
#elif defined __powerpc64__
CheckTypeSize(struct _SmsConn *,8, 100272, 9, 1.2, NULL, 100271, NULL)
#else
Msg("Find size of _SmsConn * (100272)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100271,NULL);\n",architecture,100272,0);
#endif

#if 1
CheckTypeSize(SmsConn,8, 100273, 1, 1.2, NULL, 100272, NULL)
#endif

#if 1
CheckTypeSize(SmsErrorHandler,8, 100275, 1, 1.2, NULL, 100274, NULL)
#endif

#if 1
CheckTypeSize(SmcErrorHandler,8, 100277, 1, 1.2, NULL, 100276, NULL)
#endif

#if 1
CheckTypeSize(SmsRegisterClientProc,8, 100280, 1, 1.2, NULL, 100279, NULL)
#endif

#if 1
CheckTypeSize(SmsInteractRequestProc,8, 100283, 1, 1.2, NULL, 100282, NULL)
#endif

#if 1
CheckTypeSize(SmsInteractDoneProc,8, 100285, 1, 1.2, NULL, 100282, NULL)
#endif

#if 1
CheckTypeSize(SmsSaveYourselfRequestProc,8, 100288, 1, 1.2, NULL, 100287, NULL)
#endif

#if 1
CheckTypeSize(SmsSaveYourselfPhase2RequestProc,8, 100291, 1, 1.2, NULL, 100290, NULL)
#endif

#if 1
CheckTypeSize(SmsSaveYourselfDoneProc,8, 100293, 1, 1.2, NULL, 100282, NULL)
#endif

#if 1
CheckTypeSize(SmsCloseConnectionProc,8, 100296, 1, 1.2, NULL, 100295, NULL)
#endif

#if 1
CheckTypeSize(SmsSetPropertiesProc,8, 100299, 1, 1.2, NULL, 100298, NULL)
#endif

#if 1
CheckTypeSize(SmsDeletePropertiesProc,8, 100301, 1, 1.2, NULL, 100295, NULL)
#endif

#if 1
CheckTypeSize(SmsGetPropertiesProc,8, 100303, 1, 1.2, NULL, 100290, NULL)
#endif

#if 1
CheckTypeSize(SmsCallbacks,160, 100306, 1, 1.2, NULL, 100305, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(SmsCallbacks *,4, 100307, 10, 1.2, NULL, 100306, NULL)
#elif defined __i386__
CheckTypeSize(SmsCallbacks *,4, 100307, 2, 1.2, NULL, 100306, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsCallbacks *,4, 100307, 6, 1.2, NULL, 100306, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsCallbacks *,8, 100307, 11, 1.2, NULL, 100306, NULL)
#elif defined __s390x__
CheckTypeSize(SmsCallbacks *,8, 100307, 12, 1.2, NULL, 100306, NULL)
#elif defined __ia64__
CheckTypeSize(SmsCallbacks *,8, 100307, 3, 1.2, NULL, 100306, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsCallbacks *,8, 100307, 9, 1.2, NULL, 100306, NULL)
#else
Msg("Find size of SmsCallbacks * (100307)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100306,NULL);\n",architecture,100307,0);
#endif

#if 1
CheckTypeSize(SmsNewClientProc,8, 100309, 1, 1.2, NULL, 100308, NULL)
#endif

#if 1
CheckTypeSize(SmcPropReplyProc,8, 100311, 1, 1.2, NULL, 100310, NULL)
#endif

#if 1
CheckTypeSize(SmcInteractProc,8, 100312, 1, 1.2, NULL, 100261, NULL)
#endif

#if 1
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 100313, 1, 1.2, NULL, 100261, NULL)
#endif

#if 1
CheckEnum("SmcClosedNow",SmcClosedNow,0,78028)
CheckEnum("SmcClosedASAP",SmcClosedASAP,(0) + 1,78029)
CheckEnum("SmcConnectionInUse",SmcConnectionInUse,((0) + 1) + 1,78030)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/SM/SMlib.h\n\n",pcnt,cnt);
return cnt;
#endif

}
