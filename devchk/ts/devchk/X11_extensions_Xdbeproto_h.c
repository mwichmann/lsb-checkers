/*
 * Test of X11/extensions/Xdbeproto.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/Xdbeproto.h\n");
#endif

printf("Checking data structures in X11/extensions/Xdbeproto.h\n");
#if defined __s390x__
CheckTypeSize(xDbeSwapAction,0, 1008037, 12, 1.0, NULL, 3, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeSwapAction,0, 1008037, 11, 1.0, NULL, 3, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeSwapAction,0, 1008037, 10, 1.0, NULL, 3, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeSwapAction,0, 1008037, 9, 1.0, NULL, 3, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeSwapAction,0, 1008037, 6, 1.0, NULL, 3, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeSwapAction,0, 1008037, 3, 1.0, NULL, 3, NULL)
#elif defined __i386__
CheckTypeSize(xDbeSwapAction,0, 1008037, 2, 1.0, NULL, 3, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeBackBuffer,0, 1008038, 12, 1.0, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeBackBuffer,0, 1008038, 11, 1.0, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeBackBuffer,0, 1008038, 10, 1.0, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeBackBuffer,0, 1008038, 9, 1.0, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeBackBuffer,0, 1008038, 6, 1.0, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeBackBuffer,0, 1008038, 3, 1.0, NULL, 7, NULL)
#elif defined __i386__
CheckTypeSize(xDbeBackBuffer,0, 1008038, 2, 1.0, NULL, 7, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XdbeVisualInfo,0, 1008040, 12, 1.0, NULL, 1008039, NULL)
#elif defined __x86_64__
CheckTypeSize(XdbeVisualInfo,0, 1008040, 11, 1.0, NULL, 1008039, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XdbeVisualInfo,0, 1008040, 10, 1.0, NULL, 1008039, NULL)
#elif defined __powerpc64__
CheckTypeSize(XdbeVisualInfo,0, 1008040, 9, 1.0, NULL, 1008039, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XdbeVisualInfo,0, 1008040, 6, 1.0, NULL, 1008039, NULL)
#elif defined __ia64__
CheckTypeSize(XdbeVisualInfo,0, 1008040, 3, 1.0, NULL, 1008039, NULL)
#elif defined __i386__
CheckTypeSize(XdbeVisualInfo,0, 1008040, 2, 1.0, NULL, 1008039, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XdbeScreenVisualInfo,0, 1008041, 12, 1.0, NULL, 1008042, NULL)
#elif defined __x86_64__
CheckTypeSize(XdbeScreenVisualInfo,0, 1008041, 11, 1.0, NULL, 1008042, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XdbeScreenVisualInfo,0, 1008041, 10, 1.0, NULL, 1008042, NULL)
#elif defined __powerpc64__
CheckTypeSize(XdbeScreenVisualInfo,0, 1008041, 9, 1.0, NULL, 1008042, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XdbeScreenVisualInfo,0, 1008041, 6, 1.0, NULL, 1008042, NULL)
#elif defined __ia64__
CheckTypeSize(XdbeScreenVisualInfo,0, 1008041, 3, 1.0, NULL, 1008042, NULL)
#elif defined __i386__
CheckTypeSize(XdbeScreenVisualInfo,0, 1008041, 2, 1.0, NULL, 1008042, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeSwapInfo,0, 1008044, 12, 1.0, NULL, 1008043, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeSwapInfo,0, 1008044, 11, 1.0, NULL, 1008043, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeSwapInfo,0, 1008044, 10, 1.0, NULL, 1008043, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeSwapInfo,0, 1008044, 9, 1.0, NULL, 1008043, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeSwapInfo,0, 1008044, 6, 1.0, NULL, 1008043, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeSwapInfo,0, 1008044, 3, 1.0, NULL, 1008043, NULL)
#elif defined __i386__
CheckTypeSize(xDbeSwapInfo,0, 1008044, 2, 1.0, NULL, 1008043, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeVisInfo,0, 1008046, 12, 1.0, NULL, 1008045, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeVisInfo,0, 1008046, 11, 1.0, NULL, 1008045, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeVisInfo,0, 1008046, 10, 1.0, NULL, 1008045, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeVisInfo,0, 1008046, 9, 1.0, NULL, 1008045, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeVisInfo,0, 1008046, 6, 1.0, NULL, 1008045, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeVisInfo,0, 1008046, 3, 1.0, NULL, 1008045, NULL)
#elif defined __i386__
CheckTypeSize(xDbeVisInfo,0, 1008046, 2, 1.0, NULL, 1008045, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeScreenVisInfo,0, 1008048, 12, 1.0, NULL, 1008047, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeScreenVisInfo,0, 1008048, 11, 1.0, NULL, 1008047, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeScreenVisInfo,0, 1008048, 10, 1.0, NULL, 1008047, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeScreenVisInfo,0, 1008048, 9, 1.0, NULL, 1008047, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeScreenVisInfo,0, 1008048, 6, 1.0, NULL, 1008047, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeScreenVisInfo,0, 1008048, 3, 1.0, NULL, 1008047, NULL)
#elif defined __i386__
CheckTypeSize(xDbeScreenVisInfo,0, 1008048, 2, 1.0, NULL, 1008047, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeBufferAttributes,0, 1008050, 12, 1.0, NULL, 1008049, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeBufferAttributes,0, 1008050, 11, 1.0, NULL, 1008049, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeBufferAttributes,0, 1008050, 10, 1.0, NULL, 1008049, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeBufferAttributes,0, 1008050, 9, 1.0, NULL, 1008049, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeBufferAttributes,0, 1008050, 6, 1.0, NULL, 1008049, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeBufferAttributes,0, 1008050, 3, 1.0, NULL, 1008049, NULL)
#elif defined __i386__
CheckTypeSize(xDbeBufferAttributes,0, 1008050, 2, 1.0, NULL, 1008049, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeGetVersionReq,0, 1008052, 12, 1.0, NULL, 1008051, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeGetVersionReq,0, 1008052, 11, 1.0, NULL, 1008051, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeGetVersionReq,0, 1008052, 10, 1.0, NULL, 1008051, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeGetVersionReq,0, 1008052, 9, 1.0, NULL, 1008051, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeGetVersionReq,0, 1008052, 6, 1.0, NULL, 1008051, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeGetVersionReq,0, 1008052, 3, 1.0, NULL, 1008051, NULL)
#elif defined __i386__
CheckTypeSize(xDbeGetVersionReq,0, 1008052, 2, 1.0, NULL, 1008051, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeGetVersionReply,0, 1008054, 12, 1.0, NULL, 1008053, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeGetVersionReply,0, 1008054, 11, 1.0, NULL, 1008053, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeGetVersionReply,0, 1008054, 10, 1.0, NULL, 1008053, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeGetVersionReply,0, 1008054, 9, 1.0, NULL, 1008053, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeGetVersionReply,0, 1008054, 6, 1.0, NULL, 1008053, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeGetVersionReply,0, 1008054, 3, 1.0, NULL, 1008053, NULL)
#elif defined __i386__
CheckTypeSize(xDbeGetVersionReply,0, 1008054, 2, 1.0, NULL, 1008053, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeAllocateBackBufferNameReq,0, 1008056, 12, 1.0, NULL, 1008055, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeAllocateBackBufferNameReq,0, 1008056, 11, 1.0, NULL, 1008055, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeAllocateBackBufferNameReq,0, 1008056, 10, 1.0, NULL, 1008055, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeAllocateBackBufferNameReq,0, 1008056, 9, 1.0, NULL, 1008055, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeAllocateBackBufferNameReq,0, 1008056, 6, 1.0, NULL, 1008055, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeAllocateBackBufferNameReq,0, 1008056, 3, 1.0, NULL, 1008055, NULL)
#elif defined __i386__
CheckTypeSize(xDbeAllocateBackBufferNameReq,0, 1008056, 2, 1.0, NULL, 1008055, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeDeallocateBackBufferNameReq,0, 1008058, 12, 1.0, NULL, 1008057, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeDeallocateBackBufferNameReq,0, 1008058, 11, 1.0, NULL, 1008057, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeDeallocateBackBufferNameReq,0, 1008058, 10, 1.0, NULL, 1008057, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeDeallocateBackBufferNameReq,0, 1008058, 9, 1.0, NULL, 1008057, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeDeallocateBackBufferNameReq,0, 1008058, 6, 1.0, NULL, 1008057, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeDeallocateBackBufferNameReq,0, 1008058, 3, 1.0, NULL, 1008057, NULL)
#elif defined __i386__
CheckTypeSize(xDbeDeallocateBackBufferNameReq,0, 1008058, 2, 1.0, NULL, 1008057, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeSwapBuffersReq,0, 1008060, 12, 1.0, NULL, 1008059, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeSwapBuffersReq,0, 1008060, 11, 1.0, NULL, 1008059, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeSwapBuffersReq,0, 1008060, 10, 1.0, NULL, 1008059, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeSwapBuffersReq,0, 1008060, 9, 1.0, NULL, 1008059, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeSwapBuffersReq,0, 1008060, 6, 1.0, NULL, 1008059, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeSwapBuffersReq,0, 1008060, 3, 1.0, NULL, 1008059, NULL)
#elif defined __i386__
CheckTypeSize(xDbeSwapBuffersReq,0, 1008060, 2, 1.0, NULL, 1008059, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeBeginIdiomReq,0, 1008062, 12, 1.0, NULL, 1008061, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeBeginIdiomReq,0, 1008062, 11, 1.0, NULL, 1008061, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeBeginIdiomReq,0, 1008062, 10, 1.0, NULL, 1008061, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeBeginIdiomReq,0, 1008062, 9, 1.0, NULL, 1008061, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeBeginIdiomReq,0, 1008062, 6, 1.0, NULL, 1008061, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeBeginIdiomReq,0, 1008062, 3, 1.0, NULL, 1008061, NULL)
#elif defined __i386__
CheckTypeSize(xDbeBeginIdiomReq,0, 1008062, 2, 1.0, NULL, 1008061, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeEndIdiomReq,0, 1008064, 12, 1.0, NULL, 1008063, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeEndIdiomReq,0, 1008064, 11, 1.0, NULL, 1008063, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeEndIdiomReq,0, 1008064, 10, 1.0, NULL, 1008063, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeEndIdiomReq,0, 1008064, 9, 1.0, NULL, 1008063, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeEndIdiomReq,0, 1008064, 6, 1.0, NULL, 1008063, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeEndIdiomReq,0, 1008064, 3, 1.0, NULL, 1008063, NULL)
#elif defined __i386__
CheckTypeSize(xDbeEndIdiomReq,0, 1008064, 2, 1.0, NULL, 1008063, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeGetVisualInfoReq,0, 1008066, 12, 1.0, NULL, 1008065, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeGetVisualInfoReq,0, 1008066, 11, 1.0, NULL, 1008065, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeGetVisualInfoReq,0, 1008066, 10, 1.0, NULL, 1008065, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeGetVisualInfoReq,0, 1008066, 9, 1.0, NULL, 1008065, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeGetVisualInfoReq,0, 1008066, 6, 1.0, NULL, 1008065, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeGetVisualInfoReq,0, 1008066, 3, 1.0, NULL, 1008065, NULL)
#elif defined __i386__
CheckTypeSize(xDbeGetVisualInfoReq,0, 1008066, 2, 1.0, NULL, 1008065, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeGetVisualInfoReply,0, 1008068, 12, 1.0, NULL, 1008067, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeGetVisualInfoReply,0, 1008068, 11, 1.0, NULL, 1008067, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeGetVisualInfoReply,0, 1008068, 10, 1.0, NULL, 1008067, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeGetVisualInfoReply,0, 1008068, 9, 1.0, NULL, 1008067, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeGetVisualInfoReply,0, 1008068, 6, 1.0, NULL, 1008067, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeGetVisualInfoReply,0, 1008068, 3, 1.0, NULL, 1008067, NULL)
#elif defined __i386__
CheckTypeSize(xDbeGetVisualInfoReply,0, 1008068, 2, 1.0, NULL, 1008067, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeGetBackBufferAttributesReq,0, 1008070, 12, 1.0, NULL, 1008069, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeGetBackBufferAttributesReq,0, 1008070, 11, 1.0, NULL, 1008069, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeGetBackBufferAttributesReq,0, 1008070, 10, 1.0, NULL, 1008069, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeGetBackBufferAttributesReq,0, 1008070, 9, 1.0, NULL, 1008069, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeGetBackBufferAttributesReq,0, 1008070, 6, 1.0, NULL, 1008069, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeGetBackBufferAttributesReq,0, 1008070, 3, 1.0, NULL, 1008069, NULL)
#elif defined __i386__
CheckTypeSize(xDbeGetBackBufferAttributesReq,0, 1008070, 2, 1.0, NULL, 1008069, NULL)
#endif

#if defined __s390x__
CheckTypeSize(xDbeGetBackBufferAttributesReply,0, 1008072, 12, 1.0, NULL, 1008071, NULL)
#elif defined __x86_64__
CheckTypeSize(xDbeGetBackBufferAttributesReply,0, 1008072, 11, 1.0, NULL, 1008071, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(xDbeGetBackBufferAttributesReply,0, 1008072, 10, 1.0, NULL, 1008071, NULL)
#elif defined __powerpc64__
CheckTypeSize(xDbeGetBackBufferAttributesReply,0, 1008072, 9, 1.0, NULL, 1008071, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(xDbeGetBackBufferAttributesReply,0, 1008072, 6, 1.0, NULL, 1008071, NULL)
#elif defined __ia64__
CheckTypeSize(xDbeGetBackBufferAttributesReply,0, 1008072, 3, 1.0, NULL, 1008071, NULL)
#elif defined __i386__
CheckTypeSize(xDbeGetBackBufferAttributesReply,0, 1008072, 2, 1.0, NULL, 1008071, NULL)
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
