/*
 * Test of X11/SM/SMlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/SM/SMlib.h"



int X11_SM_SMlib_h()
{
int cnt=0;
CheckTypeSize(SmcDieProc,4)
CheckTypeSize(SmcShutdownCancelledProc,4)
CheckTypeSize(SmcSaveCompleteProc,4)
CheckTypeSize(SmcPropReplyProc,4)
CheckTypeSize(SmcCallbacks,32)
CheckTypeSize(SmsRegisterClientProc,4)
CheckTypeSize(SmsInteractRequestProc,4)
CheckTypeSize(SmsInteractDoneProc,4)
CheckTypeSize(SmsSaveYourselfRequestProc,4)
CheckTypeSize(SmsSaveYourselfPhase2RequestProc,4)
CheckTypeSize(SmsSaveYourselfDoneProc,4)
CheckTypeSize(SmsCloseConnectionProc,4)
CheckTypeSize(SmsSetPropertiesProc,4)
CheckTypeSize(SmsDeletePropertiesProc,4)
CheckTypeSize(SmsGetPropertiesProc,4)
CheckTypeSize(SmsCallbacks,80)
CheckTypeSize(SmsNewClientProc,4)
CheckTypeSize(SmcErrorHandler,4)
CheckTypeSize(SmsErrorHandler,4)
CheckTypeSize(SmcInteractProc,4)
CheckTypeSize(SmcSaveYourselfPhase2Proc,4)
CheckTypeSize(SmcSaveYourselfProc,4)
CheckTypeSize(SmcCloseStatus,4)
CheckTypeSize(SmProp,16)
CheckTypeSize(SmPropValue,8)
CheckTypeSize(SmsConn,4)
CheckTypeSize(SmcConn,4)
CheckTypeSize(SmPointer,4)
printf("%d tests in X11/SM/SMlib.h\n",cnt);
return cnt;
}
