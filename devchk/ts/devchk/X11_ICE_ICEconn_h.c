/*
 * Test of X11/ICE/ICEconn.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
struct _XtransConnInfo {};
#include "X11/ICE/ICEconn.h"



#ifdef TET_TEST
void X11_ICE_ICEconn_h()
{
#else
int X11_ICE_ICEconn_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/ICE/ICEconn.h\n");
#endif

printf("Checking data structures in X11/ICE/ICEconn.h\n");
#if 1
CheckTypeSize(struct _XtransConnInfo,0, 100200, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XtransConnInfo on All\n");
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XtransConnInfo *,4, 100201, 10, 1.2, NULL, 100200, NULL)
#elif defined __i386__
CheckTypeSize(struct _XtransConnInfo *,4, 100201, 2, 1.2, NULL, 100200, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XtransConnInfo *,4, 100201, 6, 1.2, NULL, 100200, NULL)
#elif defined __x86_64__
CheckTypeSize(struct _XtransConnInfo *,8, 100201, 11, 1.2, NULL, 100200, NULL)
#elif defined __s390x__
CheckTypeSize(struct _XtransConnInfo *,8, 100201, 12, 1.2, NULL, 100200, NULL)
#elif defined __ia64__
CheckTypeSize(struct _XtransConnInfo *,8, 100201, 3, 1.2, NULL, 100200, NULL)
#elif defined __powerpc64__
CheckTypeSize(struct _XtransConnInfo *,8, 100201, 9, 1.2, NULL, 100200, NULL)
#else
Msg("Find size of _XtransConnInfo * (100201)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100200,NULL);\n",architecture,100201,0);
#endif

#if 1
CheckTypeSize(_IcePoProtocol,64, 100204, 1, 1.2, NULL, 100203, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(_IcePoProtocol *,4, 100205, 10, 1.2, NULL, 100204, NULL)
#elif defined __i386__
CheckTypeSize(_IcePoProtocol *,4, 100205, 2, 1.2, NULL, 100204, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IcePoProtocol *,4, 100205, 6, 1.2, NULL, 100204, NULL)
#elif defined __x86_64__
CheckTypeSize(_IcePoProtocol *,8, 100205, 11, 1.2, NULL, 100204, NULL)
#elif defined __s390x__
CheckTypeSize(_IcePoProtocol *,8, 100205, 12, 1.2, NULL, 100204, NULL)
#elif defined __ia64__
CheckTypeSize(_IcePoProtocol *,8, 100205, 3, 1.2, NULL, 100204, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IcePoProtocol *,8, 100205, 9, 1.2, NULL, 100204, NULL)
#else
Msg("Find size of _IcePoProtocol * (100205)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100204,NULL);\n",architecture,100205,0);
#endif

#if 1
CheckTypeSize(_IcePaProtocol,88, 100210, 1, 1.2, NULL, 100209, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(_IcePaProtocol *,4, 100211, 10, 1.2, NULL, 100210, NULL)
#elif defined __i386__
CheckTypeSize(_IcePaProtocol *,4, 100211, 2, 1.2, NULL, 100210, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IcePaProtocol *,4, 100211, 6, 1.2, NULL, 100210, NULL)
#elif defined __x86_64__
CheckTypeSize(_IcePaProtocol *,8, 100211, 11, 1.2, NULL, 100210, NULL)
#elif defined __s390x__
CheckTypeSize(_IcePaProtocol *,8, 100211, 12, 1.2, NULL, 100210, NULL)
#elif defined __ia64__
CheckTypeSize(_IcePaProtocol *,8, 100211, 3, 1.2, NULL, 100210, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IcePaProtocol *,8, 100211, 9, 1.2, NULL, 100210, NULL)
#else
Msg("Find size of _IcePaProtocol * (100211)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100210,NULL);\n",architecture,100211,0);
#endif

#if 1
CheckTypeSize(_IceProtocol,24, 100213, 1, 1.2, NULL, 100212, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(_IceProtocol *,4, 100214, 10, 1.2, NULL, 100213, NULL)
#elif defined __i386__
CheckTypeSize(_IceProtocol *,4, 100214, 2, 1.2, NULL, 100213, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceProtocol *,4, 100214, 6, 1.2, NULL, 100213, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceProtocol *,8, 100214, 11, 1.2, NULL, 100213, NULL)
#elif defined __s390x__
CheckTypeSize(_IceProtocol *,8, 100214, 12, 1.2, NULL, 100213, NULL)
#elif defined __ia64__
CheckTypeSize(_IceProtocol *,8, 100214, 3, 1.2, NULL, 100213, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceProtocol *,8, 100214, 9, 1.2, NULL, 100213, NULL)
#else
Msg("Find size of _IceProtocol * (100214)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100213,NULL);\n",architecture,100214,0);
#endif

#if 1
CheckTypeSize(_IceProcessMsgInfo,40, 100217, 1, 1.2, NULL, 100216, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(_IceProcessMsgInfo *,4, 100218, 10, 1.2, NULL, 100217, NULL)
#elif defined __i386__
CheckTypeSize(_IceProcessMsgInfo *,4, 100218, 2, 1.2, NULL, 100217, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceProcessMsgInfo *,4, 100218, 6, 1.2, NULL, 100217, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceProcessMsgInfo *,8, 100218, 11, 1.2, NULL, 100217, NULL)
#elif defined __s390x__
CheckTypeSize(_IceProcessMsgInfo *,8, 100218, 12, 1.2, NULL, 100217, NULL)
#elif defined __ia64__
CheckTypeSize(_IceProcessMsgInfo *,8, 100218, 3, 1.2, NULL, 100217, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceProcessMsgInfo *,8, 100218, 9, 1.2, NULL, 100217, NULL)
#else
Msg("Find size of _IceProcessMsgInfo * (100218)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100217,NULL);\n",architecture,100218,0);
#endif

#if 1
CheckTypeSize(struct _IceSavedReplyWait,24, 100219, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _IceSavedReplyWait on All\n");
CheckOffset(struct _IceSavedReplyWait,reply_wait,0,1,77846)
CheckOffset(struct _IceSavedReplyWait,reply_ready,0,1,77847)
CheckOffset(struct _IceSavedReplyWait,next,0,1,77848)
#endif

#if 1
CheckTypeSize(_IceSavedReplyWait,24, 100220, 1, 1.2, NULL, 100219, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(_IceSavedReplyWait *,4, 100221, 10, 1.2, NULL, 100220, NULL)
#elif defined __i386__
CheckTypeSize(_IceSavedReplyWait *,4, 100221, 2, 1.2, NULL, 100220, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceSavedReplyWait *,4, 100221, 6, 1.2, NULL, 100220, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceSavedReplyWait *,8, 100221, 11, 1.2, NULL, 100220, NULL)
#elif defined __s390x__
CheckTypeSize(_IceSavedReplyWait *,8, 100221, 12, 1.2, NULL, 100220, NULL)
#elif defined __ia64__
CheckTypeSize(_IceSavedReplyWait *,8, 100221, 3, 1.2, NULL, 100220, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceSavedReplyWait *,8, 100221, 9, 1.2, NULL, 100220, NULL)
#else
Msg("Find size of _IceSavedReplyWait * (100221)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100220,NULL);\n",architecture,100221,0);
#endif

#if 1
CheckTypeSize(struct _IcePingWait,24, 100223, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _IcePingWait on All\n");
CheckOffset(struct _IcePingWait,ping_reply_proc,0,1,77849)
CheckOffset(struct _IcePingWait,client_data,0,1,77850)
CheckOffset(struct _IcePingWait,next,0,1,77851)
#endif

#if 1
CheckTypeSize(_IcePingWait,24, 100224, 1, 1.2, NULL, 100223, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(_IcePingWait *,4, 100225, 10, 1.2, NULL, 100224, NULL)
#elif defined __i386__
CheckTypeSize(_IcePingWait *,4, 100225, 2, 1.2, NULL, 100224, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IcePingWait *,4, 100225, 6, 1.2, NULL, 100224, NULL)
#elif defined __x86_64__
CheckTypeSize(_IcePingWait *,8, 100225, 11, 1.2, NULL, 100224, NULL)
#elif defined __s390x__
CheckTypeSize(_IcePingWait *,8, 100225, 12, 1.2, NULL, 100224, NULL)
#elif defined __ia64__
CheckTypeSize(_IcePingWait *,8, 100225, 3, 1.2, NULL, 100224, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IcePingWait *,8, 100225, 9, 1.2, NULL, 100224, NULL)
#else
Msg("Find size of _IcePingWait * (100225)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100224,NULL);\n",architecture,100225,0);
#endif

#if 1
CheckTypeSize(_IceConnectToYouInfo,16, 100227, 1, 1.2, NULL, 100226, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(_IceConnectToYouInfo *,4, 100228, 10, 1.2, NULL, 100227, NULL)
#elif defined __i386__
CheckTypeSize(_IceConnectToYouInfo *,4, 100228, 2, 1.2, NULL, 100227, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceConnectToYouInfo *,4, 100228, 6, 1.2, NULL, 100227, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceConnectToYouInfo *,8, 100228, 11, 1.2, NULL, 100227, NULL)
#elif defined __s390x__
CheckTypeSize(_IceConnectToYouInfo *,8, 100228, 12, 1.2, NULL, 100227, NULL)
#elif defined __ia64__
CheckTypeSize(_IceConnectToYouInfo *,8, 100228, 3, 1.2, NULL, 100227, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceConnectToYouInfo *,8, 100228, 9, 1.2, NULL, 100227, NULL)
#else
Msg("Find size of _IceConnectToYouInfo * (100228)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100227,NULL);\n",architecture,100228,0);
#endif

#if 1
CheckTypeSize(_IceProtoSetupToYouInfo,32, 100230, 1, 1.2, NULL, 100229, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(_IceProtoSetupToYouInfo *,4, 100231, 10, 1.2, NULL, 100230, NULL)
#elif defined __i386__
CheckTypeSize(_IceProtoSetupToYouInfo *,4, 100231, 2, 1.2, NULL, 100230, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceProtoSetupToYouInfo *,4, 100231, 6, 1.2, NULL, 100230, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceProtoSetupToYouInfo *,8, 100231, 11, 1.2, NULL, 100230, NULL)
#elif defined __s390x__
CheckTypeSize(_IceProtoSetupToYouInfo *,8, 100231, 12, 1.2, NULL, 100230, NULL)
#elif defined __ia64__
CheckTypeSize(_IceProtoSetupToYouInfo *,8, 100231, 3, 1.2, NULL, 100230, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceProtoSetupToYouInfo *,8, 100231, 9, 1.2, NULL, 100230, NULL)
#else
Msg("Find size of _IceProtoSetupToYouInfo * (100231)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100230,NULL);\n",architecture,100231,0);
#endif

#if 1
CheckTypeSize(_IceConnectToMeInfo,48, 100233, 1, 1.2, NULL, 100232, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(_IceConnectToMeInfo *,4, 100234, 10, 1.2, NULL, 100233, NULL)
#elif defined __i386__
CheckTypeSize(_IceConnectToMeInfo *,4, 100234, 2, 1.2, NULL, 100233, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceConnectToMeInfo *,4, 100234, 6, 1.2, NULL, 100233, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceConnectToMeInfo *,8, 100234, 11, 1.2, NULL, 100233, NULL)
#elif defined __s390x__
CheckTypeSize(_IceConnectToMeInfo *,8, 100234, 12, 1.2, NULL, 100233, NULL)
#elif defined __ia64__
CheckTypeSize(_IceConnectToMeInfo *,8, 100234, 3, 1.2, NULL, 100233, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceConnectToMeInfo *,8, 100234, 9, 1.2, NULL, 100233, NULL)
#else
Msg("Find size of _IceConnectToMeInfo * (100234)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100233,NULL);\n",architecture,100234,0);
#endif

#if 1
CheckTypeSize(_IceProtoSetupToMeInfo,56, 100236, 1, 1.2, NULL, 100235, NULL)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(_IceProtoSetupToMeInfo *,4, 100237, 10, 1.2, NULL, 100236, NULL)
#elif defined __i386__
CheckTypeSize(_IceProtoSetupToMeInfo *,4, 100237, 2, 1.2, NULL, 100236, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceProtoSetupToMeInfo *,4, 100237, 6, 1.2, NULL, 100236, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceProtoSetupToMeInfo *,8, 100237, 11, 1.2, NULL, 100236, NULL)
#elif defined __s390x__
CheckTypeSize(_IceProtoSetupToMeInfo *,8, 100237, 12, 1.2, NULL, 100236, NULL)
#elif defined __ia64__
CheckTypeSize(_IceProtoSetupToMeInfo *,8, 100237, 3, 1.2, NULL, 100236, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceProtoSetupToMeInfo *,8, 100237, 9, 1.2, NULL, 100236, NULL)
#else
Msg("Find size of _IceProtoSetupToMeInfo * (100237)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100236,NULL);\n",architecture,100237,0);
#endif

#if 1
CheckTypeSize(struct _IceConn,216, 100238, 1, 1.2, NULL, 0, NULL)
CheckBitField(struct _IceConn,io_ok,1,1,77877)
CheckBitField(struct _IceConn,swap,1,1,77878)
CheckBitField(struct _IceConn,waiting_for_byteorder,1,1,77879)
CheckBitField(struct _IceConn,skip_want_to_close,1,1,77880)
CheckBitField(struct _IceConn,want_to_close,1,1,77881)
CheckBitField(struct _IceConn,free_asap,1,1,77882)
CheckBitField(struct _IceConn,unused1,2,1,77883)
CheckBitField(struct _IceConn,unused2,8,1,77884)
#endif

#if defined __s390__ && !defined __s390x__
CheckTypeSize(struct _IceConn *,4, 100239, 10, 1.2, NULL, 100238, NULL)
#elif defined __i386__
CheckTypeSize(struct _IceConn *,4, 100239, 2, 1.2, NULL, 100238, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _IceConn *,4, 100239, 6, 1.2, NULL, 100238, NULL)
#elif defined __x86_64__
CheckTypeSize(struct _IceConn *,8, 100239, 11, 1.2, NULL, 100238, NULL)
#elif defined __s390x__
CheckTypeSize(struct _IceConn *,8, 100239, 12, 1.2, NULL, 100238, NULL)
#elif defined __ia64__
CheckTypeSize(struct _IceConn *,8, 100239, 3, 1.2, NULL, 100238, NULL)
#elif defined __powerpc64__
CheckTypeSize(struct _IceConn *,8, 100239, 9, 1.2, NULL, 100238, NULL)
#else
Msg("Find size of _IceConn * (100239)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100238, NULL);\n",architecture,100239,0);
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/ICE/ICEconn.h\n\n",pcnt,cnt);
return cnt;
#endif

}
