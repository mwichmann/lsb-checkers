/*
 * Test of X11/ICE/ICElib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/ICE/ICElib.h"



int X11_ICE_ICElib_h()
{
int cnt=0;
CheckTypeSize(IceWatchProc,0)
CheckTypeSize(IceListenObj,0)
CheckTypeSize(IceConn,0)
CheckTypeSize(IceProcessMessagesStatus,0)
CheckTypeSize(IceCloseStatus,0)
CheckTypeSize(IceProtocolSetupStatus,0)
CheckTypeSize(IceConnectStatus,0)
CheckTypeSize(IcePointer,0)
CheckTypeSize(IceHostBasedAuthProc,0)
CheckTypeSize(IceProtocolSetupProc,0)
CheckTypeSize(IceProtocolActivateProc,0)
CheckTypeSize(IceIOErrorProc,0)
CheckTypeSize(IcePingReplyProc,0)
CheckTypeSize(IceErrorHandler,0)
CheckTypeSize(IceIOErrorHandler,0)
printf("%d tests in X11/ICE/ICElib.h\n",cnt);
return cnt;
}
