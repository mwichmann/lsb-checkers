/*
 * Test of X11/Xutil.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include <wchar.h>
#include <X11/X.h>
#include <X11/Xlib.h>

#include "X11/Xutil.h"



#ifdef TET_TEST
void X11_Xutil_h()
{
#else
int X11_Xutil_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/Xutil.h\n");
#endif

printf("Checking data structures in X11/Xutil.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef NoValue
	CompareConstant(NoValue,0x0000,2315,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NoValue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XValue
	CompareConstant(XValue,0x0001,2316,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XValue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef YValue
	CompareConstant(YValue,0x0002,2317,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: YValue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WidthValue
	CompareConstant(WidthValue,0x0004,2318,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: WidthValue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef HeightValue
	CompareConstant(HeightValue,0x0008,2319,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: HeightValue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AllValues
	CompareConstant(AllValues,0x000F,2320,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AllValues\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNegative
	CompareConstant(XNegative,0x0010,2321,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNegative\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef YNegative
	CompareConstant(YNegative,0x0020,2322,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: YNegative\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef USPosition
	CompareConstant(USPosition,(1L<<0),2323,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: USPosition\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef USSize
	CompareConstant(USSize,(1L<<1),2324,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: USSize\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PPosition
	CompareConstant(PPosition,(1L<<2),2325,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PPosition\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PSize
	CompareConstant(PSize,(1L<<3),2326,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PSize\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PMinSize
	CompareConstant(PMinSize,(1L<<4),2327,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PMinSize\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PMaxSize
	CompareConstant(PMaxSize,(1L<<5),2328,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PMaxSize\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PResizeInc
	CompareConstant(PResizeInc,(1L<<6),2329,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PResizeInc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAspect
	CompareConstant(PAspect,(1L<<7),2330,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PAspect\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PBaseSize
	CompareConstant(PBaseSize,(1L<<8),2331,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PBaseSize\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PWinGravity
	CompareConstant(PWinGravity,(1L<<9),2332,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PWinGravity\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PAllHints
	CompareConstant(PAllHints,(PPosition|PSize|PMinSize|PMaxSize|PResizeInc|PAspect),2333,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PAllHints\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef InputHint
	CompareConstant(InputHint,(1L<<0),2334,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: InputHint\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef StateHint
	CompareConstant(StateHint,(1L<<1),2335,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: StateHint\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IconPixmapHint
	CompareConstant(IconPixmapHint,(1L<<2),2336,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IconPixmapHint\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IconWindowHint
	CompareConstant(IconWindowHint,(1L<<3),2337,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IconWindowHint\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IconPositionHint
	CompareConstant(IconPositionHint,(1L<<4),2338,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IconPositionHint\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IconMaskHint
	CompareConstant(IconMaskHint,(1L<<5),2339,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IconMaskHint\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WindowGroupHint
	CompareConstant(WindowGroupHint,(1L<<6),2340,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: WindowGroupHint\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef AllHints
	CompareConstant(AllHints,(InputHint|StateHint|IconPixmapHint|IconWindowHint|IconPositionHint|IconMaskHint|WindowGroupHint),2341,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: AllHints\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XUrgencyHint
	CompareConstant(XUrgencyHint,(1L<<8),2342,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XUrgencyHint\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef WithdrawnState
	CompareConstant(WithdrawnState,0,2343,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: WithdrawnState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef NormalState
	CompareConstant(NormalState,1,2344,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: NormalState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef IconicState
	CompareConstant(IconicState,3,2345,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: IconicState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef DontCareState
	CompareConstant(DontCareState,0,2346,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: DontCareState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ZoomState
	CompareConstant(ZoomState,2,2347,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ZoomState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef InactiveState
	CompareConstant(InactiveState,4,2348,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: InactiveState\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XNoMemory
	CompareConstant(XNoMemory,-1,2349,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XNoMemory\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XLocaleNotSupported
	CompareConstant(XLocaleNotSupported,-2,2350,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XLocaleNotSupported\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XConverterNotFound
	CompareConstant(XConverterNotFound,-3,2351,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XConverterNotFound\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XDestroyImage(ximage) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XGetPixel(ximage,x,y) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XPutPixel(ximage,x,y,pixel) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XSubImage(ximage,x,y,width,height) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XAddPixel(ximage,value) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IsKeypadKey(keysym) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IsPrivateKeypadKey(keysym) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IsCursorKey(keysym) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IsPFKey(keysym) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IsFunctionKey(keysym) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IsMiscFunctionKey(keysym) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for IsModifierKey(keysym) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef RectangleOut
	CompareConstant(RectangleOut,0,2364,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: RectangleOut\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RectangleIn
	CompareConstant(RectangleIn,1,2365,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: RectangleIn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RectanglePart
	CompareConstant(RectanglePart,2,2366,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: RectanglePart\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VisualNoMask
	CompareConstant(VisualNoMask,0x0,2367,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VisualNoMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VisualIDMask
	CompareConstant(VisualIDMask,0x1,2368,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VisualIDMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VisualScreenMask
	CompareConstant(VisualScreenMask,0x2,2369,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VisualScreenMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VisualDepthMask
	CompareConstant(VisualDepthMask,0x4,2370,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VisualDepthMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VisualClassMask
	CompareConstant(VisualClassMask,0x8,2371,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VisualClassMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VisualRedMaskMask
	CompareConstant(VisualRedMaskMask,0x10,2372,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VisualRedMaskMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VisualGreenMaskMask
	CompareConstant(VisualGreenMaskMask,0x20,2373,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VisualGreenMaskMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VisualBlueMaskMask
	CompareConstant(VisualBlueMaskMask,0x40,2374,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VisualBlueMaskMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VisualColormapSizeMask
	CompareConstant(VisualColormapSizeMask,0x80,2375,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VisualColormapSizeMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VisualBitsPerRGBMask
	CompareConstant(VisualBitsPerRGBMask,0x100,2376,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VisualBitsPerRGBMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef VisualAllMask
	CompareConstant(VisualAllMask,0x1FF,2377,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: VisualAllMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef ReleaseByFreeingColormap
	CompareConstant(ReleaseByFreeingColormap,((XID)1L),2378,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: ReleaseByFreeingColormap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BitmapSuccess
	CompareConstant(BitmapSuccess,0,2379,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BitmapSuccess\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BitmapOpenFailed
	CompareConstant(BitmapOpenFailed,1,2380,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BitmapOpenFailed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BitmapFileInvalid
	CompareConstant(BitmapFileInvalid,2,2381,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BitmapFileInvalid\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BitmapNoMemory
	CompareConstant(BitmapNoMemory,3,2382,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: BitmapNoMemory\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XCSUCCESS
	CompareConstant(XCSUCCESS,0,2383,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XCSUCCESS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XCNOMEM
	CompareConstant(XCNOMEM,1,2384,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XCNOMEM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XCNOENT
	CompareConstant(XCNOENT,2,2385,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: XCNOENT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XUniqueContext() */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XStringToContext(string) */
