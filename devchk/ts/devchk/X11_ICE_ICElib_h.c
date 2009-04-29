/*
 * Test of X11/ICE/ICElib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/ICE/ICElib.h\n");
#endif

printf("Checking data structures in X11/ICE/ICElib.h\n");
#if defined __s390x__
CheckTypeSize(IcePointer,8, 31715, 12, 1.3, NULL, 40, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePointer,8, 31715, 11, 2.0, NULL, 40, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePointer,4, 31715, 10, 1.3, NULL, 40, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePointer,8, 31715, 9, 2.0, NULL, 40, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePointer,4, 31715, 6, 1.2, NULL, 40, NULL)
#elif defined __ia64__
CheckTypeSize(IcePointer,8, 31715, 3, 1.3, NULL, 40, NULL)
#elif defined __i386__
CheckTypeSize(IcePointer,4, 31715, 2, 1.2, NULL, 40, NULL)
#else
Msg("Find size of IcePointer (31715)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,40,NULL);\n",architecture,31715,0);
#endif

#if defined __s390x__
CheckTypeSize(IceConn,8, 31716, 12, 1.3, NULL, 31785, NULL)
#elif defined __x86_64__
CheckTypeSize(IceConn,8, 31716, 11, 2.0, NULL, 31785, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceConn,4, 31716, 10, 1.3, NULL, 31785, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceConn,8, 31716, 9, 2.0, NULL, 31785, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceConn,4, 31716, 6, 1.2, NULL, 31785, NULL)
#elif defined __ia64__
CheckTypeSize(IceConn,8, 31716, 3, 1.3, NULL, 31785, NULL)
#elif defined __i386__
CheckTypeSize(IceConn,4, 31716, 2, 1.2, NULL, 31785, NULL)
#else
Msg("Find size of IceConn (31716)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31785,NULL);\n",architecture,31716,0);
#endif

#if defined __s390x__
CheckTypeSize(IcePaProcessMsgProc,8, 31723, 12, 1.3, NULL, 31704, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePaProcessMsgProc,8, 31723, 11, 2.0, NULL, 31704, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePaProcessMsgProc,4, 31723, 10, 1.3, NULL, 31704, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePaProcessMsgProc,8, 31723, 9, 2.0, NULL, 31704, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePaProcessMsgProc,4, 31723, 6, 1.2, NULL, 31704, NULL)
#elif defined __ia64__
CheckTypeSize(IcePaProcessMsgProc,8, 31723, 3, 1.3, NULL, 31704, NULL)
#elif defined __i386__
CheckTypeSize(IcePaProcessMsgProc,4, 31723, 2, 1.2, NULL, 31704, NULL)
#else
Msg("Find size of IcePaProcessMsgProc (31723)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31704,NULL);\n",architecture,31723,0);
#endif

#if defined __s390x__
CheckTypeSize(IcePaVersionRec,16, 31725, 12, 1.3, NULL, 31724, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePaVersionRec,16, 31725, 11, 2.0, NULL, 31724, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePaVersionRec,12, 31725, 10, 1.3, NULL, 31724, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePaVersionRec,16, 31725, 9, 2.0, NULL, 31724, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePaVersionRec,12, 31725, 6, 1.2, NULL, 31724, NULL)
#elif defined __ia64__
CheckTypeSize(IcePaVersionRec,16, 31725, 3, 1.3, NULL, 31724, NULL)
#elif defined __i386__
CheckTypeSize(IcePaVersionRec,12, 31725, 2, 1.2, NULL, 31724, NULL)
#else
Msg("Find size of IcePaVersionRec (31725)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31724,NULL);\n",architecture,31725,0);
#endif

#if defined __s390x__
CheckTypeSize(IceReplyWaitInfo,24, 31728, 12, 1.3, NULL, 31727, NULL)
#elif defined __x86_64__
CheckTypeSize(IceReplyWaitInfo,24, 31728, 11, 2.0, NULL, 31727, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceReplyWaitInfo,16, 31728, 10, 1.3, NULL, 31727, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceReplyWaitInfo,24, 31728, 9, 2.0, NULL, 31727, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceReplyWaitInfo,16, 31728, 6, 1.2, NULL, 31727, NULL)
#elif defined __ia64__
CheckTypeSize(IceReplyWaitInfo,24, 31728, 3, 1.3, NULL, 31727, NULL)
#elif defined __i386__
CheckTypeSize(IceReplyWaitInfo,16, 31728, 2, 1.2, NULL, 31727, NULL)
#else
Msg("Find size of IceReplyWaitInfo (31728)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31727,NULL);\n",architecture,31728,0);
#endif

#if defined __s390x__
CheckTypeSize(IcePoProcessMsgProc,8, 31730, 12, 1.3, NULL, 31708, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePoProcessMsgProc,8, 31730, 11, 2.0, NULL, 31708, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePoProcessMsgProc,4, 31730, 10, 1.3, NULL, 31708, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePoProcessMsgProc,8, 31730, 9, 2.0, NULL, 31708, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePoProcessMsgProc,4, 31730, 6, 1.2, NULL, 31708, NULL)
#elif defined __ia64__
CheckTypeSize(IcePoProcessMsgProc,8, 31730, 3, 1.3, NULL, 31708, NULL)
#elif defined __i386__
CheckTypeSize(IcePoProcessMsgProc,4, 31730, 2, 1.2, NULL, 31708, NULL)
#else
Msg("Find size of IcePoProcessMsgProc (31730)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31708,NULL);\n",architecture,31730,0);
#endif

#if defined __s390x__
CheckTypeSize(IcePoVersionRec,16, 31732, 12, 1.3, NULL, 31731, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePoVersionRec,16, 31732, 11, 2.0, NULL, 31731, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePoVersionRec,12, 31732, 10, 1.3, NULL, 31731, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePoVersionRec,16, 31732, 9, 2.0, NULL, 31731, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePoVersionRec,12, 31732, 6, 1.2, NULL, 31731, NULL)
#elif defined __ia64__
CheckTypeSize(IcePoVersionRec,16, 31732, 3, 1.3, NULL, 31731, NULL)
#elif defined __i386__
CheckTypeSize(IcePoVersionRec,12, 31732, 2, 1.2, NULL, 31731, NULL)
#else
Msg("Find size of IcePoVersionRec (31732)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31731,NULL);\n",architecture,31732,0);
#endif

#if defined __s390x__
CheckTypeSize(IcePoAuthProc,8, 31734, 12, 1.3, NULL, 31706, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePoAuthProc,8, 31734, 11, 2.0, NULL, 31706, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePoAuthProc,4, 31734, 10, 1.3, NULL, 31706, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePoAuthProc,8, 31734, 9, 2.0, NULL, 31706, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePoAuthProc,4, 31734, 6, 1.2, NULL, 31706, NULL)
#elif defined __ia64__
CheckTypeSize(IcePoAuthProc,8, 31734, 3, 1.3, NULL, 31706, NULL)
#elif defined __i386__
CheckTypeSize(IcePoAuthProc,4, 31734, 2, 1.2, NULL, 31706, NULL)
#else
Msg("Find size of IcePoAuthProc (31734)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31706,NULL);\n",architecture,31734,0);
#endif

#if defined __s390x__
CheckTypeSize(IcePaAuthProc,8, 31736, 12, 1.3, NULL, 31711, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePaAuthProc,8, 31736, 11, 2.0, NULL, 31711, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePaAuthProc,4, 31736, 10, 1.3, NULL, 31711, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePaAuthProc,8, 31736, 9, 2.0, NULL, 31711, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePaAuthProc,4, 31736, 6, 1.2, NULL, 31711, NULL)
#elif defined __ia64__
CheckTypeSize(IcePaAuthProc,8, 31736, 3, 1.3, NULL, 31711, NULL)
#elif defined __i386__
CheckTypeSize(IcePaAuthProc,4, 31736, 2, 1.2, NULL, 31711, NULL)
#else
Msg("Find size of IcePaAuthProc (31736)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31711,NULL);\n",architecture,31736,0);
#endif

#if 1
CheckTypeSize(IceAcceptStatus,4, 31738, 1, 1.2, NULL, 36139, NULL)
#endif

#if 1
CheckTypeSize(struct _IceListenObj,0, 31740, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _IceListenObj on All\n");
#endif

#if defined __s390x__
CheckTypeSize(IceListenObj,8, 31742, 12, 1.3, NULL, 31741, NULL)
#elif defined __x86_64__
CheckTypeSize(IceListenObj,8, 31742, 11, 2.0, NULL, 31741, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceListenObj,4, 31742, 10, 1.3, NULL, 31741, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceListenObj,8, 31742, 9, 2.0, NULL, 31741, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceListenObj,4, 31742, 6, 1.2, NULL, 31741, NULL)
#elif defined __ia64__
CheckTypeSize(IceListenObj,8, 31742, 3, 1.3, NULL, 31741, NULL)
#elif defined __i386__
CheckTypeSize(IceListenObj,4, 31742, 2, 1.2, NULL, 31741, NULL)
#else
Msg("Find size of IceListenObj (31742)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31741,NULL);\n",architecture,31742,0);
#endif

#if 1
CheckTypeSize(IceConnectStatus,4, 31745, 1, 1.2, NULL, 36141, NULL)
#endif

#if defined __s390x__
CheckTypeSize(IceIOErrorProc,8, 31748, 12, 1.3, NULL, 31709, NULL)
#elif defined __x86_64__
CheckTypeSize(IceIOErrorProc,8, 31748, 11, 2.0, NULL, 31709, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceIOErrorProc,4, 31748, 10, 1.3, NULL, 31709, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceIOErrorProc,8, 31748, 9, 2.0, NULL, 31709, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceIOErrorProc,4, 31748, 6, 1.2, NULL, 31709, NULL)
#elif defined __ia64__
CheckTypeSize(IceIOErrorProc,8, 31748, 3, 1.3, NULL, 31709, NULL)
#elif defined __i386__
CheckTypeSize(IceIOErrorProc,4, 31748, 2, 1.2, NULL, 31709, NULL)
#else
Msg("Find size of IceIOErrorProc (31748)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31709,NULL);\n",architecture,31748,0);
#endif

#if defined __s390x__
CheckTypeSize(IceProtocolSetupProc,8, 31752, 12, 1.3, NULL, 31712, NULL)
#elif defined __x86_64__
CheckTypeSize(IceProtocolSetupProc,8, 31752, 11, 2.0, NULL, 31712, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceProtocolSetupProc,4, 31752, 10, 1.3, NULL, 31712, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceProtocolSetupProc,8, 31752, 9, 2.0, NULL, 31712, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceProtocolSetupProc,4, 31752, 6, 1.2, NULL, 31712, NULL)
#elif defined __ia64__
CheckTypeSize(IceProtocolSetupProc,8, 31752, 3, 1.3, NULL, 31712, NULL)
#elif defined __i386__
CheckTypeSize(IceProtocolSetupProc,4, 31752, 2, 1.2, NULL, 31712, NULL)
#else
Msg("Find size of IceProtocolSetupProc (31752)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31712,NULL);\n",architecture,31752,0);
#endif

#if defined __s390x__
CheckTypeSize(IceProtocolActivateProc,8, 31753, 12, 1.3, NULL, 31705, NULL)
#elif defined __x86_64__
CheckTypeSize(IceProtocolActivateProc,8, 31753, 11, 2.0, NULL, 31705, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceProtocolActivateProc,4, 31753, 10, 1.3, NULL, 31705, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceProtocolActivateProc,8, 31753, 9, 2.0, NULL, 31705, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceProtocolActivateProc,4, 31753, 6, 1.2, NULL, 31705, NULL)
#elif defined __ia64__
CheckTypeSize(IceProtocolActivateProc,8, 31753, 3, 1.3, NULL, 31705, NULL)
#elif defined __i386__
CheckTypeSize(IceProtocolActivateProc,4, 31753, 2, 1.2, NULL, 31705, NULL)
#else
Msg("Find size of IceProtocolActivateProc (31753)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31705,NULL);\n",architecture,31753,0);
#endif

#if defined __s390x__
CheckTypeSize(IceHostBasedAuthProc,8, 31754, 12, 1.3, NULL, 31710, NULL)
#elif defined __x86_64__
CheckTypeSize(IceHostBasedAuthProc,8, 31754, 11, 2.0, NULL, 31710, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceHostBasedAuthProc,4, 31754, 10, 1.3, NULL, 31710, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceHostBasedAuthProc,8, 31754, 9, 2.0, NULL, 31710, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceHostBasedAuthProc,4, 31754, 6, 1.2, NULL, 31710, NULL)
#elif defined __ia64__
CheckTypeSize(IceHostBasedAuthProc,8, 31754, 3, 1.3, NULL, 31710, NULL)
#elif defined __i386__
CheckTypeSize(IceHostBasedAuthProc,4, 31754, 2, 1.2, NULL, 31710, NULL)
#else
Msg("Find size of IceHostBasedAuthProc (31754)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31710,NULL);\n",architecture,31754,0);
#endif

#if defined __s390x__
CheckTypeSize(IcePingReplyProc,8, 31768, 12, 1.3, NULL, 31705, NULL)
#elif defined __x86_64__
CheckTypeSize(IcePingReplyProc,8, 31768, 11, 2.0, NULL, 31705, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IcePingReplyProc,4, 31768, 10, 1.3, NULL, 31705, NULL)
#elif defined __powerpc64__
CheckTypeSize(IcePingReplyProc,8, 31768, 9, 2.0, NULL, 31705, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IcePingReplyProc,4, 31768, 6, 1.2, NULL, 31705, NULL)
#elif defined __ia64__
CheckTypeSize(IcePingReplyProc,8, 31768, 3, 1.3, NULL, 31705, NULL)
#elif defined __i386__
CheckTypeSize(IcePingReplyProc,4, 31768, 2, 1.2, NULL, 31705, NULL)
#else
Msg("Find size of IcePingReplyProc (31768)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31705,NULL);\n",architecture,31768,0);
#endif

#if 1
CheckTypeSize(IceProcessMessagesStatus,4, 31786, 1, 1.2, NULL, 36142, NULL)
#endif

#if 1
CheckTypeSize(IceCloseStatus,4, 31787, 1, 1.2, NULL, 36140, NULL)
#endif

#if 1
CheckTypeSize(IceProtocolSetupStatus,4, 31788, 1, 1.2, NULL, 36143, NULL)
#endif

#if defined __s390x__
CheckTypeSize(IceWatchProc,8, 31789, 12, 1.3, NULL, 31713, NULL)
#elif defined __x86_64__
CheckTypeSize(IceWatchProc,8, 31789, 11, 2.0, NULL, 31713, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceWatchProc,4, 31789, 10, 1.3, NULL, 31713, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceWatchProc,8, 31789, 9, 2.0, NULL, 31713, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceWatchProc,4, 31789, 6, 1.2, NULL, 31713, NULL)
#elif defined __ia64__
CheckTypeSize(IceWatchProc,8, 31789, 3, 1.3, NULL, 31713, NULL)
#elif defined __i386__
CheckTypeSize(IceWatchProc,4, 31789, 2, 1.2, NULL, 31713, NULL)
#else
Msg("Find size of IceWatchProc (31789)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31713,NULL);\n",architecture,31789,0);
#endif

#if defined __s390x__
CheckTypeSize(IceIOErrorHandler,8, 31790, 12, 1.3, NULL, 31709, NULL)
#elif defined __x86_64__
CheckTypeSize(IceIOErrorHandler,8, 31790, 11, 2.0, NULL, 31709, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceIOErrorHandler,4, 31790, 10, 1.3, NULL, 31709, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceIOErrorHandler,8, 31790, 9, 2.0, NULL, 31709, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceIOErrorHandler,4, 31790, 6, 1.2, NULL, 31709, NULL)
#elif defined __ia64__
CheckTypeSize(IceIOErrorHandler,8, 31790, 3, 1.3, NULL, 31709, NULL)
#elif defined __i386__
CheckTypeSize(IceIOErrorHandler,4, 31790, 2, 1.2, NULL, 31709, NULL)
#else
Msg("Find size of IceIOErrorHandler (31790)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31709,NULL);\n",architecture,31790,0);
#endif

#if defined __s390x__
CheckTypeSize(IceErrorHandler,8, 31791, 12, 1.3, NULL, 31714, NULL)
#elif defined __x86_64__
CheckTypeSize(IceErrorHandler,8, 31791, 11, 2.0, NULL, 31714, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(IceErrorHandler,4, 31791, 10, 1.3, NULL, 31714, NULL)
#elif defined __powerpc64__
CheckTypeSize(IceErrorHandler,8, 31791, 9, 2.0, NULL, 31714, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(IceErrorHandler,4, 31791, 6, 1.2, NULL, 31714, NULL)
#elif defined __ia64__
CheckTypeSize(IceErrorHandler,8, 31791, 3, 1.3, NULL, 31714, NULL)
#elif defined __i386__
CheckTypeSize(IceErrorHandler,4, 31791, 2, 1.2, NULL, 31714, NULL)
#else
Msg("Find size of IceErrorHandler (31791)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31714,NULL);\n",architecture,31791,0);
#endif

#if 1
CheckTypeSize(IcePoAuthStatus,0, 36137, 1, 1.0, NULL, 36144, NULL)
#endif

#if 1
CheckTypeSize(IcePaAuthStatus,0, 36138, 1, 1.0, NULL, 36145, NULL)
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
typedef IcePoAuthStatus (*IcePoAuthProc_db)(IceConn, IcePointer *, int, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePoAuthProc,IcePoAuthProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef IcePoAuthStatus (*IcePoAuthProc_db)(IceConn, IcePointer *, int, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePoAuthProc,IcePoAuthProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef IcePoAuthStatus (*IcePoAuthProc_db)(IceConn, IcePointer *, int, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePoAuthProc,IcePoAuthProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef IcePoAuthStatus (*IcePoAuthProc_db)(IceConn, IcePointer *, int, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePoAuthProc,IcePoAuthProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef IcePoAuthStatus (*IcePoAuthProc_db)(IceConn, IcePointer *, int, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePoAuthProc,IcePoAuthProc_db);
#elif defined __ia64__
/* IA64 */
typedef IcePoAuthStatus (*IcePoAuthProc_db)(IceConn, IcePointer *, int, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePoAuthProc,IcePoAuthProc_db);
#elif defined __i386__
/* IA32 */
typedef IcePoAuthStatus (*IcePoAuthProc_db)(IceConn, IcePointer *, int, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePoAuthProc,IcePoAuthProc_db);
#endif

