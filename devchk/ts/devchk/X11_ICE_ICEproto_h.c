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

#if defined __s390x__
CheckTypeSize(iceMsg,0, 1008002, 12, 1.2, NULL, 1008001, NULL)
#elif defined __x86_64__
CheckTypeSize(iceMsg,0, 1008002, 11, 1.2, NULL, 1008001, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceMsg,0, 1008002, 10, 1.2, NULL, 1008001, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceMsg,0, 1008002, 9, 1.2, NULL, 1008001, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceMsg,0, 1008002, 6, 1.2, NULL, 1008001, NULL)
#elif defined __ia64__
CheckTypeSize(iceMsg,0, 1008002, 3, 1.2, NULL, 1008001, NULL)
#elif defined __i386__
CheckTypeSize(iceMsg,0, 1008002, 2, 1.2, NULL, 1008001, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceByteOrderMsg,0, 1008004, 12, 1.2, NULL, 1008003, NULL)
#elif defined __x86_64__
CheckTypeSize(iceByteOrderMsg,0, 1008004, 11, 1.2, NULL, 1008003, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceByteOrderMsg,0, 1008004, 10, 1.2, NULL, 1008003, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceByteOrderMsg,0, 1008004, 9, 1.2, NULL, 1008003, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceByteOrderMsg,0, 1008004, 6, 1.2, NULL, 1008003, NULL)
#elif defined __ia64__
CheckTypeSize(iceByteOrderMsg,0, 1008004, 3, 1.2, NULL, 1008003, NULL)
#elif defined __i386__
CheckTypeSize(iceByteOrderMsg,0, 1008004, 2, 1.2, NULL, 1008003, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceProtocolReplyMsg,0, 1008006, 12, 1.2, NULL, 1008005, NULL)
#elif defined __x86_64__
CheckTypeSize(iceProtocolReplyMsg,0, 1008006, 11, 1.2, NULL, 1008005, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceProtocolReplyMsg,0, 1008006, 10, 1.2, NULL, 1008005, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceProtocolReplyMsg,0, 1008006, 9, 1.2, NULL, 1008005, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceProtocolReplyMsg,0, 1008006, 6, 1.2, NULL, 1008005, NULL)
#elif defined __ia64__
CheckTypeSize(iceProtocolReplyMsg,0, 1008006, 3, 1.2, NULL, 1008005, NULL)
#elif defined __i386__
CheckTypeSize(iceProtocolReplyMsg,0, 1008006, 2, 1.2, NULL, 1008005, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceConnectionReplyMsg,0, 1008008, 12, 1.2, NULL, 1008007, NULL)
#elif defined __x86_64__
CheckTypeSize(iceConnectionReplyMsg,0, 1008008, 11, 1.2, NULL, 1008007, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceConnectionReplyMsg,0, 1008008, 10, 1.2, NULL, 1008007, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceConnectionReplyMsg,0, 1008008, 9, 1.2, NULL, 1008007, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceConnectionReplyMsg,0, 1008008, 6, 1.2, NULL, 1008007, NULL)
#elif defined __ia64__
CheckTypeSize(iceConnectionReplyMsg,0, 1008008, 3, 1.2, NULL, 1008007, NULL)
#elif defined __i386__
CheckTypeSize(iceConnectionReplyMsg,0, 1008008, 2, 1.2, NULL, 1008007, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceProtocolSetupMsg,0, 1008010, 12, 1.2, NULL, 1008009, NULL)
#elif defined __x86_64__
CheckTypeSize(iceProtocolSetupMsg,0, 1008010, 11, 1.2, NULL, 1008009, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceProtocolSetupMsg,0, 1008010, 10, 1.2, NULL, 1008009, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceProtocolSetupMsg,0, 1008010, 9, 1.2, NULL, 1008009, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceProtocolSetupMsg,0, 1008010, 6, 1.2, NULL, 1008009, NULL)
#elif defined __ia64__
CheckTypeSize(iceProtocolSetupMsg,0, 1008010, 3, 1.2, NULL, 1008009, NULL)
#elif defined __i386__
CheckTypeSize(iceProtocolSetupMsg,0, 1008010, 2, 1.2, NULL, 1008009, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceConnectionSetupMsg,0, 1008012, 12, 1.2, NULL, 1008011, NULL)
#elif defined __x86_64__
CheckTypeSize(iceConnectionSetupMsg,0, 1008012, 11, 1.2, NULL, 1008011, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceConnectionSetupMsg,0, 1008012, 10, 1.2, NULL, 1008011, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceConnectionSetupMsg,0, 1008012, 9, 1.2, NULL, 1008011, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceConnectionSetupMsg,0, 1008012, 6, 1.2, NULL, 1008011, NULL)
#elif defined __ia64__
CheckTypeSize(iceConnectionSetupMsg,0, 1008012, 3, 1.2, NULL, 1008011, NULL)
#elif defined __i386__
CheckTypeSize(iceConnectionSetupMsg,0, 1008012, 2, 1.2, NULL, 1008011, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceAuthRequiredMsg,0, 1008014, 12, 1.2, NULL, 1008013, NULL)
#elif defined __x86_64__
CheckTypeSize(iceAuthRequiredMsg,0, 1008014, 11, 1.2, NULL, 1008013, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceAuthRequiredMsg,0, 1008014, 10, 1.2, NULL, 1008013, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceAuthRequiredMsg,0, 1008014, 9, 1.2, NULL, 1008013, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceAuthRequiredMsg,0, 1008014, 6, 1.2, NULL, 1008013, NULL)
#elif defined __ia64__
CheckTypeSize(iceAuthRequiredMsg,0, 1008014, 3, 1.2, NULL, 1008013, NULL)
#elif defined __i386__
CheckTypeSize(iceAuthRequiredMsg,0, 1008014, 2, 1.2, NULL, 1008013, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceAuthReplyMsg,0, 1008016, 12, 1.2, NULL, 1008015, NULL)
#elif defined __x86_64__
CheckTypeSize(iceAuthReplyMsg,0, 1008016, 11, 1.2, NULL, 1008015, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceAuthReplyMsg,0, 1008016, 10, 1.2, NULL, 1008015, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceAuthReplyMsg,0, 1008016, 9, 1.2, NULL, 1008015, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceAuthReplyMsg,0, 1008016, 6, 1.2, NULL, 1008015, NULL)
#elif defined __ia64__
CheckTypeSize(iceAuthReplyMsg,0, 1008016, 3, 1.2, NULL, 1008015, NULL)
#elif defined __i386__
CheckTypeSize(iceAuthReplyMsg,0, 1008016, 2, 1.2, NULL, 1008015, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceAuthNextPhaseMsg,0, 1008018, 12, 1.2, NULL, 1008017, NULL)
#elif defined __x86_64__
CheckTypeSize(iceAuthNextPhaseMsg,0, 1008018, 11, 1.2, NULL, 1008017, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceAuthNextPhaseMsg,0, 1008018, 10, 1.2, NULL, 1008017, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceAuthNextPhaseMsg,0, 1008018, 9, 1.2, NULL, 1008017, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceAuthNextPhaseMsg,0, 1008018, 6, 1.2, NULL, 1008017, NULL)
#elif defined __ia64__
CheckTypeSize(iceAuthNextPhaseMsg,0, 1008018, 3, 1.2, NULL, 1008017, NULL)
#elif defined __i386__
CheckTypeSize(iceAuthNextPhaseMsg,0, 1008018, 2, 1.2, NULL, 1008017, NULL)
#endif