#endif

#if defined __x86_64__
CheckTypeSize(struct _XComposeStatus,16, 8312, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XComposeStatus,chars_matched,4,11,32655)
CheckOffset(struct _XComposeStatus,chars_matched,8,11,32655)
#elif defined __s390x__
CheckTypeSize(struct _XComposeStatus,16, 8312, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XComposeStatus,chars_matched,4,12,32655)
CheckOffset(struct _XComposeStatus,chars_matched,8,12,32655)
#elif defined __ia64__
CheckTypeSize(struct _XComposeStatus,16, 8312, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XComposeStatus,chars_matched,4,3,32655)
CheckOffset(struct _XComposeStatus,chars_matched,8,3,32655)
#elif defined __powerpc64__
CheckTypeSize(struct _XComposeStatus,16, 8312, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XComposeStatus,chars_matched,4,9,32655)
CheckOffset(struct _XComposeStatus,chars_matched,8,9,32655)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XComposeStatus,8, 8312, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XComposeStatus,chars_matched,4,10,32655)
CheckOffset(struct _XComposeStatus,chars_matched,4,10,32655)
#elif defined __i386__
CheckTypeSize(struct _XComposeStatus,8, 8312, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XComposeStatus,chars_matched,4,2,32655)
CheckOffset(struct _XComposeStatus,chars_matched,4,2,32655)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XComposeStatus,8, 8312, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XComposeStatus,chars_matched,4,6,32655)
CheckOffset(struct _XComposeStatus,chars_matched,4,6,32655)
#else
Msg("Find size of _XComposeStatus (8312)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,8312,0);
#endif

#if defined __i386__
CheckTypeSize(XComposeStatus,8, 8313, 2, 1.2, NULL, 8312, NULL)
#elif defined __ia64__
CheckTypeSize(XComposeStatus,16, 8313, 3, 1.3, NULL, 8312, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XComposeStatus,8, 8313, 6, 1.2, NULL, 8312, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XComposeStatus,8, 8313, 10, 1.3, NULL, 8312, NULL)
#elif defined __powerpc64__
CheckTypeSize(XComposeStatus,16, 8313, 9, 2.0, NULL, 8312, NULL)
#elif defined __s390x__
CheckTypeSize(XComposeStatus,16, 8313, 12, 1.3, NULL, 8312, NULL)
#elif defined __x86_64__
CheckTypeSize(XComposeStatus,16, 8313, 11, 2.0, NULL, 8312, NULL)
#else
Msg("Find size of XComposeStatus (8313)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,8312,NULL);\n",architecture,8313,0);
#endif

#if defined __i386__
CheckTypeSize(Region,4, 8314, 2, 1.2, NULL, 7850, NULL)
#elif defined __ia64__
CheckTypeSize(Region,8, 8314, 3, 1.3, NULL, 7850, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Region,4, 8314, 6, 1.2, NULL, 7850, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Region,4, 8314, 10, 1.3, NULL, 7850, NULL)
#elif defined __powerpc64__
CheckTypeSize(Region,8, 8314, 9, 2.0, NULL, 7850, NULL)
#elif defined __s390x__
CheckTypeSize(Region,8, 8314, 12, 1.3, NULL, 7850, NULL)
#elif defined __x86_64__
CheckTypeSize(Region,8, 8314, 11, 2.0, NULL, 7850, NULL)
#else
Msg("Find size of Region (8314)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,7850,NULL);\n",architecture,8314,0);
#endif

#if defined __i386__
CheckTypeSize(XContext,4, 8319, 2, 1.2, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(XContext,4, 8319, 3, 1.3, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XContext,4, 8319, 6, 1.2, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XContext,4, 8319, 10, 1.3, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(XContext,4, 8319, 9, 2.0, NULL, 6, NULL)
#elif defined __s390x__
CheckTypeSize(XContext,4, 8319, 12, 1.3, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(XContext,4, 8319, 11, 2.0, NULL, 6, NULL)
#else
Msg("Find size of XContext (8319)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""2.0""',NULL,6,NULL);\n",architecture,8319,0);
#endif

#if 1
#endif

#if 1
CheckEnum("XStringStyle",XStringStyle,0,32641)
CheckEnum("XCompoundTextStyle",XCompoundTextStyle,(0) + 1,32642)
CheckEnum("XTextStyle",XTextStyle,((0) + 1) + 1,32643)
CheckEnum("XStdICCTextStyle",XStdICCTextStyle,(((0) + 1) + 1) + 1,32644)
CheckEnum("XUTF8StringStyle",XUTF8StringStyle,((((0) + 1) + 1) + 1) + 1,32645)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xutil.h\n\n",pcnt,cnt);
return cnt;
#endif

}
