/*
 * Test of X11/ICE/ICElib.h
 */
#include "hdrchk.h"
#include "sys/types.h"
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

#ifdef __i386__
CheckTypeSize(IcePoVersionRec,12, 8206, 2)
#elif __ia64__
CheckTypeSize(IcePoVersionRec,16, 8206, 3)
#elif __powerpc__
CheckTypeSize(IcePoVersionRec,12, 8206, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8206,0);
#endif

#ifdef __i386__
CheckTypeSize(IcePaVersionRec,12, 8208, 2)
#elif __ia64__
CheckTypeSize(IcePaVersionRec,16, 8208, 3)
#elif __powerpc__
CheckTypeSize(IcePaVersionRec,12, 8208, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8208,0);
#endif

#ifdef __i386__
CheckTypeSize(IcePointer,4, 8180, 2)
#elif __ia64__
CheckTypeSize(IcePointer,8, 8180, 3)
#elif __powerpc__
CheckTypeSize(IcePointer,4, 8180, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8180,0);
#endif

#ifdef __ia64__
CheckTypeSize(IcePoAuthStatus,4, 8734, 3)
#elif __i386__
CheckTypeSize(IcePoAuthStatus,4, 8734, 2)
#elif __powerpc__
CheckTypeSize(IcePoAuthStatus,4, 8734, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8734,0);
#endif

#ifdef __ia64__
CheckTypeSize(IcePaAuthStatus,4, 8736, 3)
#elif __i386__
CheckTypeSize(IcePaAuthStatus,4, 8736, 2)
#elif __powerpc__
CheckTypeSize(IcePaAuthStatus,4, 8736, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8736,0);
#endif

#ifdef __i386__
CheckTypeSize(IceConnectStatus,4, 8738, 2)
#elif __ia64__
CheckTypeSize(IceConnectStatus,4, 8738, 3)
#elif __powerpc__
CheckTypeSize(IceConnectStatus,4, 8738, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8738,0);
#endif

#ifdef __i386__
CheckTypeSize(IceProtocolSetupStatus,4, 8740, 2)
#elif __ia64__
CheckTypeSize(IceProtocolSetupStatus,4, 8740, 3)
#elif __powerpc__
CheckTypeSize(IceProtocolSetupStatus,4, 8740, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8740,0);
#endif

#ifdef __i386__
CheckTypeSize(IceAcceptStatus,4, 8742, 2)
#elif __ia64__
CheckTypeSize(IceAcceptStatus,4, 8742, 3)
#elif __powerpc__
CheckTypeSize(IceAcceptStatus,4, 8742, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8742,0);
#endif

#ifdef __i386__
CheckTypeSize(IceCloseStatus,4, 8744, 2)
#elif __ia64__
CheckTypeSize(IceCloseStatus,4, 8744, 3)
#elif __powerpc__
CheckTypeSize(IceCloseStatus,4, 8744, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8744,0);
#endif

#ifdef __i386__
CheckTypeSize(IceProcessMessagesStatus,4, 8746, 2)
#elif __ia64__
CheckTypeSize(IceProcessMessagesStatus,4, 8746, 3)
#elif __powerpc__
CheckTypeSize(IceProcessMessagesStatus,4, 8746, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8746,0);
#endif

#ifdef __i386__
CheckTypeSize(IceReplyWaitInfo,16, 8196, 2)
#elif __ia64__
CheckTypeSize(IceReplyWaitInfo,24, 8196, 3)
#elif __powerpc__
CheckTypeSize(IceReplyWaitInfo,16, 8196, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8196,0);
#endif

#ifdef __i386__
CheckTypeSize(IceWatchProc,4, 8749, 2)
#elif __ia64__
CheckTypeSize(IceWatchProc,8, 8749, 3)
#elif __powerpc__
CheckTypeSize(IceWatchProc,4, 8749, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8749,0);
#endif

