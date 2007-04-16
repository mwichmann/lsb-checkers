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
#if __i386__
CheckTypeSize(SmPointer,4, 8231, 2);
#elif __ia64__
CheckTypeSize(SmPointer,8, 8231, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmPointer,4, 8231, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmPointer,4, 8231, 10);
#elif __powerpc64__
CheckTypeSize(SmPointer,8, 8231, 9);
#elif __s390x__
CheckTypeSize(SmPointer,8, 8231, 12);
#elif __x86_64__
CheckTypeSize(SmPointer,8, 8231, 11);
#elif 1
CheckTypeSize(SmPointer,0, 8231, 1);
#endif

#if __i386__
CheckTypeSize(SmcConn,4, 8232, 2);
#elif __ia64__
CheckTypeSize(SmcConn,8, 8232, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmcConn,4, 8232, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmcConn,4, 8232, 10);
#elif __powerpc64__
CheckTypeSize(SmcConn,8, 8232, 9);
#elif __s390x__
CheckTypeSize(SmcConn,8, 8232, 12);
#elif __x86_64__
CheckTypeSize(SmcConn,8, 8232, 11);
#elif 1
CheckTypeSize(SmcConn,0, 8232, 1);
#endif

#if __i386__
CheckTypeSize(SmsConn,4, 8233, 2);
#elif __ia64__
CheckTypeSize(SmsConn,8, 8233, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmsConn,4, 8233, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmsConn,4, 8233, 10);
#elif __powerpc64__
CheckTypeSize(SmsConn,8, 8233, 9);
#elif __s390x__
CheckTypeSize(SmsConn,8, 8233, 12);
#elif __x86_64__
CheckTypeSize(SmsConn,8, 8233, 11);
#elif 1
CheckTypeSize(SmsConn,0, 8233, 1);
#endif

#if __i386__
CheckTypeSize(SmcSaveYourselfPhase2Proc,4, 8790, 2);
#elif __ia64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 8790, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,4, 8790, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmcSaveYourselfPhase2Proc,4, 8790, 10);
#elif __powerpc64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 8790, 9);
#elif __s390x__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 8790, 12);
#elif __x86_64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 8790, 11);
#elif 1
CheckTypeSize(SmcSaveYourselfPhase2Proc,0, 8790, 1);
#endif

#if __i386__
CheckTypeSize(SmcInteractProc,4, 8792, 2);
#elif __ia64__
CheckTypeSize(SmcInteractProc,8, 8792, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmcInteractProc,4, 8792, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmcInteractProc,4, 8792, 10);
#elif __powerpc64__
CheckTypeSize(SmcInteractProc,8, 8792, 9);
#elif __s390x__
CheckTypeSize(SmcInteractProc,8, 8792, 12);
#elif __x86_64__
CheckTypeSize(SmcInteractProc,8, 8792, 11);
#elif 1
CheckTypeSize(SmcInteractProc,0, 8792, 1);
#endif

#if __i386__
CheckTypeSize(SmcDieProc,4, 8794, 2);
#elif __ia64__
CheckTypeSize(SmcDieProc,8, 8794, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmcDieProc,4, 8794, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmcDieProc,4, 8794, 10);
#elif __powerpc64__
CheckTypeSize(SmcDieProc,8, 8794, 9);
#elif __s390x__
CheckTypeSize(SmcDieProc,8, 8794, 12);
#elif __x86_64__
CheckTypeSize(SmcDieProc,8, 8794, 11);
#elif 1
CheckTypeSize(SmcDieProc,0, 8794, 1);
#endif

#if __i386__
CheckTypeSize(SmcShutdownCancelledProc,4, 8796, 2);
#elif __ia64__
CheckTypeSize(SmcShutdownCancelledProc,8, 8796, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmcShutdownCancelledProc,4, 8796, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmcShutdownCancelledProc,4, 8796, 10);
#elif __powerpc64__
CheckTypeSize(SmcShutdownCancelledProc,8, 8796, 9);
#elif __s390x__
CheckTypeSize(SmcShutdownCancelledProc,8, 8796, 12);
#elif __x86_64__
CheckTypeSize(SmcShutdownCancelledProc,8, 8796, 11);
#elif 1
CheckTypeSize(SmcShutdownCancelledProc,0, 8796, 1);
#endif

