/*
 * Test of X11/ICE/ICElib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#include "X11/ICE/ICElib.h"



int X11_ICE_ICElib_h()
{
int cnt=0;
CheckTypeSize(IceProtocolSetupStatus,4)
CheckTypeSize(IceAcceptStatus,4)
CheckTypeSize(IceCloseStatus,4)
CheckTypeSize(IceProcessMessagesStatus,4)
CheckTypeSize(IceReplyWaitInfo,16)
CheckTypeSize(IceConn,4)
CheckTypeSize(IceListenObj,4)
CheckTypeSize(IceWatchProc,4)
CheckTypeSize(IcePoVersionRec,12)
CheckTypeSize(IcePaVersionRec,12)
CheckTypeSize(IcePoAuthProc,4)
CheckTypeSize(IcePaAuthProc,4)
CheckTypeSize(IceHostBasedAuthProc,4)
CheckTypeSize(IceProtocolSetupProc,4)
CheckTypeSize(IceProtocolActivateProc,4)
CheckTypeSize(IceIOErrorProc,4)
CheckTypeSize(IcePingReplyProc,4)
CheckTypeSize(IceErrorHandler,4)
CheckTypeSize(IceIOErrorHandler,4)
CheckTypeSize(IceConnectStatus,4)
CheckTypeSize(IcePointer,4)
printf("%d tests in X11/ICE/ICElib.h\n",cnt);
return cnt;
}
