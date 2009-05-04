/*
 * Test of X11/SM/SMlib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

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
CheckTypeSize(SmPointer,8, 31792, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(SmPointer,8, 31792, 11, 2.0, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmPointer,4, 31792, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmPointer,8, 31792, 9, 2.0, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmPointer,4, 31792, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(SmPointer,8, 31792, 3, 1.3, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(SmPointer,4, 31792, 2, 1.2, NULL, 40, NULL)
#else
Msg("Find size of SmPointer (31792)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,31792,0);
#endif

#if defined __s390x__
CheckTypeSize(SmPropValue,16, 31794, 12, 1.3, NULL, 31793, NULL)
#elif defined __x86_64__
CheckTypeSize(SmPropValue,16, 31794, 11, 2.0, NULL, 31793, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmPropValue,8, 31794, 10, 1.3, NULL, 31793, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmPropValue,16, 31794, 9, 2.0, NULL, 31793, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmPropValue,8, 31794, 6, 1.2, NULL, 31793, NULL)
#elif defined __ia64__
CheckTypeSize(SmPropValue,16, 31794, 3, 1.3, NULL, 31793, NULL)
#elif defined __i386__
CheckTypeSize(SmPropValue,8, 31794, 2, 1.2, NULL, 31793, NULL)
#else
Msg("Find size of SmPropValue (31794)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31793,NULL);\n",architecture,31794,0);
#endif

#if defined __s390x__
CheckTypeSize(SmProp,32, 31797, 12, 1.3, NULL, 31796, NULL)
#elif defined __x86_64__
CheckTypeSize(SmProp,32, 31797, 11, 2.0, NULL, 31796, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmProp,16, 31797, 10, 1.3, NULL, 31796, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmProp,32, 31797, 9, 2.0, NULL, 31796, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmProp,16, 31797, 6, 1.2, NULL, 31796, NULL)
#elif defined __ia64__
CheckTypeSize(SmProp,32, 31797, 3, 1.3, NULL, 31796, NULL)
#elif defined __i386__
CheckTypeSize(SmProp,16, 31797, 2, 1.2, NULL, 31796, NULL)
#else
Msg("Find size of SmProp (31797)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31796,NULL);\n",architecture,31797,0);
#endif

#if 1
CheckTypeSize(struct _SmcConn,0, 31800, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _SmcConn on All\n");
#endif

#if defined __s390x__
CheckTypeSize(SmcConn,8, 31802, 12, 1.3, NULL, 31801, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcConn,8, 31802, 11, 2.0, NULL, 31801, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcConn,4, 31802, 10, 1.3, NULL, 31801, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcConn,8, 31802, 9, 2.0, NULL, 31801, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcConn,4, 31802, 6, 1.2, NULL, 31801, NULL)
#elif defined __ia64__
CheckTypeSize(SmcConn,8, 31802, 3, 1.3, NULL, 31801, NULL)
#elif defined __i386__
CheckTypeSize(SmcConn,4, 31802, 2, 1.2, NULL, 31801, NULL)
#else
Msg("Find size of SmcConn (31802)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31801,NULL);\n",architecture,31802,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcSaveYourselfProc,8, 31804, 12, 1.3, NULL, 31803, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcSaveYourselfProc,8, 31804, 11, 2.0, NULL, 31803, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcSaveYourselfProc,4, 31804, 10, 1.3, NULL, 31803, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcSaveYourselfProc,8, 31804, 9, 2.0, NULL, 31803, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcSaveYourselfProc,4, 31804, 6, 1.2, NULL, 31803, NULL)
#elif defined __ia64__
CheckTypeSize(SmcSaveYourselfProc,8, 31804, 3, 1.3, NULL, 31803, NULL)
#elif defined __i386__
CheckTypeSize(SmcSaveYourselfProc,4, 31804, 2, 1.2, NULL, 31803, NULL)
#else
Msg("Find size of SmcSaveYourselfProc (31804)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31803,NULL);\n",architecture,31804,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcDieProc,8, 31807, 12, 1.3, NULL, 31806, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcDieProc,8, 31807, 11, 2.0, NULL, 31806, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcDieProc,4, 31807, 10, 1.3, NULL, 31806, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcDieProc,8, 31807, 9, 2.0, NULL, 31806, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcDieProc,4, 31807, 6, 1.2, NULL, 31806, NULL)
#elif defined __ia64__
CheckTypeSize(SmcDieProc,8, 31807, 3, 1.3, NULL, 31806, NULL)
#elif defined __i386__
CheckTypeSize(SmcDieProc,4, 31807, 2, 1.2, NULL, 31806, NULL)
#else
Msg("Find size of SmcDieProc (31807)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31806,NULL);\n",architecture,31807,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcSaveCompleteProc,8, 31809, 12, 1.3, NULL, 31806, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcSaveCompleteProc,8, 31809, 11, 2.0, NULL, 31806, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcSaveCompleteProc,4, 31809, 10, 1.3, NULL, 31806, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcSaveCompleteProc,8, 31809, 9, 2.0, NULL, 31806, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcSaveCompleteProc,4, 31809, 6, 1.2, NULL, 31806, NULL)
#elif defined __ia64__
CheckTypeSize(SmcSaveCompleteProc,8, 31809, 3, 1.3, NULL, 31806, NULL)
#elif defined __i386__
CheckTypeSize(SmcSaveCompleteProc,4, 31809, 2, 1.2, NULL, 31806, NULL)
#else
Msg("Find size of SmcSaveCompleteProc (31809)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31806,NULL);\n",architecture,31809,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcShutdownCancelledProc,8, 31811, 12, 1.3, NULL, 31806, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcShutdownCancelledProc,8, 31811, 11, 2.0, NULL, 31806, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcShutdownCancelledProc,4, 31811, 10, 1.3, NULL, 31806, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcShutdownCancelledProc,8, 31811, 9, 2.0, NULL, 31806, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcShutdownCancelledProc,4, 31811, 6, 1.2, NULL, 31806, NULL)
#elif defined __ia64__
CheckTypeSize(SmcShutdownCancelledProc,8, 31811, 3, 1.3, NULL, 31806, NULL)
#elif defined __i386__
CheckTypeSize(SmcShutdownCancelledProc,4, 31811, 2, 1.2, NULL, 31806, NULL)
#else
Msg("Find size of SmcShutdownCancelledProc (31811)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31806,NULL);\n",architecture,31811,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcCallbacks,64, 31814, 12, 1.3, NULL, 31813, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcCallbacks,64, 31814, 11, 2.0, NULL, 31813, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcCallbacks,32, 31814, 10, 1.3, NULL, 31813, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcCallbacks,64, 31814, 9, 2.0, NULL, 31813, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcCallbacks,32, 31814, 6, 1.2, NULL, 31813, NULL)
#elif defined __ia64__
CheckTypeSize(SmcCallbacks,64, 31814, 3, 1.3, NULL, 31813, NULL)
#elif defined __i386__
CheckTypeSize(SmcCallbacks,32, 31814, 2, 1.2, NULL, 31813, NULL)
#else
Msg("Find size of SmcCallbacks (31814)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31813,NULL);\n",architecture,31814,0);
#endif

#if 1
CheckTypeSize(struct _SmsConn,0, 31816, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _SmsConn on All\n");
#endif

#if defined __s390x__
CheckTypeSize(SmsConn,8, 31818, 12, 1.3, NULL, 31817, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsConn,8, 31818, 11, 2.0, NULL, 31817, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsConn,4, 31818, 10, 1.3, NULL, 31817, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsConn,8, 31818, 9, 2.0, NULL, 31817, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsConn,4, 31818, 6, 1.2, NULL, 31817, NULL)
#elif defined __ia64__
CheckTypeSize(SmsConn,8, 31818, 3, 1.3, NULL, 31817, NULL)
#elif defined __i386__
CheckTypeSize(SmsConn,4, 31818, 2, 1.2, NULL, 31817, NULL)
#else
Msg("Find size of SmsConn (31818)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31817,NULL);\n",architecture,31818,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsErrorHandler,8, 31820, 12, 1.3, NULL, 31819, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsErrorHandler,8, 31820, 11, 2.0, NULL, 31819, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsErrorHandler,4, 31820, 10, 1.3, NULL, 31819, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsErrorHandler,8, 31820, 9, 2.0, NULL, 31819, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsErrorHandler,4, 31820, 6, 1.2, NULL, 31819, NULL)
#elif defined __ia64__
CheckTypeSize(SmsErrorHandler,8, 31820, 3, 1.3, NULL, 31819, NULL)
#elif defined __i386__
CheckTypeSize(SmsErrorHandler,4, 31820, 2, 1.2, NULL, 31819, NULL)
#else
Msg("Find size of SmsErrorHandler (31820)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31819,NULL);\n",architecture,31820,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcErrorHandler,8, 31822, 12, 1.3, NULL, 31821, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcErrorHandler,8, 31822, 11, 2.0, NULL, 31821, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcErrorHandler,4, 31822, 10, 1.3, NULL, 31821, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcErrorHandler,8, 31822, 9, 2.0, NULL, 31821, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcErrorHandler,4, 31822, 6, 1.2, NULL, 31821, NULL)
#elif defined __ia64__
CheckTypeSize(SmcErrorHandler,8, 31822, 3, 1.3, NULL, 31821, NULL)
#elif defined __i386__
CheckTypeSize(SmcErrorHandler,4, 31822, 2, 1.2, NULL, 31821, NULL)
#else
Msg("Find size of SmcErrorHandler (31822)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31821,NULL);\n",architecture,31822,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsRegisterClientProc,8, 31825, 12, 1.3, NULL, 31824, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsRegisterClientProc,8, 31825, 11, 2.0, NULL, 31824, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsRegisterClientProc,4, 31825, 10, 1.3, NULL, 31824, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsRegisterClientProc,8, 31825, 9, 2.0, NULL, 31824, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsRegisterClientProc,4, 31825, 6, 1.2, NULL, 31824, NULL)
#elif defined __ia64__
CheckTypeSize(SmsRegisterClientProc,8, 31825, 3, 1.3, NULL, 31824, NULL)
#elif defined __i386__
CheckTypeSize(SmsRegisterClientProc,4, 31825, 2, 1.2, NULL, 31824, NULL)
#else
Msg("Find size of SmsRegisterClientProc (31825)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31824,NULL);\n",architecture,31825,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsInteractRequestProc,8, 31828, 12, 1.3, NULL, 31827, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsInteractRequestProc,8, 31828, 11, 2.0, NULL, 31827, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsInteractRequestProc,4, 31828, 10, 1.3, NULL, 31827, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsInteractRequestProc,8, 31828, 9, 2.0, NULL, 31827, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsInteractRequestProc,4, 31828, 6, 1.2, NULL, 31827, NULL)
#elif defined __ia64__
CheckTypeSize(SmsInteractRequestProc,8, 31828, 3, 1.3, NULL, 31827, NULL)
#elif defined __i386__
CheckTypeSize(SmsInteractRequestProc,4, 31828, 2, 1.2, NULL, 31827, NULL)
#else
Msg("Find size of SmsInteractRequestProc (31828)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31827,NULL);\n",architecture,31828,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsInteractDoneProc,8, 31830, 12, 1.3, NULL, 31827, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsInteractDoneProc,8, 31830, 11, 2.0, NULL, 31827, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsInteractDoneProc,4, 31830, 10, 1.3, NULL, 31827, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsInteractDoneProc,8, 31830, 9, 2.0, NULL, 31827, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsInteractDoneProc,4, 31830, 6, 1.2, NULL, 31827, NULL)
#elif defined __ia64__
CheckTypeSize(SmsInteractDoneProc,8, 31830, 3, 1.3, NULL, 31827, NULL)
#elif defined __i386__
CheckTypeSize(SmsInteractDoneProc,4, 31830, 2, 1.2, NULL, 31827, NULL)
#else
Msg("Find size of SmsInteractDoneProc (31830)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31827,NULL);\n",architecture,31830,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsSaveYourselfRequestProc,8, 31833, 12, 1.3, NULL, 31832, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsSaveYourselfRequestProc,8, 31833, 11, 2.0, NULL, 31832, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsSaveYourselfRequestProc,4, 31833, 10, 1.3, NULL, 31832, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsSaveYourselfRequestProc,8, 31833, 9, 2.0, NULL, 31832, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsSaveYourselfRequestProc,4, 31833, 6, 1.2, NULL, 31832, NULL)
#elif defined __ia64__
CheckTypeSize(SmsSaveYourselfRequestProc,8, 31833, 3, 1.3, NULL, 31832, NULL)
#elif defined __i386__
CheckTypeSize(SmsSaveYourselfRequestProc,4, 31833, 2, 1.2, NULL, 31832, NULL)
#else
Msg("Find size of SmsSaveYourselfRequestProc (31833)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31832,NULL);\n",architecture,31833,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsSaveYourselfPhase2RequestProc,8, 31836, 12, 1.3, NULL, 31835, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsSaveYourselfPhase2RequestProc,8, 31836, 11, 2.0, NULL, 31835, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsSaveYourselfPhase2RequestProc,4, 31836, 10, 1.3, NULL, 31835, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsSaveYourselfPhase2RequestProc,8, 31836, 9, 2.0, NULL, 31835, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsSaveYourselfPhase2RequestProc,4, 31836, 6, 1.2, NULL, 31835, NULL)
#elif defined __ia64__
CheckTypeSize(SmsSaveYourselfPhase2RequestProc,8, 31836, 3, 1.3, NULL, 31835, NULL)
#elif defined __i386__
CheckTypeSize(SmsSaveYourselfPhase2RequestProc,4, 31836, 2, 1.2, NULL, 31835, NULL)
#else
Msg("Find size of SmsSaveYourselfPhase2RequestProc (31836)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31835,NULL);\n",architecture,31836,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsSaveYourselfDoneProc,8, 31838, 12, 1.3, NULL, 31827, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsSaveYourselfDoneProc,8, 31838, 11, 2.0, NULL, 31827, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsSaveYourselfDoneProc,4, 31838, 10, 1.3, NULL, 31827, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsSaveYourselfDoneProc,8, 31838, 9, 2.0, NULL, 31827, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsSaveYourselfDoneProc,4, 31838, 6, 1.2, NULL, 31827, NULL)
#elif defined __ia64__
CheckTypeSize(SmsSaveYourselfDoneProc,8, 31838, 3, 1.3, NULL, 31827, NULL)
#elif defined __i386__
CheckTypeSize(SmsSaveYourselfDoneProc,4, 31838, 2, 1.2, NULL, 31827, NULL)
#else
Msg("Find size of SmsSaveYourselfDoneProc (31838)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31827,NULL);\n",architecture,31838,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsCloseConnectionProc,8, 31841, 12, 1.3, NULL, 31840, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsCloseConnectionProc,8, 31841, 11, 2.0, NULL, 31840, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsCloseConnectionProc,4, 31841, 10, 1.3, NULL, 31840, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsCloseConnectionProc,8, 31841, 9, 2.0, NULL, 31840, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsCloseConnectionProc,4, 31841, 6, 1.2, NULL, 31840, NULL)
#elif defined __ia64__
CheckTypeSize(SmsCloseConnectionProc,8, 31841, 3, 1.3, NULL, 31840, NULL)
#elif defined __i386__
CheckTypeSize(SmsCloseConnectionProc,4, 31841, 2, 1.2, NULL, 31840, NULL)
#else
Msg("Find size of SmsCloseConnectionProc (31841)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31840,NULL);\n",architecture,31841,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsSetPropertiesProc,8, 31844, 12, 1.3, NULL, 31843, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsSetPropertiesProc,8, 31844, 11, 2.0, NULL, 31843, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsSetPropertiesProc,4, 31844, 10, 1.3, NULL, 31843, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsSetPropertiesProc,8, 31844, 9, 2.0, NULL, 31843, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsSetPropertiesProc,4, 31844, 6, 1.2, NULL, 31843, NULL)
#elif defined __ia64__
CheckTypeSize(SmsSetPropertiesProc,8, 31844, 3, 1.3, NULL, 31843, NULL)
#elif defined __i386__
CheckTypeSize(SmsSetPropertiesProc,4, 31844, 2, 1.2, NULL, 31843, NULL)
#else
Msg("Find size of SmsSetPropertiesProc (31844)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31843,NULL);\n",architecture,31844,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsDeletePropertiesProc,8, 31846, 12, 1.3, NULL, 31840, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsDeletePropertiesProc,8, 31846, 11, 2.0, NULL, 31840, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsDeletePropertiesProc,4, 31846, 10, 1.3, NULL, 31840, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsDeletePropertiesProc,8, 31846, 9, 2.0, NULL, 31840, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsDeletePropertiesProc,4, 31846, 6, 1.2, NULL, 31840, NULL)
#elif defined __ia64__
CheckTypeSize(SmsDeletePropertiesProc,8, 31846, 3, 1.3, NULL, 31840, NULL)
#elif defined __i386__
CheckTypeSize(SmsDeletePropertiesProc,4, 31846, 2, 1.2, NULL, 31840, NULL)
#else
Msg("Find size of SmsDeletePropertiesProc (31846)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31840,NULL);\n",architecture,31846,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsGetPropertiesProc,8, 31848, 12, 1.3, NULL, 31835, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsGetPropertiesProc,8, 31848, 11, 2.0, NULL, 31835, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsGetPropertiesProc,4, 31848, 10, 1.3, NULL, 31835, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsGetPropertiesProc,8, 31848, 9, 2.0, NULL, 31835, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsGetPropertiesProc,4, 31848, 6, 1.2, NULL, 31835, NULL)
#elif defined __ia64__
CheckTypeSize(SmsGetPropertiesProc,8, 31848, 3, 1.3, NULL, 31835, NULL)
#elif defined __i386__
CheckTypeSize(SmsGetPropertiesProc,4, 31848, 2, 1.2, NULL, 31835, NULL)
#else
Msg("Find size of SmsGetPropertiesProc (31848)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31835,NULL);\n",architecture,31848,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsCallbacks,160, 31851, 12, 1.3, NULL, 31850, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsCallbacks,160, 31851, 11, 2.0, NULL, 31850, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsCallbacks,80, 31851, 10, 1.3, NULL, 31850, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsCallbacks,160, 31851, 9, 2.0, NULL, 31850, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsCallbacks,80, 31851, 6, 1.2, NULL, 31850, NULL)
#elif defined __ia64__
CheckTypeSize(SmsCallbacks,160, 31851, 3, 1.3, NULL, 31850, NULL)
#elif defined __i386__
CheckTypeSize(SmsCallbacks,80, 31851, 2, 1.2, NULL, 31850, NULL)
#else
Msg("Find size of SmsCallbacks (31851)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31850,NULL);\n",architecture,31851,0);
#endif

#if defined __s390x__
CheckTypeSize(SmsNewClientProc,8, 31854, 12, 1.3, NULL, 31853, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsNewClientProc,8, 31854, 11, 2.0, NULL, 31853, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsNewClientProc,4, 31854, 10, 1.3, NULL, 31853, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsNewClientProc,8, 31854, 9, 2.0, NULL, 31853, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsNewClientProc,4, 31854, 6, 1.2, NULL, 31853, NULL)
#elif defined __ia64__
CheckTypeSize(SmsNewClientProc,8, 31854, 3, 1.3, NULL, 31853, NULL)
#elif defined __i386__
CheckTypeSize(SmsNewClientProc,4, 31854, 2, 1.2, NULL, 31853, NULL)
#else
Msg("Find size of SmsNewClientProc (31854)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31853,NULL);\n",architecture,31854,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcPropReplyProc,8, 31856, 12, 1.3, NULL, 31855, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcPropReplyProc,8, 31856, 11, 2.0, NULL, 31855, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcPropReplyProc,4, 31856, 10, 1.3, NULL, 31855, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcPropReplyProc,8, 31856, 9, 2.0, NULL, 31855, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcPropReplyProc,4, 31856, 6, 1.2, NULL, 31855, NULL)
#elif defined __ia64__
CheckTypeSize(SmcPropReplyProc,8, 31856, 3, 1.3, NULL, 31855, NULL)
#elif defined __i386__
CheckTypeSize(SmcPropReplyProc,4, 31856, 2, 1.2, NULL, 31855, NULL)
#else
Msg("Find size of SmcPropReplyProc (31856)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31855,NULL);\n",architecture,31856,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcInteractProc,8, 31857, 12, 1.3, NULL, 31806, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcInteractProc,8, 31857, 11, 2.0, NULL, 31806, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcInteractProc,4, 31857, 10, 1.3, NULL, 31806, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcInteractProc,8, 31857, 9, 2.0, NULL, 31806, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcInteractProc,4, 31857, 6, 1.2, NULL, 31806, NULL)
#elif defined __ia64__
CheckTypeSize(SmcInteractProc,8, 31857, 3, 1.3, NULL, 31806, NULL)
#elif defined __i386__
CheckTypeSize(SmcInteractProc,4, 31857, 2, 1.2, NULL, 31806, NULL)
#else
Msg("Find size of SmcInteractProc (31857)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31806,NULL);\n",architecture,31857,0);
#endif

#if defined __s390x__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 31858, 12, 1.3, NULL, 31806, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 31858, 11, 2.0, NULL, 31806, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcSaveYourselfPhase2Proc,4, 31858, 10, 1.3, NULL, 31806, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 31858, 9, 2.0, NULL, 31806, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,4, 31858, 6, 1.2, NULL, 31806, NULL)
#elif defined __ia64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 31858, 3, 1.3, NULL, 31806, NULL)
#elif defined __i386__
CheckTypeSize(SmcSaveYourselfPhase2Proc,4, 31858, 2, 1.2, NULL, 31806, NULL)
#else
Msg("Find size of SmcSaveYourselfPhase2Proc (31858)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31806,NULL);\n",architecture,31858,0);
#endif

#if 1
CheckTypeSize(SmcCloseStatus,4, 31859, 1, 1.2, NULL, 36151, NULL)
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmcSaveYourselfProc_db)(SmcConn, SmPointer, int, int, int, int);
CheckFunctionTypedef(SmcSaveYourselfProc,SmcSaveYourselfProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmcSaveYourselfProc_db)(SmcConn, SmPointer, int, int, int, int);
CheckFunctionTypedef(SmcSaveYourselfProc,SmcSaveYourselfProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmcSaveYourselfProc_db)(SmcConn, SmPointer, int, int, int, int);
CheckFunctionTypedef(SmcSaveYourselfProc,SmcSaveYourselfProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmcSaveYourselfProc_db)(SmcConn, SmPointer, int, int, int, int);
CheckFunctionTypedef(SmcSaveYourselfProc,SmcSaveYourselfProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmcSaveYourselfProc_db)(SmcConn, SmPointer, int, int, int, int);
CheckFunctionTypedef(SmcSaveYourselfProc,SmcSaveYourselfProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmcSaveYourselfProc_db)(SmcConn, SmPointer, int, int, int, int);
CheckFunctionTypedef(SmcSaveYourselfProc,SmcSaveYourselfProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmcSaveYourselfProc_db)(SmcConn, SmPointer, int, int, int, int);
CheckFunctionTypedef(SmcSaveYourselfProc,SmcSaveYourselfProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmcDieProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcDieProc,SmcDieProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmcDieProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcDieProc,SmcDieProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmcDieProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcDieProc,SmcDieProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmcDieProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcDieProc,SmcDieProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmcDieProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcDieProc,SmcDieProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmcDieProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcDieProc,SmcDieProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmcDieProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcDieProc,SmcDieProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmcSaveCompleteProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcSaveCompleteProc,SmcSaveCompleteProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmcSaveCompleteProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcSaveCompleteProc,SmcSaveCompleteProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmcSaveCompleteProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcSaveCompleteProc,SmcSaveCompleteProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmcSaveCompleteProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcSaveCompleteProc,SmcSaveCompleteProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmcSaveCompleteProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcSaveCompleteProc,SmcSaveCompleteProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmcSaveCompleteProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcSaveCompleteProc,SmcSaveCompleteProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmcSaveCompleteProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcSaveCompleteProc,SmcSaveCompleteProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmcShutdownCancelledProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcShutdownCancelledProc,SmcShutdownCancelledProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmcShutdownCancelledProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcShutdownCancelledProc,SmcShutdownCancelledProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmcShutdownCancelledProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcShutdownCancelledProc,SmcShutdownCancelledProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmcShutdownCancelledProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcShutdownCancelledProc,SmcShutdownCancelledProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmcShutdownCancelledProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcShutdownCancelledProc,SmcShutdownCancelledProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmcShutdownCancelledProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcShutdownCancelledProc,SmcShutdownCancelledProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmcShutdownCancelledProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcShutdownCancelledProc,SmcShutdownCancelledProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmsErrorHandler_db)(SmsConn, int, int, long unsigned int, int, int, SmPointer);
CheckFunctionTypedef(SmsErrorHandler,SmsErrorHandler_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmsErrorHandler_db)(SmsConn, int, int, long unsigned int, int, int, SmPointer);
CheckFunctionTypedef(SmsErrorHandler,SmsErrorHandler_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmsErrorHandler_db)(SmsConn, int, int, long unsigned int, int, int, SmPointer);
CheckFunctionTypedef(SmsErrorHandler,SmsErrorHandler_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmsErrorHandler_db)(SmsConn, int, int, long unsigned int, int, int, SmPointer);
CheckFunctionTypedef(SmsErrorHandler,SmsErrorHandler_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmsErrorHandler_db)(SmsConn, int, int, long unsigned int, int, int, SmPointer);
CheckFunctionTypedef(SmsErrorHandler,SmsErrorHandler_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmsErrorHandler_db)(SmsConn, int, int, long unsigned int, int, int, SmPointer);
CheckFunctionTypedef(SmsErrorHandler,SmsErrorHandler_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmsErrorHandler_db)(SmsConn, int, int, long unsigned int, int, int, SmPointer);
CheckFunctionTypedef(SmsErrorHandler,SmsErrorHandler_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmcErrorHandler_db)(SmcConn, int, int, long unsigned int, int, int, SmPointer);
CheckFunctionTypedef(SmcErrorHandler,SmcErrorHandler_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmcErrorHandler_db)(SmcConn, int, int, long unsigned int, int, int, SmPointer);
CheckFunctionTypedef(SmcErrorHandler,SmcErrorHandler_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmcErrorHandler_db)(SmcConn, int, int, long unsigned int, int, int, SmPointer);
CheckFunctionTypedef(SmcErrorHandler,SmcErrorHandler_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmcErrorHandler_db)(SmcConn, int, int, long unsigned int, int, int, SmPointer);
CheckFunctionTypedef(SmcErrorHandler,SmcErrorHandler_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmcErrorHandler_db)(SmcConn, int, int, long unsigned int, int, int, SmPointer);
CheckFunctionTypedef(SmcErrorHandler,SmcErrorHandler_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmcErrorHandler_db)(SmcConn, int, int, long unsigned int, int, int, SmPointer);
CheckFunctionTypedef(SmcErrorHandler,SmcErrorHandler_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmcErrorHandler_db)(SmcConn, int, int, long unsigned int, int, int, SmPointer);
CheckFunctionTypedef(SmcErrorHandler,SmcErrorHandler_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*SmsRegisterClientProc_db)(SmsConn, SmPointer, char *);
CheckFunctionTypedef(SmsRegisterClientProc,SmsRegisterClientProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*SmsRegisterClientProc_db)(SmsConn, SmPointer, char *);
CheckFunctionTypedef(SmsRegisterClientProc,SmsRegisterClientProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*SmsRegisterClientProc_db)(SmsConn, SmPointer, char *);
CheckFunctionTypedef(SmsRegisterClientProc,SmsRegisterClientProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*SmsRegisterClientProc_db)(SmsConn, SmPointer, char *);
CheckFunctionTypedef(SmsRegisterClientProc,SmsRegisterClientProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*SmsRegisterClientProc_db)(SmsConn, SmPointer, char *);
CheckFunctionTypedef(SmsRegisterClientProc,SmsRegisterClientProc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*SmsRegisterClientProc_db)(SmsConn, SmPointer, char *);
CheckFunctionTypedef(SmsRegisterClientProc,SmsRegisterClientProc_db);
#elif defined __i386__
/* IA32 */
typedef int (*SmsRegisterClientProc_db)(SmsConn, SmPointer, char *);
CheckFunctionTypedef(SmsRegisterClientProc,SmsRegisterClientProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmsInteractRequestProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsInteractRequestProc,SmsInteractRequestProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmsInteractRequestProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsInteractRequestProc,SmsInteractRequestProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmsInteractRequestProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsInteractRequestProc,SmsInteractRequestProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmsInteractRequestProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsInteractRequestProc,SmsInteractRequestProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmsInteractRequestProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsInteractRequestProc,SmsInteractRequestProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmsInteractRequestProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsInteractRequestProc,SmsInteractRequestProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmsInteractRequestProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsInteractRequestProc,SmsInteractRequestProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmsInteractDoneProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsInteractDoneProc,SmsInteractDoneProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmsInteractDoneProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsInteractDoneProc,SmsInteractDoneProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmsInteractDoneProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsInteractDoneProc,SmsInteractDoneProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmsInteractDoneProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsInteractDoneProc,SmsInteractDoneProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmsInteractDoneProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsInteractDoneProc,SmsInteractDoneProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmsInteractDoneProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsInteractDoneProc,SmsInteractDoneProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmsInteractDoneProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsInteractDoneProc,SmsInteractDoneProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmsSaveYourselfRequestProc_db)(SmsConn, SmPointer, int, int, int, int, int);
CheckFunctionTypedef(SmsSaveYourselfRequestProc,SmsSaveYourselfRequestProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmsSaveYourselfRequestProc_db)(SmsConn, SmPointer, int, int, int, int, int);
CheckFunctionTypedef(SmsSaveYourselfRequestProc,SmsSaveYourselfRequestProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmsSaveYourselfRequestProc_db)(SmsConn, SmPointer, int, int, int, int, int);
CheckFunctionTypedef(SmsSaveYourselfRequestProc,SmsSaveYourselfRequestProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmsSaveYourselfRequestProc_db)(SmsConn, SmPointer, int, int, int, int, int);
CheckFunctionTypedef(SmsSaveYourselfRequestProc,SmsSaveYourselfRequestProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmsSaveYourselfRequestProc_db)(SmsConn, SmPointer, int, int, int, int, int);
CheckFunctionTypedef(SmsSaveYourselfRequestProc,SmsSaveYourselfRequestProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmsSaveYourselfRequestProc_db)(SmsConn, SmPointer, int, int, int, int, int);
CheckFunctionTypedef(SmsSaveYourselfRequestProc,SmsSaveYourselfRequestProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmsSaveYourselfRequestProc_db)(SmsConn, SmPointer, int, int, int, int, int);
CheckFunctionTypedef(SmsSaveYourselfRequestProc,SmsSaveYourselfRequestProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmsSaveYourselfPhase2RequestProc_db)(SmsConn, SmPointer);
CheckFunctionTypedef(SmsSaveYourselfPhase2RequestProc,SmsSaveYourselfPhase2RequestProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmsSaveYourselfPhase2RequestProc_db)(SmsConn, SmPointer);
CheckFunctionTypedef(SmsSaveYourselfPhase2RequestProc,SmsSaveYourselfPhase2RequestProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmsSaveYourselfPhase2RequestProc_db)(SmsConn, SmPointer);
CheckFunctionTypedef(SmsSaveYourselfPhase2RequestProc,SmsSaveYourselfPhase2RequestProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmsSaveYourselfPhase2RequestProc_db)(SmsConn, SmPointer);
CheckFunctionTypedef(SmsSaveYourselfPhase2RequestProc,SmsSaveYourselfPhase2RequestProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmsSaveYourselfPhase2RequestProc_db)(SmsConn, SmPointer);
CheckFunctionTypedef(SmsSaveYourselfPhase2RequestProc,SmsSaveYourselfPhase2RequestProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmsSaveYourselfPhase2RequestProc_db)(SmsConn, SmPointer);
CheckFunctionTypedef(SmsSaveYourselfPhase2RequestProc,SmsSaveYourselfPhase2RequestProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmsSaveYourselfPhase2RequestProc_db)(SmsConn, SmPointer);
CheckFunctionTypedef(SmsSaveYourselfPhase2RequestProc,SmsSaveYourselfPhase2RequestProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmsSaveYourselfDoneProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsSaveYourselfDoneProc,SmsSaveYourselfDoneProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmsSaveYourselfDoneProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsSaveYourselfDoneProc,SmsSaveYourselfDoneProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmsSaveYourselfDoneProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsSaveYourselfDoneProc,SmsSaveYourselfDoneProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmsSaveYourselfDoneProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsSaveYourselfDoneProc,SmsSaveYourselfDoneProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmsSaveYourselfDoneProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsSaveYourselfDoneProc,SmsSaveYourselfDoneProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmsSaveYourselfDoneProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsSaveYourselfDoneProc,SmsSaveYourselfDoneProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmsSaveYourselfDoneProc_db)(SmsConn, SmPointer, int);
CheckFunctionTypedef(SmsSaveYourselfDoneProc,SmsSaveYourselfDoneProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmsCloseConnectionProc_db)(SmsConn, SmPointer, int, char * *);
CheckFunctionTypedef(SmsCloseConnectionProc,SmsCloseConnectionProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmsCloseConnectionProc_db)(SmsConn, SmPointer, int, char * *);
CheckFunctionTypedef(SmsCloseConnectionProc,SmsCloseConnectionProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmsCloseConnectionProc_db)(SmsConn, SmPointer, int, char * *);
CheckFunctionTypedef(SmsCloseConnectionProc,SmsCloseConnectionProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmsCloseConnectionProc_db)(SmsConn, SmPointer, int, char * *);
CheckFunctionTypedef(SmsCloseConnectionProc,SmsCloseConnectionProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmsCloseConnectionProc_db)(SmsConn, SmPointer, int, char * *);
CheckFunctionTypedef(SmsCloseConnectionProc,SmsCloseConnectionProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmsCloseConnectionProc_db)(SmsConn, SmPointer, int, char * *);
CheckFunctionTypedef(SmsCloseConnectionProc,SmsCloseConnectionProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmsCloseConnectionProc_db)(SmsConn, SmPointer, int, char * *);
CheckFunctionTypedef(SmsCloseConnectionProc,SmsCloseConnectionProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmsSetPropertiesProc_db)(SmsConn, SmPointer, int, SmProp * *);
CheckFunctionTypedef(SmsSetPropertiesProc,SmsSetPropertiesProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmsSetPropertiesProc_db)(SmsConn, SmPointer, int, SmProp * *);
CheckFunctionTypedef(SmsSetPropertiesProc,SmsSetPropertiesProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmsSetPropertiesProc_db)(SmsConn, SmPointer, int, SmProp * *);
CheckFunctionTypedef(SmsSetPropertiesProc,SmsSetPropertiesProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmsSetPropertiesProc_db)(SmsConn, SmPointer, int, SmProp * *);
CheckFunctionTypedef(SmsSetPropertiesProc,SmsSetPropertiesProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmsSetPropertiesProc_db)(SmsConn, SmPointer, int, SmProp * *);
CheckFunctionTypedef(SmsSetPropertiesProc,SmsSetPropertiesProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmsSetPropertiesProc_db)(SmsConn, SmPointer, int, SmProp * *);
CheckFunctionTypedef(SmsSetPropertiesProc,SmsSetPropertiesProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmsSetPropertiesProc_db)(SmsConn, SmPointer, int, SmProp * *);
CheckFunctionTypedef(SmsSetPropertiesProc,SmsSetPropertiesProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmsDeletePropertiesProc_db)(SmsConn, SmPointer, int, char * *);
CheckFunctionTypedef(SmsDeletePropertiesProc,SmsDeletePropertiesProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmsDeletePropertiesProc_db)(SmsConn, SmPointer, int, char * *);
CheckFunctionTypedef(SmsDeletePropertiesProc,SmsDeletePropertiesProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmsDeletePropertiesProc_db)(SmsConn, SmPointer, int, char * *);
CheckFunctionTypedef(SmsDeletePropertiesProc,SmsDeletePropertiesProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmsDeletePropertiesProc_db)(SmsConn, SmPointer, int, char * *);
CheckFunctionTypedef(SmsDeletePropertiesProc,SmsDeletePropertiesProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmsDeletePropertiesProc_db)(SmsConn, SmPointer, int, char * *);
CheckFunctionTypedef(SmsDeletePropertiesProc,SmsDeletePropertiesProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmsDeletePropertiesProc_db)(SmsConn, SmPointer, int, char * *);
CheckFunctionTypedef(SmsDeletePropertiesProc,SmsDeletePropertiesProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmsDeletePropertiesProc_db)(SmsConn, SmPointer, int, char * *);
CheckFunctionTypedef(SmsDeletePropertiesProc,SmsDeletePropertiesProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmsGetPropertiesProc_db)(SmsConn, SmPointer);
CheckFunctionTypedef(SmsGetPropertiesProc,SmsGetPropertiesProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmsGetPropertiesProc_db)(SmsConn, SmPointer);
CheckFunctionTypedef(SmsGetPropertiesProc,SmsGetPropertiesProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmsGetPropertiesProc_db)(SmsConn, SmPointer);
CheckFunctionTypedef(SmsGetPropertiesProc,SmsGetPropertiesProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmsGetPropertiesProc_db)(SmsConn, SmPointer);
CheckFunctionTypedef(SmsGetPropertiesProc,SmsGetPropertiesProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmsGetPropertiesProc_db)(SmsConn, SmPointer);
CheckFunctionTypedef(SmsGetPropertiesProc,SmsGetPropertiesProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmsGetPropertiesProc_db)(SmsConn, SmPointer);
CheckFunctionTypedef(SmsGetPropertiesProc,SmsGetPropertiesProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmsGetPropertiesProc_db)(SmsConn, SmPointer);
CheckFunctionTypedef(SmsGetPropertiesProc,SmsGetPropertiesProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*SmsNewClientProc_db)(SmsConn, SmPointer, long unsigned int *, SmsCallbacks *, char * *);
CheckFunctionTypedef(SmsNewClientProc,SmsNewClientProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*SmsNewClientProc_db)(SmsConn, SmPointer, long unsigned int *, SmsCallbacks *, char * *);
CheckFunctionTypedef(SmsNewClientProc,SmsNewClientProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*SmsNewClientProc_db)(SmsConn, SmPointer, long unsigned int *, SmsCallbacks *, char * *);
CheckFunctionTypedef(SmsNewClientProc,SmsNewClientProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*SmsNewClientProc_db)(SmsConn, SmPointer, long unsigned int *, SmsCallbacks *, char * *);
CheckFunctionTypedef(SmsNewClientProc,SmsNewClientProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*SmsNewClientProc_db)(SmsConn, SmPointer, long unsigned int *, SmsCallbacks *, char * *);
CheckFunctionTypedef(SmsNewClientProc,SmsNewClientProc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*SmsNewClientProc_db)(SmsConn, SmPointer, long unsigned int *, SmsCallbacks *, char * *);
CheckFunctionTypedef(SmsNewClientProc,SmsNewClientProc_db);
#elif defined __i386__
/* IA32 */
typedef int (*SmsNewClientProc_db)(SmsConn, SmPointer, long unsigned int *, SmsCallbacks *, char * *);
CheckFunctionTypedef(SmsNewClientProc,SmsNewClientProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmcPropReplyProc_db)(SmcConn, SmPointer, int, SmProp * *);
CheckFunctionTypedef(SmcPropReplyProc,SmcPropReplyProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmcPropReplyProc_db)(SmcConn, SmPointer, int, SmProp * *);
CheckFunctionTypedef(SmcPropReplyProc,SmcPropReplyProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmcPropReplyProc_db)(SmcConn, SmPointer, int, SmProp * *);
CheckFunctionTypedef(SmcPropReplyProc,SmcPropReplyProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmcPropReplyProc_db)(SmcConn, SmPointer, int, SmProp * *);
CheckFunctionTypedef(SmcPropReplyProc,SmcPropReplyProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmcPropReplyProc_db)(SmcConn, SmPointer, int, SmProp * *);
CheckFunctionTypedef(SmcPropReplyProc,SmcPropReplyProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmcPropReplyProc_db)(SmcConn, SmPointer, int, SmProp * *);
CheckFunctionTypedef(SmcPropReplyProc,SmcPropReplyProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmcPropReplyProc_db)(SmcConn, SmPointer, int, SmProp * *);
CheckFunctionTypedef(SmcPropReplyProc,SmcPropReplyProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmcInteractProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcInteractProc,SmcInteractProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmcInteractProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcInteractProc,SmcInteractProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmcInteractProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcInteractProc,SmcInteractProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmcInteractProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcInteractProc,SmcInteractProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmcInteractProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcInteractProc,SmcInteractProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmcInteractProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcInteractProc,SmcInteractProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmcInteractProc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcInteractProc,SmcInteractProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*SmcSaveYourselfPhase2Proc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcSaveYourselfPhase2Proc,SmcSaveYourselfPhase2Proc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*SmcSaveYourselfPhase2Proc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcSaveYourselfPhase2Proc,SmcSaveYourselfPhase2Proc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*SmcSaveYourselfPhase2Proc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcSaveYourselfPhase2Proc,SmcSaveYourselfPhase2Proc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*SmcSaveYourselfPhase2Proc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcSaveYourselfPhase2Proc,SmcSaveYourselfPhase2Proc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*SmcSaveYourselfPhase2Proc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcSaveYourselfPhase2Proc,SmcSaveYourselfPhase2Proc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*SmcSaveYourselfPhase2Proc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcSaveYourselfPhase2Proc,SmcSaveYourselfPhase2Proc_db);
#elif defined __i386__
/* IA32 */
typedef void (*SmcSaveYourselfPhase2Proc_db)(SmcConn, SmPointer);
CheckFunctionTypedef(SmcSaveYourselfPhase2Proc,SmcSaveYourselfPhase2Proc_db);
#endif

