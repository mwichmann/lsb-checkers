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

#if _LSB_DEFAULT_ARCH
/* No test for SMlib.h should include SM.h */
#endif

#if defined __s390x__
CheckTypeSize(SmPointer,8, 100247, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(SmPointer,8, 100247, 11, 2.0, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmPointer,4, 100247, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmPointer,8, 100247, 9, 2.0, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmPointer,4, 100247, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(SmPointer,8, 100247, 3, 1.3, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(SmPointer,4, 100247, 2, 1.2, NULL, 40, NULL)
#else
Msg("Find size of SmPointer (100247)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,100247,0);
#endif

#if defined __s390x__
CheckTypeSize(SmPropValue,16, 100249, 12, 1.3, NULL, 100248, NULL)
#elif defined __x86_64__
CheckTypeSize(SmPropValue,16, 100249, 11, 2.0, NULL, 100248, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmPropValue,8, 100249, 10, 1.3, NULL, 100248, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmPropValue,16, 100249, 9, 2.0, NULL, 100248, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmPropValue,8, 100249, 6, 1.2, NULL, 100248, NULL)
#elif defined __ia64__
CheckTypeSize(SmPropValue,16, 100249, 3, 1.3, NULL, 100248, NULL)
#elif defined __i386__
CheckTypeSize(SmPropValue,8, 100249, 2, 1.2, NULL, 100248, NULL)
#else
Msg("Find size of SmPropValue (100249)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100248,NULL);\n",architecture,100249,0);
#endif

#if defined __s390x__
CheckTypeSize(SmProp,32, 100252, 12, 1.3, NULL, 100251, NULL)
#elif defined __x86_64__
CheckTypeSize(SmProp,32, 100252, 11, 2.0, NULL, 100251, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmProp,16, 100252, 10, 1.3, NULL, 100251, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmProp,32, 100252, 9, 2.0, NULL, 100251, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmProp,16, 100252, 6, 1.2, NULL, 100251, NULL)
#elif defined __ia64__
CheckTypeSize(SmProp,32, 100252, 3, 1.3, NULL, 100251, NULL)
#elif defined __i386__
CheckTypeSize(SmProp,16, 100252, 2, 1.2, NULL, 100251, NULL)
#else
Msg("Find size of SmProp (100252)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100251,NULL);\n",architecture,100252,0);
#endif

#if 1
CheckTypeSize(struct _SmcConn,0, 100255, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _SmcConn on All\n");
#endif

#if defined __s390x__
CheckTypeSize(SmcConn,8, 100257, 12, 1.3, NULL, 100256, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcConn,8, 100257, 11, 2.0, NULL, 100256, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcConn,4, 100257, 10, 1.3, NULL, 100256, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcConn,8, 100257, 9, 2.0, NULL, 100256, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcConn,4, 100257, 6, 1.2, NULL, 100256, NULL)
#elif defined __ia64__
CheckTypeSize(SmcConn,8, 100257, 3, 1.3, NULL, 100256, NULL)
#elif defined __i386__
CheckTypeSize(SmcConn,4, 100257, 2, 1.2, NULL, 100256, NULL)
#else
Msg("Find size of SmcConn (100257)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100256,NULL);\n",architecture,100257,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcSaveYourselfProc,8, 100259, 12, 1.3, NULL, 100258, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcSaveYourselfProc,8, 100259, 11, 2.0, NULL, 100258, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcSaveYourselfProc,4, 100259, 10, 1.3, NULL, 100258, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcSaveYourselfProc,8, 100259, 9, 2.0, NULL, 100258, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcSaveYourselfProc,4, 100259, 6, 1.2, NULL, 100258, NULL)
#elif defined __ia64__
CheckTypeSize(SmcSaveYourselfProc,8, 100259, 3, 1.3, NULL, 100258, NULL)
#elif defined __i386__
CheckTypeSize(SmcSaveYourselfProc,4, 100259, 2, 1.2, NULL, 100258, NULL)
#else
Msg("Find size of SmcSaveYourselfProc (100259)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100258,NULL);\n",architecture,100259,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcDieProc,8, 100262, 12, 1.3, NULL, 100261, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcDieProc,8, 100262, 11, 2.0, NULL, 100261, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcDieProc,4, 100262, 10, 1.3, NULL, 100261, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcDieProc,8, 100262, 9, 2.0, NULL, 100261, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcDieProc,4, 100262, 6, 1.2, NULL, 100261, NULL)
#elif defined __ia64__
CheckTypeSize(SmcDieProc,8, 100262, 3, 1.3, NULL, 100261, NULL)
#elif defined __i386__
CheckTypeSize(SmcDieProc,4, 100262, 2, 1.2, NULL, 100261, NULL)
#else
Msg("Find size of SmcDieProc (100262)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100261,NULL);\n",architecture,100262,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcSaveCompleteProc,8, 100264, 12, 1.3, NULL, 100261, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcSaveCompleteProc,8, 100264, 11, 2.0, NULL, 100261, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcSaveCompleteProc,4, 100264, 10, 1.3, NULL, 100261, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcSaveCompleteProc,8, 100264, 9, 2.0, NULL, 100261, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcSaveCompleteProc,4, 100264, 6, 1.2, NULL, 100261, NULL)
#elif defined __ia64__
CheckTypeSize(SmcSaveCompleteProc,8, 100264, 3, 1.3, NULL, 100261, NULL)
#elif defined __i386__
CheckTypeSize(SmcSaveCompleteProc,4, 100264, 2, 1.2, NULL, 100261, NULL)
#else
Msg("Find size of SmcSaveCompleteProc (100264)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100261,NULL);\n",architecture,100264,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcShutdownCancelledProc,8, 100266, 12, 1.3, NULL, 100261, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcShutdownCancelledProc,8, 100266, 11, 2.0, NULL, 100261, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcShutdownCancelledProc,4, 100266, 10, 1.3, NULL, 100261, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcShutdownCancelledProc,8, 100266, 9, 2.0, NULL, 100261, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcShutdownCancelledProc,4, 100266, 6, 1.2, NULL, 100261, NULL)
#elif defined __ia64__
CheckTypeSize(SmcShutdownCancelledProc,8, 100266, 3, 1.3, NULL, 100261, NULL)
#elif defined __i386__
CheckTypeSize(SmcShutdownCancelledProc,4, 100266, 2, 1.2, NULL, 100261, NULL)
#else
Msg("Find size of SmcShutdownCancelledProc (100266)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100261,NULL);\n",architecture,100266,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcCallbacks,64, 100269, 12, 1.3, NULL, 100268, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcCallbacks,64, 100269, 11, 2.0, NULL, 100268, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcCallbacks,32, 100269, 10, 1.3, NULL, 100268, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcCallbacks,64, 100269, 9, 2.0, NULL, 100268, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcCallbacks,32, 100269, 6, 1.2, NULL, 100268, NULL)
#elif defined __ia64__
CheckTypeSize(SmcCallbacks,64, 100269, 3, 1.3, NULL, 100268, NULL)
#elif defined __i386__
CheckTypeSize(SmcCallbacks,32, 100269, 2, 1.2, NULL, 100268, NULL)
#else
Msg("Find size of SmcCallbacks (100269)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100268,NULL);\n",architecture,100269,0);
#endif

#if 1
CheckTypeSize(struct _SmsConn,0, 100271, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _SmsConn on All\n");
#endif

#if defined __s390x__
CheckTypeSize(SmsConn,8, 100273, 12, 1.3, NULL, 100272, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsConn,8, 100273, 11, 2.0, NULL, 100272, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsConn,4, 100273, 10, 1.3, NULL, 100272, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsConn,8, 100273, 9, 2.0, NULL, 100272, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsConn,4, 100273, 6, 1.2, NULL, 100272, NULL)
#elif defined __ia64__
CheckTypeSize(SmsConn,8, 100273, 3, 1.3, NULL, 100272, NULL)
#elif defined __i386__
CheckTypeSize(SmsConn,4, 100273, 2, 1.2, NULL, 100272, NULL)
#else
Msg("Find size of SmsConn (100273)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100272,NULL);\n",architecture,100273,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsErrorHandler,8, 100275, 12, 1.3, NULL, 100274, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsErrorHandler,8, 100275, 11, 2.0, NULL, 100274, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsErrorHandler,4, 100275, 10, 1.3, NULL, 100274, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsErrorHandler,8, 100275, 9, 2.0, NULL, 100274, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsErrorHandler,4, 100275, 6, 1.2, NULL, 100274, NULL)
#elif defined __ia64__
CheckTypeSize(SmsErrorHandler,8, 100275, 3, 1.3, NULL, 100274, NULL)
#elif defined __i386__
CheckTypeSize(SmsErrorHandler,4, 100275, 2, 1.2, NULL, 100274, NULL)
#else
Msg("Find size of SmsErrorHandler (100275)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100274,NULL);\n",architecture,100275,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcErrorHandler,8, 100277, 12, 1.3, NULL, 100276, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcErrorHandler,8, 100277, 11, 2.0, NULL, 100276, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcErrorHandler,4, 100277, 10, 1.3, NULL, 100276, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcErrorHandler,8, 100277, 9, 2.0, NULL, 100276, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcErrorHandler,4, 100277, 6, 1.2, NULL, 100276, NULL)
#elif defined __ia64__
CheckTypeSize(SmcErrorHandler,8, 100277, 3, 1.3, NULL, 100276, NULL)
#elif defined __i386__
CheckTypeSize(SmcErrorHandler,4, 100277, 2, 1.2, NULL, 100276, NULL)
#else
Msg("Find size of SmcErrorHandler (100277)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100276,NULL);\n",architecture,100277,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsRegisterClientProc,8, 100280, 12, 1.3, NULL, 100279, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsRegisterClientProc,8, 100280, 11, 2.0, NULL, 100279, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsRegisterClientProc,4, 100280, 10, 1.3, NULL, 100279, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsRegisterClientProc,8, 100280, 9, 2.0, NULL, 100279, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsRegisterClientProc,4, 100280, 6, 1.2, NULL, 100279, NULL)
#elif defined __ia64__
CheckTypeSize(SmsRegisterClientProc,8, 100280, 3, 1.3, NULL, 100279, NULL)
#elif defined __i386__
CheckTypeSize(SmsRegisterClientProc,4, 100280, 2, 1.2, NULL, 100279, NULL)
#else
Msg("Find size of SmsRegisterClientProc (100280)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100279,NULL);\n",architecture,100280,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsInteractRequestProc,8, 100283, 12, 1.3, NULL, 100282, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsInteractRequestProc,8, 100283, 11, 2.0, NULL, 100282, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsInteractRequestProc,4, 100283, 10, 1.3, NULL, 100282, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsInteractRequestProc,8, 100283, 9, 2.0, NULL, 100282, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsInteractRequestProc,4, 100283, 6, 1.2, NULL, 100282, NULL)
#elif defined __ia64__
CheckTypeSize(SmsInteractRequestProc,8, 100283, 3, 1.3, NULL, 100282, NULL)
#elif defined __i386__
CheckTypeSize(SmsInteractRequestProc,4, 100283, 2, 1.2, NULL, 100282, NULL)
#else
Msg("Find size of SmsInteractRequestProc (100283)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100282,NULL);\n",architecture,100283,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsInteractDoneProc,8, 100285, 12, 1.3, NULL, 100282, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsInteractDoneProc,8, 100285, 11, 2.0, NULL, 100282, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsInteractDoneProc,4, 100285, 10, 1.3, NULL, 100282, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsInteractDoneProc,8, 100285, 9, 2.0, NULL, 100282, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsInteractDoneProc,4, 100285, 6, 1.2, NULL, 100282, NULL)
#elif defined __ia64__
CheckTypeSize(SmsInteractDoneProc,8, 100285, 3, 1.3, NULL, 100282, NULL)
#elif defined __i386__
CheckTypeSize(SmsInteractDoneProc,4, 100285, 2, 1.2, NULL, 100282, NULL)
#else
Msg("Find size of SmsInteractDoneProc (100285)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100282,NULL);\n",architecture,100285,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsSaveYourselfRequestProc,8, 100288, 12, 1.3, NULL, 100287, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsSaveYourselfRequestProc,8, 100288, 11, 2.0, NULL, 100287, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsSaveYourselfRequestProc,4, 100288, 10, 1.3, NULL, 100287, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsSaveYourselfRequestProc,8, 100288, 9, 2.0, NULL, 100287, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsSaveYourselfRequestProc,4, 100288, 6, 1.2, NULL, 100287, NULL)
#elif defined __ia64__
CheckTypeSize(SmsSaveYourselfRequestProc,8, 100288, 3, 1.3, NULL, 100287, NULL)
#elif defined __i386__
CheckTypeSize(SmsSaveYourselfRequestProc,4, 100288, 2, 1.2, NULL, 100287, NULL)
#else
Msg("Find size of SmsSaveYourselfRequestProc (100288)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100287,NULL);\n",architecture,100288,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsSaveYourselfPhase2RequestProc,8, 100291, 12, 1.3, NULL, 100290, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsSaveYourselfPhase2RequestProc,8, 100291, 11, 2.0, NULL, 100290, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsSaveYourselfPhase2RequestProc,4, 100291, 10, 1.3, NULL, 100290, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsSaveYourselfPhase2RequestProc,8, 100291, 9, 2.0, NULL, 100290, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsSaveYourselfPhase2RequestProc,4, 100291, 6, 1.2, NULL, 100290, NULL)
#elif defined __ia64__
CheckTypeSize(SmsSaveYourselfPhase2RequestProc,8, 100291, 3, 1.3, NULL, 100290, NULL)
#elif defined __i386__
CheckTypeSize(SmsSaveYourselfPhase2RequestProc,4, 100291, 2, 1.2, NULL, 100290, NULL)
#else
Msg("Find size of SmsSaveYourselfPhase2RequestProc (100291)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100290,NULL);\n",architecture,100291,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsSaveYourselfDoneProc,8, 100293, 12, 1.3, NULL, 100282, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsSaveYourselfDoneProc,8, 100293, 11, 2.0, NULL, 100282, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsSaveYourselfDoneProc,4, 100293, 10, 1.3, NULL, 100282, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsSaveYourselfDoneProc,8, 100293, 9, 2.0, NULL, 100282, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsSaveYourselfDoneProc,4, 100293, 6, 1.2, NULL, 100282, NULL)
#elif defined __ia64__
CheckTypeSize(SmsSaveYourselfDoneProc,8, 100293, 3, 1.3, NULL, 100282, NULL)
#elif defined __i386__
CheckTypeSize(SmsSaveYourselfDoneProc,4, 100293, 2, 1.2, NULL, 100282, NULL)
#else
Msg("Find size of SmsSaveYourselfDoneProc (100293)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100282,NULL);\n",architecture,100293,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsCloseConnectionProc,8, 100296, 12, 1.3, NULL, 100295, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsCloseConnectionProc,8, 100296, 11, 2.0, NULL, 100295, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsCloseConnectionProc,4, 100296, 10, 1.3, NULL, 100295, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsCloseConnectionProc,8, 100296, 9, 2.0, NULL, 100295, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsCloseConnectionProc,4, 100296, 6, 1.2, NULL, 100295, NULL)
#elif defined __ia64__
CheckTypeSize(SmsCloseConnectionProc,8, 100296, 3, 1.3, NULL, 100295, NULL)
#elif defined __i386__
CheckTypeSize(SmsCloseConnectionProc,4, 100296, 2, 1.2, NULL, 100295, NULL)
#else
Msg("Find size of SmsCloseConnectionProc (100296)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100295,NULL);\n",architecture,100296,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsSetPropertiesProc,8, 100299, 12, 1.3, NULL, 100298, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsSetPropertiesProc,8, 100299, 11, 2.0, NULL, 100298, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsSetPropertiesProc,4, 100299, 10, 1.3, NULL, 100298, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsSetPropertiesProc,8, 100299, 9, 2.0, NULL, 100298, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsSetPropertiesProc,4, 100299, 6, 1.2, NULL, 100298, NULL)
#elif defined __ia64__
CheckTypeSize(SmsSetPropertiesProc,8, 100299, 3, 1.3, NULL, 100298, NULL)
#elif defined __i386__
CheckTypeSize(SmsSetPropertiesProc,4, 100299, 2, 1.2, NULL, 100298, NULL)
#else
Msg("Find size of SmsSetPropertiesProc (100299)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100298,NULL);\n",architecture,100299,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsDeletePropertiesProc,8, 100301, 12, 1.3, NULL, 100295, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsDeletePropertiesProc,8, 100301, 11, 2.0, NULL, 100295, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsDeletePropertiesProc,4, 100301, 10, 1.3, NULL, 100295, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsDeletePropertiesProc,8, 100301, 9, 2.0, NULL, 100295, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsDeletePropertiesProc,4, 100301, 6, 1.2, NULL, 100295, NULL)
#elif defined __ia64__
CheckTypeSize(SmsDeletePropertiesProc,8, 100301, 3, 1.3, NULL, 100295, NULL)
#elif defined __i386__
CheckTypeSize(SmsDeletePropertiesProc,4, 100301, 2, 1.2, NULL, 100295, NULL)
#else
Msg("Find size of SmsDeletePropertiesProc (100301)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100295,NULL);\n",architecture,100301,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsGetPropertiesProc,8, 100303, 12, 1.3, NULL, 100290, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsGetPropertiesProc,8, 100303, 11, 2.0, NULL, 100290, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsGetPropertiesProc,4, 100303, 10, 1.3, NULL, 100290, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsGetPropertiesProc,8, 100303, 9, 2.0, NULL, 100290, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsGetPropertiesProc,4, 100303, 6, 1.2, NULL, 100290, NULL)
#elif defined __ia64__
CheckTypeSize(SmsGetPropertiesProc,8, 100303, 3, 1.3, NULL, 100290, NULL)
#elif defined __i386__
CheckTypeSize(SmsGetPropertiesProc,4, 100303, 2, 1.2, NULL, 100290, NULL)
#else
Msg("Find size of SmsGetPropertiesProc (100303)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100290,NULL);\n",architecture,100303,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsCallbacks,160, 100306, 12, 1.3, NULL, 100305, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsCallbacks,160, 100306, 11, 2.0, NULL, 100305, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsCallbacks,80, 100306, 10, 1.3, NULL, 100305, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsCallbacks,160, 100306, 9, 2.0, NULL, 100305, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsCallbacks,80, 100306, 6, 1.2, NULL, 100305, NULL)
#elif defined __ia64__
CheckTypeSize(SmsCallbacks,160, 100306, 3, 1.3, NULL, 100305, NULL)
#elif defined __i386__
CheckTypeSize(SmsCallbacks,80, 100306, 2, 1.2, NULL, 100305, NULL)
#else
Msg("Find size of SmsCallbacks (100306)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100305,NULL);\n",architecture,100306,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsNewClientProc,8, 100309, 12, 1.3, NULL, 100308, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsNewClientProc,8, 100309, 11, 2.0, NULL, 100308, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsNewClientProc,4, 100309, 10, 1.3, NULL, 100308, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsNewClientProc,8, 100309, 9, 2.0, NULL, 100308, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsNewClientProc,4, 100309, 6, 1.2, NULL, 100308, NULL)
#elif defined __ia64__
CheckTypeSize(SmsNewClientProc,8, 100309, 3, 1.3, NULL, 100308, NULL)
#elif defined __i386__
CheckTypeSize(SmsNewClientProc,4, 100309, 2, 1.2, NULL, 100308, NULL)
#else
Msg("Find size of SmsNewClientProc (100309)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100308,NULL);\n",architecture,100309,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcPropReplyProc,8, 100311, 12, 1.3, NULL, 100310, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcPropReplyProc,8, 100311, 11, 2.0, NULL, 100310, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcPropReplyProc,4, 100311, 10, 1.3, NULL, 100310, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcPropReplyProc,8, 100311, 9, 2.0, NULL, 100310, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcPropReplyProc,4, 100311, 6, 1.2, NULL, 100310, NULL)
#elif defined __ia64__
CheckTypeSize(SmcPropReplyProc,8, 100311, 3, 1.3, NULL, 100310, NULL)
#elif defined __i386__
CheckTypeSize(SmcPropReplyProc,4, 100311, 2, 1.2, NULL, 100310, NULL)
#else
Msg("Find size of SmcPropReplyProc (100311)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100310,NULL);\n",architecture,100311,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcInteractProc,8, 100312, 12, 1.3, NULL, 100261, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcInteractProc,8, 100312, 11, 2.0, NULL, 100261, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcInteractProc,4, 100312, 10, 1.3, NULL, 100261, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcInteractProc,8, 100312, 9, 2.0, NULL, 100261, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcInteractProc,4, 100312, 6, 1.2, NULL, 100261, NULL)
#elif defined __ia64__
CheckTypeSize(SmcInteractProc,8, 100312, 3, 1.3, NULL, 100261, NULL)
#elif defined __i386__
CheckTypeSize(SmcInteractProc,4, 100312, 2, 1.2, NULL, 100261, NULL)
#else
Msg("Find size of SmcInteractProc (100312)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100261,NULL);\n",architecture,100312,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 100313, 12, 1.3, NULL, 100261, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 100313, 11, 2.0, NULL, 100261, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcSaveYourselfPhase2Proc,4, 100313, 10, 1.3, NULL, 100261, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 100313, 9, 2.0, NULL, 100261, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,4, 100313, 6, 1.2, NULL, 100261, NULL)
#elif defined __ia64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 100313, 3, 1.3, NULL, 100261, NULL)
#elif defined __i386__
CheckTypeSize(SmcSaveYourselfPhase2Proc,4, 100313, 2, 1.2, NULL, 100261, NULL)
#else
Msg("Find size of SmcSaveYourselfPhase2Proc (100313)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100261,NULL);\n",architecture,100313,0);
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
