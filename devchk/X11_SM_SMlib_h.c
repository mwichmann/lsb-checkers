/*
 * Test of X11/SM/SMlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/SM/SMlib.h"



int X11_SM_SMlib_h()
{
int cnt=0;
CheckTypeSize(SmPointer,4,)
CheckTypeSize(SmcConn,4,)
CheckTypeSize(SmsConn,4,)
CheckTypeSize(SmcCloseStatus,4,)
CheckTypeSize(SmcSaveYourselfPhase2Proc,4,)
CheckTypeSize(SmcInteractProc,4,)
CheckTypeSize(SmcPropReplyProc,4,)
CheckTypeSize(SmsNewClientProc,4,)
CheckTypeSize(SmcErrorHandler,4,)
CheckTypeSize(SmsErrorHandler,4,)
printf("%d tests in X11/SM/SMlib.h\n",cnt);
return cnt;
}
