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

#if defined __i386__
CheckTypeSize(_IcePoProtocol,32, 100204, 2, 1.2, NULL, 100203, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IcePoProtocol,32, 100204, 6, 1.2, NULL, 100203, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IcePoProtocol,32, 100204, 10, 1.2, NULL, 100203, NULL)
#elif defined __ia64__
CheckTypeSize(_IcePoProtocol,64, 100204, 3, 1.2, NULL, 100203, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IcePoProtocol,64, 100204, 9, 1.2, NULL, 100203, NULL)
#elif defined __x86_64__
CheckTypeSize(_IcePoProtocol,64, 100204, 11, 1.2, NULL, 100203, NULL)
#elif defined __s390x__
CheckTypeSize(_IcePoProtocol,64, 100204, 12, 1.2, NULL, 100203, NULL)
#else
Msg("Find size of _IcePoProtocol (100204)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100203,NULL);\n",architecture,100204,0);
#endif

#if defined __i386__
CheckTypeSize(_IcePaProtocol,44, 100210, 2, 1.2, NULL, 100209, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IcePaProtocol,44, 100210, 6, 1.2, NULL, 100209, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IcePaProtocol,44, 100210, 10, 1.2, NULL, 100209, NULL)
#elif defined __ia64__
CheckTypeSize(_IcePaProtocol,88, 100210, 3, 1.2, NULL, 100209, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IcePaProtocol,88, 100210, 9, 1.2, NULL, 100209, NULL)
#elif defined __x86_64__
CheckTypeSize(_IcePaProtocol,88, 100210, 11, 1.2, NULL, 100209, NULL)
#elif defined __s390x__
CheckTypeSize(_IcePaProtocol,88, 100210, 12, 1.2, NULL, 100209, NULL)
#else
Msg("Find size of _IcePaProtocol (100210)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100209,NULL);\n",architecture,100210,0);
#endif

#if defined __i386__
CheckTypeSize(_IceProtocol,12, 100213, 2, 1.2, NULL, 100212, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceProtocol,12, 100213, 6, 1.2, NULL, 100212, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IceProtocol,12, 100213, 10, 1.2, NULL, 100212, NULL)
#elif defined __ia64__
CheckTypeSize(_IceProtocol,24, 100213, 3, 1.2, NULL, 100212, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceProtocol,24, 100213, 9, 1.2, NULL, 100212, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceProtocol,24, 100213, 11, 1.2, NULL, 100212, NULL)
#elif defined __s390x__
CheckTypeSize(_IceProtocol,24, 100213, 12, 1.2, NULL, 100212, NULL)
#else
Msg("Find size of _IceProtocol (100213)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100212,NULL);\n",architecture,100213,0);
#endif

#if defined __i386__
CheckTypeSize(_IceProcessMsgInfo,24, 100217, 2, 1.2, NULL, 100216, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceProcessMsgInfo,24, 100217, 6, 1.2, NULL, 100216, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IceProcessMsgInfo,24, 100217, 10, 1.2, NULL, 100216, NULL)
#elif defined __ia64__
CheckTypeSize(_IceProcessMsgInfo,40, 100217, 3, 1.2, NULL, 100216, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceProcessMsgInfo,40, 100217, 9, 1.2, NULL, 100216, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceProcessMsgInfo,40, 100217, 11, 1.2, NULL, 100216, NULL)
#elif defined __s390x__
CheckTypeSize(_IceProcessMsgInfo,40, 100217, 12, 1.2, NULL, 100216, NULL)
#else
Msg("Find size of _IceProcessMsgInfo (100217)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100216,NULL);\n",architecture,100217,0);
#endif