extern void SmFreeProperty_db(SmProp *);
CheckInterfacedef(SmFreeProperty,SmFreeProperty_db);
extern void SmFreeReasons_db(int, char * *);
CheckInterfacedef(SmFreeReasons,SmFreeReasons_db);
extern char * SmcClientID_db(SmcConn);
CheckInterfacedef(SmcClientID,SmcClientID_db);
extern SmcCloseStatus SmcCloseConnection_db(SmcConn, int, char * *);
CheckInterfacedef(SmcCloseConnection,SmcCloseConnection_db);
extern void SmcDeleteProperties_db(SmcConn, int, char * *);
CheckInterfacedef(SmcDeleteProperties,SmcDeleteProperties_db);
extern IceConn SmcGetIceConnection_db(SmcConn);
CheckInterfacedef(SmcGetIceConnection,SmcGetIceConnection_db);
extern int SmcGetProperties_db(SmcConn, SmcPropReplyProc, SmPointer);
CheckInterfacedef(SmcGetProperties,SmcGetProperties_db);
extern void SmcInteractDone_db(SmcConn, int);
CheckInterfacedef(SmcInteractDone,SmcInteractDone_db);
extern int SmcInteractRequest_db(SmcConn, int, SmcInteractProc, SmPointer);
CheckInterfacedef(SmcInteractRequest,SmcInteractRequest_db);
extern void SmcModifyCallbacks_db(SmcConn, long unsigned int, SmcCallbacks *);
CheckInterfacedef(SmcModifyCallbacks,SmcModifyCallbacks_db);
extern SmcConn SmcOpenConnection_db(char *, SmPointer, int, int, long unsigned int, SmcCallbacks *, char *, char * *, int, char *);
CheckInterfacedef(SmcOpenConnection,SmcOpenConnection_db);
extern int SmcProtocolRevision_db(SmcConn);
CheckInterfacedef(SmcProtocolRevision,SmcProtocolRevision_db);
extern int SmcProtocolVersion_db(SmcConn);
CheckInterfacedef(SmcProtocolVersion,SmcProtocolVersion_db);
extern char * SmcRelease_db(SmcConn);
CheckInterfacedef(SmcRelease,SmcRelease_db);
extern void SmcRequestSaveYourself_db(SmcConn, int, int, int, int, int);
CheckInterfacedef(SmcRequestSaveYourself,SmcRequestSaveYourself_db);
extern int SmcRequestSaveYourselfPhase2_db(SmcConn, SmcSaveYourselfPhase2Proc, SmPointer);
CheckInterfacedef(SmcRequestSaveYourselfPhase2,SmcRequestSaveYourselfPhase2_db);
extern void SmcSaveYourselfDone_db(SmcConn, int);
CheckInterfacedef(SmcSaveYourselfDone,SmcSaveYourselfDone_db);
extern SmcErrorHandler SmcSetErrorHandler_db(SmcErrorHandler);
CheckInterfacedef(SmcSetErrorHandler,SmcSetErrorHandler_db);
extern void SmcSetProperties_db(SmcConn, int, SmProp * *);
CheckInterfacedef(SmcSetProperties,SmcSetProperties_db);
extern char * SmcVendor_db(SmcConn);
CheckInterfacedef(SmcVendor,SmcVendor_db);
extern void SmsCleanUp_db(SmsConn);
CheckInterfacedef(SmsCleanUp,SmsCleanUp_db);
extern char * SmsClientHostName_db(SmsConn);
CheckInterfacedef(SmsClientHostName,SmsClientHostName_db);
extern char * SmsClientID_db(SmsConn);
CheckInterfacedef(SmsClientID,SmsClientID_db);
extern void SmsDie_db(SmsConn);
CheckInterfacedef(SmsDie,SmsDie_db);
extern char * SmsGenerateClientID_db(SmsConn);
CheckInterfacedef(SmsGenerateClientID,SmsGenerateClientID_db);
extern IceConn SmsGetIceConnection_db(SmsConn);
CheckInterfacedef(SmsGetIceConnection,SmsGetIceConnection_db);
extern int SmsInitialize_db(char *, char *, SmsNewClientProc, SmPointer, IceHostBasedAuthProc, int, char *);
CheckInterfacedef(SmsInitialize,SmsInitialize_db);
extern void SmsInteract_db(SmsConn);
CheckInterfacedef(SmsInteract,SmsInteract_db);
extern int SmsProtocolRevision_db(SmsConn);
CheckInterfacedef(SmsProtocolRevision,SmsProtocolRevision_db);
extern int SmsProtocolVersion_db(SmsConn);
CheckInterfacedef(SmsProtocolVersion,SmsProtocolVersion_db);
extern int SmsRegisterClientReply_db(SmsConn, char *);
CheckInterfacedef(SmsRegisterClientReply,SmsRegisterClientReply_db);
extern void SmsReturnProperties_db(SmsConn, int, SmProp * *);
CheckInterfacedef(SmsReturnProperties,SmsReturnProperties_db);
extern void SmsSaveComplete_db(SmsConn);
CheckInterfacedef(SmsSaveComplete,SmsSaveComplete_db);
extern void SmsSaveYourself_db(SmsConn, int, int, int, int);
CheckInterfacedef(SmsSaveYourself,SmsSaveYourself_db);
extern void SmsSaveYourselfPhase2_db(SmsConn);
CheckInterfacedef(SmsSaveYourselfPhase2,SmsSaveYourselfPhase2_db);
extern SmsErrorHandler SmsSetErrorHandler_db(SmsErrorHandler);
CheckInterfacedef(SmsSetErrorHandler,SmsSetErrorHandler_db);
extern void SmsShutdownCancelled_db(SmsConn);
CheckInterfacedef(SmsShutdownCancelled,SmsShutdownCancelled_db);
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
