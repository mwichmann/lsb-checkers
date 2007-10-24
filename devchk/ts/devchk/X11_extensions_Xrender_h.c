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
#ifdef PictFormatAlpha
	CompareConstant(PictFormatAlpha,(1 << 9),9637,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatAlpha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatAlphaMask
	CompareConstant(PictFormatAlphaMask,(1 << 10),9638,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatAlphaMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatBlue
	CompareConstant(PictFormatBlue,(1 << 7),9639,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatBlue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatBlueMask
	CompareConstant(PictFormatBlueMask,(1 << 8),9640,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatBlueMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatColormap
	CompareConstant(PictFormatColormap,(1 << 11),9641,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatColormap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatDepth
	CompareConstant(PictFormatDepth,(1 << 2),9642,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatDepth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatGreen
	CompareConstant(PictFormatGreen,(1 << 5),9643,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatGreen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatGreenMask
	CompareConstant(PictFormatGreenMask,(1 << 6),9644,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatGreenMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatID
	CompareConstant(PictFormatID,(1 << 0),9645,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatRed
	CompareConstant(PictFormatRed,(1 << 3),9646,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatRed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatRedMask
	CompareConstant(PictFormatRedMask,(1 << 4),9647,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatRedMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatType
	CompareConstant(PictFormatType,(1 << 1),9648,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatType\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XDoubleToFixed(f) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFixedToDouble(f) */
#endif

#if defined __i386__
CheckTypeSize(XTrapezoid,40, 12569, 2, 3.2, NULL, 12568, NULL)
#elif defined __x86_64__
CheckTypeSize(XTrapezoid,40, 12569, 11, 3.2, NULL, 12568, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XTrapezoid,40, 12569, 10, 3.2, NULL, 12568, NULL)
#elif defined __s390x__
CheckTypeSize(XTrapezoid,40, 12569, 12, 3.2, NULL, 12568, NULL)
#elif defined __ia64__
CheckTypeSize(XTrapezoid,40, 12569, 3, 3.2, NULL, 12568, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XTrapezoid,40, 12569, 6, 3.2, NULL, 12568, NULL)
#elif defined __powerpc64__
CheckTypeSize(XTrapezoid,40, 12569, 9, 3.2, NULL, 12568, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,12568,NULL);\n",architecture,12569,0);
Msg("Find size of XTrapezoid (12569)\n");
#endif

#if 1
CheckTypeSize(XRenderColor,8, 16626, 1, 3.2, NULL, 16625, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(Glyph,8, 16633, 11, 3.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(Glyph,4, 16633, 2, 3.2, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Glyph,4, 16633, 10, 3.2, NULL, 11186, NULL)
#elif defined __s390x__
CheckTypeSize(Glyph,8, 16633, 12, 3.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(Glyph,8, 16633, 3, 3.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Glyph,4, 16633, 6, 3.2, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(Glyph,8, 16633, 9, 3.2, NULL, 11186, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,11186,NULL);\n",architecture,16633,0);
Msg("Find size of Glyph (16633)\n");
#endif

#if defined __x86_64__
CheckTypeSize(PictFormat,8, 16636, 11, 3.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(PictFormat,4, 16636, 2, 3.2, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PictFormat,4, 16636, 10, 3.2, NULL, 11186, NULL)
#elif defined __s390x__
CheckTypeSize(PictFormat,8, 16636, 12, 3.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(PictFormat,8, 16636, 3, 3.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PictFormat,4, 16636, 6, 3.2, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(PictFormat,8, 16636, 9, 3.2, NULL, 11186, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,11186,NULL);\n",architecture,16636,0);
Msg("Find size of PictFormat (16636)\n");
#endif

#if 1
CheckTypeSize(XRenderDirectFormat,16, 16638, 1, 3.2, NULL, 16637, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(XRenderPictFormat,40, 16640, 11, 3.2, NULL, 16639, NULL)
#elif defined __i386__
CheckTypeSize(XRenderPictFormat,32, 16640, 2, 3.2, NULL, 16639, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XRenderPictFormat,32, 16640, 10, 3.2, NULL, 16639, NULL)
#elif defined __s390x__
CheckTypeSize(XRenderPictFormat,40, 16640, 12, 3.2, NULL, 16639, NULL)
#elif defined __ia64__
CheckTypeSize(XRenderPictFormat,40, 16640, 3, 3.2, NULL, 16639, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XRenderPictFormat,32, 16640, 6, 3.2, NULL, 16639, NULL)
#elif defined __powerpc64__
CheckTypeSize(XRenderPictFormat,40, 16640, 9, 3.2, NULL, 16639, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16639,NULL);\n",architecture,16640,0);
Msg("Find size of XRenderPictFormat (16640)\n");
#endif

#if defined __x86_64__
CheckTypeSize(XGlyphInfo,12, 16649, 11, 3.2, NULL, 16648, NULL)
#elif defined __i386__
CheckTypeSize(XGlyphInfo,12, 16649, 2, 3.2, NULL, 16648, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XGlyphInfo,12, 16649, 10, 3.2, NULL, 16648, NULL)
#elif defined __s390x__
CheckTypeSize(XGlyphInfo,12, 16649, 12, 3.2, NULL, 16648, NULL)
#elif defined __ia64__
CheckTypeSize(XGlyphInfo,12, 16649, 3, 3.2, NULL, 16648, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XGlyphInfo,12, 16649, 6, 3.2, NULL, 16648, NULL)
#elif defined __powerpc64__
CheckTypeSize(XGlyphInfo,12, 16649, 9, 3.2, NULL, 16648, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16648,NULL);\n",architecture,16649,0);
Msg("Find size of XGlyphInfo (16649)\n");
#endif

#if defined __x86_64__
CheckTypeSize(XFilters,32, 16653, 11, 3.2, NULL, 16652, NULL)
#elif defined __i386__
CheckTypeSize(XFilters,16, 16653, 2, 3.2, NULL, 16652, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XFilters,16, 16653, 10, 3.2, NULL, 16652, NULL)
#elif defined __s390x__
CheckTypeSize(XFilters,32, 16653, 12, 3.2, NULL, 16652, NULL)
#elif defined __ia64__
CheckTypeSize(XFilters,32, 16653, 3, 3.2, NULL, 16652, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XFilters,16, 16653, 6, 3.2, NULL, 16652, NULL)
#elif defined __powerpc64__
CheckTypeSize(XFilters,32, 16653, 9, 3.2, NULL, 16652, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16652,NULL);\n",architecture,16653,0);
Msg("Find size of XFilters (16653)\n");
#endif

#if 1
CheckTypeSize(XTransform,36, 16658, 1, 3.2, NULL, 16656, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(XAnimCursor,16, 16661, 11, 3.2, NULL, 16660, NULL)
#elif defined __i386__
CheckTypeSize(XAnimCursor,8, 16661, 2, 3.2, NULL, 16660, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XAnimCursor,8, 16661, 10, 3.2, NULL, 16660, NULL)
#elif defined __s390x__
CheckTypeSize(XAnimCursor,16, 16661, 12, 3.2, NULL, 16660, NULL)
#elif defined __ia64__
CheckTypeSize(XAnimCursor,16, 16661, 3, 3.2, NULL, 16660, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XAnimCursor,8, 16661, 6, 3.2, NULL, 16660, NULL)
#elif defined __powerpc64__
CheckTypeSize(XAnimCursor,16, 16661, 9, 3.2, NULL, 16660, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16660,NULL);\n",architecture,16661,0);
Msg("Find size of XAnimCursor (16661)\n");
#endif

#if 1
CheckTypeSize(XRadialGradient,24, 16666, 1, 3.2, NULL, 16663, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(XGlyphElt32,32, 16672, 11, 3.2, NULL, 16671, NULL)
#elif defined __i386__
CheckTypeSize(XGlyphElt32,20, 16672, 2, 3.2, NULL, 16671, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XGlyphElt32,20, 16672, 10, 3.2, NULL, 16671, NULL)
#elif defined __s390x__
CheckTypeSize(XGlyphElt32,32, 16672, 12, 3.2, NULL, 16671, NULL)
#elif defined __ia64__
CheckTypeSize(XGlyphElt32,32, 16672, 3, 3.2, NULL, 16671, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XGlyphElt32,20, 16672, 6, 3.2, NULL, 16671, NULL)
#elif defined __powerpc64__
CheckTypeSize(XGlyphElt32,32, 16672, 9, 3.2, NULL, 16671, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16671,NULL);\n",architecture,16672,0);
Msg("Find size of XGlyphElt32 (16672)\n");
#endif

#if defined __x86_64__
CheckTypeSize(XGlyphElt8,32, 16676, 11, 3.2, NULL, 16675, NULL)
#elif defined __i386__
CheckTypeSize(XGlyphElt8,20, 16676, 2, 3.2, NULL, 16675, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XGlyphElt8,20, 16676, 10, 3.2, NULL, 16675, NULL)
#elif defined __s390x__
CheckTypeSize(XGlyphElt8,32, 16676, 12, 3.2, NULL, 16675, NULL)
#elif defined __ia64__
CheckTypeSize(XGlyphElt8,32, 16676, 3, 3.2, NULL, 16675, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XGlyphElt8,20, 16676, 6, 3.2, NULL, 16675, NULL)
#elif defined __powerpc64__
CheckTypeSize(XGlyphElt8,32, 16676, 9, 3.2, NULL, 16675, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16675,NULL);\n",architecture,16676,0);
Msg("Find size of XGlyphElt8 (16676)\n");
#endif

#if 1
CheckTypeSize(XConicalGradient,12, 16680, 1, 3.2, NULL, 16679, NULL)
#endif

#if 1
CheckTypeSize(XLinearGradient,16, 16686, 1, 3.2, NULL, 16685, NULL)
#endif

#if 1
CheckTypeSize(XPointDouble,16, 16691, 1, 3.2, NULL, 16689, NULL)
#endif

#if defined __i386__
CheckTypeSize(XRenderPictureAttributes,52, 16698, 2, 3.2, NULL, 16697, NULL)
#elif defined __x86_64__
CheckTypeSize(XRenderPictureAttributes,72, 16698, 11, 3.2, NULL, 16697, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XRenderPictureAttributes,52, 16698, 10, 3.2, NULL, 16697, NULL)
#elif defined __s390x__
CheckTypeSize(XRenderPictureAttributes,72, 16698, 12, 3.2, NULL, 16697, NULL)
#elif defined __ia64__
CheckTypeSize(XRenderPictureAttributes,72, 16698, 3, 3.2, NULL, 16697, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XRenderPictureAttributes,52, 16698, 6, 3.2, NULL, 16697, NULL)
#elif defined __powerpc64__
CheckTypeSize(XRenderPictureAttributes,72, 16698, 9, 3.2, NULL, 16697, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16697,NULL);\n",architecture,16698,0);
Msg("Find size of XRenderPictureAttributes (16698)\n");
#endif

#if 1
CheckTypeSize(XTrap,24, 16704, 1, 3.2, NULL, 16701, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(XIndexValue,16, 16708, 11, 3.2, NULL, 16707, NULL)
#elif defined __i386__
CheckTypeSize(XIndexValue,12, 16708, 2, 3.2, NULL, 16707, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIndexValue,12, 16708, 10, 3.2, NULL, 16707, NULL)
#elif defined __s390x__
CheckTypeSize(XIndexValue,16, 16708, 12, 3.2, NULL, 16707, NULL)
#elif defined __ia64__
CheckTypeSize(XIndexValue,16, 16708, 3, 3.2, NULL, 16707, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIndexValue,12, 16708, 6, 3.2, NULL, 16707, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIndexValue,16, 16708, 9, 3.2, NULL, 16707, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16707,NULL);\n",architecture,16708,0);
Msg("Find size of XIndexValue (16708)\n");
#endif

#if defined __i386__
CheckTypeSize(XGlyphElt16,20, 16713, 2, 3.2, NULL, 16710, NULL)
#elif defined __x86_64__
CheckTypeSize(XGlyphElt16,32, 16713, 11, 3.2, NULL, 16710, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XGlyphElt16,20, 16713, 10, 3.2, NULL, 16710, NULL)
#elif defined __s390x__
CheckTypeSize(XGlyphElt16,32, 16713, 12, 3.2, NULL, 16710, NULL)
#elif defined __ia64__
CheckTypeSize(XGlyphElt16,32, 16713, 3, 3.2, NULL, 16710, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XGlyphElt16,20, 16713, 6, 3.2, NULL, 16710, NULL)
#elif defined __powerpc64__
CheckTypeSize(XGlyphElt16,32, 16713, 9, 3.2, NULL, 16710, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,16710,NULL);\n",architecture,16713,0);
Msg("Find size of XGlyphElt16 (16713)\n");
#endif

#if 1
CheckTypeSize(XTriangle,24, 16717, 1, 3.2, NULL, 16716, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(GlyphSet,8, 16624, 11, 3.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(GlyphSet,4, 16624, 2, 3.2, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GlyphSet,4, 16624, 10, 3.2, NULL, 11186, NULL)
#elif defined __s390x__
CheckTypeSize(GlyphSet,8, 16624, 12, 3.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(GlyphSet,8, 16624, 3, 3.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GlyphSet,4, 16624, 6, 3.2, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(GlyphSet,8, 16624, 9, 3.2, NULL, 11186, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,11186,NULL);\n",architecture,16624,0);
Msg("Find size of GlyphSet (16624)\n");
#endif

#if 1
CheckTypeSize(XFixed,4, 16644, 1, 3.2, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(XPointFixed,8, 16645, 1, 3.2, NULL, 16643, NULL)
#endif

#if 1
CheckTypeSize(XCircle,12, 16665, 1, 3.2, NULL, 16664, NULL)
#endif

#if 1
CheckTypeSize(XDouble,8, 16690, 1, 3.2, NULL, 13, NULL)
#endif

#if 1
CheckTypeSize(XSpanFix,12, 16703, 1, 3.2, NULL, 16702, NULL)
#endif

#if 1
CheckTypeSize(XLineFixed,16, 17025, 1, 3.2, NULL, 17024, NULL)
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
