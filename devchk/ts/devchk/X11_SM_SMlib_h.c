/*
 * Test of X11/SM/SMlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8231,0);
#endif

#ifdef __i386__
CheckTypeSize(SmcConn,4, 8232, 2)
#elif __ia64__
CheckTypeSize(SmcConn,8, 8232, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8232,0);
#endif

#ifdef __i386__
CheckTypeSize(SmsConn,4, 8233, 2)
#elif __ia64__
CheckTypeSize(SmsConn,8, 8233, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8233,0);
#endif

#ifdef __i386__
CheckTypeSize(SmcSaveYourselfPhase2Proc,4, 8790, 2)
#elif __ia64__
CheckTypeSize(SmcSaveYourselfPhase2Proc,8, 8790, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8790,0);
#endif

#ifdef __i386__
CheckTypeSize(SmcInteractProc,4, 8792, 2)
#elif __ia64__
CheckTypeSize(SmcInteractProc,8, 8792, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8792,0);
#endif

#ifdef __i386__
CheckTypeSize(SmcDieProc,4, 8794, 2)
#elif __ia64__
CheckTypeSize(SmcDieProc,8, 8794, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8794,0);
#endif

#ifdef __i386__
CheckTypeSize(SmcShutdownCancelledProc,4, 8796, 2)
#elif __ia64__
CheckTypeSize(SmcShutdownCancelledProc,8, 8796, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8796,0);
#endif

#ifdef __i386__
CheckTypeSize(SmcSaveCompleteProc,4, 8798, 2)
#elif __ia64__
CheckTypeSize(SmcSaveCompleteProc,8, 8798, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8798,0);
#endif

#ifdef __i386__
CheckTypeSize(SmcPropReplyProc,4, 8802, 2)
#elif __ia64__
CheckTypeSize(SmcPropReplyProc,8, 8802, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8802,0);
#endif

#ifdef __i386__
CheckTypeSize(SmPropValue,8, 8235, 2)
#elif __ia64__
CheckTypeSize(SmPropValue,16, 8235, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8235,0);
#endif

#ifdef __i386__
CheckTypeSize(SmProp,16, 8237, 2)
#elif __ia64__
CheckTypeSize(SmProp,32, 8237, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8237,0);
#endif

#ifdef __i386__
CheckTypeSize(SmcCallbacks,32, 8259, 2)
#elif __ia64__
CheckTypeSize(SmcCallbacks,64, 8259, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8259,0);
#endif

#ifdef __i386__
CheckTypeSize(SmsSetPropertiesProc,4, 8818, 2)
#elif __ia64__
CheckTypeSize(SmsSetPropertiesProc,8, 8818, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8818,0);
#endif

#ifdef __i386__
CheckTypeSize(SmsDeletePropertiesProc,4, 8820, 2)
#elif __ia64__
CheckTypeSize(SmsDeletePropertiesProc,8, 8820, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8820,0);
#endif

#ifdef __i386__
CheckTypeSize(SmsGetPropertiesProc,4, 8822, 2)
#elif __ia64__
CheckTypeSize(SmsGetPropertiesProc,8, 8822, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8822,0);
#endif

#ifdef __i386__
CheckTypeSize(SmsCallbacks,80, 8291, 2)
#elif __ia64__
CheckTypeSize(SmsCallbacks,160, 8291, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8291,0);
#endif

#ifdef __i386__
CheckTypeSize(SmsNewClientProc,4, 8825, 2)
#elif __ia64__
CheckTypeSize(SmsNewClientProc,8, 8825, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8825,0);
#endif

#ifdef __i386__
CheckTypeSize(SmcErrorHandler,4, 8827, 2)
#elif __ia64__
CheckTypeSize(SmcErrorHandler,8, 8827, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8827,0);
#endif

#ifdef __i386__
CheckTypeSize(SmsErrorHandler,4, 8829, 2)
#elif __ia64__
CheckTypeSize(SmsErrorHandler,8, 8829, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8829,0);
#endif

#ifdef __i386__
CheckTypeSize(SmcCloseStatus,4, 8786, 2)
#elif __ia64__
CheckTypeSize(SmcCloseStatus,4, 8786, 3)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8786,0);
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
