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

#if 1
CheckTypeSize(_IcePoProtocol,64, 100204, 1, 1.2, NULL, 100203, NULL)
#endif

#if 1
CheckTypeSize(_IcePaProtocol,88, 100210, 1, 1.2, NULL, 100209, NULL)
#endif

#if 1
CheckTypeSize(_IceProtocol,24, 100213, 1, 1.2, NULL, 100212, NULL)
#endif

#if 1
CheckTypeSize(_IceProcessMsgInfo,40, 100217, 1, 1.2, NULL, 100216, NULL)
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

#if 1
CheckTypeSize(_IceConnectToYouInfo,16, 100227, 1, 1.2, NULL, 100226, NULL)
#endif

#if 1
CheckTypeSize(_IceProtoSetupToYouInfo,32, 100230, 1, 1.2, NULL, 100229, NULL)
#endif

#if 1
CheckTypeSize(_IceConnectToMeInfo,48, 100233, 1, 1.2, NULL, 100232, NULL)
#endif

#if 1
CheckTypeSize(_IceProtoSetupToMeInfo,56, 100236, 1, 1.2, NULL, 100235, NULL)
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
