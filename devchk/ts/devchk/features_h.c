/*
 * Test of features.h
 */
#include "hdrchk.h"
#include "sys/types.h"
#define _LSB_DEFAULT_ARCH 1
#include "features.h"



#ifdef TET_TEST
void features_h()
{
#else
int features_h()
{
#endif

int cnt=0;

#ifdef TET_TEST
int pcnt=0;
Msg("Checking data structures in features.h\n");
#endif

#if _LSB_DEFAULT_ARCH
#ifdef _ISOC99_SOURCE
	CompareConstant(_ISOC99_SOURCE,1,5097,architecture)
#else
Msg( "Error: Constant not found: _ISOC99_SOURCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _XOPEN_SOURCE
	CompareConstant(_XOPEN_SOURCE,600,5098,architecture)
#else
Msg( "Error: Constant not found: _XOPEN_SOURCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __USE_ISOC99
	CompareConstant(__USE_ISOC99,1,5099,architecture)
#else
Msg( "Error: Constant not found: __USE_ISOC99\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __USE_POSIX
	CompareConstant(__USE_POSIX,1,5100,architecture)
#else
Msg( "Error: Constant not found: __USE_POSIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __USE_POSIX2
	CompareConstant(__USE_POSIX2,1,5101,architecture)
#else
Msg( "Error: Constant not found: __USE_POSIX2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __USE_POSIX199309
	CompareConstant(__USE_POSIX199309,1,5102,architecture)
#else
Msg( "Error: Constant not found: __USE_POSIX199309\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __USE_POSIX199506
	CompareConstant(__USE_POSIX199506,1,5103,architecture)
#else
Msg( "Error: Constant not found: __USE_POSIX199506\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __USE_XOPEN
	CompareConstant(__USE_XOPEN,1,5104,architecture)
#else
Msg( "Error: Constant not found: __USE_XOPEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __USE_XOPEN_EXTENDED
	CompareConstant(__USE_XOPEN_EXTENDED,1,5105,architecture)
#else
Msg( "Error: Constant not found: __USE_XOPEN_EXTENDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __USE_UNIX98
	CompareConstant(__USE_UNIX98,1,5106,architecture)
#else
Msg( "Error: Constant not found: __USE_UNIX98\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __USE_LARGEFILE
	CompareConstant(__USE_LARGEFILE,1,5107,architecture)
#else
Msg( "Error: Constant not found: __USE_LARGEFILE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __USE_LARGEFILE64
	CompareConstant(__USE_LARGEFILE64,1,5108,architecture)
#else
Msg( "Error: Constant not found: __USE_LARGEFILE64\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __USE_BSD
	CompareConstant(__USE_BSD,1,5109,architecture)
#else
Msg( "Error: Constant not found: __USE_BSD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __USE_SVID
	CompareConstant(__USE_SVID,1,5110,architecture)
#else
Msg( "Error: Constant not found: __USE_SVID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __USE_MISC
	CompareConstant(__USE_MISC,1,5111,architecture)
#else
Msg( "Error: Constant not found: __USE_MISC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __USE_REENTRANT
	CompareConstant(__USE_REENTRANT,1,5112,architecture)
#else
Msg( "Error: Constant not found: __USE_REENTRANT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef _POSIX_C_SOURCE
	CompareConstant(_POSIX_C_SOURCE,199506L,5114,architecture)
#else
Msg( "Error: Constant not found: _POSIX_C_SOURCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef __STDC_ISO_10646__
	CompareConstant(__STDC_ISO_10646__,200009L,5115,architecture)
#else
Msg( "Error: Constant not found: __STDC_ISO_10646__\n");
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
printf("%d tests in features.h\n",cnt);
return cnt;
#endif

}