#if __i386__
CheckTypeSize(SmcSaveCompleteProc,4, 8798, 2);
#elif __ia64__
CheckTypeSize(SmcSaveCompleteProc,8, 8798, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmcSaveCompleteProc,4, 8798, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmcSaveCompleteProc,4, 8798, 10);
#elif __powerpc64__
CheckTypeSize(SmcSaveCompleteProc,8, 8798, 9);
#elif __s390x__
CheckTypeSize(SmcSaveCompleteProc,8, 8798, 12);
#elif __x86_64__
CheckTypeSize(SmcSaveCompleteProc,8, 8798, 11);
#elif 1
CheckTypeSize(SmcSaveCompleteProc,0, 8798, 1);
#endif

#if __i386__
CheckTypeSize(SmcPropReplyProc,4, 8802, 2);
#elif __ia64__
CheckTypeSize(SmcPropReplyProc,8, 8802, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmcPropReplyProc,4, 8802, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmcPropReplyProc,4, 8802, 10);
#elif __powerpc64__
CheckTypeSize(SmcPropReplyProc,8, 8802, 9);
#elif __s390x__
CheckTypeSize(SmcPropReplyProc,8, 8802, 12);
#elif __x86_64__
CheckTypeSize(SmcPropReplyProc,8, 8802, 11);
#elif 1
CheckTypeSize(SmcPropReplyProc,0, 8802, 1);
#endif

#if __i386__
CheckTypeSize(SmPropValue,8, 8235, 2);
#elif __ia64__
CheckTypeSize(SmPropValue,16, 8235, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmPropValue,8, 8235, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmPropValue,8, 8235, 10);
#elif __powerpc64__
CheckTypeSize(SmPropValue,16, 8235, 9);
#elif __s390x__
CheckTypeSize(SmPropValue,16, 8235, 12);
#elif __x86_64__
CheckTypeSize(SmPropValue,16, 8235, 11);
#elif 1
CheckTypeSize(SmPropValue,0, 8235, 1);
#endif

#if __i386__
CheckTypeSize(SmProp,16, 8237, 2);
#elif __ia64__
CheckTypeSize(SmProp,32, 8237, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmProp,16, 8237, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmProp,16, 8237, 10);
#elif __powerpc64__
CheckTypeSize(SmProp,32, 8237, 9);
#elif __s390x__
CheckTypeSize(SmProp,32, 8237, 12);
#elif __x86_64__
CheckTypeSize(SmProp,32, 8237, 11);
#elif 1
CheckTypeSize(SmProp,0, 8237, 1);
#endif

#if __i386__
CheckTypeSize(SmcCallbacks,32, 8259, 2);
#elif __ia64__
CheckTypeSize(SmcCallbacks,64, 8259, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmcCallbacks,32, 8259, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmcCallbacks,32, 8259, 10);
#elif __powerpc64__
CheckTypeSize(SmcCallbacks,64, 8259, 9);
#elif __s390x__
CheckTypeSize(SmcCallbacks,64, 8259, 12);
#elif __x86_64__
CheckTypeSize(SmcCallbacks,64, 8259, 11);
#elif 1
CheckTypeSize(SmcCallbacks,0, 8259, 1);
#endif

#if __i386__
CheckTypeSize(SmsSetPropertiesProc,4, 8818, 2);
#elif __ia64__
CheckTypeSize(SmsSetPropertiesProc,8, 8818, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmsSetPropertiesProc,4, 8818, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmsSetPropertiesProc,4, 8818, 10);
#elif __powerpc64__
CheckTypeSize(SmsSetPropertiesProc,8, 8818, 9);
#elif __s390x__
CheckTypeSize(SmsSetPropertiesProc,8, 8818, 12);
#elif __x86_64__
CheckTypeSize(SmsSetPropertiesProc,8, 8818, 11);
#elif 1
CheckTypeSize(SmsSetPropertiesProc,0, 8818, 1);
#endif

#if __i386__
CheckTypeSize(SmsDeletePropertiesProc,4, 8820, 2);
#elif __ia64__
CheckTypeSize(SmsDeletePropertiesProc,8, 8820, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmsDeletePropertiesProc,4, 8820, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmsDeletePropertiesProc,4, 8820, 10);
#elif __powerpc64__
CheckTypeSize(SmsDeletePropertiesProc,8, 8820, 9);
#elif __s390x__
CheckTypeSize(SmsDeletePropertiesProc,8, 8820, 12);
#elif __x86_64__
CheckTypeSize(SmsDeletePropertiesProc,8, 8820, 11);
#elif 1
CheckTypeSize(SmsDeletePropertiesProc,0, 8820, 1);
#endif