#if defined __i386__
CheckTypeSize(struct _IceSavedReplyWait,12, 100219, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IceSavedReplyWait,reply_ready,4,2,77847)
CheckOffset(struct _IceSavedReplyWait,reply_ready,4,2,77847)
CheckMemberSize(struct _IceSavedReplyWait,next,4,2,77848)
CheckOffset(struct _IceSavedReplyWait,next,8,2,77848)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _IceSavedReplyWait,12, 100219, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IceSavedReplyWait,reply_ready,4,6,77847)
CheckOffset(struct _IceSavedReplyWait,reply_ready,4,6,77847)
CheckMemberSize(struct _IceSavedReplyWait,next,4,6,77848)
CheckOffset(struct _IceSavedReplyWait,next,8,6,77848)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _IceSavedReplyWait,12, 100219, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IceSavedReplyWait,reply_ready,4,10,77847)
CheckOffset(struct _IceSavedReplyWait,reply_ready,4,10,77847)
CheckMemberSize(struct _IceSavedReplyWait,next,4,10,77848)
CheckOffset(struct _IceSavedReplyWait,next,8,10,77848)
#elif defined __ia64__
CheckTypeSize(struct _IceSavedReplyWait,24, 100219, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IceSavedReplyWait,reply_ready,4,3,77847)
CheckOffset(struct _IceSavedReplyWait,reply_ready,8,3,77847)
CheckMemberSize(struct _IceSavedReplyWait,next,8,3,77848)
CheckOffset(struct _IceSavedReplyWait,next,16,3,77848)
#elif defined __powerpc64__
CheckTypeSize(struct _IceSavedReplyWait,24, 100219, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IceSavedReplyWait,reply_ready,4,9,77847)
CheckOffset(struct _IceSavedReplyWait,reply_ready,8,9,77847)
CheckMemberSize(struct _IceSavedReplyWait,next,8,9,77848)
CheckOffset(struct _IceSavedReplyWait,next,16,9,77848)
#elif defined __x86_64__
CheckTypeSize(struct _IceSavedReplyWait,24, 100219, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IceSavedReplyWait,reply_ready,4,11,77847)
CheckOffset(struct _IceSavedReplyWait,reply_ready,8,11,77847)
CheckMemberSize(struct _IceSavedReplyWait,next,8,11,77848)
CheckOffset(struct _IceSavedReplyWait,next,16,11,77848)
#elif defined __s390x__
CheckTypeSize(struct _IceSavedReplyWait,24, 100219, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IceSavedReplyWait,reply_ready,4,12,77847)
CheckOffset(struct _IceSavedReplyWait,reply_ready,8,12,77847)
CheckMemberSize(struct _IceSavedReplyWait,next,8,12,77848)
CheckOffset(struct _IceSavedReplyWait,next,16,12,77848)
#else
Msg("Find size of _IceSavedReplyWait (100219)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,100219,0);
#endif

#if defined __i386__
CheckTypeSize(_IceSavedReplyWait,12, 100220, 2, 1.2, NULL, 100219, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceSavedReplyWait,12, 100220, 6, 1.2, NULL, 100219, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IceSavedReplyWait,12, 100220, 10, 1.2, NULL, 100219, NULL)
#elif defined __ia64__
CheckTypeSize(_IceSavedReplyWait,24, 100220, 3, 1.2, NULL, 100219, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceSavedReplyWait,24, 100220, 9, 1.2, NULL, 100219, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceSavedReplyWait,24, 100220, 11, 1.2, NULL, 100219, NULL)
#elif defined __s390x__
CheckTypeSize(_IceSavedReplyWait,24, 100220, 12, 1.2, NULL, 100219, NULL)
#else
Msg("Find size of _IceSavedReplyWait (100220)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100219,NULL);\n",architecture,100220,0);
#endif

#if defined __i386__
CheckTypeSize(struct _IcePingWait,12, 100223, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IcePingWait,client_data,4,2,77850)
CheckOffset(struct _IcePingWait,client_data,4,2,77850)
CheckMemberSize(struct _IcePingWait,next,4,2,77851)
CheckOffset(struct _IcePingWait,next,8,2,77851)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _IcePingWait,12, 100223, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IcePingWait,client_data,4,6,77850)
CheckOffset(struct _IcePingWait,client_data,4,6,77850)
CheckMemberSize(struct _IcePingWait,next,4,6,77851)
CheckOffset(struct _IcePingWait,next,8,6,77851)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _IcePingWait,12, 100223, 10, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IcePingWait,client_data,4,10,77850)
CheckOffset(struct _IcePingWait,client_data,4,10,77850)
CheckMemberSize(struct _IcePingWait,next,4,10,77851)
CheckOffset(struct _IcePingWait,next,8,10,77851)
#elif defined __ia64__
CheckTypeSize(struct _IcePingWait,24, 100223, 3, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IcePingWait,client_data,8,3,77850)
CheckOffset(struct _IcePingWait,client_data,8,3,77850)
CheckMemberSize(struct _IcePingWait,next,8,3,77851)
CheckOffset(struct _IcePingWait,next,16,3,77851)
#elif defined __powerpc64__
CheckTypeSize(struct _IcePingWait,24, 100223, 9, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IcePingWait,client_data,8,9,77850)
CheckOffset(struct _IcePingWait,client_data,8,9,77850)
CheckMemberSize(struct _IcePingWait,next,8,9,77851)
CheckOffset(struct _IcePingWait,next,16,9,77851)
#elif defined __x86_64__
CheckTypeSize(struct _IcePingWait,24, 100223, 11, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IcePingWait,client_data,8,11,77850)
CheckOffset(struct _IcePingWait,client_data,8,11,77850)
CheckMemberSize(struct _IcePingWait,next,8,11,77851)
CheckOffset(struct _IcePingWait,next,16,11,77851)
#elif defined __s390x__
CheckTypeSize(struct _IcePingWait,24, 100223, 12, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IcePingWait,client_data,8,12,77850)
CheckOffset(struct _IcePingWait,client_data,8,12,77850)
CheckMemberSize(struct _IcePingWait,next,8,12,77851)
CheckOffset(struct _IcePingWait,next,16,12,77851)
#else
Msg("Find size of _IcePingWait (100223)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,100223,0);
#endif

#if defined __i386__
CheckTypeSize(_IcePingWait,12, 100224, 2, 1.2, NULL, 100223, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IcePingWait,12, 100224, 6, 1.2, NULL, 100223, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IcePingWait,12, 100224, 10, 1.2, NULL, 100223, NULL)
#elif defined __ia64__
CheckTypeSize(_IcePingWait,24, 100224, 3, 1.2, NULL, 100223, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IcePingWait,24, 100224, 9, 1.2, NULL, 100223, NULL)
#elif defined __x86_64__
CheckTypeSize(_IcePingWait,24, 100224, 11, 1.2, NULL, 100223, NULL)
#elif defined __s390x__
CheckTypeSize(_IcePingWait,24, 100224, 12, 1.2, NULL, 100223, NULL)
#else
Msg("Find size of _IcePingWait (100224)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100223,NULL);\n",architecture,100224,0);
#endif

#if defined __i386__
CheckTypeSize(_IceConnectToYouInfo,12, 100227, 2, 1.2, NULL, 100226, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceConnectToYouInfo,12, 100227, 6, 1.2, NULL, 100226, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IceConnectToYouInfo,12, 100227, 10, 1.2, NULL, 100226, NULL)
#elif defined __ia64__
CheckTypeSize(_IceConnectToYouInfo,16, 100227, 3, 1.2, NULL, 100226, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceConnectToYouInfo,16, 100227, 9, 1.2, NULL, 100226, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceConnectToYouInfo,16, 100227, 11, 1.2, NULL, 100226, NULL)
#elif defined __s390x__
CheckTypeSize(_IceConnectToYouInfo,16, 100227, 12, 1.2, NULL, 100226, NULL)
#else
Msg("Find size of _IceConnectToYouInfo (100227)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100226,NULL);\n",architecture,100227,0);
#endif

#if defined __i386__
CheckTypeSize(_IceProtoSetupToYouInfo,24, 100230, 2, 1.2, NULL, 100229, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceProtoSetupToYouInfo,24, 100230, 6, 1.2, NULL, 100229, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IceProtoSetupToYouInfo,24, 100230, 10, 1.2, NULL, 100229, NULL)
#elif defined __ia64__
CheckTypeSize(_IceProtoSetupToYouInfo,32, 100230, 3, 1.2, NULL, 100229, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceProtoSetupToYouInfo,32, 100230, 9, 1.2, NULL, 100229, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceProtoSetupToYouInfo,32, 100230, 11, 1.2, NULL, 100229, NULL)
#elif defined __s390x__
CheckTypeSize(_IceProtoSetupToYouInfo,32, 100230, 12, 1.2, NULL, 100229, NULL)
#else
Msg("Find size of _IceProtoSetupToYouInfo (100230)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100229,NULL);\n",architecture,100230,0);
#endif

#if defined __i386__
CheckTypeSize(_IceConnectToMeInfo,28, 100233, 2, 1.2, NULL, 100232, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceConnectToMeInfo,28, 100233, 6, 1.2, NULL, 100232, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IceConnectToMeInfo,28, 100233, 10, 1.2, NULL, 100232, NULL)
#elif defined __ia64__
CheckTypeSize(_IceConnectToMeInfo,48, 100233, 3, 1.2, NULL, 100232, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceConnectToMeInfo,48, 100233, 9, 1.2, NULL, 100232, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceConnectToMeInfo,48, 100233, 11, 1.2, NULL, 100232, NULL)
#elif defined __s390x__
CheckTypeSize(_IceConnectToMeInfo,48, 100233, 12, 1.2, NULL, 100232, NULL)
#else
Msg("Find size of _IceConnectToMeInfo (100233)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100232,NULL);\n",architecture,100233,0);
#endif

#if defined __i386__
CheckTypeSize(_IceProtoSetupToMeInfo,36, 100236, 2, 1.2, NULL, 100235, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceProtoSetupToMeInfo,36, 100236, 6, 1.2, NULL, 100235, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IceProtoSetupToMeInfo,36, 100236, 10, 1.2, NULL, 100235, NULL)
#elif defined __ia64__
CheckTypeSize(_IceProtoSetupToMeInfo,56, 100236, 3, 1.2, NULL, 100235, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceProtoSetupToMeInfo,56, 100236, 9, 1.2, NULL, 100235, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceProtoSetupToMeInfo,56, 100236, 11, 1.2, NULL, 100235, NULL)
#elif defined __s390x__
CheckTypeSize(_IceProtoSetupToMeInfo,56, 100236, 12, 1.2, NULL, 100235, NULL)
#else
Msg("Find size of _IceProtoSetupToMeInfo (100236)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,100235,NULL);\n",architecture,100236,0);
#endif

#if defined __i386__
CheckTypeSize(struct _IceConn,112, 100238, 2, 1.2, NULL, 0, NULL)
CheckBitField(struct _IceConn,io_ok,1,2,77877)
CheckBitField(struct _IceConn,swap,1,2,77878)
CheckBitField(struct _IceConn,waiting_for_byteorder,1,2,77879)
CheckBitField(struct _IceConn,skip_want_to_close,1,2,77880)
CheckBitField(struct _IceConn,want_to_close,1,2,77881)
CheckBitField(struct _IceConn,free_asap,1,2,77882)
CheckBitField(struct _IceConn,unused1,2,2,77883)
CheckBitField(struct _IceConn,unused2,8,2,77884)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _IceConn,112, 100238, 6, 1.2, NULL, 0, NULL)
CheckBitField(struct _IceConn,io_ok,1,6,77877)
CheckBitField(struct _IceConn,swap,1,6,77878)
CheckBitField(struct _IceConn,waiting_for_byteorder,1,6,77879)
CheckBitField(struct _IceConn,skip_want_to_close,1,6,77880)
CheckBitField(struct _IceConn,want_to_close,1,6,77881)
CheckBitField(struct _IceConn,free_asap,1,6,77882)
CheckBitField(struct _IceConn,unused1,2,6,77883)
CheckBitField(struct _IceConn,unused2,8,6,77884)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _IceConn,112, 100238, 10, 1.2, NULL, 0, NULL)
CheckBitField(struct _IceConn,io_ok,1,10,77877)
CheckBitField(struct _IceConn,swap,1,10,77878)
CheckBitField(struct _IceConn,waiting_for_byteorder,1,10,77879)
CheckBitField(struct _IceConn,skip_want_to_close,1,10,77880)
CheckBitField(struct _IceConn,want_to_close,1,10,77881)
CheckBitField(struct _IceConn,free_asap,1,10,77882)
CheckBitField(struct _IceConn,unused1,2,10,77883)
CheckBitField(struct _IceConn,unused2,8,10,77884)
#elif defined __ia64__
CheckTypeSize(struct _IceConn,216, 100238, 3, 1.2, NULL, 0, NULL)
CheckBitField(struct _IceConn,io_ok,1,3,77877)
CheckBitField(struct _IceConn,swap,1,3,77878)
CheckBitField(struct _IceConn,waiting_for_byteorder,1,3,77879)
CheckBitField(struct _IceConn,skip_want_to_close,1,3,77880)
CheckBitField(struct _IceConn,want_to_close,1,3,77881)
CheckBitField(struct _IceConn,free_asap,1,3,77882)
CheckBitField(struct _IceConn,unused1,2,3,77883)
CheckBitField(struct _IceConn,unused2,8,3,77884)
#elif defined __powerpc64__
CheckTypeSize(struct _IceConn,216, 100238, 9, 1.2, NULL, 0, NULL)
CheckBitField(struct _IceConn,io_ok,1,9,77877)
CheckBitField(struct _IceConn,swap,1,9,77878)
CheckBitField(struct _IceConn,waiting_for_byteorder,1,9,77879)
CheckBitField(struct _IceConn,skip_want_to_close,1,9,77880)
CheckBitField(struct _IceConn,want_to_close,1,9,77881)
CheckBitField(struct _IceConn,free_asap,1,9,77882)
CheckBitField(struct _IceConn,unused1,2,9,77883)
CheckBitField(struct _IceConn,unused2,8,9,77884)
#elif defined __x86_64__
CheckTypeSize(struct _IceConn,216, 100238, 11, 1.2, NULL, 0, NULL)
CheckBitField(struct _IceConn,io_ok,1,11,77877)
CheckBitField(struct _IceConn,swap,1,11,77878)
CheckBitField(struct _IceConn,waiting_for_byteorder,1,11,77879)
CheckBitField(struct _IceConn,skip_want_to_close,1,11,77880)
CheckBitField(struct _IceConn,want_to_close,1,11,77881)
CheckBitField(struct _IceConn,free_asap,1,11,77882)
CheckBitField(struct _IceConn,unused1,2,11,77883)
CheckBitField(struct _IceConn,unused2,8,11,77884)
#elif defined __s390x__
CheckTypeSize(struct _IceConn,216, 100238, 12, 1.2, NULL, 0, NULL)
CheckBitField(struct _IceConn,io_ok,1,12,77877)
CheckBitField(struct _IceConn,swap,1,12,77878)
CheckBitField(struct _IceConn,waiting_for_byteorder,1,12,77879)
CheckBitField(struct _IceConn,skip_want_to_close,1,12,77880)
CheckBitField(struct _IceConn,want_to_close,1,12,77881)
CheckBitField(struct _IceConn,free_asap,1,12,77882)
CheckBitField(struct _IceConn,unused1,2,12,77883)
CheckBitField(struct _IceConn,unused2,8,12,77884)
#else
Msg("Find size of _IceConn (100238)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0, NULL);\n",architecture,100238,0);
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
