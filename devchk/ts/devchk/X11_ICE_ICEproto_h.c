/*
 * Test of X11/ICE/ICEproto.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/ICE/ICEproto.h"



#ifdef TET_TEST
void X11_ICE_ICEproto_h()
{
#else
int X11_ICE_ICEproto_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/ICE/ICEproto.h\n");
#endif

printf("Checking data structures in X11/ICE/ICEproto.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef sz_iceMsg
	CompareConstant(sz_iceMsg,8,13545,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_iceMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_iceAuthRequiredMsg
	CompareConstant(sz_iceAuthRequiredMsg,16,13546,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_iceAuthRequiredMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_iceConnectionSetupMsg
	CompareConstant(sz_iceConnectionSetupMsg,16,13547,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_iceConnectionSetupMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_iceNoCloseMsg
	CompareConstant(sz_iceNoCloseMsg,8,13548,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_iceNoCloseMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_iceProtocolSetupMsg
	CompareConstant(sz_iceProtocolSetupMsg,16,13549,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_iceProtocolSetupMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_iceErrorMsg
	CompareConstant(sz_iceErrorMsg,16,13550,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_iceErrorMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_iceProtocolReplyMsg
	CompareConstant(sz_iceProtocolReplyMsg,8,13551,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_iceProtocolReplyMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_iceAuthNextPhaseMsg
	CompareConstant(sz_iceAuthNextPhaseMsg,16,13552,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_iceAuthNextPhaseMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_icePingMsg
	CompareConstant(sz_icePingMsg,8,13553,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_icePingMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_iceAuthReplyMsg
	CompareConstant(sz_iceAuthReplyMsg,16,13554,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_iceAuthReplyMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_iceByteOrderMsg
	CompareConstant(sz_iceByteOrderMsg,8,13555,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_iceByteOrderMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_iceWantToCloseMsg
	CompareConstant(sz_iceWantToCloseMsg,8,13556,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_iceWantToCloseMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_icePingReplyMsg
	CompareConstant(sz_icePingReplyMsg,8,13557,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_icePingReplyMsg\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef sz_iceConnectionReplyMsg
	CompareConstant(sz_iceConnectionReplyMsg,8,13558,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: sz_iceConnectionReplyMsg\n");
cnt++;
#endif

#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/ICE/ICEproto.h\n\n",pcnt,cnt);
return cnt;
#endif

}
