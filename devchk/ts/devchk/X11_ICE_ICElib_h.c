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

#if defined __s390__ && !defined __s390x__
CheckTypeSize(IcePaVersionRec *,4, 100179, 10, 1.2, NULL, 100178, NULL)
#elif defined __i386__
CheckTypeSize(IcePaVersionRec *,4, 100179, 2, 1.2, NULL, 100178, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePaVersionRec *,4, 100179, 6, 1.2, NULL, 100178, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePaVersionRec *,8, 100179, 11, 1.2, NULL, 100178, NULL)
#elif defined __s390x__
CheckTypeSize(IcePaVersionRec *,8, 100179, 12, 1.2, NULL, 100178, NULL)
#elif defined __ia64__
CheckTypeSize(IcePaVersionRec *,8, 100179, 3, 1.2, NULL, 100178, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePaVersionRec *,8, 100179, 9, 1.2, NULL, 100178, NULL)
#else
Msg("Find size of IcePaVersionRec * (100179)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100178,NULL);\n",architecture,100179,0);
#endif

#if 1
CheckTypeSize(IceReplyWaitInfo,24, 100182, 1, 1.2, NULL, 100181, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(IceReplyWaitInfo *,4, 100183, 10, 1.2, NULL, 100182, NULL)
#elif defined __i386__
CheckTypeSize(IceReplyWaitInfo *,4, 100183, 2, 1.2, NULL, 100182, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceReplyWaitInfo *,4, 100183, 6, 1.2, NULL, 100182, NULL)
#elif defined __x86_64__
CheckTypeSize(IceReplyWaitInfo *,8, 100183, 11, 1.2, NULL, 100182, NULL)
#elif defined __s390x__
CheckTypeSize(IceReplyWaitInfo *,8, 100183, 12, 1.2, NULL, 100182, NULL)
#elif defined __ia64__
CheckTypeSize(IceReplyWaitInfo *,8, 100183, 3, 1.2, NULL, 100182, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceReplyWaitInfo *,8, 100183, 9, 1.2, NULL, 100182, NULL)
#else
Msg("Find size of IceReplyWaitInfo * (100183)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100182,NULL);\n",architecture,100183,0);
#endif

#if 1
CheckTypeSize(IcePoProcessMsgProc,8, 100184, 1, 1.2, NULL, 100042, NULL)
#endif

#if 1
CheckTypeSize(IcePoVersionRec,16, 100186, 1, 1.2, NULL, 100185, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(IcePoVersionRec *,4, 100187, 10, 1.2, NULL, 100186, NULL)
#elif defined __i386__
CheckTypeSize(IcePoVersionRec *,4, 100187, 2, 1.2, NULL, 100186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePoVersionRec *,4, 100187, 6, 1.2, NULL, 100186, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePoVersionRec *,8, 100187, 11, 1.2, NULL, 100186, NULL)
#elif defined __s390x__
CheckTypeSize(IcePoVersionRec *,8, 100187, 12, 1.2, NULL, 100186, NULL)
#elif defined __ia64__
CheckTypeSize(IcePoVersionRec *,8, 100187, 3, 1.2, NULL, 100186, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePoVersionRec *,8, 100187, 9, 1.2, NULL, 100186, NULL)
#else
Msg("Find size of IcePoVersionRec * (100187)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100186,NULL);\n",architecture,100187,0);
#endif

#if 1
CheckTypeSize(IcePoAuthProc,8, 100188, 1, 1.2, NULL, 100034, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(IcePoAuthProc *,4, 100189, 10, 1.2, NULL, 100188, NULL)
#elif defined __i386__
CheckTypeSize(IcePoAuthProc *,4, 100189, 2, 1.2, NULL, 100188, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePoAuthProc *,4, 100189, 6, 1.2, NULL, 100188, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePoAuthProc *,8, 100189, 11, 1.2, NULL, 100188, NULL)
#elif defined __s390x__
CheckTypeSize(IcePoAuthProc *,8, 100189, 12, 1.2, NULL, 100188, NULL)
#elif defined __ia64__
CheckTypeSize(IcePoAuthProc *,8, 100189, 3, 1.2, NULL, 100188, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePoAuthProc *,8, 100189, 9, 1.2, NULL, 100188, NULL)
#else
Msg("Find size of IcePoAuthProc * (100189)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100188,NULL);\n",architecture,100189,0);
#endif

#if 1
CheckTypeSize(IcePaAuthProc,8, 100190, 1, 1.2, NULL, 100052, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(IcePaAuthProc *,4, 100191, 10, 1.2, NULL, 100190, NULL)
#elif defined __i386__
CheckTypeSize(IcePaAuthProc *,4, 100191, 2, 1.2, NULL, 100190, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePaAuthProc *,4, 100191, 6, 1.2, NULL, 100190, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePaAuthProc *,8, 100191, 11, 1.2, NULL, 100190, NULL)
#elif defined __s390x__
CheckTypeSize(IcePaAuthProc *,8, 100191, 12, 1.2, NULL, 100190, NULL)
#elif defined __ia64__
CheckTypeSize(IcePaAuthProc *,8, 100191, 3, 1.2, NULL, 100190, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePaAuthProc *,8, 100191, 9, 1.2, NULL, 100190, NULL)
#else
Msg("Find size of IcePaAuthProc * (100191)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100190,NULL);\n",architecture,100191,0);
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

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _IceListenObj *,4, 100195, 10, 1.2, NULL, 100194, NULL)
#elif defined __i386__
CheckTypeSize(struct _IceListenObj *,4, 100195, 2, 1.2, NULL, 100194, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _IceListenObj *,4, 100195, 6, 1.2, NULL, 100194, NULL)
#elif defined __x86_64__
CheckTypeSize(struct _IceListenObj *,8, 100195, 11, 1.2, NULL, 100194, NULL)
#elif defined __s390x__
CheckTypeSize(struct _IceListenObj *,8, 100195, 12, 1.2, NULL, 100194, NULL)
#elif defined __ia64__
CheckTypeSize(struct _IceListenObj *,8, 100195, 3, 1.2, NULL, 100194, NULL)
#elif defined __powerpc64__
CheckTypeSize(struct _IceListenObj *,8, 100195, 9, 1.2, NULL, 100194, NULL)
#else
Msg("Find size of _IceListenObj * (100195)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100194,NULL);\n",architecture,100195,0);
#endif

#if 1
CheckTypeSize(IceListenObj,8, 100196, 1, 1.2, NULL, 100195, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(IceListenObj *,4, 100197, 10, 1.2, NULL, 100196, NULL)
#elif defined __i386__
CheckTypeSize(IceListenObj *,4, 100197, 2, 1.2, NULL, 100196, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceListenObj *,4, 100197, 6, 1.2, NULL, 100196, NULL)
#elif defined __x86_64__
CheckTypeSize(IceListenObj *,8, 100197, 11, 1.2, NULL, 100196, NULL)
#elif defined __s390x__
CheckTypeSize(IceListenObj *,8, 100197, 12, 1.2, NULL, 100196, NULL)
#elif defined __ia64__
CheckTypeSize(IceListenObj *,8, 100197, 3, 1.2, NULL, 100196, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceListenObj *,8, 100197, 9, 1.2, NULL, 100196, NULL)
#else
Msg("Find size of IceListenObj * (100197)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100196,NULL);\n",architecture,100197,0);
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