#ifdef __ia64__
CheckTypeSize(IcePoProcessMsgProc,8, 8752, 3)
#elif __i386__
CheckTypeSize(IcePoProcessMsgProc,4, 8752, 2)
#elif __powerpc__
CheckTypeSize(IcePoProcessMsgProc,4, 8752, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8752,0);
#endif

#ifdef __ia64__
CheckTypeSize(IcePaProcessMsgProc,8, 8754, 3)
#elif __i386__
CheckTypeSize(IcePaProcessMsgProc,4, 8754, 2)
#elif __powerpc__
CheckTypeSize(IcePaProcessMsgProc,4, 8754, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8754,0);
#endif

#ifdef __i386__
CheckTypeSize(IcePoAuthProc,4, 8756, 2)
#elif __ia64__
CheckTypeSize(IcePoAuthProc,8, 8756, 3)
#elif __powerpc__
CheckTypeSize(IcePoAuthProc,4, 8756, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8756,0);
#endif

#ifdef __i386__
CheckTypeSize(IcePaAuthProc,4, 8758, 2)
#elif __ia64__
CheckTypeSize(IcePaAuthProc,8, 8758, 3)
#elif __powerpc__
CheckTypeSize(IcePaAuthProc,4, 8758, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8758,0);
#endif

#ifdef __i386__
CheckTypeSize(IceHostBasedAuthProc,4, 8760, 2)
#elif __ia64__
CheckTypeSize(IceHostBasedAuthProc,8, 8760, 3)
#elif __powerpc__
CheckTypeSize(IceHostBasedAuthProc,4, 8760, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8760,0);
#endif

#ifdef __i386__
CheckTypeSize(IceProtocolSetupProc,4, 8762, 2)
#elif __ia64__
CheckTypeSize(IceProtocolSetupProc,8, 8762, 3)
#elif __powerpc__
CheckTypeSize(IceProtocolSetupProc,4, 8762, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8762,0);
#endif

#ifdef __i386__
CheckTypeSize(IceProtocolActivateProc,4, 8764, 2)
#elif __ia64__
CheckTypeSize(IceProtocolActivateProc,8, 8764, 3)
#elif __powerpc__
CheckTypeSize(IceProtocolActivateProc,4, 8764, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8764,0);
#endif

#ifdef __i386__
CheckTypeSize(IceIOErrorProc,4, 8766, 2)
#elif __ia64__
CheckTypeSize(IceIOErrorProc,8, 8766, 3)
#elif __powerpc__
CheckTypeSize(IceIOErrorProc,4, 8766, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8766,0);
#endif

#ifdef __i386__
CheckTypeSize(IcePingReplyProc,4, 8768, 2)
#elif __ia64__
CheckTypeSize(IcePingReplyProc,8, 8768, 3)
#elif __powerpc__
CheckTypeSize(IcePingReplyProc,4, 8768, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8768,0);
#endif

#ifdef __i386__
CheckTypeSize(IceErrorHandler,4, 8770, 2)
#elif __ia64__
CheckTypeSize(IceErrorHandler,8, 8770, 3)
#elif __powerpc__
CheckTypeSize(IceErrorHandler,4, 8770, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8770,0);
#endif

#ifdef __i386__
CheckTypeSize(IceIOErrorHandler,4, 8772, 2)
#elif __ia64__
CheckTypeSize(IceIOErrorHandler,8, 8772, 3)
#elif __powerpc__
CheckTypeSize(IceIOErrorHandler,4, 8772, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8772,0);
#endif

#ifdef __i386__
#elif __ia64__
#elif __powerpc__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,7710,0);
#endif

#ifdef __i386__
CheckTypeSize(IceConn,4, 8197, 2)
#elif __ia64__
CheckTypeSize(IceConn,8, 8197, 3)
#elif __powerpc__
CheckTypeSize(IceConn,4, 8197, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8197,0);
#endif

#ifdef __i386__
CheckTypeSize(IceListenObj,4, 8198, 2)
#elif __ia64__
CheckTypeSize(IceListenObj,8, 8198, 3)
#elif __powerpc__
CheckTypeSize(IceListenObj,4, 8198, 6)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,8198,0);
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
