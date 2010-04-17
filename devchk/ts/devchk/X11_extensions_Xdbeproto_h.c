/*
 * Test of X11/extensions/Xdbeproto.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#define NEED_DBE_PROTOCOL
#include <X11/X.h>
#include <X11/Xmd.h>

#include "X11/extensions/Xdbeproto.h"



#ifdef TET_TEST
void X11_extensions_Xdbeproto_h()
{
#else
int X11_extensions_Xdbeproto_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/Xdbeproto.h\n");
#endif

printf("Checking data structures in X11/extensions/Xdbeproto.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef XdbeUndefined
	CompareConstant(XdbeUndefined,0,16224,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XdbeUndefined\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XdbeBackground
	CompareConstant(XdbeBackground,1,16225,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XdbeBackground\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XdbeUntouched
	CompareConstant(XdbeUntouched,2,16226,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XdbeUntouched\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XdbeCopied
	CompareConstant(XdbeCopied,3,16227,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: XdbeCopied\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DBE_PROTOCOL_NAME
	CompareStringConstant(DBE_PROTOCOL_NAME,"DOUBLE-BUFFER",16228,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DBE_PROTOCOL_NAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DBE_MAJOR_VERSION
	CompareConstant(DBE_MAJOR_VERSION,1,16229,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DBE_MAJOR_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DBE_MINOR_VERSION
	CompareConstant(DBE_MINOR_VERSION,0,16230,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DBE_MINOR_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DbeNumberEvents
	CompareConstant(DbeNumberEvents,0,16231,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DbeNumberEvents\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DbeBadBuffer
	CompareConstant(DbeBadBuffer,0,16232,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DbeBadBuffer\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DbeNumberErrors
	CompareConstant(DbeNumberErrors,(DbeBadBuffer + 1),16233,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: DbeNumberErrors\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DbeGetVersion
	CompareConstant(X_DbeGetVersion,0,16234,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_DbeGetVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DbeAllocateBackBufferName
	CompareConstant(X_DbeAllocateBackBufferName,1,16235,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_DbeAllocateBackBufferName\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DbeDeallocateBackBufferName
	CompareConstant(X_DbeDeallocateBackBufferName,2,16236,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_DbeDeallocateBackBufferName\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DbeSwapBuffers
	CompareConstant(X_DbeSwapBuffers,3,16237,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_DbeSwapBuffers\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DbeBeginIdiom
	CompareConstant(X_DbeBeginIdiom,4,16238,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_DbeBeginIdiom\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DbeEndIdiom
	CompareConstant(X_DbeEndIdiom,5,16239,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_DbeEndIdiom\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DbeGetVisualInfo
	CompareConstant(X_DbeGetVisualInfo,6,16240,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_DbeGetVisualInfo\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_DbeGetBackBufferAttributes
	CompareConstant(X_DbeGetBackBufferAttributes,7,16241,architecture,1.0,NULL)
#else
Msg( "Error: Constant not found: X_DbeGetBackBufferAttributes\n");
cnt++;
#endif

#endif

#if 1
CheckTypeSize(xDbeSwapAction,0, 35949, 1, 1.0, NULL, 8958, NULL)
#endif

#if 1
CheckTypeSize(xDbeBackBuffer,0, 35950, 1, 1.0, NULL, 35866, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XdbeVisualInfo,0, 35952, 12, 1.0, NULL, 35951, NULL)
#elif defined __x86_64__
CheckTypeSize(XdbeVisualInfo,0, 35952, 11, 1.0, NULL, 35951, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XdbeVisualInfo,0, 35952, 10, 1.0, NULL, 35951, NULL)
#elif defined __powerpc64__
CheckTypeSize(XdbeVisualInfo,0, 35952, 9, 1.0, NULL, 35951, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XdbeVisualInfo,0, 35952, 6, 1.0, NULL, 35951, NULL)
#elif defined __ia64__
CheckTypeSize(XdbeVisualInfo,0, 35952, 3, 1.0, NULL, 35951, NULL)
#elif defined __i386__
CheckTypeSize(XdbeVisualInfo,0, 35952, 2, 1.0, NULL, 35951, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XdbeScreenVisualInfo,0, 35953, 12, 1.0, NULL, 35954, NULL)
#elif defined __x86_64__
CheckTypeSize(XdbeScreenVisualInfo,0, 35953, 11, 1.0, NULL, 35954, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XdbeScreenVisualInfo,0, 35953, 10, 1.0, NULL, 35954, NULL)
#elif defined __powerpc64__
CheckTypeSize(XdbeScreenVisualInfo,0, 35953, 9, 1.0, NULL, 35954, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XdbeScreenVisualInfo,0, 35953, 6, 1.0, NULL, 35954, NULL)
#elif defined __ia64__
CheckTypeSize(XdbeScreenVisualInfo,0, 35953, 3, 1.0, NULL, 35954, NULL)
#elif defined __i386__
CheckTypeSize(XdbeScreenVisualInfo,0, 35953, 2, 1.0, NULL, 35954, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeSwapInfo,0, 35956, 12, 1.0, NULL, 35955, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeSwapInfo,0, 35956, 11, 1.0, NULL, 35955, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeSwapInfo,0, 35956, 10, 1.0, NULL, 35955, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeSwapInfo,0, 35956, 9, 1.0, NULL, 35955, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeSwapInfo,0, 35956, 6, 1.0, NULL, 35955, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeSwapInfo,0, 35956, 3, 1.0, NULL, 35955, NULL)
#elif defined __i386__
CheckTypeSize(xDbeSwapInfo,0, 35956, 2, 1.0, NULL, 35955, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeVisInfo,0, 35958, 12, 1.0, NULL, 35957, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeVisInfo,0, 35958, 11, 1.0, NULL, 35957, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeVisInfo,0, 35958, 10, 1.0, NULL, 35957, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeVisInfo,0, 35958, 9, 1.0, NULL, 35957, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeVisInfo,0, 35958, 6, 1.0, NULL, 35957, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeVisInfo,0, 35958, 3, 1.0, NULL, 35957, NULL)
#elif defined __i386__
CheckTypeSize(xDbeVisInfo,0, 35958, 2, 1.0, NULL, 35957, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeScreenVisInfo,0, 35960, 12, 1.0, NULL, 35959, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeScreenVisInfo,0, 35960, 11, 1.0, NULL, 35959, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeScreenVisInfo,0, 35960, 10, 1.0, NULL, 35959, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeScreenVisInfo,0, 35960, 9, 1.0, NULL, 35959, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeScreenVisInfo,0, 35960, 6, 1.0, NULL, 35959, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeScreenVisInfo,0, 35960, 3, 1.0, NULL, 35959, NULL)
#elif defined __i386__
CheckTypeSize(xDbeScreenVisInfo,0, 35960, 2, 1.0, NULL, 35959, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeBufferAttributes,0, 35962, 12, 1.0, NULL, 35961, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeBufferAttributes,0, 35962, 11, 1.0, NULL, 35961, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeBufferAttributes,0, 35962, 10, 1.0, NULL, 35961, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeBufferAttributes,0, 35962, 9, 1.0, NULL, 35961, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeBufferAttributes,0, 35962, 6, 1.0, NULL, 35961, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeBufferAttributes,0, 35962, 3, 1.0, NULL, 35961, NULL)
#elif defined __i386__
CheckTypeSize(xDbeBufferAttributes,0, 35962, 2, 1.0, NULL, 35961, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeGetVersionReq,0, 35964, 12, 1.0, NULL, 35963, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeGetVersionReq,0, 35964, 11, 1.0, NULL, 35963, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeGetVersionReq,0, 35964, 10, 1.0, NULL, 35963, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeGetVersionReq,0, 35964, 9, 1.0, NULL, 35963, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeGetVersionReq,0, 35964, 6, 1.0, NULL, 35963, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeGetVersionReq,0, 35964, 3, 1.0, NULL, 35963, NULL)
#elif defined __i386__
CheckTypeSize(xDbeGetVersionReq,0, 35964, 2, 1.0, NULL, 35963, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeGetVersionReply,0, 35966, 12, 1.0, NULL, 35965, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeGetVersionReply,0, 35966, 11, 1.0, NULL, 35965, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeGetVersionReply,0, 35966, 10, 1.0, NULL, 35965, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeGetVersionReply,0, 35966, 9, 1.0, NULL, 35965, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeGetVersionReply,0, 35966, 6, 1.0, NULL, 35965, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeGetVersionReply,0, 35966, 3, 1.0, NULL, 35965, NULL)
#elif defined __i386__
CheckTypeSize(xDbeGetVersionReply,0, 35966, 2, 1.0, NULL, 35965, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeAllocateBackBufferNameReq,0, 35968, 12, 1.0, NULL, 35967, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeAllocateBackBufferNameReq,0, 35968, 11, 1.0, NULL, 35967, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeAllocateBackBufferNameReq,0, 35968, 10, 1.0, NULL, 35967, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeAllocateBackBufferNameReq,0, 35968, 9, 1.0, NULL, 35967, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeAllocateBackBufferNameReq,0, 35968, 6, 1.0, NULL, 35967, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeAllocateBackBufferNameReq,0, 35968, 3, 1.0, NULL, 35967, NULL)
#elif defined __i386__
CheckTypeSize(xDbeAllocateBackBufferNameReq,0, 35968, 2, 1.0, NULL, 35967, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeDeallocateBackBufferNameReq,0, 35970, 12, 1.0, NULL, 35969, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeDeallocateBackBufferNameReq,0, 35970, 11, 1.0, NULL, 35969, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeDeallocateBackBufferNameReq,0, 35970, 10, 1.0, NULL, 35969, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeDeallocateBackBufferNameReq,0, 35970, 9, 1.0, NULL, 35969, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeDeallocateBackBufferNameReq,0, 35970, 6, 1.0, NULL, 35969, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeDeallocateBackBufferNameReq,0, 35970, 3, 1.0, NULL, 35969, NULL)
#elif defined __i386__
CheckTypeSize(xDbeDeallocateBackBufferNameReq,0, 35970, 2, 1.0, NULL, 35969, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeSwapBuffersReq,0, 35972, 12, 1.0, NULL, 35971, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeSwapBuffersReq,0, 35972, 11, 1.0, NULL, 35971, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeSwapBuffersReq,0, 35972, 10, 1.0, NULL, 35971, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeSwapBuffersReq,0, 35972, 9, 1.0, NULL, 35971, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeSwapBuffersReq,0, 35972, 6, 1.0, NULL, 35971, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeSwapBuffersReq,0, 35972, 3, 1.0, NULL, 35971, NULL)
#elif defined __i386__
CheckTypeSize(xDbeSwapBuffersReq,0, 35972, 2, 1.0, NULL, 35971, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeBeginIdiomReq,0, 35974, 12, 1.0, NULL, 35973, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeBeginIdiomReq,0, 35974, 11, 1.0, NULL, 35973, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeBeginIdiomReq,0, 35974, 10, 1.0, NULL, 35973, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeBeginIdiomReq,0, 35974, 9, 1.0, NULL, 35973, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeBeginIdiomReq,0, 35974, 6, 1.0, NULL, 35973, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeBeginIdiomReq,0, 35974, 3, 1.0, NULL, 35973, NULL)
#elif defined __i386__
CheckTypeSize(xDbeBeginIdiomReq,0, 35974, 2, 1.0, NULL, 35973, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeEndIdiomReq,0, 35976, 12, 1.0, NULL, 35975, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeEndIdiomReq,0, 35976, 11, 1.0, NULL, 35975, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeEndIdiomReq,0, 35976, 10, 1.0, NULL, 35975, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeEndIdiomReq,0, 35976, 9, 1.0, NULL, 35975, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeEndIdiomReq,0, 35976, 6, 1.0, NULL, 35975, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeEndIdiomReq,0, 35976, 3, 1.0, NULL, 35975, NULL)
#elif defined __i386__
CheckTypeSize(xDbeEndIdiomReq,0, 35976, 2, 1.0, NULL, 35975, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeGetVisualInfoReq,0, 35978, 12, 1.0, NULL, 35977, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeGetVisualInfoReq,0, 35978, 11, 1.0, NULL, 35977, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeGetVisualInfoReq,0, 35978, 10, 1.0, NULL, 35977, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeGetVisualInfoReq,0, 35978, 9, 1.0, NULL, 35977, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeGetVisualInfoReq,0, 35978, 6, 1.0, NULL, 35977, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeGetVisualInfoReq,0, 35978, 3, 1.0, NULL, 35977, NULL)
#elif defined __i386__
CheckTypeSize(xDbeGetVisualInfoReq,0, 35978, 2, 1.0, NULL, 35977, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeGetVisualInfoReply,0, 35980, 12, 1.0, NULL, 35979, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeGetVisualInfoReply,0, 35980, 11, 1.0, NULL, 35979, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeGetVisualInfoReply,0, 35980, 10, 1.0, NULL, 35979, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeGetVisualInfoReply,0, 35980, 9, 1.0, NULL, 35979, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeGetVisualInfoReply,0, 35980, 6, 1.0, NULL, 35979, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeGetVisualInfoReply,0, 35980, 3, 1.0, NULL, 35979, NULL)
#elif defined __i386__
CheckTypeSize(xDbeGetVisualInfoReply,0, 35980, 2, 1.0, NULL, 35979, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeGetBackBufferAttributesReq,0, 35982, 12, 1.0, NULL, 35981, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeGetBackBufferAttributesReq,0, 35982, 11, 1.0, NULL, 35981, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeGetBackBufferAttributesReq,0, 35982, 10, 1.0, NULL, 35981, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeGetBackBufferAttributesReq,0, 35982, 9, 1.0, NULL, 35981, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeGetBackBufferAttributesReq,0, 35982, 6, 1.0, NULL, 35981, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeGetBackBufferAttributesReq,0, 35982, 3, 1.0, NULL, 35981, NULL)
#elif defined __i386__
CheckTypeSize(xDbeGetBackBufferAttributesReq,0, 35982, 2, 1.0, NULL, 35981, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeGetBackBufferAttributesReply,0, 35984, 12, 1.0, NULL, 35983, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeGetBackBufferAttributesReply,0, 35984, 11, 1.0, NULL, 35983, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeGetBackBufferAttributesReply,0, 35984, 10, 1.0, NULL, 35983, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeGetBackBufferAttributesReply,0, 35984, 9, 1.0, NULL, 35983, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeGetBackBufferAttributesReply,0, 35984, 6, 1.0, NULL, 35983, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeGetBackBufferAttributesReply,0, 35984, 3, 1.0, NULL, 35983, NULL)
#elif defined __i386__
CheckTypeSize(xDbeGetBackBufferAttributesReply,0, 35984, 2, 1.0, NULL, 35983, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/Xdbeproto.h\n\n",pcnt,cnt);
return cnt;
#endif

}
