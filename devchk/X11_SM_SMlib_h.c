/*
 * Test of X11/SM/SMlib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/SM/SMlib.h"



int X11_SM_SMlib_h()
{
int cnt=0;
CheckTypeSize(SmcPropReplyProc,0)
CheckTypeSize(SmcInteractProc,0)
CheckTypeSize(SmcSaveYourselfPhase2Proc,0)
CheckTypeSize(SmcCloseStatus,0)
CheckTypeSize(SmsConn,0)
CheckTypeSize(SmcConn,0)
CheckTypeSize(SmsNewClientProc,0)
CheckTypeSize(SmcErrorHandler,0)
CheckTypeSize(SmsErrorHandler,0)
CheckTypeSize(SmPointer,0)
printf("%d tests in X11/SM/SMlib.h\n",cnt);
return cnt;
}