#if defined __s390x__
/* S390X */
typedef IcePaAuthStatus (*IcePaAuthProc_db)(IceConn, IcePointer *, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePaAuthProc,IcePaAuthProc_db);
#elif defined __x86_64__
/* x86-64 */
typedef IcePaAuthStatus (*IcePaAuthProc_db)(IceConn, IcePointer *, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePaAuthProc,IcePaAuthProc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef IcePaAuthStatus (*IcePaAuthProc_db)(IceConn, IcePointer *, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePaAuthProc,IcePaAuthProc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef IcePaAuthStatus (*IcePaAuthProc_db)(IceConn, IcePointer *, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePaAuthProc,IcePaAuthProc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef IcePaAuthStatus (*IcePaAuthProc_db)(IceConn, IcePointer *, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePaAuthProc,IcePaAuthProc_db);
#elif defined __ia64__
/* IA64 */
typedef IcePaAuthStatus (*IcePaAuthProc_db)(IceConn, IcePointer *, int, int, IcePointer, int *, IcePointer *, char * *);
CheckFunctionTypedef(IcePaAuthProc,IcePaAuthProc_db);
#elif defined __i386__
/* IA32 */
typedef IcePaAuthStatus (*IcePaAuthProc_db)(IceConn, IcePointer *, int, int, IcePointer, int *, IcePointer *, char * *);
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

extern IceConn IceAcceptConnection_db(IceListenObj, IceAcceptStatus *);
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
extern IceCloseStatus IceCloseConnection_db(IceConn);
CheckInterfacedef(IceCloseConnection,IceCloseConnection_db);
extern char * IceComposeNetworkIdList_db(int, IceListenObj *);
CheckInterfacedef(IceComposeNetworkIdList,IceComposeNetworkIdList_db);
extern int IceConnectionNumber_db(IceConn);
CheckInterfacedef(IceConnectionNumber,IceConnectionNumber_db);
extern IceConnectStatus IceConnectionStatus_db(IceConn);
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
extern IceProcessMessagesStatus IceProcessMessages_db(IceConn, IceReplyWaitInfo *, int *);
CheckInterfacedef(IceProcessMessages,IceProcessMessages_db);
extern int IceProtocolRevision_db(IceConn);
CheckInterfacedef(IceProtocolRevision,IceProtocolRevision_db);
extern IceProtocolSetupStatus IceProtocolSetup_db(IceConn, int, IcePointer, int, int *, int *, char * *, char * *, int, char *);
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
