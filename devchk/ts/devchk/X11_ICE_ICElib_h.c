/*
 * Test of X11/ICE/ICElib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
struct _IceListenObj {};
#include "X11/ICE/ICElib.h"



#ifdef TET_TEST
void X11_ICE_ICElib_h()
{
#else
int X11_ICE_ICElib_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/ICE/ICElib.h\n");
#endif

printf("Checking data structures in X11/ICE/ICElib.h\n");
#if 1
CheckTypeSize(IcePointer,8, 100099, 1, 1.2, NULL, 40, NULL)
#endif

#if 1
CheckTypeSize(IceConn,8, 100100, 1, 1.2, NULL, 100239, NULL)
#endif

#if 1
CheckTypeSize(IcePaProcessMsgProc,8, 100176, 1, 1.2, NULL, 100007, NULL)
#endif

#if 1
CheckTypeSize(IcePaVersionRec,16, 100178, 1, 1.2, NULL, 100177, NULL)
#endif

#if 1
CheckTypeSize(IcePaVersionRec *,0, 100179, 1, 1.2, NULL, 100178, NULL)
#endif

#if 1
CheckTypeSize(IceReplyWaitInfo,24, 100182, 1, 1.2, NULL, 100181, NULL)
#endif

#if 1
CheckTypeSize(IceReplyWaitInfo *,0, 100183, 1, 1.2, NULL, 100182, NULL)
#endif

#if 1
CheckTypeSize(IcePoProcessMsgProc,8, 100184, 1, 1.2, NULL, 100042, NULL)
#endif

#if 1
CheckTypeSize(IcePoVersionRec,16, 100186, 1, 1.2, NULL, 100185, NULL)
#endif

#if 1
CheckTypeSize(IcePoVersionRec *,0, 100187, 1, 1.2, NULL, 100186, NULL)
#endif

#if 1
CheckTypeSize(IcePoAuthProc,8, 100188, 1, 1.2, NULL, 100034, NULL)
#endif

#if 1
CheckTypeSize(IcePoAuthProc *,0, 100189, 1, 1.2, NULL, 100188, NULL)
#endif

#if 1
CheckTypeSize(IcePaAuthProc,8, 100190, 1, 1.2, NULL, 100052, NULL)
#endif

#if 1
CheckTypeSize(IcePaAuthProc *,0, 100191, 1, 1.2, NULL, 100190, NULL)
#endif

#if 1
CheckEnum("IceAcceptSuccess",IceAcceptSuccess,0,77809)
CheckEnum("IceAcceptFailure",IceAcceptFailure,(0) + 1,77810)
CheckEnum("IceAcceptBadMalloc",IceAcceptBadMalloc,((0) + 1) + 1,77811)
#endif

#if 1
#endif

#if 1
CheckTypeSize(struct _IceListenObj,0, 100194, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _IceListenObj on All\n");
#endif

#if 1
CheckTypeSize(struct _IceListenObj *,0, 100195, 1, 1.2, NULL, 100194, NULL)
#endif

#if 1
CheckTypeSize(IceListenObj,8, 100196, 1, 1.2, NULL, 100195, NULL)
#endif

#if 1
CheckTypeSize(IceListenObj *,0, 100197, 1, 1.2, NULL, 100196, NULL)
#endif

#if 1
#endif

#if 1
CheckEnum("IceConnectPending",IceConnectPending,0,77812)
CheckEnum("IceConnectAccepted",IceConnectAccepted,(0) + 1,77813)
CheckEnum("IceConnectRejected",IceConnectRejected,((0) + 1) + 1,77814)
CheckEnum("IceConnectIOError",IceConnectIOError,(((0) + 1) + 1) + 1,77815)
#endif

#if 1
CheckTypeSize(IceIOErrorProc,8, 100202, 1, 1.2, NULL, 100044, NULL)
#endif

#if 1
CheckTypeSize(IceProtocolSetupProc,8, 100206, 1, 1.2, NULL, 100055, NULL)
#endif

#if 1
CheckTypeSize(IceProtocolActivateProc,8, 100207, 1, 1.2, NULL, 100016, NULL)
#endif

#if 1
CheckTypeSize(IceHostBasedAuthProc,8, 100208, 1, 1.2, NULL, 100049, NULL)
#endif

#if 1
CheckTypeSize(IcePingReplyProc,8, 100222, 1, 1.2, NULL, 100016, NULL)
#endif

#if 1
CheckEnum("IceProcessMessagesSuccess",IceProcessMessagesSuccess,0,77915)
CheckEnum("IceProcessMessagesIOError",IceProcessMessagesIOError,(0) + 1,77916)
CheckEnum("IceProcessMessagesConnectionClosed",IceProcessMessagesConnectionClosed,((0) + 1) + 1,77917)
#endif

#if 1
CheckEnum("IceClosedNow",IceClosedNow,0,77918)
CheckEnum("IceClosedASAP",IceClosedASAP,(0) + 1,77919)
CheckEnum("IceConnectionInUse",IceConnectionInUse,((0) + 1) + 1,77920)
CheckEnum("IceStartedShutdownNegotiation",IceStartedShutdownNegotiation,(((0) + 1) + 1) + 1,77921)
#endif

#if 1
CheckEnum("IceProtocolSetupSuccess",IceProtocolSetupSuccess,0,77922)
CheckEnum("IceProtocolSetupFailure",IceProtocolSetupFailure,(0) + 1,77923)
CheckEnum("IceProtocolSetupIOError",IceProtocolSetupIOError,((0) + 1) + 1,77924)
CheckEnum("IceProtocolAlreadyActive",IceProtocolAlreadyActive,(((0) + 1) + 1) + 1,77925)
#endif

#if 1
CheckTypeSize(IceWatchProc,8, 100244, 1, 1.2, NULL, 100087, NULL)
#endif

#if 1
CheckTypeSize(IceIOErrorHandler,8, 100245, 1, 1.2, NULL, 100044, NULL)
#endif

#if 1
CheckTypeSize(IceErrorHandler,8, 100246, 1, 1.2, NULL, 100091, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/ICE/ICElib.h\n\n",pcnt,cnt);
return cnt;
#endif

}
