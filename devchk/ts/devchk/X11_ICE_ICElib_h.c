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
#if defined __i386__
CheckTypeSize(IcePointer,4, 100099, 2, 1.2, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePointer,4, 100099, 6, 1.2, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePointer,4, 100099, 10, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(IcePointer,8, 100099, 3, 1.2, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePointer,8, 100099, 9, 1.2, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePointer,8, 100099, 11, 1.2, NULL, 40, NULL)
#elif defined __s390x__
CheckTypeSize(IcePointer,8, 100099, 12, 1.2, NULL, 40, NULL)
#else
Msg("Find size of IcePointer (100099)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,100099,0);
#endif

#if defined __i386__
CheckTypeSize(IceConn,4, 100100, 2, 1.2, NULL, 100239, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceConn,4, 100100, 6, 1.2, NULL, 100239, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceConn,4, 100100, 10, 1.2, NULL, 100239, NULL)
#elif defined __ia64__
CheckTypeSize(IceConn,8, 100100, 3, 1.2, NULL, 100239, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceConn,8, 100100, 9, 1.2, NULL, 100239, NULL)
#elif defined __x86_64__
CheckTypeSize(IceConn,8, 100100, 11, 1.2, NULL, 100239, NULL)
#elif defined __s390x__
CheckTypeSize(IceConn,8, 100100, 12, 1.2, NULL, 100239, NULL)
#else
Msg("Find size of IceConn (100100)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100239,NULL);\n",architecture,100100,0);
#endif

#if defined __i386__
CheckTypeSize(IcePaProcessMsgProc,4, 100176, 2, 1.2, NULL, 100007, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePaProcessMsgProc,4, 100176, 6, 1.2, NULL, 100007, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePaProcessMsgProc,4, 100176, 10, 1.2, NULL, 100007, NULL)
#elif defined __ia64__
CheckTypeSize(IcePaProcessMsgProc,8, 100176, 3, 1.2, NULL, 100007, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePaProcessMsgProc,8, 100176, 9, 1.2, NULL, 100007, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePaProcessMsgProc,8, 100176, 11, 1.2, NULL, 100007, NULL)
#elif defined __s390x__
CheckTypeSize(IcePaProcessMsgProc,8, 100176, 12, 1.2, NULL, 100007, NULL)
#else
Msg("Find size of IcePaProcessMsgProc (100176)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100007,NULL);\n",architecture,100176,0);
#endif

#if defined __i386__
CheckTypeSize(IcePaVersionRec,12, 100178, 2, 1.2, NULL, 100177, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePaVersionRec,12, 100178, 6, 1.2, NULL, 100177, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePaVersionRec,12, 100178, 10, 1.2, NULL, 100177, NULL)
#elif defined __ia64__
CheckTypeSize(IcePaVersionRec,16, 100178, 3, 1.2, NULL, 100177, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePaVersionRec,16, 100178, 9, 1.2, NULL, 100177, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePaVersionRec,16, 100178, 11, 1.2, NULL, 100177, NULL)
#elif defined __s390x__
CheckTypeSize(IcePaVersionRec,16, 100178, 12, 1.2, NULL, 100177, NULL)
#else
Msg("Find size of IcePaVersionRec (100178)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100177,NULL);\n",architecture,100178,0);
#endif

#if defined __i386__
CheckTypeSize(IceReplyWaitInfo,16, 100182, 2, 1.2, NULL, 100181, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceReplyWaitInfo,16, 100182, 6, 1.2, NULL, 100181, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceReplyWaitInfo,16, 100182, 10, 1.2, NULL, 100181, NULL)
#elif defined __ia64__
CheckTypeSize(IceReplyWaitInfo,24, 100182, 3, 1.2, NULL, 100181, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceReplyWaitInfo,24, 100182, 9, 1.2, NULL, 100181, NULL)
#elif defined __x86_64__
CheckTypeSize(IceReplyWaitInfo,24, 100182, 11, 1.2, NULL, 100181, NULL)
#elif defined __s390x__
CheckTypeSize(IceReplyWaitInfo,24, 100182, 12, 1.2, NULL, 100181, NULL)
#else
Msg("Find size of IceReplyWaitInfo (100182)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100181,NULL);\n",architecture,100182,0);
#endif

#if defined __i386__
CheckTypeSize(IcePoProcessMsgProc,4, 100184, 2, 1.2, NULL, 100042, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePoProcessMsgProc,4, 100184, 6, 1.2, NULL, 100042, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePoProcessMsgProc,4, 100184, 10, 1.2, NULL, 100042, NULL)
#elif defined __ia64__
CheckTypeSize(IcePoProcessMsgProc,8, 100184, 3, 1.2, NULL, 100042, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePoProcessMsgProc,8, 100184, 9, 1.2, NULL, 100042, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePoProcessMsgProc,8, 100184, 11, 1.2, NULL, 100042, NULL)
#elif defined __s390x__
CheckTypeSize(IcePoProcessMsgProc,8, 100184, 12, 1.2, NULL, 100042, NULL)
#else
Msg("Find size of IcePoProcessMsgProc (100184)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100042,NULL);\n",architecture,100184,0);
#endif

#if defined __i386__
CheckTypeSize(IcePoVersionRec,12, 100186, 2, 1.2, NULL, 100185, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePoVersionRec,12, 100186, 6, 1.2, NULL, 100185, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePoVersionRec,12, 100186, 10, 1.2, NULL, 100185, NULL)
#elif defined __ia64__
CheckTypeSize(IcePoVersionRec,16, 100186, 3, 1.2, NULL, 100185, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePoVersionRec,16, 100186, 9, 1.2, NULL, 100185, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePoVersionRec,16, 100186, 11, 1.2, NULL, 100185, NULL)
#elif defined __s390x__
CheckTypeSize(IcePoVersionRec,16, 100186, 12, 1.2, NULL, 100185, NULL)
#else
Msg("Find size of IcePoVersionRec (100186)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100185,NULL);\n",architecture,100186,0);
#endif

#if 1
CheckTypeSize(IcePoAuthProc,8, 100188, 1, 1.2, NULL, 100034, NULL)
#endif

#if defined __i386__
CheckTypeSize(IcePaAuthProc,4, 100190, 2, 1.2, NULL, 100052, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePaAuthProc,4, 100190, 6, 1.2, NULL, 100052, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePaAuthProc,4, 100190, 10, 1.2, NULL, 100052, NULL)
#elif defined __ia64__
CheckTypeSize(IcePaAuthProc,8, 100190, 3, 1.2, NULL, 100052, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePaAuthProc,8, 100190, 9, 1.2, NULL, 100052, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePaAuthProc,8, 100190, 11, 1.2, NULL, 100052, NULL)
#elif defined __s390x__
CheckTypeSize(IcePaAuthProc,8, 100190, 12, 1.2, NULL, 100052, NULL)
#else
Msg("Find size of IcePaAuthProc (100190)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100052,NULL);\n",architecture,100190,0);
#endif

#if 1
CheckEnum("IceAcceptSuccess",IceAcceptSuccess,0,77809)
CheckEnum("IceAcceptFailure",IceAcceptFailure,(0) + 1,77810)
CheckEnum("IceAcceptBadMalloc",IceAcceptBadMalloc,((0) + 1) + 1,77811)
#endif

#if 1
CheckTypeSize(struct _IceListenObj,0, 100194, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _IceListenObj on All\n");
#endif

#if defined __i386__
CheckTypeSize(IceListenObj,4, 100196, 2, 1.2, NULL, 100195, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceListenObj,4, 100196, 6, 1.2, NULL, 100195, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceListenObj,4, 100196, 10, 1.2, NULL, 100195, NULL)
#elif defined __ia64__
CheckTypeSize(IceListenObj,8, 100196, 3, 1.2, NULL, 100195, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceListenObj,8, 100196, 9, 1.2, NULL, 100195, NULL)
#elif defined __x86_64__
CheckTypeSize(IceListenObj,8, 100196, 11, 1.2, NULL, 100195, NULL)
#elif defined __s390x__
CheckTypeSize(IceListenObj,8, 100196, 12, 1.2, NULL, 100195, NULL)
#else
Msg("Find size of IceListenObj (100196)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100195,NULL);\n",architecture,100196,0);
#endif

#if 1
CheckEnum("IceConnectPending",IceConnectPending,0,77812)
CheckEnum("IceConnectAccepted",IceConnectAccepted,(0) + 1,77813)
CheckEnum("IceConnectRejected",IceConnectRejected,((0) + 1) + 1,77814)
CheckEnum("IceConnectIOError",IceConnectIOError,(((0) + 1) + 1) + 1,77815)
#endif

#if defined __i386__
CheckTypeSize(IceIOErrorProc,4, 100202, 2, 1.2, NULL, 100044, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceIOErrorProc,4, 100202, 6, 1.2, NULL, 100044, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceIOErrorProc,4, 100202, 10, 1.2, NULL, 100044, NULL)
#elif defined __ia64__
CheckTypeSize(IceIOErrorProc,8, 100202, 3, 1.2, NULL, 100044, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceIOErrorProc,8, 100202, 9, 1.2, NULL, 100044, NULL)
#elif defined __x86_64__
CheckTypeSize(IceIOErrorProc,8, 100202, 11, 1.2, NULL, 100044, NULL)
#elif defined __s390x__
CheckTypeSize(IceIOErrorProc,8, 100202, 12, 1.2, NULL, 100044, NULL)
#else
Msg("Find size of IceIOErrorProc (100202)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100044,NULL);\n",architecture,100202,0);
#endif

#if defined __i386__
CheckTypeSize(IceProtocolSetupProc,4, 100206, 2, 1.2, NULL, 100055, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceProtocolSetupProc,4, 100206, 6, 1.2, NULL, 100055, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceProtocolSetupProc,4, 100206, 10, 1.2, NULL, 100055, NULL)
#elif defined __ia64__
CheckTypeSize(IceProtocolSetupProc,8, 100206, 3, 1.2, NULL, 100055, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceProtocolSetupProc,8, 100206, 9, 1.2, NULL, 100055, NULL)
#elif defined __x86_64__
CheckTypeSize(IceProtocolSetupProc,8, 100206, 11, 1.2, NULL, 100055, NULL)
#elif defined __s390x__
CheckTypeSize(IceProtocolSetupProc,8, 100206, 12, 1.2, NULL, 100055, NULL)
#else
Msg("Find size of IceProtocolSetupProc (100206)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100055,NULL);\n",architecture,100206,0);
#endif

#if 1
CheckTypeSize(IceProtocolActivateProc,8, 100207, 1, 1.2, NULL, 100016, NULL)
#endif

#if defined __i386__
CheckTypeSize(IceHostBasedAuthProc,4, 100208, 2, 1.2, NULL, 100049, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceHostBasedAuthProc,4, 100208, 6, 1.2, NULL, 100049, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceHostBasedAuthProc,4, 100208, 10, 1.2, NULL, 100049, NULL)
#elif defined __ia64__
CheckTypeSize(IceHostBasedAuthProc,8, 100208, 3, 1.2, NULL, 100049, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceHostBasedAuthProc,8, 100208, 9, 1.2, NULL, 100049, NULL)
#elif defined __x86_64__
CheckTypeSize(IceHostBasedAuthProc,8, 100208, 11, 1.2, NULL, 100049, NULL)
#elif defined __s390x__
CheckTypeSize(IceHostBasedAuthProc,8, 100208, 12, 1.2, NULL, 100049, NULL)
#else
Msg("Find size of IceHostBasedAuthProc (100208)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100049,NULL);\n",architecture,100208,0);
#endif

#if defined __i386__
CheckTypeSize(IcePingReplyProc,4, 100222, 2, 1.2, NULL, 100016, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePingReplyProc,4, 100222, 6, 1.2, NULL, 100016, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePingReplyProc,4, 100222, 10, 1.2, NULL, 100016, NULL)
#elif defined __ia64__
CheckTypeSize(IcePingReplyProc,8, 100222, 3, 1.2, NULL, 100016, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePingReplyProc,8, 100222, 9, 1.2, NULL, 100016, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePingReplyProc,8, 100222, 11, 1.2, NULL, 100016, NULL)
#elif defined __s390x__
CheckTypeSize(IcePingReplyProc,8, 100222, 12, 1.2, NULL, 100016, NULL)
#else
Msg("Find size of IcePingReplyProc (100222)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100016,NULL);\n",architecture,100222,0);
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

#if defined __i386__
CheckTypeSize(IceWatchProc,4, 100244, 2, 1.2, NULL, 100087, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceWatchProc,4, 100244, 6, 1.2, NULL, 100087, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceWatchProc,4, 100244, 10, 1.2, NULL, 100087, NULL)
#elif defined __ia64__
CheckTypeSize(IceWatchProc,8, 100244, 3, 1.2, NULL, 100087, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceWatchProc,8, 100244, 9, 1.2, NULL, 100087, NULL)
#elif defined __x86_64__
CheckTypeSize(IceWatchProc,8, 100244, 11, 1.2, NULL, 100087, NULL)
#elif defined __s390x__
CheckTypeSize(IceWatchProc,8, 100244, 12, 1.2, NULL, 100087, NULL)
#else
Msg("Find size of IceWatchProc (100244)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100087,NULL);\n",architecture,100244,0);
#endif

#if defined __i386__
CheckTypeSize(IceIOErrorHandler,4, 100245, 2, 1.2, NULL, 100044, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceIOErrorHandler,4, 100245, 6, 1.2, NULL, 100044, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceIOErrorHandler,4, 100245, 10, 1.2, NULL, 100044, NULL)
#elif defined __ia64__
CheckTypeSize(IceIOErrorHandler,8, 100245, 3, 1.2, NULL, 100044, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceIOErrorHandler,8, 100245, 9, 1.2, NULL, 100044, NULL)
#elif defined __x86_64__
CheckTypeSize(IceIOErrorHandler,8, 100245, 11, 1.2, NULL, 100044, NULL)
#elif defined __s390x__
CheckTypeSize(IceIOErrorHandler,8, 100245, 12, 1.2, NULL, 100044, NULL)
#else
Msg("Find size of IceIOErrorHandler (100245)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100044,NULL);\n",architecture,100245,0);
#endif

#if defined __i386__
CheckTypeSize(IceErrorHandler,4, 100246, 2, 1.2, NULL, 100091, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceErrorHandler,4, 100246, 6, 1.2, NULL, 100091, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceErrorHandler,4, 100246, 10, 1.2, NULL, 100091, NULL)
#elif defined __ia64__
CheckTypeSize(IceErrorHandler,8, 100246, 3, 1.2, NULL, 100091, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceErrorHandler,8, 100246, 9, 1.2, NULL, 100091, NULL)
#elif defined __x86_64__
CheckTypeSize(IceErrorHandler,8, 100246, 11, 1.2, NULL, 100091, NULL)
#elif defined __s390x__
CheckTypeSize(IceErrorHandler,8, 100246, 12, 1.2, NULL, 100091, NULL)
#else
Msg("Find size of IceErrorHandler (100246)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100091, NULL);\n",architecture,100246,0);
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
