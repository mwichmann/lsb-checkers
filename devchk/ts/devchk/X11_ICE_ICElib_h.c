/*
 * Test of X11/ICE/ICElib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in X11/ICE/ICElib.h\n");
#endif

#if __i386__
CheckTypeSize(IcePoVersionRec,12, 8206, 2)
#elif __ia64__
CheckTypeSize(IcePoVersionRec,16, 8206, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePoVersionRec,12, 8206, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IcePoVersionRec,12, 8206, 10)
#elif __powerpc64__
CheckTypeSize(IcePoVersionRec,16, 8206, 9)
#elif __s390x__
CheckTypeSize(IcePoVersionRec,16, 8206, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8206,0);
Msg("Find size of IcePoVersionRec (8206)\n");
#endif

#if __i386__
CheckTypeSize(IcePaVersionRec,12, 8208, 2)
#elif __ia64__
CheckTypeSize(IcePaVersionRec,16, 8208, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePaVersionRec,12, 8208, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IcePaVersionRec,12, 8208, 10)
#elif __powerpc64__
CheckTypeSize(IcePaVersionRec,16, 8208, 9)
#elif __s390x__
CheckTypeSize(IcePaVersionRec,16, 8208, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8208,0);
Msg("Find size of IcePaVersionRec (8208)\n");
#endif

#if __i386__
CheckTypeSize(IcePointer,4, 8180, 2)
#elif __ia64__
CheckTypeSize(IcePointer,8, 8180, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePointer,4, 8180, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IcePointer,4, 8180, 10)
#elif __powerpc64__
CheckTypeSize(IcePointer,8, 8180, 9)
#elif __s390x__
CheckTypeSize(IcePointer,8, 8180, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8180,0);
Msg("Find size of IcePointer (8180)\n");
#endif

#if __ia64__
CheckTypeSize(IcePoAuthStatus,4, 8734, 3)
#elif __i386__
CheckTypeSize(IcePoAuthStatus,4, 8734, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePoAuthStatus,4, 8734, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IcePoAuthStatus,4, 8734, 10)
#elif __powerpc64__
CheckTypeSize(IcePoAuthStatus,4, 8734, 9)
#elif __s390x__
CheckTypeSize(IcePoAuthStatus,4, 8734, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8734,0);
Msg("Find size of IcePoAuthStatus (8734)\n");
#endif

#if __ia64__
CheckTypeSize(IcePaAuthStatus,4, 8736, 3)
#elif __i386__
CheckTypeSize(IcePaAuthStatus,4, 8736, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePaAuthStatus,4, 8736, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IcePaAuthStatus,4, 8736, 10)
#elif __powerpc64__
CheckTypeSize(IcePaAuthStatus,4, 8736, 9)
#elif __s390x__
CheckTypeSize(IcePaAuthStatus,4, 8736, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8736,0);
Msg("Find size of IcePaAuthStatus (8736)\n");
#endif

#if __i386__
CheckTypeSize(IceConnectStatus,4, 8738, 2)
#elif __ia64__
CheckTypeSize(IceConnectStatus,4, 8738, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceConnectStatus,4, 8738, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IceConnectStatus,4, 8738, 10)
#elif __powerpc64__
CheckTypeSize(IceConnectStatus,4, 8738, 9)
#elif __s390x__
CheckTypeSize(IceConnectStatus,4, 8738, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8738,0);
Msg("Find size of IceConnectStatus (8738)\n");
#endif

#if __i386__
CheckTypeSize(IceProtocolSetupStatus,4, 8740, 2)
#elif __ia64__
CheckTypeSize(IceProtocolSetupStatus,4, 8740, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceProtocolSetupStatus,4, 8740, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IceProtocolSetupStatus,4, 8740, 10)
#elif __powerpc64__
CheckTypeSize(IceProtocolSetupStatus,4, 8740, 9)
#elif __s390x__
CheckTypeSize(IceProtocolSetupStatus,4, 8740, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8740,0);
Msg("Find size of IceProtocolSetupStatus (8740)\n");
#endif

#if __i386__
CheckTypeSize(IceAcceptStatus,4, 8742, 2)
#elif __ia64__
CheckTypeSize(IceAcceptStatus,4, 8742, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceAcceptStatus,4, 8742, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IceAcceptStatus,4, 8742, 10)
#elif __powerpc64__
CheckTypeSize(IceAcceptStatus,4, 8742, 9)
#elif __s390x__
CheckTypeSize(IceAcceptStatus,4, 8742, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8742,0);
Msg("Find size of IceAcceptStatus (8742)\n");
#endif

#if __i386__
CheckTypeSize(IceCloseStatus,4, 8744, 2)
#elif __ia64__
CheckTypeSize(IceCloseStatus,4, 8744, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceCloseStatus,4, 8744, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IceCloseStatus,4, 8744, 10)
#elif __powerpc64__
CheckTypeSize(IceCloseStatus,4, 8744, 9)
#elif __s390x__
CheckTypeSize(IceCloseStatus,4, 8744, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8744,0);
Msg("Find size of IceCloseStatus (8744)\n");
#endif

#if __i386__
CheckTypeSize(IceProcessMessagesStatus,4, 8746, 2)
#elif __ia64__
CheckTypeSize(IceProcessMessagesStatus,4, 8746, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceProcessMessagesStatus,4, 8746, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IceProcessMessagesStatus,4, 8746, 10)
#elif __powerpc64__
CheckTypeSize(IceProcessMessagesStatus,4, 8746, 9)
#elif __s390x__
CheckTypeSize(IceProcessMessagesStatus,4, 8746, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8746,0);
Msg("Find size of IceProcessMessagesStatus (8746)\n");
#endif

#if __i386__
CheckTypeSize(IceReplyWaitInfo,16, 8196, 2)
#elif __ia64__
CheckTypeSize(IceReplyWaitInfo,24, 8196, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceReplyWaitInfo,16, 8196, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IceReplyWaitInfo,16, 8196, 10)
#elif __powerpc64__
CheckTypeSize(IceReplyWaitInfo,24, 8196, 9)
#elif __s390x__
CheckTypeSize(IceReplyWaitInfo,24, 8196, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8196,0);
Msg("Find size of IceReplyWaitInfo (8196)\n");
#endif

#if __i386__
CheckTypeSize(IceWatchProc,4, 8749, 2)
#elif __ia64__
CheckTypeSize(IceWatchProc,8, 8749, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceWatchProc,4, 8749, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IceWatchProc,4, 8749, 10)
#elif __powerpc64__
CheckTypeSize(IceWatchProc,8, 8749, 9)
#elif __s390x__
CheckTypeSize(IceWatchProc,8, 8749, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8749,0);
Msg("Find size of IceWatchProc (8749)\n");
#endif

#if __ia64__
CheckTypeSize(IcePoProcessMsgProc,8, 8752, 3)
#elif __i386__
CheckTypeSize(IcePoProcessMsgProc,4, 8752, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePoProcessMsgProc,4, 8752, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IcePoProcessMsgProc,4, 8752, 10)
#elif __powerpc64__
CheckTypeSize(IcePoProcessMsgProc,8, 8752, 9)
#elif __s390x__
CheckTypeSize(IcePoProcessMsgProc,8, 8752, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8752,0);
Msg("Find size of IcePoProcessMsgProc (8752)\n");
#endif

#if __ia64__
CheckTypeSize(IcePaProcessMsgProc,8, 8754, 3)
#elif __i386__
CheckTypeSize(IcePaProcessMsgProc,4, 8754, 2)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePaProcessMsgProc,4, 8754, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IcePaProcessMsgProc,4, 8754, 10)
#elif __powerpc64__
CheckTypeSize(IcePaProcessMsgProc,8, 8754, 9)
#elif __s390x__
CheckTypeSize(IcePaProcessMsgProc,8, 8754, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8754,0);
Msg("Find size of IcePaProcessMsgProc (8754)\n");
#endif

#if __i386__
CheckTypeSize(IcePoAuthProc,4, 8756, 2)
#elif __ia64__
CheckTypeSize(IcePoAuthProc,8, 8756, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePoAuthProc,4, 8756, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IcePoAuthProc,4, 8756, 10)
#elif __powerpc64__
CheckTypeSize(IcePoAuthProc,8, 8756, 9)
#elif __s390x__
CheckTypeSize(IcePoAuthProc,8, 8756, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8756,0);
Msg("Find size of IcePoAuthProc (8756)\n");
#endif

#if __i386__
CheckTypeSize(IcePaAuthProc,4, 8758, 2)
#elif __ia64__
CheckTypeSize(IcePaAuthProc,8, 8758, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePaAuthProc,4, 8758, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IcePaAuthProc,4, 8758, 10)
#elif __powerpc64__
CheckTypeSize(IcePaAuthProc,8, 8758, 9)
#elif __s390x__
CheckTypeSize(IcePaAuthProc,8, 8758, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8758,0);
Msg("Find size of IcePaAuthProc (8758)\n");
#endif

#if __i386__
CheckTypeSize(IceHostBasedAuthProc,4, 8760, 2)
#elif __ia64__
CheckTypeSize(IceHostBasedAuthProc,8, 8760, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceHostBasedAuthProc,4, 8760, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IceHostBasedAuthProc,4, 8760, 10)
#elif __powerpc64__
CheckTypeSize(IceHostBasedAuthProc,8, 8760, 9)
#elif __s390x__
CheckTypeSize(IceHostBasedAuthProc,8, 8760, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8760,0);
Msg("Find size of IceHostBasedAuthProc (8760)\n");
#endif

#if __i386__
CheckTypeSize(IceProtocolSetupProc,4, 8762, 2)
#elif __ia64__
CheckTypeSize(IceProtocolSetupProc,8, 8762, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceProtocolSetupProc,4, 8762, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IceProtocolSetupProc,4, 8762, 10)
#elif __powerpc64__
CheckTypeSize(IceProtocolSetupProc,8, 8762, 9)
#elif __s390x__
CheckTypeSize(IceProtocolSetupProc,8, 8762, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8762,0);
Msg("Find size of IceProtocolSetupProc (8762)\n");
#endif

#if __i386__
CheckTypeSize(IceProtocolActivateProc,4, 8764, 2)
#elif __ia64__
CheckTypeSize(IceProtocolActivateProc,8, 8764, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceProtocolActivateProc,4, 8764, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IceProtocolActivateProc,4, 8764, 10)
#elif __powerpc64__
CheckTypeSize(IceProtocolActivateProc,8, 8764, 9)
#elif __s390x__
CheckTypeSize(IceProtocolActivateProc,8, 8764, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8764,0);
Msg("Find size of IceProtocolActivateProc (8764)\n");
#endif

#if __i386__
CheckTypeSize(IceIOErrorProc,4, 8766, 2)
#elif __ia64__
CheckTypeSize(IceIOErrorProc,8, 8766, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceIOErrorProc,4, 8766, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IceIOErrorProc,4, 8766, 10)
#elif __powerpc64__
CheckTypeSize(IceIOErrorProc,8, 8766, 9)
#elif __s390x__
CheckTypeSize(IceIOErrorProc,8, 8766, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8766,0);
Msg("Find size of IceIOErrorProc (8766)\n");
#endif

#if __i386__
CheckTypeSize(IcePingReplyProc,4, 8768, 2)
#elif __ia64__
CheckTypeSize(IcePingReplyProc,8, 8768, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IcePingReplyProc,4, 8768, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IcePingReplyProc,4, 8768, 10)
#elif __powerpc64__
CheckTypeSize(IcePingReplyProc,8, 8768, 9)
#elif __s390x__
CheckTypeSize(IcePingReplyProc,8, 8768, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8768,0);
Msg("Find size of IcePingReplyProc (8768)\n");
#endif

#if __i386__
CheckTypeSize(IceErrorHandler,4, 8770, 2)
#elif __ia64__
CheckTypeSize(IceErrorHandler,8, 8770, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceErrorHandler,4, 8770, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IceErrorHandler,4, 8770, 10)
#elif __powerpc64__
CheckTypeSize(IceErrorHandler,8, 8770, 9)
#elif __s390x__
CheckTypeSize(IceErrorHandler,8, 8770, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8770,0);
Msg("Find size of IceErrorHandler (8770)\n");
#endif

#if __i386__
CheckTypeSize(IceIOErrorHandler,4, 8772, 2)
#elif __ia64__
CheckTypeSize(IceIOErrorHandler,8, 8772, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceIOErrorHandler,4, 8772, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IceIOErrorHandler,4, 8772, 10)
#elif __powerpc64__
CheckTypeSize(IceIOErrorHandler,8, 8772, 9)
#elif __s390x__
CheckTypeSize(IceIOErrorHandler,8, 8772, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8772,0);
Msg("Find size of IceIOErrorHandler (8772)\n");
#endif

#if __i386__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __s390__ && !__s390x__
#elif __powerpc64__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7710,0);
Msg("Find size of _IceListenObj * (7710)\n");
#endif

#if __i386__
CheckTypeSize(IceConn,4, 8197, 2)
#elif __ia64__
CheckTypeSize(IceConn,8, 8197, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceConn,4, 8197, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IceConn,4, 8197, 10)
#elif __powerpc64__
CheckTypeSize(IceConn,8, 8197, 9)
#elif __s390x__
CheckTypeSize(IceConn,8, 8197, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8197,0);
Msg("Find size of IceConn (8197)\n");
#endif

#if __i386__
CheckTypeSize(IceListenObj,4, 8198, 2)
#elif __ia64__
CheckTypeSize(IceListenObj,8, 8198, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(IceListenObj,4, 8198, 6)
#elif __s390__ && !__s390x__
CheckTypeSize(IceListenObj,4, 8198, 10)
#elif __powerpc64__
CheckTypeSize(IceListenObj,8, 8198, 9)
#elif __s390x__
CheckTypeSize(IceListenObj,8, 8198, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8198,0);
Msg("Find size of IceListenObj (8198)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests in X11/ICE/ICElib.h\n",cnt);
return cnt;
#endif

}
