/*
 * Test of X11/SM/SMlib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/ICE/ICElib.h>
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
#if defined __i386__
CheckTypeSize(SmPointer,4, 8231, 2, 1.0, NULL, 8180, NULL)
#elif defined __ia64__
CheckTypeSize(SmPointer,8, 8231, 3, 1.3, NULL, 8180, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmPointer,4, 8231, 6, 1.2, NULL, 8180, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmPointer,4, 8231, 10, 1.3, NULL, 8180, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmPointer,8, 8231, 9, 2.0, NULL, 8180, NULL)
#elif defined __s390x__
CheckTypeSize(SmPointer,8, 8231, 12, 1.3, NULL, 8180, NULL)
#elif defined __x86_64__
CheckTypeSize(SmPointer,8, 8231, 11, 2.0, NULL, 8180, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8180,NULL);\n",architecture,8231,0);
Msg("Find size of SmPointer (8231)\n");
#endif

#if defined __i386__
CheckTypeSize(SmcConn,4, 8232, 2, 1.0, NULL, 7759, NULL)
#elif defined __ia64__
CheckTypeSize(SmcConn,8, 8232, 3, 1.3, NULL, 7759, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcConn,4, 8232, 6, 1.2, NULL, 7759, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcConn,4, 8232, 10, 1.3, NULL, 7759, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcConn,8, 8232, 9, 2.0, NULL, 7759, NULL)
#elif defined __s390x__
CheckTypeSize(SmcConn,8, 8232, 12, 1.3, NULL, 7759, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcConn,8, 8232, 11, 2.0, NULL, 7759, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,7759,NULL);\n",architecture,8232,0);
Msg("Find size of SmcConn (8232)\n");
#endif

#if defined __i386__
CheckTypeSize(SmsConn,4, 8233, 2, 1.0, NULL, 7762, NULL)
#elif defined __ia64__
CheckTypeSize(SmsConn,8, 8233, 3, 1.3, NULL, 7762, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsConn,4, 8233, 6, 1.2, NULL, 7762, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsConn,4, 8233, 10, 1.3, NULL, 7762, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsConn,8, 8233, 9, 2.0, NULL, 7762, NULL)
#elif defined __s390x__
CheckTypeSize(SmsConn,8, 8233, 12, 1.3, NULL, 7762, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsConn,8, 8233, 11, 2.0, NULL, 7762, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,7762,NULL);\n",architecture,8233,0);
Msg("Find size of SmsConn (8233)\n");
#endif

#if defined __i386__
CheckTypeSize(SmcSaveYourselfPhase2Proc,4, 8790, 2, 1.0, NULL, 8789, NULL)
#elif defined __ia64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 8790, 3, 1.3, NULL, 8789, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,4, 8790, 6, 1.2, NULL, 8789, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcSaveYourselfPhase2Proc,4, 8790, 10, 1.3, NULL, 8789, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 8790, 9, 2.0, NULL, 8789, NULL)
#elif defined __s390x__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 8790, 12, 1.3, NULL, 8789, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 8790, 11, 2.0, NULL, 8789, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8789,NULL);\n",architecture,8790,0);
Msg("Find size of SmcSaveYourselfPhase2Proc (8790)\n");
#endif

#if defined __i386__
CheckTypeSize(SmcInteractProc,4, 8792, 2, 1.0, NULL, 8791, NULL)
#elif defined __ia64__
CheckTypeSize(SmcInteractProc,8, 8792, 3, 1.3, NULL, 8791, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcInteractProc,4, 8792, 6, 1.2, NULL, 8791, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcInteractProc,4, 8792, 10, 1.3, NULL, 8791, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcInteractProc,8, 8792, 9, 2.0, NULL, 8791, NULL)
#elif defined __s390x__
CheckTypeSize(SmcInteractProc,8, 8792, 12, 1.3, NULL, 8791, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcInteractProc,8, 8792, 11, 2.0, NULL, 8791, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8791,NULL);\n",architecture,8792,0);
Msg("Find size of SmcInteractProc (8792)\n");
#endif

#if defined __i386__
CheckTypeSize(SmcDieProc,4, 8794, 2, 1.0, NULL, 8793, NULL)
#elif defined __ia64__
CheckTypeSize(SmcDieProc,8, 8794, 3, 1.3, NULL, 8793, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcDieProc,4, 8794, 6, 1.2, NULL, 8793, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcDieProc,4, 8794, 10, 1.3, NULL, 8793, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcDieProc,8, 8794, 9, 2.0, NULL, 8793, NULL)
#elif defined __s390x__
CheckTypeSize(SmcDieProc,8, 8794, 12, 1.3, NULL, 8793, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcDieProc,8, 8794, 11, 2.0, NULL, 8793, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8793,NULL);\n",architecture,8794,0);
Msg("Find size of SmcDieProc (8794)\n");
#endif

#if defined __i386__
CheckTypeSize(SmcShutdownCancelledProc,4, 8796, 2, 1.2, NULL, 8795, NULL)
#elif defined __ia64__
CheckTypeSize(SmcShutdownCancelledProc,8, 8796, 3, 1.3, NULL, 8795, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcShutdownCancelledProc,4, 8796, 6, 1.2, NULL, 8795, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcShutdownCancelledProc,4, 8796, 10, 1.3, NULL, 8795, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcShutdownCancelledProc,8, 8796, 9, 2.0, NULL, 8795, NULL)
#elif defined __s390x__
CheckTypeSize(SmcShutdownCancelledProc,8, 8796, 12, 1.3, NULL, 8795, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcShutdownCancelledProc,8, 8796, 11, 2.0, NULL, 8795, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8795,NULL);\n",architecture,8796,0);
Msg("Find size of SmcShutdownCancelledProc (8796)\n");
#endif

#if defined __i386__
CheckTypeSize(SmcSaveCompleteProc,4, 8798, 2, 1.2, NULL, 8797, NULL)
#elif defined __ia64__
CheckTypeSize(SmcSaveCompleteProc,8, 8798, 3, 1.3, NULL, 8797, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcSaveCompleteProc,4, 8798, 6, 1.2, NULL, 8797, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcSaveCompleteProc,4, 8798, 10, 1.3, NULL, 8797, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcSaveCompleteProc,8, 8798, 9, 2.0, NULL, 8797, NULL)
#elif defined __s390x__
CheckTypeSize(SmcSaveCompleteProc,8, 8798, 12, 1.3, NULL, 8797, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcSaveCompleteProc,8, 8798, 11, 2.0, NULL, 8797, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8797,NULL);\n",architecture,8798,0);
Msg("Find size of SmcSaveCompleteProc (8798)\n");
#endif

#if defined __i386__
CheckTypeSize(SmcPropReplyProc,4, 8802, 2, 1.0, NULL, 8799, NULL)
#elif defined __ia64__
CheckTypeSize(SmcPropReplyProc,8, 8802, 3, 1.3, NULL, 8799, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcPropReplyProc,4, 8802, 6, 1.2, NULL, 8799, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcPropReplyProc,4, 8802, 10, 1.3, NULL, 8799, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcPropReplyProc,8, 8802, 9, 2.0, NULL, 8799, NULL)
#elif defined __s390x__
CheckTypeSize(SmcPropReplyProc,8, 8802, 12, 1.3, NULL, 8799, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcPropReplyProc,8, 8802, 11, 2.0, NULL, 8799, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8799,NULL);\n",architecture,8802,0);
Msg("Find size of SmcPropReplyProc (8802)\n");
#endif

#if defined __i386__
CheckTypeSize(SmPropValue,8, 8235, 2, 1.2, NULL, 8234, NULL)
#elif defined __ia64__
CheckTypeSize(SmPropValue,16, 8235, 3, 1.3, NULL, 8234, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmPropValue,8, 8235, 6, 1.2, NULL, 8234, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmPropValue,8, 8235, 10, 1.3, NULL, 8234, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmPropValue,16, 8235, 9, 2.0, NULL, 8234, NULL)
#elif defined __s390x__
CheckTypeSize(SmPropValue,16, 8235, 12, 1.3, NULL, 8234, NULL)
#elif defined __x86_64__
CheckTypeSize(SmPropValue,16, 8235, 11, 2.0, NULL, 8234, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8234,NULL);\n",architecture,8235,0);
Msg("Find size of SmPropValue (8235)\n");
#endif

#if defined __i386__
CheckTypeSize(SmProp,16, 8237, 2, 1.2, NULL, 8236, NULL)
#elif defined __ia64__
CheckTypeSize(SmProp,32, 8237, 3, 1.3, NULL, 8236, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmProp,16, 8237, 6, 1.2, NULL, 8236, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmProp,16, 8237, 10, 1.3, NULL, 8236, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmProp,32, 8237, 9, 2.0, NULL, 8236, NULL)
#elif defined __s390x__
CheckTypeSize(SmProp,32, 8237, 12, 1.3, NULL, 8236, NULL)
#elif defined __x86_64__
CheckTypeSize(SmProp,32, 8237, 11, 2.0, NULL, 8236, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8236,NULL);\n",architecture,8237,0);
Msg("Find size of SmProp (8237)\n");
#endif

#if defined __i386__
CheckTypeSize(SmcCallbacks,32, 8259, 2, 1.2, NULL, 8258, NULL)
#elif defined __ia64__
CheckTypeSize(SmcCallbacks,64, 8259, 3, 1.3, NULL, 8258, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcCallbacks,32, 8259, 6, 1.2, NULL, 8258, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcCallbacks,32, 8259, 10, 1.3, NULL, 8258, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcCallbacks,64, 8259, 9, 2.0, NULL, 8258, NULL)
#elif defined __s390x__
CheckTypeSize(SmcCallbacks,64, 8259, 12, 1.3, NULL, 8258, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcCallbacks,64, 8259, 11, 2.0, NULL, 8258, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8258,NULL);\n",architecture,8259,0);
Msg("Find size of SmcCallbacks (8259)\n");
#endif

#if defined __i386__
CheckTypeSize(SmsSetPropertiesProc,4, 8818, 2, 1.2, NULL, 8817, NULL)
#elif defined __ia64__
CheckTypeSize(SmsSetPropertiesProc,8, 8818, 3, 1.3, NULL, 8817, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsSetPropertiesProc,4, 8818, 6, 1.2, NULL, 8817, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsSetPropertiesProc,4, 8818, 10, 1.3, NULL, 8817, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsSetPropertiesProc,8, 8818, 9, 2.0, NULL, 8817, NULL)
#elif defined __s390x__
CheckTypeSize(SmsSetPropertiesProc,8, 8818, 12, 1.3, NULL, 8817, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsSetPropertiesProc,8, 8818, 11, 2.0, NULL, 8817, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8817,NULL);\n",architecture,8818,0);
Msg("Find size of SmsSetPropertiesProc (8818)\n");
#endif

#if defined __i386__
CheckTypeSize(SmsDeletePropertiesProc,4, 8820, 2, 1.2, NULL, 8819, NULL)
#elif defined __ia64__
CheckTypeSize(SmsDeletePropertiesProc,8, 8820, 3, 1.3, NULL, 8819, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsDeletePropertiesProc,4, 8820, 6, 1.2, NULL, 8819, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsDeletePropertiesProc,4, 8820, 10, 1.3, NULL, 8819, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsDeletePropertiesProc,8, 8820, 9, 2.0, NULL, 8819, NULL)
#elif defined __s390x__
CheckTypeSize(SmsDeletePropertiesProc,8, 8820, 12, 1.3, NULL, 8819, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsDeletePropertiesProc,8, 8820, 11, 2.0, NULL, 8819, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8819,NULL);\n",architecture,8820,0);
Msg("Find size of SmsDeletePropertiesProc (8820)\n");
#endif

#if defined __i386__
CheckTypeSize(SmsGetPropertiesProc,4, 8822, 2, 1.2, NULL, 8821, NULL)
#elif defined __ia64__
CheckTypeSize(SmsGetPropertiesProc,8, 8822, 3, 1.3, NULL, 8821, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsGetPropertiesProc,4, 8822, 6, 1.2, NULL, 8821, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsGetPropertiesProc,4, 8822, 10, 1.3, NULL, 8821, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsGetPropertiesProc,8, 8822, 9, 2.0, NULL, 8821, NULL)
#elif defined __s390x__
CheckTypeSize(SmsGetPropertiesProc,8, 8822, 12, 1.3, NULL, 8821, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsGetPropertiesProc,8, 8822, 11, 2.0, NULL, 8821, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8821,NULL);\n",architecture,8822,0);
Msg("Find size of SmsGetPropertiesProc (8822)\n");
#endif

#if defined __i386__
CheckTypeSize(SmsCallbacks,80, 8291, 2, 1.0, NULL, 8290, NULL)
#elif defined __ia64__
CheckTypeSize(SmsCallbacks,160, 8291, 3, 1.3, NULL, 8290, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsCallbacks,80, 8291, 6, 1.2, NULL, 8290, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsCallbacks,80, 8291, 10, 1.3, NULL, 8290, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsCallbacks,160, 8291, 9, 2.0, NULL, 8290, NULL)
#elif defined __s390x__
CheckTypeSize(SmsCallbacks,160, 8291, 12, 1.3, NULL, 8290, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsCallbacks,160, 8291, 11, 2.0, NULL, 8290, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8290,NULL);\n",architecture,8291,0);
Msg("Find size of SmsCallbacks (8291)\n");
#endif

#if defined __i386__
CheckTypeSize(SmsNewClientProc,4, 8825, 2, 1.0, NULL, 8823, NULL)
#elif defined __ia64__
CheckTypeSize(SmsNewClientProc,8, 8825, 3, 1.3, NULL, 8823, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsNewClientProc,4, 8825, 6, 1.2, NULL, 8823, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsNewClientProc,4, 8825, 10, 1.3, NULL, 8823, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsNewClientProc,8, 8825, 9, 2.0, NULL, 8823, NULL)
#elif defined __s390x__
CheckTypeSize(SmsNewClientProc,8, 8825, 12, 1.3, NULL, 8823, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsNewClientProc,8, 8825, 11, 2.0, NULL, 8823, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8823,NULL);\n",architecture,8825,0);
Msg("Find size of SmsNewClientProc (8825)\n");
#endif

#if defined __i386__
CheckTypeSize(SmcErrorHandler,4, 8827, 2, 1.0, NULL, 8826, NULL)
#elif defined __ia64__
CheckTypeSize(SmcErrorHandler,8, 8827, 3, 1.3, NULL, 8826, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcErrorHandler,4, 8827, 6, 1.2, NULL, 8826, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcErrorHandler,4, 8827, 10, 1.3, NULL, 8826, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcErrorHandler,8, 8827, 9, 2.0, NULL, 8826, NULL)
#elif defined __s390x__
CheckTypeSize(SmcErrorHandler,8, 8827, 12, 1.3, NULL, 8826, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcErrorHandler,8, 8827, 11, 2.0, NULL, 8826, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8826,NULL);\n",architecture,8827,0);
Msg("Find size of SmcErrorHandler (8827)\n");
#endif

#if defined __i386__
CheckTypeSize(SmsErrorHandler,4, 8829, 2, 1.0, NULL, 8828, NULL)
#elif defined __ia64__
CheckTypeSize(SmsErrorHandler,8, 8829, 3, 1.3, NULL, 8828, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmsErrorHandler,4, 8829, 6, 1.2, NULL, 8828, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmsErrorHandler,4, 8829, 10, 1.3, NULL, 8828, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmsErrorHandler,8, 8829, 9, 2.0, NULL, 8828, NULL)
#elif defined __s390x__
CheckTypeSize(SmsErrorHandler,8, 8829, 12, 1.3, NULL, 8828, NULL)
#elif defined __x86_64__
CheckTypeSize(SmsErrorHandler,8, 8829, 11, 2.0, NULL, 8828, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8828,NULL);\n",architecture,8829,0);
Msg("Find size of SmsErrorHandler (8829)\n");
#endif

#if defined __i386__
CheckTypeSize(SmcCloseStatus,4, 8786, 2, 1.0, NULL, 8785, NULL)
#elif defined __ia64__
CheckTypeSize(SmcCloseStatus,4, 8786, 3, 1.3, NULL, 8785, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(SmcCloseStatus,4, 8786, 6, 1.2, NULL, 8785, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(SmcCloseStatus,4, 8786, 10, 1.3, NULL, 8785, NULL)
#elif defined __powerpc64__
CheckTypeSize(SmcCloseStatus,4, 8786, 9, 2.0, NULL, 8785, NULL)
#elif defined __s390x__
CheckTypeSize(SmcCloseStatus,4, 8786, 12, 1.3, NULL, 8785, NULL)
#elif defined __x86_64__
CheckTypeSize(SmcCloseStatus,4, 8786, 11, 2.0, NULL, 8785, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8785, NULL);\n",architecture,8786,0);
Msg("Find size of SmcCloseStatus (8786)\n");
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