#if defined __s390x__
CheckTypeSize(iceErrorMsg,0, 1008020, 12, 1.2, NULL, 1008019, NULL)
#elif defined __x86_64__
CheckTypeSize(iceErrorMsg,0, 1008020, 11, 1.2, NULL, 1008019, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(iceErrorMsg,0, 1008020, 10, 1.2, NULL, 1008019, NULL)
#elif defined __powerpc64__
CheckTypeSize(iceErrorMsg,0, 1008020, 9, 1.2, NULL, 1008019, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(iceErrorMsg,0, 1008020, 6, 1.2, NULL, 1008019, NULL)
#elif defined __ia64__
CheckTypeSize(iceErrorMsg,0, 1008020, 3, 1.2, NULL, 1008019, NULL)
#elif defined __i386__
CheckTypeSize(iceErrorMsg,0, 1008020, 2, 1.2, NULL, 1008019, NULL)
#endif

#if 1
CheckTypeSize(icePingMsg,0, 1008021, 1, 1.2, NULL, 1008020, NULL)
#endif

#if 1
CheckTypeSize(icePingReplyMsg,0, 1008022, 1, 1.2, NULL, 1008020, NULL)
#endif

#if 1
CheckTypeSize(iceWantToCloseMsg,0, 1008023, 1, 1.2, NULL, 1008020, NULL)
#endif

#if 1
CheckTypeSize(iceNoCloseMsg,0, 1008024, 1, 1.2, NULL, 1008020, NULL)
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
