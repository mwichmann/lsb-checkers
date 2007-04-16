/*
 * Test of X11/ICE/ICElib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#if __i386__
CheckTypeSize(IcePoVersionRec,12, 8206, 2);
#elif __ia64__
CheckTypeSize(IcePoVersionRec,16, 8206, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePoVersionRec,12, 8206, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IcePoVersionRec,12, 8206, 10);
#elif __powerpc64__
CheckTypeSize(IcePoVersionRec,16, 8206, 9);
#elif __s390x__
CheckTypeSize(IcePoVersionRec,16, 8206, 12);
#elif __x86_64__
CheckTypeSize(IcePoVersionRec,16, 8206, 11);
#elif 1
CheckTypeSize(IcePoVersionRec,0, 8206, 1);
#endif

#if __i386__
CheckTypeSize(IcePaVersionRec,12, 8208, 2);
#elif __ia64__
CheckTypeSize(IcePaVersionRec,16, 8208, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePaVersionRec,12, 8208, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IcePaVersionRec,12, 8208, 10);
#elif __powerpc64__
CheckTypeSize(IcePaVersionRec,16, 8208, 9);
#elif __s390x__
CheckTypeSize(IcePaVersionRec,16, 8208, 12);
#elif __x86_64__
CheckTypeSize(IcePaVersionRec,16, 8208, 11);
#elif 1
CheckTypeSize(IcePaVersionRec,0, 8208, 1);
#endif

#if __i386__
CheckTypeSize(IcePointer,4, 8180, 2);
#elif __ia64__
CheckTypeSize(IcePointer,8, 8180, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePointer,4, 8180, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IcePointer,4, 8180, 10);
#elif __powerpc64__
CheckTypeSize(IcePointer,8, 8180, 9);
#elif __s390x__
CheckTypeSize(IcePointer,8, 8180, 12);
#elif __x86_64__
CheckTypeSize(IcePointer,8, 8180, 11);
#elif 1
CheckTypeSize(IcePointer,0, 8180, 1);
#endif

#if __ia64__
CheckTypeSize(IcePoAuthStatus,4, 8734, 3);
#elif __i386__
CheckTypeSize(IcePoAuthStatus,4, 8734, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePoAuthStatus,4, 8734, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IcePoAuthStatus,4, 8734, 10);
#elif __powerpc64__
CheckTypeSize(IcePoAuthStatus,4, 8734, 9);
#elif __s390x__
CheckTypeSize(IcePoAuthStatus,4, 8734, 12);
#elif __x86_64__
CheckTypeSize(IcePoAuthStatus,4, 8734, 11);
#elif 1
CheckTypeSize(IcePoAuthStatus,0, 8734, 1);
#endif

#if __ia64__
CheckTypeSize(IcePaAuthStatus,4, 8736, 3);
#elif __i386__
CheckTypeSize(IcePaAuthStatus,4, 8736, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePaAuthStatus,4, 8736, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IcePaAuthStatus,4, 8736, 10);
#elif __powerpc64__
CheckTypeSize(IcePaAuthStatus,4, 8736, 9);
#elif __s390x__
CheckTypeSize(IcePaAuthStatus,4, 8736, 12);
#elif __x86_64__
CheckTypeSize(IcePaAuthStatus,4, 8736, 11);
#elif 1
CheckTypeSize(IcePaAuthStatus,0, 8736, 1);
#endif

#if __i386__
CheckTypeSize(IceConnectStatus,4, 8738, 2);
#elif __ia64__
CheckTypeSize(IceConnectStatus,4, 8738, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceConnectStatus,4, 8738, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IceConnectStatus,4, 8738, 10);
#elif __powerpc64__
CheckTypeSize(IceConnectStatus,4, 8738, 9);
#elif __s390x__
CheckTypeSize(IceConnectStatus,4, 8738, 12);
#elif __x86_64__
CheckTypeSize(IceConnectStatus,4, 8738, 11);
#elif 1
CheckTypeSize(IceConnectStatus,0, 8738, 1);
#endif

#if __i386__
CheckTypeSize(IceProtocolSetupStatus,4, 8740, 2);
#elif __ia64__
CheckTypeSize(IceProtocolSetupStatus,4, 8740, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceProtocolSetupStatus,4, 8740, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IceProtocolSetupStatus,4, 8740, 10);
#elif __powerpc64__
CheckTypeSize(IceProtocolSetupStatus,4, 8740, 9);
#elif __s390x__
CheckTypeSize(IceProtocolSetupStatus,4, 8740, 12);
#elif __x86_64__
CheckTypeSize(IceProtocolSetupStatus,4, 8740, 11);
#elif 1
CheckTypeSize(IceProtocolSetupStatus,0, 8740, 1);
#endif

#if __i386__
CheckTypeSize(IceAcceptStatus,4, 8742, 2);
#elif __ia64__
CheckTypeSize(IceAcceptStatus,4, 8742, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceAcceptStatus,4, 8742, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IceAcceptStatus,4, 8742, 10);
#elif __powerpc64__
CheckTypeSize(IceAcceptStatus,4, 8742, 9);
#elif __s390x__
CheckTypeSize(IceAcceptStatus,4, 8742, 12);
#elif __x86_64__
CheckTypeSize(IceAcceptStatus,4, 8742, 11);
#elif 1
CheckTypeSize(IceAcceptStatus,0, 8742, 1);
#endif

#if __i386__
CheckTypeSize(IceCloseStatus,4, 8744, 2);
#elif __ia64__
CheckTypeSize(IceCloseStatus,4, 8744, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceCloseStatus,4, 8744, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IceCloseStatus,4, 8744, 10);
#elif __powerpc64__
CheckTypeSize(IceCloseStatus,4, 8744, 9);
#elif __s390x__
CheckTypeSize(IceCloseStatus,4, 8744, 12);
#elif __x86_64__
CheckTypeSize(IceCloseStatus,4, 8744, 11);
#elif 1
CheckTypeSize(IceCloseStatus,0, 8744, 1);
#endif

#if __i386__
CheckTypeSize(IceProcessMessagesStatus,4, 8746, 2);
#elif __ia64__
CheckTypeSize(IceProcessMessagesStatus,4, 8746, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceProcessMessagesStatus,4, 8746, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IceProcessMessagesStatus,4, 8746, 10);
#elif __powerpc64__
CheckTypeSize(IceProcessMessagesStatus,4, 8746, 9);
#elif __s390x__
CheckTypeSize(IceProcessMessagesStatus,4, 8746, 12);
#elif __x86_64__
CheckTypeSize(IceProcessMessagesStatus,4, 8746, 11);
#elif 1
CheckTypeSize(IceProcessMessagesStatus,0, 8746, 1);
#endif

#if __i386__
CheckTypeSize(IceReplyWaitInfo,16, 8196, 2);
#elif __ia64__
CheckTypeSize(IceReplyWaitInfo,24, 8196, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceReplyWaitInfo,16, 8196, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IceReplyWaitInfo,16, 8196, 10);
#elif __powerpc64__
CheckTypeSize(IceReplyWaitInfo,24, 8196, 9);
#elif __s390x__
CheckTypeSize(IceReplyWaitInfo,24, 8196, 12);
#elif __x86_64__
CheckTypeSize(IceReplyWaitInfo,24, 8196, 11);
#elif 1
CheckTypeSize(IceReplyWaitInfo,0, 8196, 1);
#endif

#if __i386__
CheckTypeSize(IceWatchProc,4, 8749, 2);
#elif __ia64__
CheckTypeSize(IceWatchProc,8, 8749, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceWatchProc,4, 8749, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IceWatchProc,4, 8749, 10);
#elif __powerpc64__
CheckTypeSize(IceWatchProc,8, 8749, 9);
#elif __s390x__
CheckTypeSize(IceWatchProc,8, 8749, 12);
#elif __x86_64__
CheckTypeSize(IceWatchProc,8, 8749, 11);
#elif 1
CheckTypeSize(IceWatchProc,0, 8749, 1);
#endif

#if __ia64__
CheckTypeSize(IcePoProcessMsgProc,8, 8752, 3);
#elif __i386__
CheckTypeSize(IcePoProcessMsgProc,4, 8752, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePoProcessMsgProc,4, 8752, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IcePoProcessMsgProc,4, 8752, 10);
#elif __powerpc64__
CheckTypeSize(IcePoProcessMsgProc,8, 8752, 9);
#elif __s390x__
CheckTypeSize(IcePoProcessMsgProc,8, 8752, 12);
#elif __x86_64__
CheckTypeSize(IcePoProcessMsgProc,8, 8752, 11);
#elif 1
CheckTypeSize(IcePoProcessMsgProc,0, 8752, 1);
#endif

#if __ia64__
CheckTypeSize(IcePaProcessMsgProc,8, 8754, 3);
#elif __i386__
CheckTypeSize(IcePaProcessMsgProc,4, 8754, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePaProcessMsgProc,4, 8754, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IcePaProcessMsgProc,4, 8754, 10);
#elif __powerpc64__
CheckTypeSize(IcePaProcessMsgProc,8, 8754, 9);
#elif __s390x__
CheckTypeSize(IcePaProcessMsgProc,8, 8754, 12);
#elif __x86_64__
CheckTypeSize(IcePaProcessMsgProc,8, 8754, 11);
#elif 1
CheckTypeSize(IcePaProcessMsgProc,0, 8754, 1);
#endif

#if __i386__
CheckTypeSize(IcePoAuthProc,4, 8756, 2);
#elif __ia64__
CheckTypeSize(IcePoAuthProc,8, 8756, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePoAuthProc,4, 8756, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IcePoAuthProc,4, 8756, 10);
#elif __powerpc64__
CheckTypeSize(IcePoAuthProc,8, 8756, 9);
#elif __s390x__
CheckTypeSize(IcePoAuthProc,8, 8756, 12);
#elif __x86_64__
CheckTypeSize(IcePoAuthProc,8, 8756, 11);
#elif 1
CheckTypeSize(IcePoAuthProc,0, 8756, 1);
#endif

#if __i386__
CheckTypeSize(IcePaAuthProc,4, 8758, 2);
#elif __ia64__
CheckTypeSize(IcePaAuthProc,8, 8758, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePaAuthProc,4, 8758, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IcePaAuthProc,4, 8758, 10);
#elif __powerpc64__
CheckTypeSize(IcePaAuthProc,8, 8758, 9);
#elif __s390x__
CheckTypeSize(IcePaAuthProc,8, 8758, 12);
#elif __x86_64__
CheckTypeSize(IcePaAuthProc,8, 8758, 11);
#elif 1
CheckTypeSize(IcePaAuthProc,0, 8758, 1);
#endif

#if __i386__
CheckTypeSize(IceHostBasedAuthProc,4, 8760, 2);
#elif __ia64__
CheckTypeSize(IceHostBasedAuthProc,8, 8760, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceHostBasedAuthProc,4, 8760, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IceHostBasedAuthProc,4, 8760, 10);
#elif __powerpc64__
CheckTypeSize(IceHostBasedAuthProc,8, 8760, 9);
#elif __s390x__
CheckTypeSize(IceHostBasedAuthProc,8, 8760, 12);
#elif __x86_64__
CheckTypeSize(IceHostBasedAuthProc,8, 8760, 11);
#elif 1
CheckTypeSize(IceHostBasedAuthProc,0, 8760, 1);
#endif

#if __i386__
CheckTypeSize(IceProtocolSetupProc,4, 8762, 2);
#elif __ia64__
CheckTypeSize(IceProtocolSetupProc,8, 8762, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceProtocolSetupProc,4, 8762, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IceProtocolSetupProc,4, 8762, 10);
#elif __powerpc64__
CheckTypeSize(IceProtocolSetupProc,8, 8762, 9);
#elif __s390x__
CheckTypeSize(IceProtocolSetupProc,8, 8762, 12);
#elif __x86_64__
CheckTypeSize(IceProtocolSetupProc,8, 8762, 11);
#elif 1
CheckTypeSize(IceProtocolSetupProc,0, 8762, 1);
#endif

#if __i386__
CheckTypeSize(IceProtocolActivateProc,4, 8764, 2);
#elif __ia64__
CheckTypeSize(IceProtocolActivateProc,8, 8764, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceProtocolActivateProc,4, 8764, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IceProtocolActivateProc,4, 8764, 10);
#elif __powerpc64__
CheckTypeSize(IceProtocolActivateProc,8, 8764, 9);
#elif __s390x__
CheckTypeSize(IceProtocolActivateProc,8, 8764, 12);
#elif __x86_64__
CheckTypeSize(IceProtocolActivateProc,8, 8764, 11);
#elif 1
CheckTypeSize(IceProtocolActivateProc,0, 8764, 1);
#endif

#if __i386__
CheckTypeSize(IceIOErrorProc,4, 8766, 2);
#elif __ia64__
CheckTypeSize(IceIOErrorProc,8, 8766, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceIOErrorProc,4, 8766, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IceIOErrorProc,4, 8766, 10);
#elif __powerpc64__
CheckTypeSize(IceIOErrorProc,8, 8766, 9);
#elif __s390x__
CheckTypeSize(IceIOErrorProc,8, 8766, 12);
#elif __x86_64__
CheckTypeSize(IceIOErrorProc,8, 8766, 11);
#elif 1
CheckTypeSize(IceIOErrorProc,0, 8766, 1);
#endif

#if __i386__
CheckTypeSize(IcePingReplyProc,4, 8768, 2);
#elif __ia64__
CheckTypeSize(IcePingReplyProc,8, 8768, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePingReplyProc,4, 8768, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IcePingReplyProc,4, 8768, 10);
#elif __powerpc64__
CheckTypeSize(IcePingReplyProc,8, 8768, 9);
#elif __s390x__
CheckTypeSize(IcePingReplyProc,8, 8768, 12);
#elif __x86_64__
CheckTypeSize(IcePingReplyProc,8, 8768, 11);
#elif 1
CheckTypeSize(IcePingReplyProc,0, 8768, 1);
#endif

#if __i386__
CheckTypeSize(IceErrorHandler,4, 8770, 2);
#elif __ia64__
CheckTypeSize(IceErrorHandler,8, 8770, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceErrorHandler,4, 8770, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IceErrorHandler,4, 8770, 10);
#elif __powerpc64__
CheckTypeSize(IceErrorHandler,8, 8770, 9);
#elif __s390x__
CheckTypeSize(IceErrorHandler,8, 8770, 12);
#elif __x86_64__
CheckTypeSize(IceErrorHandler,8, 8770, 11);
#elif 1
CheckTypeSize(IceErrorHandler,0, 8770, 1);
#endif

#if __i386__
CheckTypeSize(IceIOErrorHandler,4, 8772, 2);
#elif __ia64__
CheckTypeSize(IceIOErrorHandler,8, 8772, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceIOErrorHandler,4, 8772, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IceIOErrorHandler,4, 8772, 10);
#elif __powerpc64__
CheckTypeSize(IceIOErrorHandler,8, 8772, 9);
#elif __s390x__
CheckTypeSize(IceIOErrorHandler,8, 8772, 12);
#elif __x86_64__
CheckTypeSize(IceIOErrorHandler,8, 8772, 11);
#elif 1
CheckTypeSize(IceIOErrorHandler,0, 8772, 1);
#endif

#if __i386__
CheckTypeSize(struct _IceListenObj *,4, 7710, 2);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _IceListenObj *,4, 7710, 6);
#elif __x86_64__
CheckTypeSize(struct _IceListenObj *,8, 7710, 11);
#elif __powerpc64__
CheckTypeSize(struct _IceListenObj *,8, 7710, 9);
#elif __s390__ && !__s390x__
CheckTypeSize(struct _IceListenObj *,4, 7710, 10);
#elif __s390x__
CheckTypeSize(struct _IceListenObj *,8, 7710, 12);
#elif __ia64__
CheckTypeSize(struct _IceListenObj *,8, 7710, 3);
#elif 1
CheckTypeSize(struct _IceListenObj *,0, 7710, 1);
#endif

#if __i386__
CheckTypeSize(IceConn,4, 8197, 2);
#elif __ia64__
CheckTypeSize(IceConn,8, 8197, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceConn,4, 8197, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IceConn,4, 8197, 10);
#elif __powerpc64__
CheckTypeSize(IceConn,8, 8197, 9);
#elif __s390x__
CheckTypeSize(IceConn,8, 8197, 12);
#elif __x86_64__
CheckTypeSize(IceConn,8, 8197, 11);
#elif 1
CheckTypeSize(IceConn,0, 8197, 1);
#endif

#if __i386__
CheckTypeSize(IceListenObj,4, 8198, 2);
#elif __ia64__
CheckTypeSize(IceListenObj,8, 8198, 3);
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceListenObj,4, 8198, 6);
#elif __s390__ && !__s390x__
CheckTypeSize(IceListenObj,4, 8198, 10);
#elif __powerpc64__
CheckTypeSize(IceListenObj,8, 8198, 9);
#elif __s390x__
CheckTypeSize(IceListenObj,8, 8198, 12);
#elif __x86_64__
CheckTypeSize(IceListenObj,8, 8198, 11);
#elif 1
CheckTypeSize(IceListenObj,0, 8198, 1);
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
