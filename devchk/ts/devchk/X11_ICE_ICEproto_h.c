/*
 * Test of X11/ICE/ICEproto.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

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

#if defined __s390x__
CheckTypeSize(iceMsg,0, 35914, 12, 1.2, NULL, 35913, NULL)
#elif defined __x86_64__
CheckTypeSize(iceMsg,0, 35914, 11, 1.2, NULL, 35913, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceMsg,0, 35914, 10, 1.2, NULL, 35913, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceMsg,0, 35914, 9, 1.2, NULL, 35913, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceMsg,0, 35914, 6, 1.2, NULL, 35913, NULL)
#elif defined __ia64__
CheckTypeSize(iceMsg,0, 35914, 3, 1.2, NULL, 35913, NULL)
#elif defined __i386__
CheckTypeSize(iceMsg,0, 35914, 2, 1.2, NULL, 35913, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceByteOrderMsg,0, 35916, 12, 1.2, NULL, 35915, NULL)
#elif defined __x86_64__
CheckTypeSize(iceByteOrderMsg,0, 35916, 11, 1.2, NULL, 35915, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceByteOrderMsg,0, 35916, 10, 1.2, NULL, 35915, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceByteOrderMsg,0, 35916, 9, 1.2, NULL, 35915, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceByteOrderMsg,0, 35916, 6, 1.2, NULL, 35915, NULL)
#elif defined __ia64__
CheckTypeSize(iceByteOrderMsg,0, 35916, 3, 1.2, NULL, 35915, NULL)
#elif defined __i386__
CheckTypeSize(iceByteOrderMsg,0, 35916, 2, 1.2, NULL, 35915, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceProtocolReplyMsg,0, 35918, 12, 1.2, NULL, 35917, NULL)
#elif defined __x86_64__
CheckTypeSize(iceProtocolReplyMsg,0, 35918, 11, 1.2, NULL, 35917, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceProtocolReplyMsg,0, 35918, 10, 1.2, NULL, 35917, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceProtocolReplyMsg,0, 35918, 9, 1.2, NULL, 35917, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceProtocolReplyMsg,0, 35918, 6, 1.2, NULL, 35917, NULL)
#elif defined __ia64__
CheckTypeSize(iceProtocolReplyMsg,0, 35918, 3, 1.2, NULL, 35917, NULL)
#elif defined __i386__
CheckTypeSize(iceProtocolReplyMsg,0, 35918, 2, 1.2, NULL, 35917, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceConnectionReplyMsg,0, 35920, 12, 1.2, NULL, 35919, NULL)
#elif defined __x86_64__
CheckTypeSize(iceConnectionReplyMsg,0, 35920, 11, 1.2, NULL, 35919, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceConnectionReplyMsg,0, 35920, 10, 1.2, NULL, 35919, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceConnectionReplyMsg,0, 35920, 9, 1.2, NULL, 35919, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceConnectionReplyMsg,0, 35920, 6, 1.2, NULL, 35919, NULL)
#elif defined __ia64__
CheckTypeSize(iceConnectionReplyMsg,0, 35920, 3, 1.2, NULL, 35919, NULL)
#elif defined __i386__
CheckTypeSize(iceConnectionReplyMsg,0, 35920, 2, 1.2, NULL, 35919, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceProtocolSetupMsg,0, 35922, 12, 1.2, NULL, 35921, NULL)
#elif defined __x86_64__
CheckTypeSize(iceProtocolSetupMsg,0, 35922, 11, 1.2, NULL, 35921, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceProtocolSetupMsg,0, 35922, 10, 1.2, NULL, 35921, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceProtocolSetupMsg,0, 35922, 9, 1.2, NULL, 35921, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceProtocolSetupMsg,0, 35922, 6, 1.2, NULL, 35921, NULL)
#elif defined __ia64__
CheckTypeSize(iceProtocolSetupMsg,0, 35922, 3, 1.2, NULL, 35921, NULL)
#elif defined __i386__
CheckTypeSize(iceProtocolSetupMsg,0, 35922, 2, 1.2, NULL, 35921, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceConnectionSetupMsg,0, 35924, 12, 1.2, NULL, 35923, NULL)
#elif defined __x86_64__
CheckTypeSize(iceConnectionSetupMsg,0, 35924, 11, 1.2, NULL, 35923, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceConnectionSetupMsg,0, 35924, 10, 1.2, NULL, 35923, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceConnectionSetupMsg,0, 35924, 9, 1.2, NULL, 35923, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceConnectionSetupMsg,0, 35924, 6, 1.2, NULL, 35923, NULL)
#elif defined __ia64__
CheckTypeSize(iceConnectionSetupMsg,0, 35924, 3, 1.2, NULL, 35923, NULL)
#elif defined __i386__
CheckTypeSize(iceConnectionSetupMsg,0, 35924, 2, 1.2, NULL, 35923, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceAuthRequiredMsg,0, 35926, 12, 1.2, NULL, 35925, NULL)
#elif defined __x86_64__
CheckTypeSize(iceAuthRequiredMsg,0, 35926, 11, 1.2, NULL, 35925, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceAuthRequiredMsg,0, 35926, 10, 1.2, NULL, 35925, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceAuthRequiredMsg,0, 35926, 9, 1.2, NULL, 35925, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceAuthRequiredMsg,0, 35926, 6, 1.2, NULL, 35925, NULL)
#elif defined __ia64__
CheckTypeSize(iceAuthRequiredMsg,0, 35926, 3, 1.2, NULL, 35925, NULL)
#elif defined __i386__
CheckTypeSize(iceAuthRequiredMsg,0, 35926, 2, 1.2, NULL, 35925, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceAuthReplyMsg,0, 35928, 12, 1.2, NULL, 35927, NULL)
#elif defined __x86_64__
CheckTypeSize(iceAuthReplyMsg,0, 35928, 11, 1.2, NULL, 35927, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceAuthReplyMsg,0, 35928, 10, 1.2, NULL, 35927, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceAuthReplyMsg,0, 35928, 9, 1.2, NULL, 35927, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceAuthReplyMsg,0, 35928, 6, 1.2, NULL, 35927, NULL)
#elif defined __ia64__
CheckTypeSize(iceAuthReplyMsg,0, 35928, 3, 1.2, NULL, 35927, NULL)
#elif defined __i386__
CheckTypeSize(iceAuthReplyMsg,0, 35928, 2, 1.2, NULL, 35927, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceAuthNextPhaseMsg,0, 35930, 12, 1.2, NULL, 35929, NULL)
#elif defined __x86_64__
CheckTypeSize(iceAuthNextPhaseMsg,0, 35930, 11, 1.2, NULL, 35929, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceAuthNextPhaseMsg,0, 35930, 10, 1.2, NULL, 35929, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceAuthNextPhaseMsg,0, 35930, 9, 1.2, NULL, 35929, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceAuthNextPhaseMsg,0, 35930, 6, 1.2, NULL, 35929, NULL)
#elif defined __ia64__
CheckTypeSize(iceAuthNextPhaseMsg,0, 35930, 3, 1.2, NULL, 35929, NULL)
#elif defined __i386__
CheckTypeSize(iceAuthNextPhaseMsg,0, 35930, 2, 1.2, NULL, 35929, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceErrorMsg,0, 35932, 12, 1.2, NULL, 35931, NULL)
#elif defined __x86_64__
CheckTypeSize(iceErrorMsg,0, 35932, 11, 1.2, NULL, 35931, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceErrorMsg,0, 35932, 10, 1.2, NULL, 35931, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceErrorMsg,0, 35932, 9, 1.2, NULL, 35931, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceErrorMsg,0, 35932, 6, 1.2, NULL, 35931, NULL)
#elif defined __ia64__
CheckTypeSize(iceErrorMsg,0, 35932, 3, 1.2, NULL, 35931, NULL)
#elif defined __i386__
CheckTypeSize(iceErrorMsg,0, 35932, 2, 1.2, NULL, 35931, NULL)
#endif

#if 1
CheckTypeSize(icePingMsg,0, 35933, 1, 1.2, NULL, 35932, NULL)
#endif

#if 1
CheckTypeSize(icePingReplyMsg,0, 35934, 1, 1.2, NULL, 35932, NULL)
#endif

#if 1
CheckTypeSize(iceWantToCloseMsg,0, 35935, 1, 1.2, NULL, 35932, NULL)
#endif

#if 1
CheckTypeSize(iceNoCloseMsg,0, 35936, 1, 1.2, NULL, 35932, NULL)
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
