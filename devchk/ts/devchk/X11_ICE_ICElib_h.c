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
#if defined __s390x__
CheckTypeSize(IcePointer,8, 100099, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePointer,8, 100099, 11, 2.0, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePointer,4, 100099, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePointer,8, 100099, 9, 2.0, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePointer,4, 100099, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(IcePointer,8, 100099, 3, 1.3, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(IcePointer,4, 100099, 2, 1.2, NULL, 40, NULL)
#else
Msg("Find size of IcePointer (100099)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,100099,0);
#endif

#if defined __s390x__
CheckTypeSize(IceConn,8, 100100, 12, 1.3, NULL, 100239, NULL)
#elif defined __x86_64__
CheckTypeSize(IceConn,8, 100100, 11, 2.0, NULL, 100239, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceConn,4, 100100, 10, 1.3, NULL, 100239, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceConn,8, 100100, 9, 2.0, NULL, 100239, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceConn,4, 100100, 6, 1.2, NULL, 100239, NULL)
#elif defined __ia64__
CheckTypeSize(IceConn,8, 100100, 3, 1.3, NULL, 100239, NULL)
#elif defined __i386__
CheckTypeSize(IceConn,4, 100100, 2, 1.2, NULL, 100239, NULL)
#else
Msg("Find size of IceConn (100100)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100239,NULL);\n",architecture,100100,0);
#endif

#if defined __s390x__
CheckTypeSize(IcePaProcessMsgProc,8, 100176, 12, 1.3, NULL, 100007, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePaProcessMsgProc,8, 100176, 11, 2.0, NULL, 100007, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePaProcessMsgProc,4, 100176, 10, 1.3, NULL, 100007, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePaProcessMsgProc,8, 100176, 9, 2.0, NULL, 100007, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePaProcessMsgProc,4, 100176, 6, 1.2, NULL, 100007, NULL)
#elif defined __ia64__
CheckTypeSize(IcePaProcessMsgProc,8, 100176, 3, 1.3, NULL, 100007, NULL)
#elif defined __i386__
CheckTypeSize(IcePaProcessMsgProc,4, 100176, 2, 1.2, NULL, 100007, NULL)
#else
Msg("Find size of IcePaProcessMsgProc (100176)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100007,NULL);\n",architecture,100176,0);
#endif

#if defined __s390x__
CheckTypeSize(IcePaVersionRec,16, 100178, 12, 1.3, NULL, 100177, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePaVersionRec,16, 100178, 11, 2.0, NULL, 100177, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePaVersionRec,12, 100178, 10, 1.3, NULL, 100177, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePaVersionRec,16, 100178, 9, 2.0, NULL, 100177, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePaVersionRec,12, 100178, 6, 1.2, NULL, 100177, NULL)
#elif defined __ia64__
CheckTypeSize(IcePaVersionRec,16, 100178, 3, 1.3, NULL, 100177, NULL)
#elif defined __i386__
CheckTypeSize(IcePaVersionRec,12, 100178, 2, 1.2, NULL, 100177, NULL)
#else
Msg("Find size of IcePaVersionRec (100178)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100177,NULL);\n",architecture,100178,0);
#endif

#if defined __s390x__
CheckTypeSize(IceReplyWaitInfo,24, 100182, 12, 1.3, NULL, 100181, NULL)
#elif defined __x86_64__
CheckTypeSize(IceReplyWaitInfo,24, 100182, 11, 2.0, NULL, 100181, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceReplyWaitInfo,16, 100182, 10, 1.3, NULL, 100181, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceReplyWaitInfo,24, 100182, 9, 2.0, NULL, 100181, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceReplyWaitInfo,16, 100182, 6, 1.2, NULL, 100181, NULL)
#elif defined __ia64__
CheckTypeSize(IceReplyWaitInfo,24, 100182, 3, 1.3, NULL, 100181, NULL)
#elif defined __i386__
CheckTypeSize(IceReplyWaitInfo,16, 100182, 2, 1.2, NULL, 100181, NULL)
#else
Msg("Find size of IceReplyWaitInfo (100182)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100181,NULL);\n",architecture,100182,0);
#endif

#if defined __s390x__
CheckTypeSize(IcePoProcessMsgProc,8, 100184, 12, 1.3, NULL, 100042, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePoProcessMsgProc,8, 100184, 11, 2.0, NULL, 100042, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePoProcessMsgProc,4, 100184, 10, 1.3, NULL, 100042, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePoProcessMsgProc,8, 100184, 9, 2.0, NULL, 100042, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePoProcessMsgProc,4, 100184, 6, 1.2, NULL, 100042, NULL)
#elif defined __ia64__
CheckTypeSize(IcePoProcessMsgProc,8, 100184, 3, 1.3, NULL, 100042, NULL)
#elif defined __i386__
CheckTypeSize(IcePoProcessMsgProc,4, 100184, 2, 1.2, NULL, 100042, NULL)
#else
Msg("Find size of IcePoProcessMsgProc (100184)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100042,NULL);\n",architecture,100184,0);
#endif

#if defined __s390x__
CheckTypeSize(IcePoVersionRec,16, 100186, 12, 1.3, NULL, 100185, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePoVersionRec,16, 100186, 11, 2.0, NULL, 100185, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePoVersionRec,12, 100186, 10, 1.3, NULL, 100185, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePoVersionRec,16, 100186, 9, 2.0, NULL, 100185, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePoVersionRec,12, 100186, 6, 1.2, NULL, 100185, NULL)
#elif defined __ia64__
CheckTypeSize(IcePoVersionRec,16, 100186, 3, 1.3, NULL, 100185, NULL)
#elif defined __i386__
CheckTypeSize(IcePoVersionRec,12, 100186, 2, 1.2, NULL, 100185, NULL)
#else
Msg("Find size of IcePoVersionRec (100186)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100185,NULL);\n",architecture,100186,0);
#endif

#if defined __s390x__
CheckTypeSize(IcePoAuthProc,8, 100188, 12, 1.3, NULL, 100034, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePoAuthProc,8, 100188, 11, 2.0, NULL, 100034, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePoAuthProc,4, 100188, 10, 1.3, NULL, 100034, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePoAuthProc,8, 100188, 9, 2.0, NULL, 100034, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePoAuthProc,4, 100188, 6, 1.2, NULL, 100034, NULL)
#elif defined __ia64__
CheckTypeSize(IcePoAuthProc,8, 100188, 3, 1.3, NULL, 100034, NULL)
#elif defined __i386__
CheckTypeSize(IcePoAuthProc,4, 100188, 2, 1.2, NULL, 100034, NULL)
#else
Msg("Find size of IcePoAuthProc (100188)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100034,NULL);\n",architecture,100188,0);
#endif

#if defined __s390x__
CheckTypeSize(IcePaAuthProc,8, 100190, 12, 1.3, NULL, 100052, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePaAuthProc,8, 100190, 11, 2.0, NULL, 100052, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePaAuthProc,4, 100190, 10, 1.3, NULL, 100052, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePaAuthProc,8, 100190, 9, 2.0, NULL, 100052, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePaAuthProc,4, 100190, 6, 1.2, NULL, 100052, NULL)
#elif defined __ia64__
CheckTypeSize(IcePaAuthProc,8, 100190, 3, 1.3, NULL, 100052, NULL)
#elif defined __i386__
CheckTypeSize(IcePaAuthProc,4, 100190, 2, 1.2, NULL, 100052, NULL)
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

#if defined __s390x__
CheckTypeSize(IceListenObj,8, 100196, 12, 1.3, NULL, 100195, NULL)
#elif defined __x86_64__
CheckTypeSize(IceListenObj,8, 100196, 11, 2.0, NULL, 100195, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceListenObj,4, 100196, 10, 1.3, NULL, 100195, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceListenObj,8, 100196, 9, 2.0, NULL, 100195, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceListenObj,4, 100196, 6, 1.2, NULL, 100195, NULL)
#elif defined __ia64__
CheckTypeSize(IceListenObj,8, 100196, 3, 1.3, NULL, 100195, NULL)
#elif defined __i386__
CheckTypeSize(IceListenObj,4, 100196, 2, 1.2, NULL, 100195, NULL)
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

#if defined __s390x__
CheckTypeSize(IceIOErrorProc,8, 100202, 12, 1.3, NULL, 100044, NULL)
#elif defined __x86_64__
CheckTypeSize(IceIOErrorProc,8, 100202, 11, 2.0, NULL, 100044, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceIOErrorProc,4, 100202, 10, 1.3, NULL, 100044, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceIOErrorProc,8, 100202, 9, 2.0, NULL, 100044, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceIOErrorProc,4, 100202, 6, 1.2, NULL, 100044, NULL)
#elif defined __ia64__
CheckTypeSize(IceIOErrorProc,8, 100202, 3, 1.3, NULL, 100044, NULL)
#elif defined __i386__
CheckTypeSize(IceIOErrorProc,4, 100202, 2, 1.2, NULL, 100044, NULL)
#else
Msg("Find size of IceIOErrorProc (100202)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100044,NULL);\n",architecture,100202,0);
#endif

#if defined __s390x__
CheckTypeSize(IceProtocolSetupProc,8, 100206, 12, 1.3, NULL, 100055, NULL)
#elif defined __x86_64__
CheckTypeSize(IceProtocolSetupProc,8, 100206, 11, 2.0, NULL, 100055, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceProtocolSetupProc,4, 100206, 10, 1.3, NULL, 100055, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceProtocolSetupProc,8, 100206, 9, 2.0, NULL, 100055, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceProtocolSetupProc,4, 100206, 6, 1.2, NULL, 100055, NULL)
#elif defined __ia64__
CheckTypeSize(IceProtocolSetupProc,8, 100206, 3, 1.3, NULL, 100055, NULL)
#elif defined __i386__
CheckTypeSize(IceProtocolSetupProc,4, 100206, 2, 1.2, NULL, 100055, NULL)
#else
Msg("Find size of IceProtocolSetupProc (100206)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100055,NULL);\n",architecture,100206,0);
#endif

#if defined __s390x__
CheckTypeSize(IceProtocolActivateProc,8, 100207, 12, 1.3, NULL, 100016, NULL)
#elif defined __x86_64__
CheckTypeSize(IceProtocolActivateProc,8, 100207, 11, 2.0, NULL, 100016, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceProtocolActivateProc,4, 100207, 10, 1.3, NULL, 100016, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceProtocolActivateProc,8, 100207, 9, 2.0, NULL, 100016, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceProtocolActivateProc,4, 100207, 6, 1.2, NULL, 100016, NULL)
#elif defined __ia64__
CheckTypeSize(IceProtocolActivateProc,8, 100207, 3, 1.3, NULL, 100016, NULL)
#elif defined __i386__
CheckTypeSize(IceProtocolActivateProc,4, 100207, 2, 1.2, NULL, 100016, NULL)
#else
Msg("Find size of IceProtocolActivateProc (100207)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100016,NULL);\n",architecture,100207,0);
#endif

#if defined __s390x__
CheckTypeSize(IceHostBasedAuthProc,8, 100208, 12, 1.3, NULL, 100049, NULL)
#elif defined __x86_64__
CheckTypeSize(IceHostBasedAuthProc,8, 100208, 11, 2.0, NULL, 100049, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceHostBasedAuthProc,4, 100208, 10, 1.3, NULL, 100049, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceHostBasedAuthProc,8, 100208, 9, 2.0, NULL, 100049, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceHostBasedAuthProc,4, 100208, 6, 1.2, NULL, 100049, NULL)
#elif defined __ia64__
CheckTypeSize(IceHostBasedAuthProc,8, 100208, 3, 1.3, NULL, 100049, NULL)
#elif defined __i386__
CheckTypeSize(IceHostBasedAuthProc,4, 100208, 2, 1.2, NULL, 100049, NULL)
#else
Msg("Find size of IceHostBasedAuthProc (100208)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100049,NULL);\n",architecture,100208,0);
#endif

#if defined __s390x__
CheckTypeSize(IcePingReplyProc,8, 100222, 12, 1.3, NULL, 100016, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePingReplyProc,8, 100222, 11, 2.0, NULL, 100016, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePingReplyProc,4, 100222, 10, 1.3, NULL, 100016, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePingReplyProc,8, 100222, 9, 2.0, NULL, 100016, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePingReplyProc,4, 100222, 6, 1.2, NULL, 100016, NULL)
#elif defined __ia64__
CheckTypeSize(IcePingReplyProc,8, 100222, 3, 1.3, NULL, 100016, NULL)
#elif defined __i386__
CheckTypeSize(IcePingReplyProc,4, 100222, 2, 1.2, NULL, 100016, NULL)
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

#if defined __s390x__
CheckTypeSize(IceWatchProc,8, 100244, 12, 1.3, NULL, 100087, NULL)
#elif defined __x86_64__
CheckTypeSize(IceWatchProc,8, 100244, 11, 2.0, NULL, 100087, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceWatchProc,4, 100244, 10, 1.3, NULL, 100087, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceWatchProc,8, 100244, 9, 2.0, NULL, 100087, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceWatchProc,4, 100244, 6, 1.2, NULL, 100087, NULL)
#elif defined __ia64__
CheckTypeSize(IceWatchProc,8, 100244, 3, 1.3, NULL, 100087, NULL)
#elif defined __i386__
CheckTypeSize(IceWatchProc,4, 100244, 2, 1.2, NULL, 100087, NULL)
#else
Msg("Find size of IceWatchProc (100244)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100087,NULL);\n",architecture,100244,0);
#endif

#if defined __s390x__
CheckTypeSize(IceIOErrorHandler,8, 100245, 12, 1.3, NULL, 100044, NULL)
#elif defined __x86_64__
CheckTypeSize(IceIOErrorHandler,8, 100245, 11, 2.0, NULL, 100044, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceIOErrorHandler,4, 100245, 10, 1.3, NULL, 100044, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceIOErrorHandler,8, 100245, 9, 2.0, NULL, 100044, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceIOErrorHandler,4, 100245, 6, 1.2, NULL, 100044, NULL)
#elif defined __ia64__
CheckTypeSize(IceIOErrorHandler,8, 100245, 3, 1.3, NULL, 100044, NULL)
#elif defined __i386__
CheckTypeSize(IceIOErrorHandler,4, 100245, 2, 1.2, NULL, 100044, NULL)
#else
Msg("Find size of IceIOErrorHandler (100245)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100044,NULL);\n",architecture,100245,0);
#endif

#if defined __s390x__
CheckTypeSize(IceErrorHandler,8, 100246, 12, 1.3, NULL, 100091, NULL)
#elif defined __x86_64__
CheckTypeSize(IceErrorHandler,8, 100246, 11, 2.0, NULL, 100091, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceErrorHandler,4, 100246, 10, 1.3, NULL, 100091, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceErrorHandler,8, 100246, 9, 2.0, NULL, 100091, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceErrorHandler,4, 100246, 6, 1.2, NULL, 100091, NULL)
#elif defined __ia64__
CheckTypeSize(IceErrorHandler,8, 100246, 3, 1.3, NULL, 100091, NULL)
#elif defined __i386__
CheckTypeSize(IceErrorHandler,4, 100246, 2, 1.2, NULL, 100091, NULL)
#else
Msg("Find size of IceErrorHandler (100246)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100091, NULL);\n",architecture,100246,0);
#endif

#if defined __s390x__
/* S390X */
typedef void (*IcePaProcessMsgProc_db)(IceConn, IcePointer, int, long unsigned int, int);
CheckFunctionTypedef(IcePaProcessMsgProc,IcePaProcessMsgProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*IcePaProcessMsgProc_db)(IceConn, IcePointer, int, long unsigned int, int);
CheckFunctionTypedef(IcePaProcessMsgProc,IcePaProcessMsgProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*IcePaProcessMsgProc_db)(IceConn, IcePointer, int, long unsigned int, int);
CheckFunctionTypedef(IcePaProcessMsgProc,IcePaProcessMsgProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*IcePaProcessMsgProc_db)(IceConn, IcePointer, int, long unsigned int, int);
CheckFunctionTypedef(IcePaProcessMsgProc,IcePaProcessMsgProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*IcePaProcessMsgProc_db)(IceConn, IcePointer, int, long unsigned int, int);
CheckFunctionTypedef(IcePaProcessMsgProc,IcePaProcessMsgProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*IcePaProcessMsgProc_db)(IceConn, IcePointer, int, long unsigned int, int);
CheckFunctionTypedef(IcePaProcessMsgProc,IcePaProcessMsgProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*IcePaProcessMsgProc_db)(IceConn, IcePointer, int, long unsigned int, int);
CheckFunctionTypedef(IcePaProcessMsgProc,IcePaProcessMsgProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*IcePoProcessMsgProc_db)(IceConn, IcePointer, int, long unsigned int, int, IceReplyWaitInfo *, int *);
CheckFunctionTypedef(IcePoProcessMsgProc,IcePoProcessMsgProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*IcePoProcessMsgProc_db)(IceConn, IcePointer, int, long unsigned int, int, IceReplyWaitInfo *, int *);
CheckFunctionTypedef(IcePoProcessMsgProc,IcePoProcessMsgProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*IcePoProcessMsgProc_db)(IceConn, IcePointer, int, long unsigned int, int, IceReplyWaitInfo *, int *);
CheckFunctionTypedef(IcePoProcessMsgProc,IcePoProcessMsgProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*IcePoProcessMsgProc_db)(IceConn, IcePointer, int, long unsigned int, int, IceReplyWaitInfo *, int *);
CheckFunctionTypedef(IcePoProcessMsgProc,IcePoProcessMsgProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*IcePoProcessMsgProc_db)(IceConn, IcePointer, int, long unsigned int, int, IceReplyWaitInfo *, int *);
CheckFunctionTypedef(IcePoProcessMsgProc,IcePoProcessMsgProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*IcePoProcessMsgProc_db)(IceConn, IcePointer, int, long unsigned int, int, IceReplyWaitInfo *, int *);
CheckFunctionTypedef(IcePoProcessMsgProc,IcePoProcessMsgProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*IcePoProcessMsgProc_db)(IceConn, IcePointer, int, long unsigned int, int, IceReplyWaitInfo *, int *);
CheckFunctionTypedef(IcePoProcessMsgProc,IcePoProcessMsgProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef  (*IcePoAuthProc_db)(IceConn, IcePointer *, int, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePoAuthProc,IcePoAuthProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef  (*IcePoAuthProc_db)(IceConn, IcePointer *, int, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePoAuthProc,IcePoAuthProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef  (*IcePoAuthProc_db)(IceConn, IcePointer *, int, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePoAuthProc,IcePoAuthProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef  (*IcePoAuthProc_db)(IceConn, IcePointer *, int, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePoAuthProc,IcePoAuthProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef  (*IcePoAuthProc_db)(IceConn, IcePointer *, int, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePoAuthProc,IcePoAuthProc_db);
#elif defined __ia64__
/* IA64 */
typedef  (*IcePoAuthProc_db)(IceConn, IcePointer *, int, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePoAuthProc,IcePoAuthProc_db);
#elif defined __i386__
/* IA32 */
typedef  (*IcePoAuthProc_db)(IceConn, IcePointer *, int, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePoAuthProc,IcePoAuthProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef  (*IcePaAuthProc_db)(IceConn, IcePointer *, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePaAuthProc,IcePaAuthProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef  (*IcePaAuthProc_db)(IceConn, IcePointer *, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePaAuthProc,IcePaAuthProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef  (*IcePaAuthProc_db)(IceConn, IcePointer *, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePaAuthProc,IcePaAuthProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef  (*IcePaAuthProc_db)(IceConn, IcePointer *, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePaAuthProc,IcePaAuthProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef  (*IcePaAuthProc_db)(IceConn, IcePointer *, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePaAuthProc,IcePaAuthProc_db);
#elif defined __ia64__
/* IA64 */
typedef  (*IcePaAuthProc_db)(IceConn, IcePointer *, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePaAuthProc,IcePaAuthProc_db);
#elif defined __i386__
/* IA32 */
typedef  (*IcePaAuthProc_db)(IceConn, IcePointer *, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePaAuthProc,IcePaAuthProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*IceIOErrorProc_db)(IceConn);
CheckFunctionTypedef(IceIOErrorProc,IceIOErrorProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*IceIOErrorProc_db)(IceConn);
CheckFunctionTypedef(IceIOErrorProc,IceIOErrorProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*IceIOErrorProc_db)(IceConn);
CheckFunctionTypedef(IceIOErrorProc,IceIOErrorProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*IceIOErrorProc_db)(IceConn);
CheckFunctionTypedef(IceIOErrorProc,IceIOErrorProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*IceIOErrorProc_db)(IceConn);
CheckFunctionTypedef(IceIOErrorProc,IceIOErrorProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*IceIOErrorProc_db)(IceConn);
CheckFunctionTypedef(IceIOErrorProc,IceIOErrorProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*IceIOErrorProc_db)(IceConn);
CheckFunctionTypedef(IceIOErrorProc,IceIOErrorProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*IceProtocolSetupProc_db)(IceConn, int, int, char *, char *, IcePointer *, char * *);
CheckFunctionTypedef(IceProtocolSetupProc,IceProtocolSetupProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*IceProtocolSetupProc_db)(IceConn, int, int, char *, char *, IcePointer *, char * *);
CheckFunctionTypedef(IceProtocolSetupProc,IceProtocolSetupProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*IceProtocolSetupProc_db)(IceConn, int, int, char *, char *, IcePointer *, char * *);
CheckFunctionTypedef(IceProtocolSetupProc,IceProtocolSetupProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*IceProtocolSetupProc_db)(IceConn, int, int, char *, char *, IcePointer *, char * *);
CheckFunctionTypedef(IceProtocolSetupProc,IceProtocolSetupProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*IceProtocolSetupProc_db)(IceConn, int, int, char *, char *, IcePointer *, char * *);
CheckFunctionTypedef(IceProtocolSetupProc,IceProtocolSetupProc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*IceProtocolSetupProc_db)(IceConn, int, int, char *, char *, IcePointer *, char * *);
CheckFunctionTypedef(IceProtocolSetupProc,IceProtocolSetupProc_db);
#elif defined __i386__
/* IA32 */
typedef int (*IceProtocolSetupProc_db)(IceConn, int, int, char *, char *, IcePointer *, char * *);
CheckFunctionTypedef(IceProtocolSetupProc,IceProtocolSetupProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*IceProtocolActivateProc_db)(IceConn, IcePointer);
CheckFunctionTypedef(IceProtocolActivateProc,IceProtocolActivateProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*IceProtocolActivateProc_db)(IceConn, IcePointer);
CheckFunctionTypedef(IceProtocolActivateProc,IceProtocolActivateProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*IceProtocolActivateProc_db)(IceConn, IcePointer);
CheckFunctionTypedef(IceProtocolActivateProc,IceProtocolActivateProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*IceProtocolActivateProc_db)(IceConn, IcePointer);
CheckFunctionTypedef(IceProtocolActivateProc,IceProtocolActivateProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*IceProtocolActivateProc_db)(IceConn, IcePointer);
CheckFunctionTypedef(IceProtocolActivateProc,IceProtocolActivateProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*IceProtocolActivateProc_db)(IceConn, IcePointer);
CheckFunctionTypedef(IceProtocolActivateProc,IceProtocolActivateProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*IceProtocolActivateProc_db)(IceConn, IcePointer);
CheckFunctionTypedef(IceProtocolActivateProc,IceProtocolActivateProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef int (*IceHostBasedAuthProc_db)(char *);
CheckFunctionTypedef(IceHostBasedAuthProc,IceHostBasedAuthProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef int (*IceHostBasedAuthProc_db)(char *);
CheckFunctionTypedef(IceHostBasedAuthProc,IceHostBasedAuthProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef int (*IceHostBasedAuthProc_db)(char *);
CheckFunctionTypedef(IceHostBasedAuthProc,IceHostBasedAuthProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef int (*IceHostBasedAuthProc_db)(char *);
CheckFunctionTypedef(IceHostBasedAuthProc,IceHostBasedAuthProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef int (*IceHostBasedAuthProc_db)(char *);
CheckFunctionTypedef(IceHostBasedAuthProc,IceHostBasedAuthProc_db);
#elif defined __ia64__
/* IA64 */
typedef int (*IceHostBasedAuthProc_db)(char *);
CheckFunctionTypedef(IceHostBasedAuthProc,IceHostBasedAuthProc_db);
#elif defined __i386__
/* IA32 */
typedef int (*IceHostBasedAuthProc_db)(char *);
CheckFunctionTypedef(IceHostBasedAuthProc,IceHostBasedAuthProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*IcePingReplyProc_db)(IceConn, IcePointer);
CheckFunctionTypedef(IcePingReplyProc,IcePingReplyProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*IcePingReplyProc_db)(IceConn, IcePointer);
CheckFunctionTypedef(IcePingReplyProc,IcePingReplyProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*IcePingReplyProc_db)(IceConn, IcePointer);
CheckFunctionTypedef(IcePingReplyProc,IcePingReplyProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*IcePingReplyProc_db)(IceConn, IcePointer);
CheckFunctionTypedef(IcePingReplyProc,IcePingReplyProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*IcePingReplyProc_db)(IceConn, IcePointer);
CheckFunctionTypedef(IcePingReplyProc,IcePingReplyProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*IcePingReplyProc_db)(IceConn, IcePointer);
CheckFunctionTypedef(IcePingReplyProc,IcePingReplyProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*IcePingReplyProc_db)(IceConn, IcePointer);
CheckFunctionTypedef(IcePingReplyProc,IcePingReplyProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*IceWatchProc_db)(IceConn, IcePointer, int, IcePointer *);
CheckFunctionTypedef(IceWatchProc,IceWatchProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*IceWatchProc_db)(IceConn, IcePointer, int, IcePointer *);
CheckFunctionTypedef(IceWatchProc,IceWatchProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*IceWatchProc_db)(IceConn, IcePointer, int, IcePointer *);
CheckFunctionTypedef(IceWatchProc,IceWatchProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*IceWatchProc_db)(IceConn, IcePointer, int, IcePointer *);
CheckFunctionTypedef(IceWatchProc,IceWatchProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*IceWatchProc_db)(IceConn, IcePointer, int, IcePointer *);
CheckFunctionTypedef(IceWatchProc,IceWatchProc_db);
#elif defined __ia64__
/* IA64 */
typedef void (*IceWatchProc_db)(IceConn, IcePointer, int, IcePointer *);
CheckFunctionTypedef(IceWatchProc,IceWatchProc_db);
#elif defined __i386__
/* IA32 */
typedef void (*IceWatchProc_db)(IceConn, IcePointer, int, IcePointer *);
CheckFunctionTypedef(IceWatchProc,IceWatchProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*IceIOErrorHandler_db)(IceConn);
CheckFunctionTypedef(IceIOErrorHandler,IceIOErrorHandler_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*IceIOErrorHandler_db)(IceConn);
CheckFunctionTypedef(IceIOErrorHandler,IceIOErrorHandler_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*IceIOErrorHandler_db)(IceConn);
CheckFunctionTypedef(IceIOErrorHandler,IceIOErrorHandler_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*IceIOErrorHandler_db)(IceConn);
CheckFunctionTypedef(IceIOErrorHandler,IceIOErrorHandler_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*IceIOErrorHandler_db)(IceConn);
CheckFunctionTypedef(IceIOErrorHandler,IceIOErrorHandler_db);
#elif defined __ia64__
/* IA64 */
typedef void (*IceIOErrorHandler_db)(IceConn);
CheckFunctionTypedef(IceIOErrorHandler,IceIOErrorHandler_db);
#elif defined __i386__
/* IA32 */
typedef void (*IceIOErrorHandler_db)(IceConn);
CheckFunctionTypedef(IceIOErrorHandler,IceIOErrorHandler_db);
#endif

#if defined __s390x__
/* S390X */
typedef void (*IceErrorHandler_db)(IceConn, int, int, long unsigned int, int, int, IcePointer);
CheckFunctionTypedef(IceErrorHandler,IceErrorHandler_db);
#elif defined __x86_64__
/* x86-64 */
typedef void (*IceErrorHandler_db)(IceConn, int, int, long unsigned int, int, int, IcePointer);
CheckFunctionTypedef(IceErrorHandler,IceErrorHandler_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef void (*IceErrorHandler_db)(IceConn, int, int, long unsigned int, int, int, IcePointer);
CheckFunctionTypedef(IceErrorHandler,IceErrorHandler_db);
#elif defined __powerpc64__
/* PPC64 */
typedef void (*IceErrorHandler_db)(IceConn, int, int, long unsigned int, int, int, IcePointer);
CheckFunctionTypedef(IceErrorHandler,IceErrorHandler_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef void (*IceErrorHandler_db)(IceConn, int, int, long unsigned int, int, int, IcePointer);
CheckFunctionTypedef(IceErrorHandler,IceErrorHandler_db);
#elif defined __ia64__
/* IA64 */
typedef void (*IceErrorHandler_db)(IceConn, int, int, long unsigned int, int, int, IcePointer);
CheckFunctionTypedef(IceErrorHandler,IceErrorHandler_db);
#elif defined __i386__
/* IA32 */
typedef void (*IceErrorHandler_db)(IceConn, int, int, long unsigned int, int, int, IcePointer);
CheckFunctionTypedef(IceErrorHandler,IceErrorHandler_db);
#endif

extern IceConn IceAcceptConnection_db(IceListenObj, enum IceAcceptStatus *);
CheckInterfacedef(IceAcceptConnection,IceAcceptConnection_db);
extern int IceAddConnectionWatch_db(IceWatchProc, IcePointer);
CheckInterfacedef(IceAddConnectionWatch,IceAddConnectionWatch_db);
extern char * IceAllocScratch_db(IceConn, long unsigned int);
CheckInterfacedef(IceAllocScratch,IceAllocScratch_db);
extern void IceAppLockConn_db(IceConn);
CheckInterfacedef(IceAppLockConn,IceAppLockConn_db);
extern void IceAppUnlockConn_db(IceConn);
CheckInterfacedef(IceAppUnlockConn,IceAppUnlockConn_db);
extern int IceCheckShutdownNegotiation_db(IceConn);
CheckInterfacedef(IceCheckShutdownNegotiation,IceCheckShutdownNegotiation_db);
extern enum IceCloseStatus IceCloseConnection_db(IceConn);
CheckInterfacedef(IceCloseConnection,IceCloseConnection_db);
extern char * IceComposeNetworkIdList_db(int, IceListenObj *);
CheckInterfacedef(IceComposeNetworkIdList,IceComposeNetworkIdList_db);
extern int IceConnectionNumber_db(IceConn);
CheckInterfacedef(IceConnectionNumber,IceConnectionNumber_db);
extern enum IceConnectStatus IceConnectionStatus_db(IceConn);
CheckInterfacedef(IceConnectionStatus,IceConnectionStatus_db);
extern char * IceConnectionString_db(IceConn);
CheckInterfacedef(IceConnectionString,IceConnectionString_db);
extern int IceFlush_db(IceConn);
CheckInterfacedef(IceFlush,IceFlush_db);
extern void IceFreeListenObjs_db(int, IceListenObj *);
CheckInterfacedef(IceFreeListenObjs,IceFreeListenObjs_db);
extern IcePointer IceGetConnectionContext_db(IceConn);
CheckInterfacedef(IceGetConnectionContext,IceGetConnectionContext_db);
extern int IceGetInBufSize_db(IceConn);
CheckInterfacedef(IceGetInBufSize,IceGetInBufSize_db);
extern int IceGetListenConnectionNumber_db(IceListenObj);
CheckInterfacedef(IceGetListenConnectionNumber,IceGetListenConnectionNumber_db);
extern char * IceGetListenConnectionString_db(IceListenObj);
CheckInterfacedef(IceGetListenConnectionString,IceGetListenConnectionString_db);
extern int IceGetOutBufSize_db(IceConn);
CheckInterfacedef(IceGetOutBufSize,IceGetOutBufSize_db);
extern int IceInitThreads_db(void);
CheckInterfacedef(IceInitThreads,IceInitThreads_db);
extern long unsigned int IceLastReceivedSequenceNumber_db(IceConn);
CheckInterfacedef(IceLastReceivedSequenceNumber,IceLastReceivedSequenceNumber_db);
extern long unsigned int IceLastSentSequenceNumber_db(IceConn);
CheckInterfacedef(IceLastSentSequenceNumber,IceLastSentSequenceNumber_db);
extern int IceListenForConnections_db(int *, IceListenObj * *, int, char *);
CheckInterfacedef(IceListenForConnections,IceListenForConnections_db);
extern int IceListenForWellKnownConnections_db(char *, int *, IceListenObj * *, int, char *);
CheckInterfacedef(IceListenForWellKnownConnections,IceListenForWellKnownConnections_db);
extern IceConn IceOpenConnection_db(char *, IcePointer, int, int, int, char *);
CheckInterfacedef(IceOpenConnection,IceOpenConnection_db);
extern int IcePing_db(IceConn, IcePingReplyProc, IcePointer);
CheckInterfacedef(IcePing,IcePing_db);
extern enum IceProcessMessagesStatus IceProcessMessages_db(IceConn, IceReplyWaitInfo *, int *);
CheckInterfacedef(IceProcessMessages,IceProcessMessages_db);
extern int IceProtocolRevision_db(IceConn);
CheckInterfacedef(IceProtocolRevision,IceProtocolRevision_db);
extern enum IceProtocolSetupStatus IceProtocolSetup_db(IceConn, int, IcePointer, int, int *, int *, char * *, char * *, int, char *);
CheckInterfacedef(IceProtocolSetup,IceProtocolSetup_db);
extern int IceProtocolShutdown_db(IceConn, int);
CheckInterfacedef(IceProtocolShutdown,IceProtocolShutdown_db);
extern int IceProtocolVersion_db(IceConn);
CheckInterfacedef(IceProtocolVersion,IceProtocolVersion_db);
extern int IceRegisterForProtocolReply_db(char *, char *, char *, int, IcePaVersionRec *, int, char * *, IcePaAuthProc *, IceHostBasedAuthProc, IceProtocolSetupProc, IceProtocolActivateProc, IceIOErrorProc);
CheckInterfacedef(IceRegisterForProtocolReply,IceRegisterForProtocolReply_db);
extern int IceRegisterForProtocolSetup_db(char *, char *, char *, int, IcePoVersionRec *, int, char * *, IcePoAuthProc *, IceIOErrorProc);
CheckInterfacedef(IceRegisterForProtocolSetup,IceRegisterForProtocolSetup_db);
extern char * IceRelease_db(IceConn);
CheckInterfacedef(IceRelease,IceRelease_db);
extern void IceRemoveConnectionWatch_db(IceWatchProc, IcePointer);
CheckInterfacedef(IceRemoveConnectionWatch,IceRemoveConnectionWatch_db);
extern IceErrorHandler IceSetErrorHandler_db(IceErrorHandler);
CheckInterfacedef(IceSetErrorHandler,IceSetErrorHandler_db);
extern void IceSetHostBasedAuthProc_db(IceListenObj, IceHostBasedAuthProc);
CheckInterfacedef(IceSetHostBasedAuthProc,IceSetHostBasedAuthProc_db);
extern IceIOErrorHandler IceSetIOErrorHandler_db(IceIOErrorHandler);
CheckInterfacedef(IceSetIOErrorHandler,IceSetIOErrorHandler_db);
extern void IceSetShutdownNegotiation_db(IceConn, int);
CheckInterfacedef(IceSetShutdownNegotiation,IceSetShutdownNegotiation_db);
extern int IceSwapping_db(IceConn);
CheckInterfacedef(IceSwapping,IceSwapping_db);
extern char * IceVendor_db(IceConn);
CheckInterfacedef(IceVendor,IceVendor_db);
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
