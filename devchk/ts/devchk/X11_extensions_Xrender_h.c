/*
 * Test of X11/extensions/Xrender.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
	CompareConstant(PictStandardA1,4,9631,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PictStandardA1\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictStandardA4
	CompareConstant(PictStandardA4,3,9632,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PictStandardA4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictStandardA8
	CompareConstant(PictStandardA8,2,9633,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PictStandardA8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictStandardARGB32
	CompareConstant(PictStandardARGB32,0,9634,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PictStandardARGB32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictStandardNUM
	CompareConstant(PictStandardNUM,5,9635,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PictStandardNUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictStandardRGB24
	CompareConstant(PictStandardRGB24,1,9636,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PictStandardRGB24\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatAlpha
	CompareConstant(PictFormatAlpha,(1 << 9),9637,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatAlpha\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatAlphaMask
	CompareConstant(PictFormatAlphaMask,(1 << 10),9638,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatAlphaMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatBlue
	CompareConstant(PictFormatBlue,(1 << 7),9639,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatBlue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatBlueMask
	CompareConstant(PictFormatBlueMask,(1 << 8),9640,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatBlueMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatColormap
	CompareConstant(PictFormatColormap,(1 << 11),9641,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatColormap\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatDepth
	CompareConstant(PictFormatDepth,(1 << 2),9642,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatDepth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatGreen
	CompareConstant(PictFormatGreen,(1 << 5),9643,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatGreen\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatGreenMask
	CompareConstant(PictFormatGreenMask,(1 << 6),9644,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatGreenMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatID
	CompareConstant(PictFormatID,(1 << 0),9645,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatID\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatRed
	CompareConstant(PictFormatRed,(1 << 3),9646,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatRed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatRedMask
	CompareConstant(PictFormatRedMask,(1 << 4),9647,architecture,1.2,NULL)
#else
Msg( "Error: Constant not found: PictFormatRedMask\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictFormatType
	CompareConstant(PictFormatType,(1 << 1),9648,architecture,1.2,NULL)
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
CheckTypeSize(struct _XTrapezoid,40, 12568, 2, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XTrapezoid on IA32\n");
CheckOffset(struct _XTrapezoid,top,0,2,64004)
CheckOffset(struct _XTrapezoid,bottom,0,2,64005)
CheckOffset(struct _XTrapezoid,left,0,2,64006)
CheckOffset(struct _XTrapezoid,right,0,2,64007)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XTrapezoid,0, 12568, 10, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XTrapezoid on S390\n");
CheckOffset(struct _XTrapezoid,top,0,10,64004)
CheckOffset(struct _XTrapezoid,bottom,0,10,64005)
CheckOffset(struct _XTrapezoid,left,0,10,64006)
CheckOffset(struct _XTrapezoid,right,0,10,64007)
#elif defined __x86_64__
CheckTypeSize(struct _XTrapezoid,0, 12568, 11, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XTrapezoid on x86-64\n");
CheckOffset(struct _XTrapezoid,top,0,11,64004)
CheckOffset(struct _XTrapezoid,bottom,0,11,64005)
CheckOffset(struct _XTrapezoid,left,0,11,64006)
CheckOffset(struct _XTrapezoid,right,0,11,64007)
#elif defined __s390x__
CheckTypeSize(struct _XTrapezoid,0, 12568, 12, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XTrapezoid on S390X\n");
CheckOffset(struct _XTrapezoid,top,0,12,64004)
CheckOffset(struct _XTrapezoid,bottom,0,12,64005)
CheckOffset(struct _XTrapezoid,left,0,12,64006)
CheckOffset(struct _XTrapezoid,right,0,12,64007)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XTrapezoid,0, 12568, 6, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XTrapezoid on PPC32\n");
CheckOffset(struct _XTrapezoid,top,0,6,64004)
CheckOffset(struct _XTrapezoid,bottom,0,6,64005)
CheckOffset(struct _XTrapezoid,left,0,6,64006)
CheckOffset(struct _XTrapezoid,right,0,6,64007)
#elif defined __powerpc64__
CheckTypeSize(struct _XTrapezoid,0, 12568, 9, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XTrapezoid on PPC64\n");
CheckOffset(struct _XTrapezoid,top,0,9,64004)
CheckOffset(struct _XTrapezoid,bottom,0,9,64005)
CheckOffset(struct _XTrapezoid,left,0,9,64006)
CheckOffset(struct _XTrapezoid,right,0,9,64007)
#else
Msg("Find size of _XTrapezoid (12568)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,12568,0);
#endif

#if defined __i386__
CheckTypeSize(XTrapezoid,40, 12569, 2, 1.2, NULL, 12568, NULL)
#elif defined __x86_64__
CheckTypeSize(XTrapezoid,40, 12569, 11, 1.2, NULL, 12568, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XTrapezoid,40, 12569, 10, 1.2, NULL, 12568, NULL)
#elif defined __s390x__
CheckTypeSize(XTrapezoid,40, 12569, 12, 1.2, NULL, 12568, NULL)
#elif defined __ia64__
CheckTypeSize(XTrapezoid,40, 12569, 3, 1.2, NULL, 12568, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XTrapezoid,40, 12569, 6, 1.2, NULL, 12568, NULL)
#elif defined __powerpc64__
CheckTypeSize(XTrapezoid,40, 12569, 9, 1.2, NULL, 12568, NULL)
#else
Msg("Find size of XTrapezoid (12569)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,12568,NULL);\n",architecture,12569,0);
#endif

#if defined __i386__
CheckTypeSize(XTrapezoid *,4, 12570, 2, 1.2, NULL, 12569, NULL)
#elif defined __x86_64__
CheckTypeSize(XTrapezoid *,8, 12570, 11, 1.2, NULL, 12569, NULL)
#elif defined __ia64__
CheckTypeSize(XTrapezoid *,8, 12570, 3, 1.2, NULL, 12569, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XTrapezoid *,4, 12570, 6, 1.2, NULL, 12569, NULL)
#elif defined __powerpc64__
CheckTypeSize(XTrapezoid *,8, 12570, 9, 1.2, NULL, 12569, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XTrapezoid *,4, 12570, 10, 1.2, NULL, 12569, NULL)
#elif defined __s390x__
CheckTypeSize(XTrapezoid *,8, 12570, 12, 1.2, NULL, 12569, NULL)
#else
Msg("Find size of XTrapezoid * (12570)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,12569,NULL);\n",architecture,12570,0);
#endif

#if 1
CheckTypeSize(XRenderColor,8, 16626, 1, 1.2, NULL, 16625, NULL)
#endif

#if 1
CheckTypeSize(const XRenderColor,8, 16627, 1, 1.2, NULL, 16626, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(const XRectangle,8, 16630, 1, 1.2, NULL, 8408, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(XRenderColor *,4, 16632, 1, 1.2, NULL, 16626, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(Glyph,8, 16633, 11, 1.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(Glyph,4, 16633, 2, 1.2, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Glyph,4, 16633, 10, 1.2, NULL, 11186, NULL)
#elif defined __s390x__
CheckTypeSize(Glyph,8, 16633, 12, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(Glyph,8, 16633, 3, 1.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Glyph,4, 16633, 6, 1.2, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(Glyph,8, 16633, 9, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of Glyph (16633)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,16633,0);
#endif

#if 1
CheckTypeSize(const Glyph,0, 16634, 1, 1.2, NULL, 16633, NULL)
#endif

#if 1
#endif

#if defined __x86_64__
CheckTypeSize(PictFormat,8, 16636, 11, 1.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(PictFormat,4, 16636, 2, 1.2, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PictFormat,4, 16636, 10, 1.2, NULL, 11186, NULL)
#elif defined __s390x__
CheckTypeSize(PictFormat,8, 16636, 12, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(PictFormat,8, 16636, 3, 1.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PictFormat,4, 16636, 6, 1.2, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(PictFormat,8, 16636, 9, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of PictFormat (16636)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,16636,0);
#endif

#if 1
CheckTypeSize(XRenderDirectFormat,16, 16638, 1, 1.2, NULL, 16637, NULL)
#endif

#if defined __x86_64__
CheckTypeSize(XRenderPictFormat,40, 16640, 11, 1.2, NULL, 16639, NULL)
#elif defined __i386__
CheckTypeSize(XRenderPictFormat,32, 16640, 2, 1.2, NULL, 16639, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XRenderPictFormat,32, 16640, 10, 1.2, NULL, 16639, NULL)
#elif defined __s390x__
CheckTypeSize(XRenderPictFormat,40, 16640, 12, 1.2, NULL, 16639, NULL)
#elif defined __ia64__
CheckTypeSize(XRenderPictFormat,40, 16640, 3, 1.2, NULL, 16639, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XRenderPictFormat,32, 16640, 6, 1.2, NULL, 16639, NULL)
#elif defined __powerpc64__
CheckTypeSize(XRenderPictFormat,40, 16640, 9, 1.2, NULL, 16639, NULL)
#else
Msg("Find size of XRenderPictFormat (16640)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16639,NULL);\n",architecture,16640,0);
#endif

#if 1
CheckTypeSize(const XRenderPictFormat,0, 16641, 1, 1.2, NULL, 16640, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(const XPointFixed,8, 16646, 1, 1.2, NULL, 16645, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(struct _XGlyphInfo,12, 16648, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphInfo,height,2,1,53872)
CheckOffset(struct _XGlyphInfo,height,2,1,53872)
CheckMemberSize(struct _XGlyphInfo,x,2,1,53873)
CheckOffset(struct _XGlyphInfo,x,4,1,53873)
CheckMemberSize(struct _XGlyphInfo,y,2,1,53874)
CheckOffset(struct _XGlyphInfo,y,6,1,53874)
CheckMemberSize(struct _XGlyphInfo,xOff,2,1,53875)
CheckOffset(struct _XGlyphInfo,xOff,8,1,53875)
CheckMemberSize(struct _XGlyphInfo,yOff,2,1,53876)
CheckOffset(struct _XGlyphInfo,yOff,10,1,53876)
#endif

#if defined __x86_64__
CheckTypeSize(XGlyphInfo,12, 16649, 11, 1.2, NULL, 16648, NULL)
#elif defined __i386__
CheckTypeSize(XGlyphInfo,12, 16649, 2, 1.2, NULL, 16648, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XGlyphInfo,12, 16649, 10, 1.2, NULL, 16648, NULL)
#elif defined __s390x__
CheckTypeSize(XGlyphInfo,12, 16649, 12, 1.2, NULL, 16648, NULL)
#elif defined __ia64__
CheckTypeSize(XGlyphInfo,12, 16649, 3, 1.2, NULL, 16648, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XGlyphInfo,12, 16649, 6, 1.2, NULL, 16648, NULL)
#elif defined __powerpc64__
CheckTypeSize(XGlyphInfo,12, 16649, 9, 1.2, NULL, 16648, NULL)
#else
Msg("Find size of XGlyphInfo (16649)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16648,NULL);\n",architecture,16649,0);
#endif

#if 1
CheckTypeSize(const XGlyphInfo,12, 16650, 1, 1.2, NULL, 16649, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(struct _XFilters,16, 16652, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XFilters on All\n");
CheckOffset(struct _XFilters,nfilter,0,1,53877)
CheckOffset(struct _XFilters,filter,0,1,53878)
CheckOffset(struct _XFilters,nalias,0,1,53879)
CheckOffset(struct _XFilters,alias,0,1,53880)
#endif

#if defined __x86_64__
CheckTypeSize(XFilters,32, 16653, 11, 1.2, NULL, 16652, NULL)
#elif defined __i386__
CheckTypeSize(XFilters,16, 16653, 2, 1.2, NULL, 16652, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XFilters,16, 16653, 10, 1.2, NULL, 16652, NULL)
#elif defined __s390x__
CheckTypeSize(XFilters,32, 16653, 12, 1.2, NULL, 16652, NULL)
#elif defined __ia64__
CheckTypeSize(XFilters,32, 16653, 3, 1.2, NULL, 16652, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XFilters,16, 16653, 6, 1.2, NULL, 16652, NULL)
#elif defined __powerpc64__
CheckTypeSize(XFilters,32, 16653, 9, 1.2, NULL, 16652, NULL)
#else
Msg("Find size of XFilters (16653)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16652,NULL);\n",architecture,16653,0);
#endif

#if 1
CheckTypeSize(XFilters *,4, 16654, 1, 1.2, NULL, 16653, NULL)
#endif

#if 1
CheckTypeSize(XRenderPictFormat *,4, 16655, 1, 1.2, NULL, 16640, NULL)
#endif

#if 1
CheckTypeSize(struct _XTransform,36, 16656, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XTransform on All\n");
CheckOffset(struct _XTransform,matrix,0,1,53881)
#endif

#if 1
CheckTypeSize(XTransform,36, 16658, 1, 1.2, NULL, 16656, NULL)
#endif

#if 1
CheckTypeSize(XTransform *,4, 16659, 1, 1.2, NULL, 16658, NULL)
#endif

#if 1
CheckTypeSize(struct _XAnimCursor,8, 16660, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XAnimCursor on All\n");
CheckOffset(struct _XAnimCursor,cursor,0,1,53882)
CheckOffset(struct _XAnimCursor,delay,0,1,53883)
#endif

#if defined __x86_64__
CheckTypeSize(XAnimCursor,16, 16661, 11, 1.2, NULL, 16660, NULL)
#elif defined __i386__
CheckTypeSize(XAnimCursor,8, 16661, 2, 1.2, NULL, 16660, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XAnimCursor,8, 16661, 10, 1.2, NULL, 16660, NULL)
#elif defined __s390x__
CheckTypeSize(XAnimCursor,16, 16661, 12, 1.2, NULL, 16660, NULL)
#elif defined __ia64__
CheckTypeSize(XAnimCursor,16, 16661, 3, 1.2, NULL, 16660, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XAnimCursor,8, 16661, 6, 1.2, NULL, 16660, NULL)
#elif defined __powerpc64__
CheckTypeSize(XAnimCursor,16, 16661, 9, 1.2, NULL, 16660, NULL)
#else
Msg("Find size of XAnimCursor (16661)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16660,NULL);\n",architecture,16661,0);
#endif

#if 1
CheckTypeSize(XAnimCursor *,4, 16662, 1, 1.2, NULL, 16661, NULL)
#endif

#if 1
CheckTypeSize(struct _XRadialGradient,24, 16663, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XRadialGradient,outer,12,1,53888)
CheckOffset(struct _XRadialGradient,outer,12,1,53888)
#endif

#if 1
CheckTypeSize(XRadialGradient,24, 16666, 1, 1.2, NULL, 16663, NULL)
#endif

#if 1
CheckTypeSize(const XRadialGradient,24, 16667, 1, 1.2, NULL, 16666, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(const XFixed,4, 16669, 1, 1.2, NULL, 16644, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(struct _XGlyphElt32,20, 16671, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XGlyphElt32 on All\n");
CheckOffset(struct _XGlyphElt32,glyphset,0,1,53889)
CheckOffset(struct _XGlyphElt32,chars,0,1,53890)
CheckOffset(struct _XGlyphElt32,nchars,0,1,53891)
CheckOffset(struct _XGlyphElt32,xOff,0,1,53892)
CheckOffset(struct _XGlyphElt32,yOff,0,1,53893)
#endif

#if defined __x86_64__
CheckTypeSize(XGlyphElt32,32, 16672, 11, 1.2, NULL, 16671, NULL)
#elif defined __i386__
CheckTypeSize(XGlyphElt32,20, 16672, 2, 1.2, NULL, 16671, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XGlyphElt32,20, 16672, 10, 1.2, NULL, 16671, NULL)
#elif defined __s390x__
CheckTypeSize(XGlyphElt32,32, 16672, 12, 1.2, NULL, 16671, NULL)
#elif defined __ia64__
CheckTypeSize(XGlyphElt32,32, 16672, 3, 1.2, NULL, 16671, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XGlyphElt32,20, 16672, 6, 1.2, NULL, 16671, NULL)
#elif defined __powerpc64__
CheckTypeSize(XGlyphElt32,32, 16672, 9, 1.2, NULL, 16671, NULL)
#else
Msg("Find size of XGlyphElt32 (16672)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16671,NULL);\n",architecture,16672,0);
#endif

#if 1
CheckTypeSize(const XGlyphElt32,0, 16673, 1, 1.2, NULL, 16672, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(struct _XGlyphElt8,20, 16675, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XGlyphElt8 on All\n");
CheckOffset(struct _XGlyphElt8,glyphset,0,1,53894)
CheckOffset(struct _XGlyphElt8,chars,0,1,53895)
CheckOffset(struct _XGlyphElt8,nchars,0,1,53896)
CheckOffset(struct _XGlyphElt8,xOff,0,1,53897)
CheckOffset(struct _XGlyphElt8,yOff,0,1,53898)
#endif

#if defined __x86_64__
CheckTypeSize(XGlyphElt8,32, 16676, 11, 1.2, NULL, 16675, NULL)
#elif defined __i386__
CheckTypeSize(XGlyphElt8,20, 16676, 2, 1.2, NULL, 16675, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XGlyphElt8,20, 16676, 10, 1.2, NULL, 16675, NULL)
#elif defined __s390x__
CheckTypeSize(XGlyphElt8,32, 16676, 12, 1.2, NULL, 16675, NULL)
#elif defined __ia64__
CheckTypeSize(XGlyphElt8,32, 16676, 3, 1.2, NULL, 16675, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XGlyphElt8,20, 16676, 6, 1.2, NULL, 16675, NULL)
#elif defined __powerpc64__
CheckTypeSize(XGlyphElt8,32, 16676, 9, 1.2, NULL, 16675, NULL)
#else
Msg("Find size of XGlyphElt8 (16676)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16675,NULL);\n",architecture,16676,0);
#endif

#if 1
CheckTypeSize(const XGlyphElt8,0, 16677, 1, 1.2, NULL, 16676, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(struct _XConicalGradient,12, 16679, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XConicalGradient on All\n");
CheckOffset(struct _XConicalGradient,center,0,1,53899)
CheckOffset(struct _XConicalGradient,angle,0,1,53900)
#endif

#if 1
CheckTypeSize(XConicalGradient,12, 16680, 1, 1.2, NULL, 16679, NULL)
#endif

#if 1
CheckTypeSize(const XConicalGradient,12, 16681, 1, 1.2, NULL, 16680, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(const Visual,0, 16683, 1, 1.2, NULL, 8377, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(struct _XLinearGradient,16, 16685, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XLinearGradient on All\n");
CheckOffset(struct _XLinearGradient,p1,0,1,53901)
CheckOffset(struct _XLinearGradient,p2,0,1,53902)
#endif

#if 1
CheckTypeSize(XLinearGradient,16, 16686, 1, 1.2, NULL, 16685, NULL)
#endif

#if 1
CheckTypeSize(const XLinearGradient,16, 16687, 1, 1.2, NULL, 16686, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(struct _XPointDouble,16, 16689, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XPointDouble on All\n");
CheckOffset(struct _XPointDouble,x,0,1,53903)
CheckOffset(struct _XPointDouble,y,0,1,53904)
#endif

#if 1
CheckTypeSize(XPointDouble,16, 16691, 1, 1.2, NULL, 16689, NULL)
#endif

#if 1
CheckTypeSize(const XPointDouble,16, 16692, 1, 1.2, NULL, 16691, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(XFixed *,4, 16694, 1, 1.2, NULL, 16644, NULL)
#endif

#if 1
CheckTypeSize(const XTrapezoid,40, 16695, 1, 1.2, NULL, 12569, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(struct _XRenderPictureAttributes,52, 16697, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XRenderPictureAttributes on All\n");
CheckOffset(struct _XRenderPictureAttributes,repeat,0,1,53905)
CheckOffset(struct _XRenderPictureAttributes,alpha_map,0,1,53906)
CheckOffset(struct _XRenderPictureAttributes,alpha_x_origin,0,1,53907)
CheckOffset(struct _XRenderPictureAttributes,alpha_y_origin,0,1,53908)
CheckOffset(struct _XRenderPictureAttributes,clip_x_origin,0,1,53909)
CheckOffset(struct _XRenderPictureAttributes,clip_y_origin,0,1,53910)
CheckOffset(struct _XRenderPictureAttributes,clip_mask,0,1,53911)
CheckOffset(struct _XRenderPictureAttributes,graphics_exposures,0,1,53912)
CheckOffset(struct _XRenderPictureAttributes,subwindow_mode,0,1,53913)
CheckOffset(struct _XRenderPictureAttributes,poly_edge,0,1,53914)
CheckOffset(struct _XRenderPictureAttributes,poly_mode,0,1,53915)
CheckOffset(struct _XRenderPictureAttributes,dither,0,1,53916)
CheckOffset(struct _XRenderPictureAttributes,component_alpha,0,1,53917)
#endif

#if defined __i386__
CheckTypeSize(XRenderPictureAttributes,52, 16698, 2, 1.2, NULL, 16697, NULL)
#elif defined __x86_64__
CheckTypeSize(XRenderPictureAttributes,72, 16698, 11, 1.2, NULL, 16697, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XRenderPictureAttributes,52, 16698, 10, 1.2, NULL, 16697, NULL)
#elif defined __s390x__
CheckTypeSize(XRenderPictureAttributes,72, 16698, 12, 1.2, NULL, 16697, NULL)
#elif defined __ia64__
CheckTypeSize(XRenderPictureAttributes,72, 16698, 3, 1.2, NULL, 16697, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XRenderPictureAttributes,52, 16698, 6, 1.2, NULL, 16697, NULL)
#elif defined __powerpc64__
CheckTypeSize(XRenderPictureAttributes,72, 16698, 9, 1.2, NULL, 16697, NULL)
#else
Msg("Find size of XRenderPictureAttributes (16698)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16697,NULL);\n",architecture,16698,0);
#endif

#if 1
CheckTypeSize(const XRenderPictureAttributes,0, 16699, 1, 1.2, NULL, 16698, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(struct _XTrap,24, 16701, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XTrap,bottom,12,1,53922)
CheckOffset(struct _XTrap,bottom,12,1,53922)
#endif

#if 1
CheckTypeSize(XTrap,24, 16704, 1, 1.2, NULL, 16701, NULL)
#endif

#if 1
CheckTypeSize(const XTrap,24, 16705, 1, 1.2, NULL, 16704, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(struct _XIndexValue,12, 16707, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XIndexValue on All\n");
CheckOffset(struct _XIndexValue,pixel,0,1,53923)
CheckOffset(struct _XIndexValue,red,0,1,53924)
CheckOffset(struct _XIndexValue,green,0,1,53925)
CheckOffset(struct _XIndexValue,blue,0,1,53926)
CheckOffset(struct _XIndexValue,alpha,0,1,53927)
#endif

#if defined __x86_64__
CheckTypeSize(XIndexValue,16, 16708, 11, 1.2, NULL, 16707, NULL)
#elif defined __i386__
CheckTypeSize(XIndexValue,12, 16708, 2, 1.2, NULL, 16707, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIndexValue,12, 16708, 10, 1.2, NULL, 16707, NULL)
#elif defined __s390x__
CheckTypeSize(XIndexValue,16, 16708, 12, 1.2, NULL, 16707, NULL)
#elif defined __ia64__
CheckTypeSize(XIndexValue,16, 16708, 3, 1.2, NULL, 16707, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIndexValue,12, 16708, 6, 1.2, NULL, 16707, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIndexValue,16, 16708, 9, 1.2, NULL, 16707, NULL)
#else
Msg("Find size of XIndexValue (16708)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16707,NULL);\n",architecture,16708,0);
#endif

#if 1
CheckTypeSize(XIndexValue *,4, 16709, 1, 1.2, NULL, 16708, NULL)
#endif

#if 1
CheckTypeSize(struct _XGlyphElt16,20, 16710, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XGlyphElt16 on All\n");
CheckOffset(struct _XGlyphElt16,glyphset,0,1,53928)
CheckOffset(struct _XGlyphElt16,chars,0,1,53929)
CheckOffset(struct _XGlyphElt16,nchars,0,1,53930)
CheckOffset(struct _XGlyphElt16,xOff,0,1,53931)
CheckOffset(struct _XGlyphElt16,yOff,0,1,53932)
#endif

#if 1
#endif

#if 1
#endif

#if defined __i386__
CheckTypeSize(XGlyphElt16,20, 16713, 2, 1.2, NULL, 16710, NULL)
#elif defined __x86_64__
CheckTypeSize(XGlyphElt16,32, 16713, 11, 1.2, NULL, 16710, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XGlyphElt16,20, 16713, 10, 1.2, NULL, 16710, NULL)
#elif defined __s390x__
CheckTypeSize(XGlyphElt16,32, 16713, 12, 1.2, NULL, 16710, NULL)
#elif defined __ia64__
CheckTypeSize(XGlyphElt16,32, 16713, 3, 1.2, NULL, 16710, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XGlyphElt16,20, 16713, 6, 1.2, NULL, 16710, NULL)
#elif defined __powerpc64__
CheckTypeSize(XGlyphElt16,32, 16713, 9, 1.2, NULL, 16710, NULL)
#else
Msg("Find size of XGlyphElt16 (16713)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16710,NULL);\n",architecture,16713,0);
#endif

#if 1
CheckTypeSize(const XGlyphElt16,0, 16714, 1, 1.2, NULL, 16713, NULL)
#endif

#if 1
#endif

#if 1
CheckTypeSize(struct _XTriangle,24, 16716, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XTriangle,p2,8,1,53934)
CheckOffset(struct _XTriangle,p2,8,1,53934)
#endif

#if 1
CheckTypeSize(XTriangle,24, 16717, 1, 1.2, NULL, 16716, NULL)
#endif

#if 1
CheckTypeSize(const XTriangle,24, 16718, 1, 1.2, NULL, 16717, NULL)
#endif

#if 1
#endif

#if defined __x86_64__
CheckTypeSize(GlyphSet,8, 16624, 11, 1.2, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(GlyphSet,4, 16624, 2, 1.2, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GlyphSet,4, 16624, 10, 1.2, NULL, 11186, NULL)
#elif defined __s390x__
CheckTypeSize(GlyphSet,8, 16624, 12, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(GlyphSet,8, 16624, 3, 1.2, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GlyphSet,4, 16624, 6, 1.2, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(GlyphSet,8, 16624, 9, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of GlyphSet (16624)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,16624,0);
#endif

#if 1
CheckTypeSize(struct _XPointFixed,8, 16643, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XPointFixed,y,4,1,53870)
CheckOffset(struct _XPointFixed,y,4,1,53870)
#endif

#if 1
CheckTypeSize(XFixed,4, 16644, 1, 1.2, NULL, 6, NULL)
#endif

#if 1
CheckTypeSize(XPointFixed,8, 16645, 1, 1.2, NULL, 16643, NULL)
#endif

#if 1
CheckTypeSize(struct _XCircle,12, 16664, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XCircle,y,4,1,53885)
CheckOffset(struct _XCircle,y,4,1,53885)
CheckMemberSize(struct _XCircle,radius,4,1,53886)
CheckOffset(struct _XCircle,radius,8,1,53886)
#endif

#if 1
CheckTypeSize(XCircle,12, 16665, 1, 1.2, NULL, 16664, NULL)
#endif

#if 1
CheckTypeSize(XDouble,8, 16690, 1, 1.2, NULL, 13, NULL)
#endif

#if 1
CheckTypeSize(struct _XSpanFix,12, 16702, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XSpanFix,right,4,1,53919)
CheckOffset(struct _XSpanFix,right,4,1,53919)
CheckMemberSize(struct _XSpanFix,y,4,1,53920)
CheckOffset(struct _XSpanFix,y,8,1,53920)
#endif

#if 1
CheckTypeSize(XSpanFix,12, 16703, 1, 1.2, NULL, 16702, NULL)
#endif

#if 1
CheckTypeSize(struct _XLineFixed,16, 17024, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XLineFixed on All\n");
CheckOffset(struct _XLineFixed,p1,0,1,64002)
CheckOffset(struct _XLineFixed,p2,0,1,64003)
#endif

#if 1
CheckTypeSize(XLineFixed,16, 17025, 1, 1.2, NULL, 17024, NULL)
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
