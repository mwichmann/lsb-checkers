/*
 * Test of X11/SM/SMlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/SM/SMlib.h\n");
#endif

#ifdef __i386__
CheckTypeSize(SmPointer,4, 8231, 2)
#elif __ia64__
CheckTypeSize(SmPointer,8, 8231, 3)
#elif __powerpc__
CheckTypeSize(SmPointer,4, 8231, 6)
#elif __s390__
CheckTypeSize(SmPointer,0, 8231, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8231,0);
Msg("Find size of SmPointer (8231)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmcConn,4, 8232, 2)
#elif __ia64__
CheckTypeSize(SmcConn,8, 8232, 3)
#elif __powerpc__
CheckTypeSize(SmcConn,4, 8232, 6)
#elif __s390__
CheckTypeSize(SmcConn,0, 8232, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8232,0);
Msg("Find size of SmcConn (8232)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmsConn,4, 8233, 2)
#elif __ia64__
CheckTypeSize(SmsConn,8, 8233, 3)
#elif __powerpc__
CheckTypeSize(SmsConn,4, 8233, 6)
#elif __s390__
CheckTypeSize(SmsConn,0, 8233, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8233,0);
Msg("Find size of SmsConn (8233)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmcSaveYourselfPhase2Proc,4, 8790, 2)
#elif __ia64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 8790, 3)
#elif __powerpc__
CheckTypeSize(SmcSaveYourselfPhase2Proc,4, 8790, 6)
#elif __s390__
CheckTypeSize(SmcSaveYourselfPhase2Proc,0, 8790, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8790,0);
Msg("Find size of SmcSaveYourselfPhase2Proc (8790)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmcInteractProc,4, 8792, 2)
#elif __ia64__
CheckTypeSize(SmcInteractProc,8, 8792, 3)
#elif __powerpc__
CheckTypeSize(SmcInteractProc,4, 8792, 6)
#elif __s390__
CheckTypeSize(SmcInteractProc,0, 8792, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8792,0);
Msg("Find size of SmcInteractProc (8792)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmcDieProc,4, 8794, 2)
#elif __ia64__
CheckTypeSize(SmcDieProc,8, 8794, 3)
#elif __powerpc__
CheckTypeSize(SmcDieProc,4, 8794, 6)
#elif __s390__
CheckTypeSize(SmcDieProc,0, 8794, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8794,0);
Msg("Find size of SmcDieProc (8794)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmcShutdownCancelledProc,4, 8796, 2)
#elif __ia64__
CheckTypeSize(SmcShutdownCancelledProc,8, 8796, 3)
#elif __powerpc__
CheckTypeSize(SmcShutdownCancelledProc,4, 8796, 6)
#elif __s390__
CheckTypeSize(SmcShutdownCancelledProc,0, 8796, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8796,0);
Msg("Find size of SmcShutdownCancelledProc (8796)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmcSaveCompleteProc,4, 8798, 2)
#elif __ia64__
CheckTypeSize(SmcSaveCompleteProc,8, 8798, 3)
#elif __powerpc__
CheckTypeSize(SmcSaveCompleteProc,4, 8798, 6)
#elif __s390__
CheckTypeSize(SmcSaveCompleteProc,0, 8798, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8798,0);
Msg("Find size of SmcSaveCompleteProc (8798)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmcPropReplyProc,4, 8802, 2)
#elif __ia64__
CheckTypeSize(SmcPropReplyProc,8, 8802, 3)
#elif __powerpc__
CheckTypeSize(SmcPropReplyProc,4, 8802, 6)
#elif __s390__
CheckTypeSize(SmcPropReplyProc,0, 8802, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8802,0);
Msg("Find size of SmcPropReplyProc (8802)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmPropValue,8, 8235, 2)
#elif __ia64__
CheckTypeSize(SmPropValue,16, 8235, 3)
#elif __powerpc__
CheckTypeSize(SmPropValue,8, 8235, 6)
#elif __s390__
CheckTypeSize(SmPropValue,0, 8235, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8235,0);
Msg("Find size of SmPropValue (8235)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmProp,16, 8237, 2)
#elif __ia64__
CheckTypeSize(SmProp,32, 8237, 3)
#elif __powerpc__
CheckTypeSize(SmProp,16, 8237, 6)
#elif __s390__
CheckTypeSize(SmProp,0, 8237, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8237,0);
Msg("Find size of SmProp (8237)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmcCallbacks,32, 8259, 2)
#elif __ia64__
CheckTypeSize(SmcCallbacks,64, 8259, 3)
#elif __powerpc__
CheckTypeSize(SmcCallbacks,32, 8259, 6)
#elif __s390__
CheckTypeSize(SmcCallbacks,0, 8259, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8259,0);
Msg("Find size of SmcCallbacks (8259)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmsSetPropertiesProc,4, 8818, 2)
#elif __ia64__
CheckTypeSize(SmsSetPropertiesProc,8, 8818, 3)
#elif __powerpc__
CheckTypeSize(SmsSetPropertiesProc,4, 8818, 6)
#elif __s390__
CheckTypeSize(SmsSetPropertiesProc,0, 8818, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8818,0);
Msg("Find size of SmsSetPropertiesProc (8818)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmsDeletePropertiesProc,4, 8820, 2)
#elif __ia64__
CheckTypeSize(SmsDeletePropertiesProc,8, 8820, 3)
#elif __powerpc__
CheckTypeSize(SmsDeletePropertiesProc,4, 8820, 6)
#elif __s390__
CheckTypeSize(SmsDeletePropertiesProc,0, 8820, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8820,0);
Msg("Find size of SmsDeletePropertiesProc (8820)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmsGetPropertiesProc,4, 8822, 2)
#elif __ia64__
CheckTypeSize(SmsGetPropertiesProc,8, 8822, 3)
#elif __powerpc__
CheckTypeSize(SmsGetPropertiesProc,4, 8822, 6)
#elif __s390__
CheckTypeSize(SmsGetPropertiesProc,0, 8822, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8822,0);
Msg("Find size of SmsGetPropertiesProc (8822)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmsCallbacks,80, 8291, 2)
#elif __ia64__
CheckTypeSize(SmsCallbacks,160, 8291, 3)
#elif __powerpc__
CheckTypeSize(SmsCallbacks,80, 8291, 6)
#elif __s390__
CheckTypeSize(SmsCallbacks,0, 8291, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8291,0);
Msg("Find size of SmsCallbacks (8291)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmsNewClientProc,4, 8825, 2)
#elif __ia64__
CheckTypeSize(SmsNewClientProc,8, 8825, 3)
#elif __powerpc__
CheckTypeSize(SmsNewClientProc,4, 8825, 6)
#elif __s390__
CheckTypeSize(SmsNewClientProc,0, 8825, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8825,0);
Msg("Find size of SmsNewClientProc (8825)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmcErrorHandler,4, 8827, 2)
#elif __ia64__
CheckTypeSize(SmcErrorHandler,8, 8827, 3)
#elif __powerpc__
CheckTypeSize(SmcErrorHandler,4, 8827, 6)
#elif __s390__
CheckTypeSize(SmcErrorHandler,0, 8827, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8827,0);
Msg("Find size of SmcErrorHandler (8827)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmsErrorHandler,4, 8829, 2)
#elif __ia64__
CheckTypeSize(SmsErrorHandler,8, 8829, 3)
#elif __powerpc__
CheckTypeSize(SmsErrorHandler,4, 8829, 6)
#elif __s390__
CheckTypeSize(SmsErrorHandler,0, 8829, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8829,0);
Msg("Find size of SmsErrorHandler (8829)\n");
#endif

#ifdef __i386__
CheckTypeSize(SmcCloseStatus,4, 8786, 2)
#elif __ia64__
CheckTypeSize(SmcCloseStatus,4, 8786, 3)
#elif __powerpc__
CheckTypeSize(SmcCloseStatus,4, 8786, 6)
#elif __s390__
CheckTypeSize(SmcCloseStatus,0, 8786, 10)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8786,0);
Msg("Find size of SmcCloseStatus (8786)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/SM/SMlib.h\n",cnt);
return cnt;
#endif

}
