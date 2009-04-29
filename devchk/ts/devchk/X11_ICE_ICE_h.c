/*
 * Test of X11/ICE/ICE.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/ICE/ICE.h"



#ifdef TET_TEST
void X11_ICE_ICE_h()
{
#else
int X11_ICE_ICE_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/ICE/ICE.h\n");
#endif

printf("Checking data structures in X11/ICE/ICE.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef ICE_AuthNextPhase
	CompareConstant(ICE_AuthNextPhase,5,13580,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ICE_AuthNextPhase\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceBadState
	CompareConstant(IceBadState,0x8001,13581,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceBadState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceBadMinor
	CompareConstant(IceBadMinor,0x8000,13582,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceBadMinor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICE_WantToClose
	CompareConstant(ICE_WantToClose,11,13583,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ICE_WantToClose\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICE_Ping
	CompareConstant(ICE_Ping,9,13584,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ICE_Ping\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceNoAuth
	CompareConstant(IceNoAuth,1,13585,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceNoAuth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceFatalToProtocol
	CompareConstant(IceFatalToProtocol,1,13586,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceFatalToProtocol\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceCanContinue
	CompareConstant(IceCanContinue,0,13587,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceCanContinue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceUnknownProtocol
	CompareConstant(IceUnknownProtocol,8,13588,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceUnknownProtocol\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceMSBfirst
	CompareConstant(IceMSBfirst,1,13589,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceMSBfirst\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceProtocolDuplicate
	CompareConstant(IceProtocolDuplicate,6,13590,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceProtocolDuplicate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICE_PingReply
	CompareConstant(ICE_PingReply,10,13591,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ICE_PingReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceLSBfirst
	CompareConstant(IceLSBfirst,0,13592,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceLSBfirst\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICE_NoClose
	CompareConstant(ICE_NoClose,12,13593,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ICE_NoClose\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICE_AuthReply
	CompareConstant(ICE_AuthReply,4,13594,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ICE_AuthReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceSetupFailed
	CompareConstant(IceSetupFailed,3,13595,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceSetupFailed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICE_AuthRequired
	CompareConstant(ICE_AuthRequired,3,13596,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ICE_AuthRequired\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceFatalToConnection
	CompareConstant(IceFatalToConnection,2,13597,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceFatalToConnection\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceBadValue
	CompareConstant(IceBadValue,0x8003,13598,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceBadValue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICE_ConnectionReply
	CompareConstant(ICE_ConnectionReply,6,13599,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ICE_ConnectionReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceNoVersion
	CompareConstant(IceNoVersion,2,13600,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceNoVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICE_ProtocolSetup
	CompareConstant(ICE_ProtocolSetup,7,13601,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ICE_ProtocolSetup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceMajorOpcodeDuplicate
	CompareConstant(IceMajorOpcodeDuplicate,7,13602,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceMajorOpcodeDuplicate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceBadMajor
	CompareConstant(IceBadMajor,0,13603,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceBadMajor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICE_ByteOrder
	CompareConstant(ICE_ByteOrder,1,13604,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ICE_ByteOrder\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICE_ConnectionSetup
	CompareConstant(ICE_ConnectionSetup,2,13605,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ICE_ConnectionSetup\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICE_Error
	CompareConstant(ICE_Error,0,13606,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ICE_Error\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceBadLength
	CompareConstant(IceBadLength,0x8002,13607,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceBadLength\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceProtoMajor
	CompareConstant(IceProtoMajor,1,13608,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceProtoMajor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ICE_ProtocolReply
	CompareConstant(ICE_ProtocolReply,8,13609,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ICE_ProtocolReply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceProtoMinor
	CompareConstant(IceProtoMinor,0,13610,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceProtoMinor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceAuthRejected
	CompareConstant(IceAuthRejected,4,13611,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceAuthRejected\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IceAuthFailed
	CompareConstant(IceAuthFailed,5,13612,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IceAuthFailed\n");
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
printf("%d tests passed out of %d tests in X11/ICE/ICE.h\n\n",pcnt,cnt);
return cnt;
#endif

}