#if __i386__
CheckTypeSize(SmsGetPropertiesProc,4, 8822, 2);
#elif __ia64__
CheckTypeSize(SmsGetPropertiesProc,8, 8822, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmsGetPropertiesProc,4, 8822, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmsGetPropertiesProc,4, 8822, 10);
#elif __powerpc64__
CheckTypeSize(SmsGetPropertiesProc,8, 8822, 9);
#elif __s390x__
CheckTypeSize(SmsGetPropertiesProc,8, 8822, 12);
#elif __x86_64__
CheckTypeSize(SmsGetPropertiesProc,8, 8822, 11);
#elif 1
CheckTypeSize(SmsGetPropertiesProc,0, 8822, 1);
#endif

#if __i386__
CheckTypeSize(SmsCallbacks,80, 8291, 2);
#elif __ia64__
CheckTypeSize(SmsCallbacks,160, 8291, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmsCallbacks,80, 8291, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmsCallbacks,80, 8291, 10);
#elif __powerpc64__
CheckTypeSize(SmsCallbacks,160, 8291, 9);
#elif __s390x__
CheckTypeSize(SmsCallbacks,160, 8291, 12);
#elif __x86_64__
CheckTypeSize(SmsCallbacks,160, 8291, 11);
#elif 1
CheckTypeSize(SmsCallbacks,0, 8291, 1);
#endif

#if __i386__
CheckTypeSize(SmsNewClientProc,4, 8825, 2);
#elif __ia64__
CheckTypeSize(SmsNewClientProc,8, 8825, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmsNewClientProc,4, 8825, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmsNewClientProc,4, 8825, 10);
#elif __powerpc64__
CheckTypeSize(SmsNewClientProc,8, 8825, 9);
#elif __s390x__
CheckTypeSize(SmsNewClientProc,8, 8825, 12);
#elif __x86_64__
CheckTypeSize(SmsNewClientProc,8, 8825, 11);
#elif 1
CheckTypeSize(SmsNewClientProc,0, 8825, 1);
#endif

#if __i386__
CheckTypeSize(SmcErrorHandler,4, 8827, 2);
#elif __ia64__
CheckTypeSize(SmcErrorHandler,8, 8827, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmcErrorHandler,4, 8827, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmcErrorHandler,4, 8827, 10);
#elif __powerpc64__
CheckTypeSize(SmcErrorHandler,8, 8827, 9);
#elif __s390x__
CheckTypeSize(SmcErrorHandler,8, 8827, 12);
#elif __x86_64__
CheckTypeSize(SmcErrorHandler,8, 8827, 11);
#elif 1
CheckTypeSize(SmcErrorHandler,0, 8827, 1);
#endif

#if __i386__
CheckTypeSize(SmsErrorHandler,4, 8829, 2);
#elif __ia64__
CheckTypeSize(SmsErrorHandler,8, 8829, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmsErrorHandler,4, 8829, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmsErrorHandler,4, 8829, 10);
#elif __powerpc64__
CheckTypeSize(SmsErrorHandler,8, 8829, 9);
#elif __s390x__
CheckTypeSize(SmsErrorHandler,8, 8829, 12);
#elif __x86_64__
CheckTypeSize(SmsErrorHandler,8, 8829, 11);
#elif 1
CheckTypeSize(SmsErrorHandler,0, 8829, 1);
#endif

#if __i386__
CheckTypeSize(SmcCloseStatus,4, 8786, 2);
#elif __ia64__
CheckTypeSize(SmcCloseStatus,4, 8786, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(SmcCloseStatus,4, 8786, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(SmcCloseStatus,4, 8786, 10);
#elif __powerpc64__
CheckTypeSize(SmcCloseStatus,4, 8786, 9);
#elif __s390x__
CheckTypeSize(SmcCloseStatus,4, 8786, 12);
#elif __x86_64__
CheckTypeSize(SmcCloseStatus,4, 8786, 11);
#elif 1
CheckTypeSize(SmcCloseStatus,0, 8786, 1);
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
