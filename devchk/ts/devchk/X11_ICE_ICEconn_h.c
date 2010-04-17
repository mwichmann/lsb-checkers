/*
 * Test of X11/ICE/ICEconn.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/ICE/ICEconn.h\n");
#endif

printf("Checking data structures in X11/ICE/ICEconn.h\n");
#if 1
CheckTypeSize(struct _XtransConnInfo,0, 31746, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XtransConnInfo on All\n");
#endif

#if defined __s390x__
CheckTypeSize(_IcePoProtocol,64, 31750, 12, 1.3, NULL, 31749, NULL)
#elif defined __x86_64__
CheckTypeSize(_IcePoProtocol,64, 31750, 11, 2.0, NULL, 31749, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IcePoProtocol,32, 31750, 10, 1.3, NULL, 31749, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IcePoProtocol,64, 31750, 9, 2.0, NULL, 31749, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IcePoProtocol,32, 31750, 6, 1.2, NULL, 31749, NULL)
#elif defined __ia64__
CheckTypeSize(_IcePoProtocol,64, 31750, 3, 1.3, NULL, 31749, NULL)
#elif defined __i386__
CheckTypeSize(_IcePoProtocol,32, 31750, 2, 1.2, NULL, 31749, NULL)
#else
Msg("Find size of _IcePoProtocol (31750)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31749,NULL);\n",architecture,31750,0);
#endif

#if defined __s390x__
CheckTypeSize(_IcePaProtocol,88, 31756, 12, 1.3, NULL, 31755, NULL)
#elif defined __x86_64__
CheckTypeSize(_IcePaProtocol,88, 31756, 11, 2.0, NULL, 31755, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IcePaProtocol,44, 31756, 10, 1.3, NULL, 31755, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IcePaProtocol,88, 31756, 9, 2.0, NULL, 31755, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IcePaProtocol,44, 31756, 6, 1.2, NULL, 31755, NULL)
#elif defined __ia64__
CheckTypeSize(_IcePaProtocol,88, 31756, 3, 1.3, NULL, 31755, NULL)
#elif defined __i386__
CheckTypeSize(_IcePaProtocol,44, 31756, 2, 1.2, NULL, 31755, NULL)
#else
Msg("Find size of _IcePaProtocol (31756)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31755,NULL);\n",architecture,31756,0);
#endif

#if defined __s390x__
CheckTypeSize(_IceProtocol,24, 31759, 12, 1.3, NULL, 31758, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceProtocol,24, 31759, 11, 2.0, NULL, 31758, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IceProtocol,12, 31759, 10, 1.3, NULL, 31758, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceProtocol,24, 31759, 9, 2.0, NULL, 31758, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceProtocol,12, 31759, 6, 1.2, NULL, 31758, NULL)
#elif defined __ia64__
CheckTypeSize(_IceProtocol,24, 31759, 3, 1.3, NULL, 31758, NULL)
#elif defined __i386__
CheckTypeSize(_IceProtocol,12, 31759, 2, 1.2, NULL, 31758, NULL)
#else
Msg("Find size of _IceProtocol (31759)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31758,NULL);\n",architecture,31759,0);
#endif

#if defined __s390x__
CheckTypeSize(_IceProcessMsgInfo,40, 31763, 12, 1.3, NULL, 31762, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceProcessMsgInfo,40, 31763, 11, 2.0, NULL, 31762, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IceProcessMsgInfo,24, 31763, 10, 1.3, NULL, 31762, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceProcessMsgInfo,40, 31763, 9, 2.0, NULL, 31762, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceProcessMsgInfo,24, 31763, 6, 1.2, NULL, 31762, NULL)
#elif defined __ia64__
CheckTypeSize(_IceProcessMsgInfo,40, 31763, 3, 1.3, NULL, 31762, NULL)
#elif defined __i386__
CheckTypeSize(_IceProcessMsgInfo,24, 31763, 2, 1.2, NULL, 31762, NULL)
#else
Msg("Find size of _IceProcessMsgInfo (31763)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31762,NULL);\n",architecture,31763,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _IceSavedReplyWait,24, 31765, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _IceSavedReplyWait,reply_ready,4,12,77847)
CheckOffset(struct _IceSavedReplyWait,reply_ready,8,12,77847)
CheckMemberSize(struct _IceSavedReplyWait,next,8,12,77848)
CheckOffset(struct _IceSavedReplyWait,next,16,12,77848)
#elif defined __x86_64__
CheckTypeSize(struct _IceSavedReplyWait,24, 31765, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _IceSavedReplyWait,reply_ready,4,11,77847)
CheckOffset(struct _IceSavedReplyWait,reply_ready,8,11,77847)
CheckMemberSize(struct _IceSavedReplyWait,next,8,11,77848)
CheckOffset(struct _IceSavedReplyWait,next,16,11,77848)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _IceSavedReplyWait,12, 31765, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _IceSavedReplyWait,reply_ready,4,10,77847)
CheckOffset(struct _IceSavedReplyWait,reply_ready,4,10,77847)
CheckMemberSize(struct _IceSavedReplyWait,next,4,10,77848)
CheckOffset(struct _IceSavedReplyWait,next,8,10,77848)
#elif defined __powerpc64__
CheckTypeSize(struct _IceSavedReplyWait,24, 31765, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _IceSavedReplyWait,reply_ready,4,9,77847)
CheckOffset(struct _IceSavedReplyWait,reply_ready,8,9,77847)
CheckMemberSize(struct _IceSavedReplyWait,next,8,9,77848)
CheckOffset(struct _IceSavedReplyWait,next,16,9,77848)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _IceSavedReplyWait,12, 31765, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IceSavedReplyWait,reply_ready,4,6,77847)
CheckOffset(struct _IceSavedReplyWait,reply_ready,4,6,77847)
CheckMemberSize(struct _IceSavedReplyWait,next,4,6,77848)
CheckOffset(struct _IceSavedReplyWait,next,8,6,77848)
#elif defined __ia64__
CheckTypeSize(struct _IceSavedReplyWait,24, 31765, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _IceSavedReplyWait,reply_ready,4,3,77847)
CheckOffset(struct _IceSavedReplyWait,reply_ready,8,3,77847)
CheckMemberSize(struct _IceSavedReplyWait,next,8,3,77848)
CheckOffset(struct _IceSavedReplyWait,next,16,3,77848)
#elif defined __i386__
CheckTypeSize(struct _IceSavedReplyWait,12, 31765, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IceSavedReplyWait,reply_ready,4,2,77847)
CheckOffset(struct _IceSavedReplyWait,reply_ready,4,2,77847)
CheckMemberSize(struct _IceSavedReplyWait,next,4,2,77848)
CheckOffset(struct _IceSavedReplyWait,next,8,2,77848)
#else
Msg("Find size of _IceSavedReplyWait (31765)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,31765,0);
#endif

#if defined __s390x__
CheckTypeSize(_IceSavedReplyWait,24, 31766, 12, 1.3, NULL, 31765, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceSavedReplyWait,24, 31766, 11, 2.0, NULL, 31765, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IceSavedReplyWait,12, 31766, 10, 1.3, NULL, 31765, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceSavedReplyWait,24, 31766, 9, 2.0, NULL, 31765, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceSavedReplyWait,12, 31766, 6, 1.2, NULL, 31765, NULL)
#elif defined __ia64__
CheckTypeSize(_IceSavedReplyWait,24, 31766, 3, 1.3, NULL, 31765, NULL)
#elif defined __i386__
CheckTypeSize(_IceSavedReplyWait,12, 31766, 2, 1.2, NULL, 31765, NULL)
#else
Msg("Find size of _IceSavedReplyWait (31766)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31765,NULL);\n",architecture,31766,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _IcePingWait,24, 31769, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _IcePingWait,client_data,8,12,77850)
CheckOffset(struct _IcePingWait,client_data,8,12,77850)
CheckMemberSize(struct _IcePingWait,next,8,12,77851)
CheckOffset(struct _IcePingWait,next,16,12,77851)
#elif defined __x86_64__
CheckTypeSize(struct _IcePingWait,24, 31769, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _IcePingWait,client_data,8,11,77850)
CheckOffset(struct _IcePingWait,client_data,8,11,77850)
CheckMemberSize(struct _IcePingWait,next,8,11,77851)
CheckOffset(struct _IcePingWait,next,16,11,77851)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _IcePingWait,12, 31769, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _IcePingWait,client_data,4,10,77850)
CheckOffset(struct _IcePingWait,client_data,4,10,77850)
CheckMemberSize(struct _IcePingWait,next,4,10,77851)
CheckOffset(struct _IcePingWait,next,8,10,77851)
#elif defined __powerpc64__
CheckTypeSize(struct _IcePingWait,24, 31769, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _IcePingWait,client_data,8,9,77850)
CheckOffset(struct _IcePingWait,client_data,8,9,77850)
CheckMemberSize(struct _IcePingWait,next,8,9,77851)
CheckOffset(struct _IcePingWait,next,16,9,77851)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _IcePingWait,12, 31769, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IcePingWait,client_data,4,6,77850)
CheckOffset(struct _IcePingWait,client_data,4,6,77850)
CheckMemberSize(struct _IcePingWait,next,4,6,77851)
CheckOffset(struct _IcePingWait,next,8,6,77851)
#elif defined __ia64__
CheckTypeSize(struct _IcePingWait,24, 31769, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _IcePingWait,client_data,8,3,77850)
CheckOffset(struct _IcePingWait,client_data,8,3,77850)
CheckMemberSize(struct _IcePingWait,next,8,3,77851)
CheckOffset(struct _IcePingWait,next,16,3,77851)
#elif defined __i386__
CheckTypeSize(struct _IcePingWait,12, 31769, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _IcePingWait,client_data,4,2,77850)
CheckOffset(struct _IcePingWait,client_data,4,2,77850)
CheckMemberSize(struct _IcePingWait,next,4,2,77851)
CheckOffset(struct _IcePingWait,next,8,2,77851)
#else
Msg("Find size of _IcePingWait (31769)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,31769,0);
#endif

#if defined __s390x__
CheckTypeSize(_IcePingWait,24, 31770, 12, 1.3, NULL, 31769, NULL)
#elif defined __x86_64__
CheckTypeSize(_IcePingWait,24, 31770, 11, 2.0, NULL, 31769, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IcePingWait,12, 31770, 10, 1.3, NULL, 31769, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IcePingWait,24, 31770, 9, 2.0, NULL, 31769, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IcePingWait,12, 31770, 6, 1.2, NULL, 31769, NULL)
#elif defined __ia64__
CheckTypeSize(_IcePingWait,24, 31770, 3, 1.3, NULL, 31769, NULL)
#elif defined __i386__
CheckTypeSize(_IcePingWait,12, 31770, 2, 1.2, NULL, 31769, NULL)
#else
Msg("Find size of _IcePingWait (31770)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31769,NULL);\n",architecture,31770,0);
#endif

#if defined __s390x__
CheckTypeSize(_IceConnectToYouInfo,16, 31773, 12, 1.3, NULL, 31772, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceConnectToYouInfo,16, 31773, 11, 2.0, NULL, 31772, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IceConnectToYouInfo,12, 31773, 10, 1.3, NULL, 31772, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceConnectToYouInfo,16, 31773, 9, 2.0, NULL, 31772, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceConnectToYouInfo,12, 31773, 6, 1.2, NULL, 31772, NULL)
#elif defined __ia64__
CheckTypeSize(_IceConnectToYouInfo,16, 31773, 3, 1.3, NULL, 31772, NULL)
#elif defined __i386__
CheckTypeSize(_IceConnectToYouInfo,12, 31773, 2, 1.2, NULL, 31772, NULL)
#else
Msg("Find size of _IceConnectToYouInfo (31773)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31772,NULL);\n",architecture,31773,0);
#endif

#if defined __s390x__
CheckTypeSize(_IceProtoSetupToYouInfo,32, 31776, 12, 1.3, NULL, 31775, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceProtoSetupToYouInfo,32, 31776, 11, 2.0, NULL, 31775, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IceProtoSetupToYouInfo,24, 31776, 10, 1.3, NULL, 31775, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceProtoSetupToYouInfo,32, 31776, 9, 2.0, NULL, 31775, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceProtoSetupToYouInfo,24, 31776, 6, 1.2, NULL, 31775, NULL)
#elif defined __ia64__
CheckTypeSize(_IceProtoSetupToYouInfo,32, 31776, 3, 1.3, NULL, 31775, NULL)
#elif defined __i386__
CheckTypeSize(_IceProtoSetupToYouInfo,24, 31776, 2, 1.2, NULL, 31775, NULL)
#else
Msg("Find size of _IceProtoSetupToYouInfo (31776)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31775,NULL);\n",architecture,31776,0);
#endif

#if defined __s390x__
CheckTypeSize(_IceConnectToMeInfo,48, 31779, 12, 1.3, NULL, 31778, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceConnectToMeInfo,48, 31779, 11, 2.0, NULL, 31778, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IceConnectToMeInfo,28, 31779, 10, 1.3, NULL, 31778, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceConnectToMeInfo,48, 31779, 9, 2.0, NULL, 31778, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceConnectToMeInfo,28, 31779, 6, 1.2, NULL, 31778, NULL)
#elif defined __ia64__
CheckTypeSize(_IceConnectToMeInfo,48, 31779, 3, 1.3, NULL, 31778, NULL)
#elif defined __i386__
CheckTypeSize(_IceConnectToMeInfo,28, 31779, 2, 1.2, NULL, 31778, NULL)
#else
Msg("Find size of _IceConnectToMeInfo (31779)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31778,NULL);\n",architecture,31779,0);
#endif

#if defined __s390x__
CheckTypeSize(_IceProtoSetupToMeInfo,56, 31782, 12, 1.3, NULL, 31781, NULL)
#elif defined __x86_64__
CheckTypeSize(_IceProtoSetupToMeInfo,56, 31782, 11, 2.0, NULL, 31781, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(_IceProtoSetupToMeInfo,36, 31782, 10, 1.3, NULL, 31781, NULL)
#elif defined __powerpc64__
CheckTypeSize(_IceProtoSetupToMeInfo,56, 31782, 9, 2.0, NULL, 31781, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(_IceProtoSetupToMeInfo,36, 31782, 6, 1.2, NULL, 31781, NULL)
#elif defined __ia64__
CheckTypeSize(_IceProtoSetupToMeInfo,56, 31782, 3, 1.3, NULL, 31781, NULL)
#elif defined __i386__
CheckTypeSize(_IceProtoSetupToMeInfo,36, 31782, 2, 1.2, NULL, 31781, NULL)
#else
Msg("Find size of _IceProtoSetupToMeInfo (31782)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,31781,NULL);\n",architecture,31782,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _IceConn,216, 31784, 12, 1.3, NULL, 0, NULL)
CheckBitField(struct _IceConn,io_ok,1,12,77877)
CheckBitField(struct _IceConn,swap,1,12,77878)
CheckBitField(struct _IceConn,waiting_for_byteorder,1,12,77879)
CheckBitField(struct _IceConn,skip_want_to_close,1,12,77880)
CheckBitField(struct _IceConn,want_to_close,1,12,77881)
CheckBitField(struct _IceConn,free_asap,1,12,77882)
CheckBitField(struct _IceConn,unused1,2,12,77883)
CheckBitField(struct _IceConn,unused2,8,12,77884)
#elif defined __x86_64__
CheckTypeSize(struct _IceConn,216, 31784, 11, 2.0, NULL, 0, NULL)
CheckBitField(struct _IceConn,io_ok,1,11,77877)
CheckBitField(struct _IceConn,swap,1,11,77878)
CheckBitField(struct _IceConn,waiting_for_byteorder,1,11,77879)
CheckBitField(struct _IceConn,skip_want_to_close,1,11,77880)
CheckBitField(struct _IceConn,want_to_close,1,11,77881)
CheckBitField(struct _IceConn,free_asap,1,11,77882)
CheckBitField(struct _IceConn,unused1,2,11,77883)
CheckBitField(struct _IceConn,unused2,8,11,77884)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _IceConn,112, 31784, 10, 1.3, NULL, 0, NULL)
CheckBitField(struct _IceConn,io_ok,1,10,77877)
CheckBitField(struct _IceConn,swap,1,10,77878)
CheckBitField(struct _IceConn,waiting_for_byteorder,1,10,77879)
CheckBitField(struct _IceConn,skip_want_to_close,1,10,77880)
CheckBitField(struct _IceConn,want_to_close,1,10,77881)
CheckBitField(struct _IceConn,free_asap,1,10,77882)
CheckBitField(struct _IceConn,unused1,2,10,77883)
CheckBitField(struct _IceConn,unused2,8,10,77884)
#elif defined __powerpc64__
CheckTypeSize(struct _IceConn,216, 31784, 9, 2.0, NULL, 0, NULL)
CheckBitField(struct _IceConn,io_ok,1,9,77877)
CheckBitField(struct _IceConn,swap,1,9,77878)
CheckBitField(struct _IceConn,waiting_for_byteorder,1,9,77879)
CheckBitField(struct _IceConn,skip_want_to_close,1,9,77880)
CheckBitField(struct _IceConn,want_to_close,1,9,77881)
CheckBitField(struct _IceConn,free_asap,1,9,77882)
CheckBitField(struct _IceConn,unused1,2,9,77883)
CheckBitField(struct _IceConn,unused2,8,9,77884)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _IceConn,112, 31784, 6, 1.2, NULL, 0, NULL)
CheckBitField(struct _IceConn,io_ok,1,6,77877)
CheckBitField(struct _IceConn,swap,1,6,77878)
CheckBitField(struct _IceConn,waiting_for_byteorder,1,6,77879)
CheckBitField(struct _IceConn,skip_want_to_close,1,6,77880)
CheckBitField(struct _IceConn,want_to_close,1,6,77881)
CheckBitField(struct _IceConn,free_asap,1,6,77882)
CheckBitField(struct _IceConn,unused1,2,6,77883)
CheckBitField(struct _IceConn,unused2,8,6,77884)
#elif defined __ia64__
CheckTypeSize(struct _IceConn,216, 31784, 3, 1.3, NULL, 0, NULL)
CheckBitField(struct _IceConn,io_ok,1,3,77877)
CheckBitField(struct _IceConn,swap,1,3,77878)
CheckBitField(struct _IceConn,waiting_for_byteorder,1,3,77879)
CheckBitField(struct _IceConn,skip_want_to_close,1,3,77880)
CheckBitField(struct _IceConn,want_to_close,1,3,77881)
CheckBitField(struct _IceConn,free_asap,1,3,77882)
CheckBitField(struct _IceConn,unused1,2,3,77883)
CheckBitField(struct _IceConn,unused2,8,3,77884)
#elif defined __i386__
CheckTypeSize(struct _IceConn,112, 31784, 2, 1.2, NULL, 0, NULL)
CheckBitField(struct _IceConn,io_ok,1,2,77877)
CheckBitField(struct _IceConn,swap,1,2,77878)
CheckBitField(struct _IceConn,waiting_for_byteorder,1,2,77879)
CheckBitField(struct _IceConn,skip_want_to_close,1,2,77880)
CheckBitField(struct _IceConn,want_to_close,1,2,77881)
CheckBitField(struct _IceConn,free_asap,1,2,77882)
CheckBitField(struct _IceConn,unused1,2,2,77883)
CheckBitField(struct _IceConn,unused2,8,2,77884)
#else
Msg("Find size of _IceConn (31784)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0, NULL);\n",architecture,31784,0);
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
