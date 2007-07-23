/*
 * Test of X11/extensions/Xrender.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "X11/extensions/Xrender.h"



#ifdef TET_TEST
void X11_extensions_Xrender_h()
{
#else
int X11_extensions_Xrender_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/Xrender.h\n");
#endif

printf("Checking data structures in X11/extensions/Xrender.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef PictStandardA1
	CompareConstant(PictStandardA1,4,9631,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictStandardA1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictStandardA4
	CompareConstant(PictStandardA4,3,9632,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictStandardA4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictStandardA8
	CompareConstant(PictStandardA8,2,9633,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictStandardA8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictStandardARGB32
	CompareConstant(PictStandardARGB32,0,9634,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictStandardARGB32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictStandardNUM
	CompareConstant(PictStandardNUM,5,9635,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictStandardNUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictStandardRGB24
	CompareConstant(PictStandardRGB24,1,9636,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictStandardRGB24\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PictFormatAlpha */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PictFormatAlphaMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PictFormatBlue */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PictFormatBlueMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PictFormatColormap */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PictFormatDepth */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PictFormatGreen */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PictFormatGreenMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PictFormatID */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PictFormatRed */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PictFormatRedMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PictFormatType */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XDoubleToFixed(f) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFixedToDouble(f) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for X11/extensions/Xrender.h */
#endif

#if 1
CheckTypeSize(GlyphSet,0, 16624, 1, 3.2, NULL, 11186, NULL)
#endif

#if 1
CheckTypeSize(XRenderColor,0, 16626, 1, 3.2, NULL, 16625, NULL)
#endif

#if 1
CheckTypeSize(Glyph,0, 16633, 1, 3.2, NULL, 11186, NULL)
#endif

#if 1
CheckTypeSize(PictFormat,0, 16636, 1, 3.2, NULL, 11186, NULL)
#endif

#if 1
CheckTypeSize(XRenderDirectFormat,0, 16638, 1, 3.2, NULL, 16637, NULL)
#endif

#if 1
CheckTypeSize(XRenderPictFormat,0, 16640, 1, 3.2, NULL, 16639, NULL)
#endif

#if 1
CheckTypeSize(XFixed,0, 16644, 1, 3.2, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(XPointFixed,0, 16645, 1, 3.2, NULL, 16643, NULL)
#endif

#if 1
CheckTypeSize(XGlyphInfo,0, 16649, 1, 3.2, NULL, 16648, NULL)
#endif

#if 1
CheckTypeSize(XFilters,0, 16653, 1, 3.2, NULL, 16652, NULL)
#endif

#if 1
CheckTypeSize(XAnimCursor,0, 16657, 1, 3.2, NULL, 16656, NULL)
#endif

#if 1
CheckTypeSize(XGlyphElt32,0, 16660, 1, 3.2, NULL, 16659, NULL)
#endif

#if 1
CheckTypeSize(XGlyphElt8,0, 16664, 1, 3.2, NULL, 16663, NULL)
#endif

#if 1
CheckTypeSize(XRenderPictureAttributes,0, 16671, 1, 3.2, NULL, 16670, NULL)
#endif

#if 1
CheckTypeSize(XSpanFix,0, 16676, 1, 3.2, NULL, 16675, NULL)
#endif

#if 1
CheckTypeSize(XTrap,0, 16677, 1, 3.2, NULL, 16674, NULL)
#endif

#if 1
CheckTypeSize(XGlyphElt16,0, 16683, 1, 3.2, NULL, 16680, NULL)
#endif

#if 1
CheckTypeSize(XTriangle,0, 16687, 1, 3.2, NULL, 16686, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/Xrender.h\n\n",pcnt,cnt);
return cnt;
#endif

}
