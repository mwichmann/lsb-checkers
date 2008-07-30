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

#if defined __s390x__
CheckTypeSize(struct _XTrapezoid,40, 12568, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XTrapezoid,bottom,4,12,64005)
CheckOffset(struct _XTrapezoid,bottom,4,12,64005)
CheckMemberSize(struct _XTrapezoid,left,16,12,64006)
CheckOffset(struct _XTrapezoid,left,8,12,64006)
CheckMemberSize(struct _XTrapezoid,right,16,12,64007)
CheckOffset(struct _XTrapezoid,right,24,12,64007)
#elif defined __x86_64__
CheckTypeSize(struct _XTrapezoid,40, 12568, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XTrapezoid,bottom,4,11,64005)
CheckOffset(struct _XTrapezoid,bottom,4,11,64005)
CheckMemberSize(struct _XTrapezoid,left,16,11,64006)
CheckOffset(struct _XTrapezoid,left,8,11,64006)
CheckMemberSize(struct _XTrapezoid,right,16,11,64007)
CheckOffset(struct _XTrapezoid,right,24,11,64007)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XTrapezoid,40, 12568, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XTrapezoid,bottom,4,10,64005)
CheckOffset(struct _XTrapezoid,bottom,4,10,64005)
CheckMemberSize(struct _XTrapezoid,left,16,10,64006)
CheckOffset(struct _XTrapezoid,left,8,10,64006)
CheckMemberSize(struct _XTrapezoid,right,16,10,64007)
CheckOffset(struct _XTrapezoid,right,24,10,64007)
#elif defined __powerpc64__
CheckTypeSize(struct _XTrapezoid,40, 12568, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XTrapezoid,bottom,4,9,64005)
CheckOffset(struct _XTrapezoid,bottom,4,9,64005)
CheckMemberSize(struct _XTrapezoid,left,16,9,64006)
CheckOffset(struct _XTrapezoid,left,8,9,64006)
CheckMemberSize(struct _XTrapezoid,right,16,9,64007)
CheckOffset(struct _XTrapezoid,right,24,9,64007)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XTrapezoid,40, 12568, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XTrapezoid,bottom,4,6,64005)
CheckOffset(struct _XTrapezoid,bottom,4,6,64005)
CheckMemberSize(struct _XTrapezoid,left,16,6,64006)
CheckOffset(struct _XTrapezoid,left,8,6,64006)
CheckMemberSize(struct _XTrapezoid,right,16,6,64007)
CheckOffset(struct _XTrapezoid,right,24,6,64007)
#elif defined __ia64__
CheckTypeSize(struct _XTrapezoid,40, 12568, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XTrapezoid,bottom,4,3,64005)
CheckOffset(struct _XTrapezoid,bottom,4,3,64005)
CheckMemberSize(struct _XTrapezoid,left,16,3,64006)
CheckOffset(struct _XTrapezoid,left,8,3,64006)
CheckMemberSize(struct _XTrapezoid,right,16,3,64007)
CheckOffset(struct _XTrapezoid,right,24,3,64007)
#elif defined __i386__
CheckTypeSize(struct _XTrapezoid,40, 12568, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XTrapezoid,bottom,4,2,64005)
CheckOffset(struct _XTrapezoid,bottom,4,2,64005)
CheckMemberSize(struct _XTrapezoid,left,16,2,64006)
CheckOffset(struct _XTrapezoid,left,8,2,64006)
CheckMemberSize(struct _XTrapezoid,right,16,2,64007)
CheckOffset(struct _XTrapezoid,right,24,2,64007)
#else
Msg("Find size of _XTrapezoid (12568)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,12568,0);
#endif

#if defined __s390x__
CheckTypeSize(XTrapezoid,40, 12569, 12, 1.3, NULL, 12568, NULL)
#elif defined __x86_64__
CheckTypeSize(XTrapezoid,40, 12569, 11, 2.0, NULL, 12568, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XTrapezoid,40, 12569, 10, 1.3, NULL, 12568, NULL)
#elif defined __powerpc64__
CheckTypeSize(XTrapezoid,40, 12569, 9, 2.0, NULL, 12568, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XTrapezoid,40, 12569, 6, 1.2, NULL, 12568, NULL)
#elif defined __ia64__
CheckTypeSize(XTrapezoid,40, 12569, 3, 1.3, NULL, 12568, NULL)
#elif defined __i386__
CheckTypeSize(XTrapezoid,40, 12569, 2, 1.2, NULL, 12568, NULL)
#else
Msg("Find size of XTrapezoid (12569)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,12568,NULL);\n",architecture,12569,0);
#endif

#if 1
CheckTypeSize(XRenderColor,8, 16626, 1, 1.2, NULL, 16625, NULL)
#endif

#if defined __s390x__
CheckTypeSize(Glyph,8, 16633, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(Glyph,8, 16633, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Glyph,4, 16633, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(Glyph,8, 16633, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(Glyph,4, 16633, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(Glyph,8, 16633, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(Glyph,4, 16633, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of Glyph (16633)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,16633,0);
#endif

#if defined __s390x__
CheckTypeSize(PictFormat,8, 16636, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(PictFormat,8, 16636, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PictFormat,4, 16636, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(PictFormat,8, 16636, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PictFormat,4, 16636, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(PictFormat,8, 16636, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(PictFormat,4, 16636, 2, 1.2, NULL, 11186, NULL)
#else
Msg("Find size of PictFormat (16636)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,11186,NULL);\n",architecture,16636,0);
#endif

#if 1
CheckTypeSize(XRenderDirectFormat,16, 16638, 1, 1.2, NULL, 16637, NULL)
#endif

#if defined __s390x__
CheckTypeSize(XRenderPictFormat,40, 16640, 12, 1.3, NULL, 16639, NULL)
#elif defined __x86_64__
CheckTypeSize(XRenderPictFormat,40, 16640, 11, 2.0, NULL, 16639, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XRenderPictFormat,32, 16640, 10, 1.3, NULL, 16639, NULL)
#elif defined __powerpc64__
CheckTypeSize(XRenderPictFormat,40, 16640, 9, 2.0, NULL, 16639, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XRenderPictFormat,32, 16640, 6, 1.2, NULL, 16639, NULL)
#elif defined __ia64__
CheckTypeSize(XRenderPictFormat,40, 16640, 3, 1.3, NULL, 16639, NULL)
#elif defined __i386__
CheckTypeSize(XRenderPictFormat,32, 16640, 2, 1.2, NULL, 16639, NULL)
#else
Msg("Find size of XRenderPictFormat (16640)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16639,NULL);\n",architecture,16640,0);
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

#if defined __s390x__
CheckTypeSize(XGlyphInfo,12, 16649, 12, 1.3, NULL, 16648, NULL)
#elif defined __x86_64__
CheckTypeSize(XGlyphInfo,12, 16649, 11, 2.0, NULL, 16648, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XGlyphInfo,12, 16649, 10, 1.3, NULL, 16648, NULL)
#elif defined __powerpc64__
CheckTypeSize(XGlyphInfo,12, 16649, 9, 2.0, NULL, 16648, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XGlyphInfo,12, 16649, 6, 1.2, NULL, 16648, NULL)
#elif defined __ia64__
CheckTypeSize(XGlyphInfo,12, 16649, 3, 1.3, NULL, 16648, NULL)
#elif defined __i386__
CheckTypeSize(XGlyphInfo,12, 16649, 2, 1.2, NULL, 16648, NULL)
#else
Msg("Find size of XGlyphInfo (16649)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16648,NULL);\n",architecture,16649,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XFilters,32, 16652, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XFilters,filter,8,12,53878)
CheckOffset(struct _XFilters,filter,8,12,53878)
CheckMemberSize(struct _XFilters,nalias,4,12,53879)
CheckOffset(struct _XFilters,nalias,16,12,53879)
CheckMemberSize(struct _XFilters,alias,8,12,53880)
CheckOffset(struct _XFilters,alias,24,12,53880)
#elif defined __x86_64__
CheckTypeSize(struct _XFilters,32, 16652, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XFilters,filter,8,11,53878)
CheckOffset(struct _XFilters,filter,8,11,53878)
CheckMemberSize(struct _XFilters,nalias,4,11,53879)
CheckOffset(struct _XFilters,nalias,16,11,53879)
CheckMemberSize(struct _XFilters,alias,8,11,53880)
CheckOffset(struct _XFilters,alias,24,11,53880)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XFilters,16, 16652, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XFilters,filter,4,10,53878)
CheckOffset(struct _XFilters,filter,4,10,53878)
CheckMemberSize(struct _XFilters,nalias,4,10,53879)
CheckOffset(struct _XFilters,nalias,8,10,53879)
CheckMemberSize(struct _XFilters,alias,4,10,53880)
CheckOffset(struct _XFilters,alias,12,10,53880)
#elif defined __powerpc64__
CheckTypeSize(struct _XFilters,32, 16652, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XFilters,filter,8,9,53878)
CheckOffset(struct _XFilters,filter,8,9,53878)
CheckMemberSize(struct _XFilters,nalias,4,9,53879)
CheckOffset(struct _XFilters,nalias,16,9,53879)
CheckMemberSize(struct _XFilters,alias,8,9,53880)
CheckOffset(struct _XFilters,alias,24,9,53880)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XFilters,16, 16652, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XFilters,filter,4,6,53878)
CheckOffset(struct _XFilters,filter,4,6,53878)
CheckMemberSize(struct _XFilters,nalias,4,6,53879)
CheckOffset(struct _XFilters,nalias,8,6,53879)
CheckMemberSize(struct _XFilters,alias,4,6,53880)
CheckOffset(struct _XFilters,alias,12,6,53880)
#elif defined __ia64__
CheckTypeSize(struct _XFilters,32, 16652, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XFilters,filter,8,3,53878)
CheckOffset(struct _XFilters,filter,8,3,53878)
CheckMemberSize(struct _XFilters,nalias,4,3,53879)
CheckOffset(struct _XFilters,nalias,16,3,53879)
CheckMemberSize(struct _XFilters,alias,8,3,53880)
CheckOffset(struct _XFilters,alias,24,3,53880)
#elif defined __i386__
CheckTypeSize(struct _XFilters,16, 16652, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XFilters,filter,4,2,53878)
CheckOffset(struct _XFilters,filter,4,2,53878)
CheckMemberSize(struct _XFilters,nalias,4,2,53879)
CheckOffset(struct _XFilters,nalias,8,2,53879)
CheckMemberSize(struct _XFilters,alias,4,2,53880)
CheckOffset(struct _XFilters,alias,12,2,53880)
#else
Msg("Find size of _XFilters (16652)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,16652,0);
#endif

#if defined __s390x__
CheckTypeSize(XFilters,32, 16653, 12, 1.3, NULL, 16652, NULL)
#elif defined __x86_64__
CheckTypeSize(XFilters,32, 16653, 11, 2.0, NULL, 16652, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XFilters,16, 16653, 10, 1.3, NULL, 16652, NULL)
#elif defined __powerpc64__
CheckTypeSize(XFilters,32, 16653, 9, 2.0, NULL, 16652, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XFilters,16, 16653, 6, 1.2, NULL, 16652, NULL)
#elif defined __ia64__
CheckTypeSize(XFilters,32, 16653, 3, 1.3, NULL, 16652, NULL)
#elif defined __i386__
CheckTypeSize(XFilters,16, 16653, 2, 1.2, NULL, 16652, NULL)
#else
Msg("Find size of XFilters (16653)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16652,NULL);\n",architecture,16653,0);
#endif

#if 1
CheckTypeSize(struct _XTransform,36, 16656, 1, 1.2, NULL, 0, NULL)
Msg("Missing member data for _XTransform on All\n");
CheckOffset(struct _XTransform,matrix,0,1,53881)
#endif

#if 1
CheckTypeSize(XTransform,36, 16658, 1, 1.2, NULL, 16656, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct _XAnimCursor,16, 16660, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XAnimCursor,delay,8,12,53883)
CheckOffset(struct _XAnimCursor,delay,8,12,53883)
#elif defined __x86_64__
CheckTypeSize(struct _XAnimCursor,16, 16660, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XAnimCursor,delay,8,11,53883)
CheckOffset(struct _XAnimCursor,delay,8,11,53883)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XAnimCursor,8, 16660, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XAnimCursor,delay,4,10,53883)
CheckOffset(struct _XAnimCursor,delay,4,10,53883)
#elif defined __powerpc64__
CheckTypeSize(struct _XAnimCursor,16, 16660, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XAnimCursor,delay,8,9,53883)
CheckOffset(struct _XAnimCursor,delay,8,9,53883)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XAnimCursor,8, 16660, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XAnimCursor,delay,4,6,53883)
CheckOffset(struct _XAnimCursor,delay,4,6,53883)
#elif defined __ia64__
CheckTypeSize(struct _XAnimCursor,16, 16660, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XAnimCursor,delay,8,3,53883)
CheckOffset(struct _XAnimCursor,delay,8,3,53883)
#elif defined __i386__
CheckTypeSize(struct _XAnimCursor,8, 16660, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XAnimCursor,delay,4,2,53883)
CheckOffset(struct _XAnimCursor,delay,4,2,53883)
#else
Msg("Find size of _XAnimCursor (16660)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,16660,0);
#endif

#if defined __s390x__
CheckTypeSize(XAnimCursor,16, 16661, 12, 1.3, NULL, 16660, NULL)
#elif defined __x86_64__
CheckTypeSize(XAnimCursor,16, 16661, 11, 2.0, NULL, 16660, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XAnimCursor,8, 16661, 10, 1.3, NULL, 16660, NULL)
#elif defined __powerpc64__
CheckTypeSize(XAnimCursor,16, 16661, 9, 2.0, NULL, 16660, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XAnimCursor,8, 16661, 6, 1.2, NULL, 16660, NULL)
#elif defined __ia64__
CheckTypeSize(XAnimCursor,16, 16661, 3, 1.3, NULL, 16660, NULL)
#elif defined __i386__
CheckTypeSize(XAnimCursor,8, 16661, 2, 1.2, NULL, 16660, NULL)
#else
Msg("Find size of XAnimCursor (16661)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16660,NULL);\n",architecture,16661,0);
#endif

#if 1
CheckTypeSize(struct _XRadialGradient,24, 16663, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XRadialGradient,outer,12,1,53888)
CheckOffset(struct _XRadialGradient,outer,12,1,53888)
#endif

#if 1
CheckTypeSize(XRadialGradient,24, 16666, 1, 1.2, NULL, 16663, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct _XGlyphElt32,32, 16671, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt32,chars,8,12,53890)
CheckOffset(struct _XGlyphElt32,chars,8,12,53890)
CheckMemberSize(struct _XGlyphElt32,nchars,4,12,53891)
CheckOffset(struct _XGlyphElt32,nchars,16,12,53891)
CheckMemberSize(struct _XGlyphElt32,xOff,4,12,53892)
CheckOffset(struct _XGlyphElt32,xOff,20,12,53892)
CheckMemberSize(struct _XGlyphElt32,yOff,4,12,53893)
CheckOffset(struct _XGlyphElt32,yOff,24,12,53893)
#elif defined __x86_64__
CheckTypeSize(struct _XGlyphElt32,32, 16671, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt32,chars,8,11,53890)
CheckOffset(struct _XGlyphElt32,chars,8,11,53890)
CheckMemberSize(struct _XGlyphElt32,nchars,4,11,53891)
CheckOffset(struct _XGlyphElt32,nchars,16,11,53891)
CheckMemberSize(struct _XGlyphElt32,xOff,4,11,53892)
CheckOffset(struct _XGlyphElt32,xOff,20,11,53892)
CheckMemberSize(struct _XGlyphElt32,yOff,4,11,53893)
CheckOffset(struct _XGlyphElt32,yOff,24,11,53893)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XGlyphElt32,20, 16671, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt32,chars,4,10,53890)
CheckOffset(struct _XGlyphElt32,chars,4,10,53890)
CheckMemberSize(struct _XGlyphElt32,nchars,4,10,53891)
CheckOffset(struct _XGlyphElt32,nchars,8,10,53891)
CheckMemberSize(struct _XGlyphElt32,xOff,4,10,53892)
CheckOffset(struct _XGlyphElt32,xOff,12,10,53892)
CheckMemberSize(struct _XGlyphElt32,yOff,4,10,53893)
CheckOffset(struct _XGlyphElt32,yOff,16,10,53893)
#elif defined __powerpc64__
CheckTypeSize(struct _XGlyphElt32,32, 16671, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt32,chars,8,9,53890)
CheckOffset(struct _XGlyphElt32,chars,8,9,53890)
CheckMemberSize(struct _XGlyphElt32,nchars,4,9,53891)
CheckOffset(struct _XGlyphElt32,nchars,16,9,53891)
CheckMemberSize(struct _XGlyphElt32,xOff,4,9,53892)
CheckOffset(struct _XGlyphElt32,xOff,20,9,53892)
CheckMemberSize(struct _XGlyphElt32,yOff,4,9,53893)
CheckOffset(struct _XGlyphElt32,yOff,24,9,53893)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XGlyphElt32,20, 16671, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt32,chars,4,6,53890)
CheckOffset(struct _XGlyphElt32,chars,4,6,53890)
CheckMemberSize(struct _XGlyphElt32,nchars,4,6,53891)
CheckOffset(struct _XGlyphElt32,nchars,8,6,53891)
CheckMemberSize(struct _XGlyphElt32,xOff,4,6,53892)
CheckOffset(struct _XGlyphElt32,xOff,12,6,53892)
CheckMemberSize(struct _XGlyphElt32,yOff,4,6,53893)
CheckOffset(struct _XGlyphElt32,yOff,16,6,53893)
#elif defined __ia64__
CheckTypeSize(struct _XGlyphElt32,32, 16671, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt32,chars,8,3,53890)
CheckOffset(struct _XGlyphElt32,chars,8,3,53890)
CheckMemberSize(struct _XGlyphElt32,nchars,4,3,53891)
CheckOffset(struct _XGlyphElt32,nchars,16,3,53891)
CheckMemberSize(struct _XGlyphElt32,xOff,4,3,53892)
CheckOffset(struct _XGlyphElt32,xOff,20,3,53892)
CheckMemberSize(struct _XGlyphElt32,yOff,4,3,53893)
CheckOffset(struct _XGlyphElt32,yOff,24,3,53893)
#elif defined __i386__
CheckTypeSize(struct _XGlyphElt32,20, 16671, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt32,chars,4,2,53890)
CheckOffset(struct _XGlyphElt32,chars,4,2,53890)
CheckMemberSize(struct _XGlyphElt32,nchars,4,2,53891)
CheckOffset(struct _XGlyphElt32,nchars,8,2,53891)
CheckMemberSize(struct _XGlyphElt32,xOff,4,2,53892)
CheckOffset(struct _XGlyphElt32,xOff,12,2,53892)
CheckMemberSize(struct _XGlyphElt32,yOff,4,2,53893)
CheckOffset(struct _XGlyphElt32,yOff,16,2,53893)
#else
Msg("Find size of _XGlyphElt32 (16671)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,16671,0);
#endif

#if defined __s390x__
CheckTypeSize(XGlyphElt32,32, 16672, 12, 1.3, NULL, 16671, NULL)
#elif defined __x86_64__
CheckTypeSize(XGlyphElt32,32, 16672, 11, 2.0, NULL, 16671, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XGlyphElt32,20, 16672, 10, 1.3, NULL, 16671, NULL)
#elif defined __powerpc64__
CheckTypeSize(XGlyphElt32,32, 16672, 9, 2.0, NULL, 16671, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XGlyphElt32,20, 16672, 6, 1.2, NULL, 16671, NULL)
#elif defined __ia64__
CheckTypeSize(XGlyphElt32,32, 16672, 3, 1.3, NULL, 16671, NULL)
#elif defined __i386__
CheckTypeSize(XGlyphElt32,20, 16672, 2, 1.2, NULL, 16671, NULL)
#else
Msg("Find size of XGlyphElt32 (16672)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16671,NULL);\n",architecture,16672,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XGlyphElt8,32, 16675, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt8,chars,8,12,53895)
CheckOffset(struct _XGlyphElt8,chars,8,12,53895)
CheckMemberSize(struct _XGlyphElt8,nchars,4,12,53896)
CheckOffset(struct _XGlyphElt8,nchars,16,12,53896)
CheckMemberSize(struct _XGlyphElt8,xOff,4,12,53897)
CheckOffset(struct _XGlyphElt8,xOff,20,12,53897)
CheckMemberSize(struct _XGlyphElt8,yOff,4,12,53898)
CheckOffset(struct _XGlyphElt8,yOff,24,12,53898)
#elif defined __x86_64__
CheckTypeSize(struct _XGlyphElt8,32, 16675, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt8,chars,8,11,53895)
CheckOffset(struct _XGlyphElt8,chars,8,11,53895)
CheckMemberSize(struct _XGlyphElt8,nchars,4,11,53896)
CheckOffset(struct _XGlyphElt8,nchars,16,11,53896)
CheckMemberSize(struct _XGlyphElt8,xOff,4,11,53897)
CheckOffset(struct _XGlyphElt8,xOff,20,11,53897)
CheckMemberSize(struct _XGlyphElt8,yOff,4,11,53898)
CheckOffset(struct _XGlyphElt8,yOff,24,11,53898)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XGlyphElt8,20, 16675, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt8,chars,4,10,53895)
CheckOffset(struct _XGlyphElt8,chars,4,10,53895)
CheckMemberSize(struct _XGlyphElt8,nchars,4,10,53896)
CheckOffset(struct _XGlyphElt8,nchars,8,10,53896)
CheckMemberSize(struct _XGlyphElt8,xOff,4,10,53897)
CheckOffset(struct _XGlyphElt8,xOff,12,10,53897)
CheckMemberSize(struct _XGlyphElt8,yOff,4,10,53898)
CheckOffset(struct _XGlyphElt8,yOff,16,10,53898)
#elif defined __powerpc64__
CheckTypeSize(struct _XGlyphElt8,32, 16675, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt8,chars,8,9,53895)
CheckOffset(struct _XGlyphElt8,chars,8,9,53895)
CheckMemberSize(struct _XGlyphElt8,nchars,4,9,53896)
CheckOffset(struct _XGlyphElt8,nchars,16,9,53896)
CheckMemberSize(struct _XGlyphElt8,xOff,4,9,53897)
CheckOffset(struct _XGlyphElt8,xOff,20,9,53897)
CheckMemberSize(struct _XGlyphElt8,yOff,4,9,53898)
CheckOffset(struct _XGlyphElt8,yOff,24,9,53898)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XGlyphElt8,20, 16675, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt8,chars,4,6,53895)
CheckOffset(struct _XGlyphElt8,chars,4,6,53895)
CheckMemberSize(struct _XGlyphElt8,nchars,4,6,53896)
CheckOffset(struct _XGlyphElt8,nchars,8,6,53896)
CheckMemberSize(struct _XGlyphElt8,xOff,4,6,53897)
CheckOffset(struct _XGlyphElt8,xOff,12,6,53897)
CheckMemberSize(struct _XGlyphElt8,yOff,4,6,53898)
CheckOffset(struct _XGlyphElt8,yOff,16,6,53898)
#elif defined __ia64__
CheckTypeSize(struct _XGlyphElt8,32, 16675, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt8,chars,8,3,53895)
CheckOffset(struct _XGlyphElt8,chars,8,3,53895)
CheckMemberSize(struct _XGlyphElt8,nchars,4,3,53896)
CheckOffset(struct _XGlyphElt8,nchars,16,3,53896)
CheckMemberSize(struct _XGlyphElt8,xOff,4,3,53897)
CheckOffset(struct _XGlyphElt8,xOff,20,3,53897)
CheckMemberSize(struct _XGlyphElt8,yOff,4,3,53898)
CheckOffset(struct _XGlyphElt8,yOff,24,3,53898)
#elif defined __i386__
CheckTypeSize(struct _XGlyphElt8,20, 16675, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt8,chars,4,2,53895)
CheckOffset(struct _XGlyphElt8,chars,4,2,53895)
CheckMemberSize(struct _XGlyphElt8,nchars,4,2,53896)
CheckOffset(struct _XGlyphElt8,nchars,8,2,53896)
CheckMemberSize(struct _XGlyphElt8,xOff,4,2,53897)
CheckOffset(struct _XGlyphElt8,xOff,12,2,53897)
CheckMemberSize(struct _XGlyphElt8,yOff,4,2,53898)
CheckOffset(struct _XGlyphElt8,yOff,16,2,53898)
#else
Msg("Find size of _XGlyphElt8 (16675)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,16675,0);
#endif

#if defined __s390x__
CheckTypeSize(XGlyphElt8,32, 16676, 12, 1.3, NULL, 16675, NULL)
#elif defined __x86_64__
CheckTypeSize(XGlyphElt8,32, 16676, 11, 2.0, NULL, 16675, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XGlyphElt8,20, 16676, 10, 1.3, NULL, 16675, NULL)
#elif defined __powerpc64__
CheckTypeSize(XGlyphElt8,32, 16676, 9, 2.0, NULL, 16675, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XGlyphElt8,20, 16676, 6, 1.2, NULL, 16675, NULL)
#elif defined __ia64__
CheckTypeSize(XGlyphElt8,32, 16676, 3, 1.3, NULL, 16675, NULL)
#elif defined __i386__
CheckTypeSize(XGlyphElt8,20, 16676, 2, 1.2, NULL, 16675, NULL)
#else
Msg("Find size of XGlyphElt8 (16676)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16675,NULL);\n",architecture,16676,0);
#endif

#if 1
CheckTypeSize(struct _XConicalGradient,12, 16679, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XConicalGradient,angle,4,1,53900)
CheckOffset(struct _XConicalGradient,angle,8,1,53900)
#endif

#if 1
CheckTypeSize(XConicalGradient,12, 16680, 1, 1.2, NULL, 16679, NULL)
#endif

#if 1
CheckTypeSize(struct _XLinearGradient,16, 16685, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XLinearGradient,p2,8,1,53902)
CheckOffset(struct _XLinearGradient,p2,8,1,53902)
#endif

#if 1
CheckTypeSize(XLinearGradient,16, 16686, 1, 1.2, NULL, 16685, NULL)
#endif

#if 1
CheckTypeSize(struct _XPointDouble,16, 16689, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XPointDouble,y,8,1,53904)
CheckOffset(struct _XPointDouble,y,8,1,53904)
#endif

#if 1
CheckTypeSize(XPointDouble,16, 16691, 1, 1.2, NULL, 16689, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct _XRenderPictureAttributes,72, 16697, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_map,8,12,53906)
CheckOffset(struct _XRenderPictureAttributes,alpha_map,8,12,53906)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_x_origin,4,12,53907)
CheckOffset(struct _XRenderPictureAttributes,alpha_x_origin,16,12,53907)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_y_origin,4,12,53908)
CheckOffset(struct _XRenderPictureAttributes,alpha_y_origin,20,12,53908)
CheckMemberSize(struct _XRenderPictureAttributes,clip_x_origin,4,12,53909)
CheckOffset(struct _XRenderPictureAttributes,clip_x_origin,24,12,53909)
CheckMemberSize(struct _XRenderPictureAttributes,clip_y_origin,4,12,53910)
CheckOffset(struct _XRenderPictureAttributes,clip_y_origin,28,12,53910)
CheckMemberSize(struct _XRenderPictureAttributes,clip_mask,8,12,53911)
CheckOffset(struct _XRenderPictureAttributes,clip_mask,32,12,53911)
CheckMemberSize(struct _XRenderPictureAttributes,graphics_exposures,4,12,53912)
CheckOffset(struct _XRenderPictureAttributes,graphics_exposures,40,12,53912)
CheckMemberSize(struct _XRenderPictureAttributes,subwindow_mode,4,12,53913)
CheckOffset(struct _XRenderPictureAttributes,subwindow_mode,44,12,53913)
CheckMemberSize(struct _XRenderPictureAttributes,poly_edge,4,12,53914)
CheckOffset(struct _XRenderPictureAttributes,poly_edge,48,12,53914)
CheckMemberSize(struct _XRenderPictureAttributes,poly_mode,4,12,53915)
CheckOffset(struct _XRenderPictureAttributes,poly_mode,52,12,53915)
CheckMemberSize(struct _XRenderPictureAttributes,dither,8,12,53916)
CheckOffset(struct _XRenderPictureAttributes,dither,56,12,53916)
CheckMemberSize(struct _XRenderPictureAttributes,component_alpha,4,12,53917)
CheckOffset(struct _XRenderPictureAttributes,component_alpha,64,12,53917)
#elif defined __x86_64__
CheckTypeSize(struct _XRenderPictureAttributes,72, 16697, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_map,8,11,53906)
CheckOffset(struct _XRenderPictureAttributes,alpha_map,8,11,53906)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_x_origin,4,11,53907)
CheckOffset(struct _XRenderPictureAttributes,alpha_x_origin,16,11,53907)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_y_origin,4,11,53908)
CheckOffset(struct _XRenderPictureAttributes,alpha_y_origin,20,11,53908)
CheckMemberSize(struct _XRenderPictureAttributes,clip_x_origin,4,11,53909)
CheckOffset(struct _XRenderPictureAttributes,clip_x_origin,24,11,53909)
CheckMemberSize(struct _XRenderPictureAttributes,clip_y_origin,4,11,53910)
CheckOffset(struct _XRenderPictureAttributes,clip_y_origin,28,11,53910)
CheckMemberSize(struct _XRenderPictureAttributes,clip_mask,8,11,53911)
CheckOffset(struct _XRenderPictureAttributes,clip_mask,32,11,53911)
CheckMemberSize(struct _XRenderPictureAttributes,graphics_exposures,4,11,53912)
CheckOffset(struct _XRenderPictureAttributes,graphics_exposures,40,11,53912)
CheckMemberSize(struct _XRenderPictureAttributes,subwindow_mode,4,11,53913)
CheckOffset(struct _XRenderPictureAttributes,subwindow_mode,44,11,53913)
CheckMemberSize(struct _XRenderPictureAttributes,poly_edge,4,11,53914)
CheckOffset(struct _XRenderPictureAttributes,poly_edge,48,11,53914)
CheckMemberSize(struct _XRenderPictureAttributes,poly_mode,4,11,53915)
CheckOffset(struct _XRenderPictureAttributes,poly_mode,52,11,53915)
CheckMemberSize(struct _XRenderPictureAttributes,dither,8,11,53916)
CheckOffset(struct _XRenderPictureAttributes,dither,56,11,53916)
CheckMemberSize(struct _XRenderPictureAttributes,component_alpha,4,11,53917)
CheckOffset(struct _XRenderPictureAttributes,component_alpha,64,11,53917)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XRenderPictureAttributes,52, 16697, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_map,4,10,53906)
CheckOffset(struct _XRenderPictureAttributes,alpha_map,4,10,53906)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_x_origin,4,10,53907)
CheckOffset(struct _XRenderPictureAttributes,alpha_x_origin,8,10,53907)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_y_origin,4,10,53908)
CheckOffset(struct _XRenderPictureAttributes,alpha_y_origin,12,10,53908)
CheckMemberSize(struct _XRenderPictureAttributes,clip_x_origin,4,10,53909)
CheckOffset(struct _XRenderPictureAttributes,clip_x_origin,16,10,53909)
CheckMemberSize(struct _XRenderPictureAttributes,clip_y_origin,4,10,53910)
CheckOffset(struct _XRenderPictureAttributes,clip_y_origin,20,10,53910)
CheckMemberSize(struct _XRenderPictureAttributes,clip_mask,4,10,53911)
CheckOffset(struct _XRenderPictureAttributes,clip_mask,24,10,53911)
CheckMemberSize(struct _XRenderPictureAttributes,graphics_exposures,4,10,53912)
CheckOffset(struct _XRenderPictureAttributes,graphics_exposures,28,10,53912)
CheckMemberSize(struct _XRenderPictureAttributes,subwindow_mode,4,10,53913)
CheckOffset(struct _XRenderPictureAttributes,subwindow_mode,32,10,53913)
CheckMemberSize(struct _XRenderPictureAttributes,poly_edge,4,10,53914)
CheckOffset(struct _XRenderPictureAttributes,poly_edge,36,10,53914)
CheckMemberSize(struct _XRenderPictureAttributes,poly_mode,4,10,53915)
CheckOffset(struct _XRenderPictureAttributes,poly_mode,40,10,53915)
CheckMemberSize(struct _XRenderPictureAttributes,dither,4,10,53916)
CheckOffset(struct _XRenderPictureAttributes,dither,44,10,53916)
CheckMemberSize(struct _XRenderPictureAttributes,component_alpha,4,10,53917)
CheckOffset(struct _XRenderPictureAttributes,component_alpha,48,10,53917)
#elif defined __powerpc64__
CheckTypeSize(struct _XRenderPictureAttributes,72, 16697, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_map,8,9,53906)
CheckOffset(struct _XRenderPictureAttributes,alpha_map,8,9,53906)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_x_origin,4,9,53907)
CheckOffset(struct _XRenderPictureAttributes,alpha_x_origin,16,9,53907)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_y_origin,4,9,53908)
CheckOffset(struct _XRenderPictureAttributes,alpha_y_origin,20,9,53908)
CheckMemberSize(struct _XRenderPictureAttributes,clip_x_origin,4,9,53909)
CheckOffset(struct _XRenderPictureAttributes,clip_x_origin,24,9,53909)
CheckMemberSize(struct _XRenderPictureAttributes,clip_y_origin,4,9,53910)
CheckOffset(struct _XRenderPictureAttributes,clip_y_origin,28,9,53910)
CheckMemberSize(struct _XRenderPictureAttributes,clip_mask,8,9,53911)
CheckOffset(struct _XRenderPictureAttributes,clip_mask,32,9,53911)
CheckMemberSize(struct _XRenderPictureAttributes,graphics_exposures,4,9,53912)
CheckOffset(struct _XRenderPictureAttributes,graphics_exposures,40,9,53912)
CheckMemberSize(struct _XRenderPictureAttributes,subwindow_mode,4,9,53913)
CheckOffset(struct _XRenderPictureAttributes,subwindow_mode,44,9,53913)
CheckMemberSize(struct _XRenderPictureAttributes,poly_edge,4,9,53914)
CheckOffset(struct _XRenderPictureAttributes,poly_edge,48,9,53914)
CheckMemberSize(struct _XRenderPictureAttributes,poly_mode,4,9,53915)
CheckOffset(struct _XRenderPictureAttributes,poly_mode,52,9,53915)
CheckMemberSize(struct _XRenderPictureAttributes,dither,8,9,53916)
CheckOffset(struct _XRenderPictureAttributes,dither,56,9,53916)
CheckMemberSize(struct _XRenderPictureAttributes,component_alpha,4,9,53917)
CheckOffset(struct _XRenderPictureAttributes,component_alpha,64,9,53917)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XRenderPictureAttributes,52, 16697, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_map,4,6,53906)
CheckOffset(struct _XRenderPictureAttributes,alpha_map,4,6,53906)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_x_origin,4,6,53907)
CheckOffset(struct _XRenderPictureAttributes,alpha_x_origin,8,6,53907)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_y_origin,4,6,53908)
CheckOffset(struct _XRenderPictureAttributes,alpha_y_origin,12,6,53908)
CheckMemberSize(struct _XRenderPictureAttributes,clip_x_origin,4,6,53909)
CheckOffset(struct _XRenderPictureAttributes,clip_x_origin,16,6,53909)
CheckMemberSize(struct _XRenderPictureAttributes,clip_y_origin,4,6,53910)
CheckOffset(struct _XRenderPictureAttributes,clip_y_origin,20,6,53910)
CheckMemberSize(struct _XRenderPictureAttributes,clip_mask,4,6,53911)
CheckOffset(struct _XRenderPictureAttributes,clip_mask,24,6,53911)
CheckMemberSize(struct _XRenderPictureAttributes,graphics_exposures,4,6,53912)
CheckOffset(struct _XRenderPictureAttributes,graphics_exposures,28,6,53912)
CheckMemberSize(struct _XRenderPictureAttributes,subwindow_mode,4,6,53913)
CheckOffset(struct _XRenderPictureAttributes,subwindow_mode,32,6,53913)
CheckMemberSize(struct _XRenderPictureAttributes,poly_edge,4,6,53914)
CheckOffset(struct _XRenderPictureAttributes,poly_edge,36,6,53914)
CheckMemberSize(struct _XRenderPictureAttributes,poly_mode,4,6,53915)
CheckOffset(struct _XRenderPictureAttributes,poly_mode,40,6,53915)
CheckMemberSize(struct _XRenderPictureAttributes,dither,4,6,53916)
CheckOffset(struct _XRenderPictureAttributes,dither,44,6,53916)
CheckMemberSize(struct _XRenderPictureAttributes,component_alpha,4,6,53917)
CheckOffset(struct _XRenderPictureAttributes,component_alpha,48,6,53917)
#elif defined __ia64__
CheckTypeSize(struct _XRenderPictureAttributes,72, 16697, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_map,8,3,53906)
CheckOffset(struct _XRenderPictureAttributes,alpha_map,8,3,53906)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_x_origin,4,3,53907)
CheckOffset(struct _XRenderPictureAttributes,alpha_x_origin,16,3,53907)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_y_origin,4,3,53908)
CheckOffset(struct _XRenderPictureAttributes,alpha_y_origin,20,3,53908)
CheckMemberSize(struct _XRenderPictureAttributes,clip_x_origin,4,3,53909)
CheckOffset(struct _XRenderPictureAttributes,clip_x_origin,24,3,53909)
CheckMemberSize(struct _XRenderPictureAttributes,clip_y_origin,4,3,53910)
CheckOffset(struct _XRenderPictureAttributes,clip_y_origin,28,3,53910)
CheckMemberSize(struct _XRenderPictureAttributes,clip_mask,8,3,53911)
CheckOffset(struct _XRenderPictureAttributes,clip_mask,32,3,53911)
CheckMemberSize(struct _XRenderPictureAttributes,graphics_exposures,4,3,53912)
CheckOffset(struct _XRenderPictureAttributes,graphics_exposures,40,3,53912)
CheckMemberSize(struct _XRenderPictureAttributes,subwindow_mode,4,3,53913)
CheckOffset(struct _XRenderPictureAttributes,subwindow_mode,44,3,53913)
CheckMemberSize(struct _XRenderPictureAttributes,poly_edge,4,3,53914)
CheckOffset(struct _XRenderPictureAttributes,poly_edge,48,3,53914)
CheckMemberSize(struct _XRenderPictureAttributes,poly_mode,4,3,53915)
CheckOffset(struct _XRenderPictureAttributes,poly_mode,52,3,53915)
CheckMemberSize(struct _XRenderPictureAttributes,dither,8,3,53916)
CheckOffset(struct _XRenderPictureAttributes,dither,56,3,53916)
CheckMemberSize(struct _XRenderPictureAttributes,component_alpha,4,3,53917)
CheckOffset(struct _XRenderPictureAttributes,component_alpha,64,3,53917)
#elif defined __i386__
CheckTypeSize(struct _XRenderPictureAttributes,52, 16697, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_map,4,2,53906)
CheckOffset(struct _XRenderPictureAttributes,alpha_map,4,2,53906)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_x_origin,4,2,53907)
CheckOffset(struct _XRenderPictureAttributes,alpha_x_origin,8,2,53907)
CheckMemberSize(struct _XRenderPictureAttributes,alpha_y_origin,4,2,53908)
CheckOffset(struct _XRenderPictureAttributes,alpha_y_origin,12,2,53908)
CheckMemberSize(struct _XRenderPictureAttributes,clip_x_origin,4,2,53909)
CheckOffset(struct _XRenderPictureAttributes,clip_x_origin,16,2,53909)
CheckMemberSize(struct _XRenderPictureAttributes,clip_y_origin,4,2,53910)
CheckOffset(struct _XRenderPictureAttributes,clip_y_origin,20,2,53910)
CheckMemberSize(struct _XRenderPictureAttributes,clip_mask,4,2,53911)
CheckOffset(struct _XRenderPictureAttributes,clip_mask,24,2,53911)
CheckMemberSize(struct _XRenderPictureAttributes,graphics_exposures,4,2,53912)
CheckOffset(struct _XRenderPictureAttributes,graphics_exposures,28,2,53912)
CheckMemberSize(struct _XRenderPictureAttributes,subwindow_mode,4,2,53913)
CheckOffset(struct _XRenderPictureAttributes,subwindow_mode,32,2,53913)
CheckMemberSize(struct _XRenderPictureAttributes,poly_edge,4,2,53914)
CheckOffset(struct _XRenderPictureAttributes,poly_edge,36,2,53914)
CheckMemberSize(struct _XRenderPictureAttributes,poly_mode,4,2,53915)
CheckOffset(struct _XRenderPictureAttributes,poly_mode,40,2,53915)
CheckMemberSize(struct _XRenderPictureAttributes,dither,4,2,53916)
CheckOffset(struct _XRenderPictureAttributes,dither,44,2,53916)
CheckMemberSize(struct _XRenderPictureAttributes,component_alpha,4,2,53917)
CheckOffset(struct _XRenderPictureAttributes,component_alpha,48,2,53917)
#else
Msg("Find size of _XRenderPictureAttributes (16697)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,16697,0);
#endif

#if defined __s390x__
CheckTypeSize(XRenderPictureAttributes,72, 16698, 12, 1.3, NULL, 16697, NULL)
#elif defined __x86_64__
CheckTypeSize(XRenderPictureAttributes,72, 16698, 11, 2.0, NULL, 16697, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XRenderPictureAttributes,52, 16698, 10, 1.3, NULL, 16697, NULL)
#elif defined __powerpc64__
CheckTypeSize(XRenderPictureAttributes,72, 16698, 9, 2.0, NULL, 16697, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XRenderPictureAttributes,52, 16698, 6, 1.2, NULL, 16697, NULL)
#elif defined __ia64__
CheckTypeSize(XRenderPictureAttributes,72, 16698, 3, 1.3, NULL, 16697, NULL)
#elif defined __i386__
CheckTypeSize(XRenderPictureAttributes,52, 16698, 2, 1.2, NULL, 16697, NULL)
#else
Msg("Find size of XRenderPictureAttributes (16698)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16697,NULL);\n",architecture,16698,0);
#endif

#if 1
CheckTypeSize(struct _XTrap,24, 16701, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XTrap,bottom,12,1,53922)
CheckOffset(struct _XTrap,bottom,12,1,53922)
#endif

#if 1
CheckTypeSize(XTrap,24, 16704, 1, 1.2, NULL, 16701, NULL)
#endif

#if defined __s390x__
CheckTypeSize(struct _XIndexValue,16, 16707, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIndexValue,red,2,12,53924)
CheckOffset(struct _XIndexValue,red,8,12,53924)
CheckMemberSize(struct _XIndexValue,green,2,12,53925)
CheckOffset(struct _XIndexValue,green,10,12,53925)
CheckMemberSize(struct _XIndexValue,blue,2,12,53926)
CheckOffset(struct _XIndexValue,blue,12,12,53926)
CheckMemberSize(struct _XIndexValue,alpha,2,12,53927)
CheckOffset(struct _XIndexValue,alpha,14,12,53927)
#elif defined __x86_64__
CheckTypeSize(struct _XIndexValue,16, 16707, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIndexValue,red,2,11,53924)
CheckOffset(struct _XIndexValue,red,8,11,53924)
CheckMemberSize(struct _XIndexValue,green,2,11,53925)
CheckOffset(struct _XIndexValue,green,10,11,53925)
CheckMemberSize(struct _XIndexValue,blue,2,11,53926)
CheckOffset(struct _XIndexValue,blue,12,11,53926)
CheckMemberSize(struct _XIndexValue,alpha,2,11,53927)
CheckOffset(struct _XIndexValue,alpha,14,11,53927)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XIndexValue,12, 16707, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIndexValue,red,2,10,53924)
CheckOffset(struct _XIndexValue,red,4,10,53924)
CheckMemberSize(struct _XIndexValue,green,2,10,53925)
CheckOffset(struct _XIndexValue,green,6,10,53925)
CheckMemberSize(struct _XIndexValue,blue,2,10,53926)
CheckOffset(struct _XIndexValue,blue,8,10,53926)
CheckMemberSize(struct _XIndexValue,alpha,2,10,53927)
CheckOffset(struct _XIndexValue,alpha,10,10,53927)
#elif defined __powerpc64__
CheckTypeSize(struct _XIndexValue,16, 16707, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XIndexValue,red,2,9,53924)
CheckOffset(struct _XIndexValue,red,8,9,53924)
CheckMemberSize(struct _XIndexValue,green,2,9,53925)
CheckOffset(struct _XIndexValue,green,10,9,53925)
CheckMemberSize(struct _XIndexValue,blue,2,9,53926)
CheckOffset(struct _XIndexValue,blue,12,9,53926)
CheckMemberSize(struct _XIndexValue,alpha,2,9,53927)
CheckOffset(struct _XIndexValue,alpha,14,9,53927)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XIndexValue,12, 16707, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIndexValue,red,2,6,53924)
CheckOffset(struct _XIndexValue,red,4,6,53924)
CheckMemberSize(struct _XIndexValue,green,2,6,53925)
CheckOffset(struct _XIndexValue,green,6,6,53925)
CheckMemberSize(struct _XIndexValue,blue,2,6,53926)
CheckOffset(struct _XIndexValue,blue,8,6,53926)
CheckMemberSize(struct _XIndexValue,alpha,2,6,53927)
CheckOffset(struct _XIndexValue,alpha,10,6,53927)
#elif defined __ia64__
CheckTypeSize(struct _XIndexValue,16, 16707, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XIndexValue,red,2,3,53924)
CheckOffset(struct _XIndexValue,red,8,3,53924)
CheckMemberSize(struct _XIndexValue,green,2,3,53925)
CheckOffset(struct _XIndexValue,green,10,3,53925)
CheckMemberSize(struct _XIndexValue,blue,2,3,53926)
CheckOffset(struct _XIndexValue,blue,12,3,53926)
CheckMemberSize(struct _XIndexValue,alpha,2,3,53927)
CheckOffset(struct _XIndexValue,alpha,14,3,53927)
#elif defined __i386__
CheckTypeSize(struct _XIndexValue,12, 16707, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XIndexValue,red,2,2,53924)
CheckOffset(struct _XIndexValue,red,4,2,53924)
CheckMemberSize(struct _XIndexValue,green,2,2,53925)
CheckOffset(struct _XIndexValue,green,6,2,53925)
CheckMemberSize(struct _XIndexValue,blue,2,2,53926)
CheckOffset(struct _XIndexValue,blue,8,2,53926)
CheckMemberSize(struct _XIndexValue,alpha,2,2,53927)
CheckOffset(struct _XIndexValue,alpha,10,2,53927)
#else
Msg("Find size of _XIndexValue (16707)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,16707,0);
#endif

#if defined __s390x__
CheckTypeSize(XIndexValue,16, 16708, 12, 1.3, NULL, 16707, NULL)
#elif defined __x86_64__
CheckTypeSize(XIndexValue,16, 16708, 11, 2.0, NULL, 16707, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XIndexValue,12, 16708, 10, 1.3, NULL, 16707, NULL)
#elif defined __powerpc64__
CheckTypeSize(XIndexValue,16, 16708, 9, 2.0, NULL, 16707, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XIndexValue,12, 16708, 6, 1.2, NULL, 16707, NULL)
#elif defined __ia64__
CheckTypeSize(XIndexValue,16, 16708, 3, 1.3, NULL, 16707, NULL)
#elif defined __i386__
CheckTypeSize(XIndexValue,12, 16708, 2, 1.2, NULL, 16707, NULL)
#else
Msg("Find size of XIndexValue (16708)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16707,NULL);\n",architecture,16708,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _XGlyphElt16,32, 16710, 12, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt16,chars,8,12,53929)
CheckOffset(struct _XGlyphElt16,chars,8,12,53929)
CheckMemberSize(struct _XGlyphElt16,nchars,4,12,53930)
CheckOffset(struct _XGlyphElt16,nchars,16,12,53930)
CheckMemberSize(struct _XGlyphElt16,xOff,4,12,53931)
CheckOffset(struct _XGlyphElt16,xOff,20,12,53931)
CheckMemberSize(struct _XGlyphElt16,yOff,4,12,53932)
CheckOffset(struct _XGlyphElt16,yOff,24,12,53932)
#elif defined __x86_64__
CheckTypeSize(struct _XGlyphElt16,32, 16710, 11, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt16,chars,8,11,53929)
CheckOffset(struct _XGlyphElt16,chars,8,11,53929)
CheckMemberSize(struct _XGlyphElt16,nchars,4,11,53930)
CheckOffset(struct _XGlyphElt16,nchars,16,11,53930)
CheckMemberSize(struct _XGlyphElt16,xOff,4,11,53931)
CheckOffset(struct _XGlyphElt16,xOff,20,11,53931)
CheckMemberSize(struct _XGlyphElt16,yOff,4,11,53932)
CheckOffset(struct _XGlyphElt16,yOff,24,11,53932)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _XGlyphElt16,20, 16710, 10, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt16,chars,4,10,53929)
CheckOffset(struct _XGlyphElt16,chars,4,10,53929)
CheckMemberSize(struct _XGlyphElt16,nchars,4,10,53930)
CheckOffset(struct _XGlyphElt16,nchars,8,10,53930)
CheckMemberSize(struct _XGlyphElt16,xOff,4,10,53931)
CheckOffset(struct _XGlyphElt16,xOff,12,10,53931)
CheckMemberSize(struct _XGlyphElt16,yOff,4,10,53932)
CheckOffset(struct _XGlyphElt16,yOff,16,10,53932)
#elif defined __powerpc64__
CheckTypeSize(struct _XGlyphElt16,32, 16710, 9, 2.0, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt16,chars,8,9,53929)
CheckOffset(struct _XGlyphElt16,chars,8,9,53929)
CheckMemberSize(struct _XGlyphElt16,nchars,4,9,53930)
CheckOffset(struct _XGlyphElt16,nchars,16,9,53930)
CheckMemberSize(struct _XGlyphElt16,xOff,4,9,53931)
CheckOffset(struct _XGlyphElt16,xOff,20,9,53931)
CheckMemberSize(struct _XGlyphElt16,yOff,4,9,53932)
CheckOffset(struct _XGlyphElt16,yOff,24,9,53932)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _XGlyphElt16,20, 16710, 6, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt16,chars,4,6,53929)
CheckOffset(struct _XGlyphElt16,chars,4,6,53929)
CheckMemberSize(struct _XGlyphElt16,nchars,4,6,53930)
CheckOffset(struct _XGlyphElt16,nchars,8,6,53930)
CheckMemberSize(struct _XGlyphElt16,xOff,4,6,53931)
CheckOffset(struct _XGlyphElt16,xOff,12,6,53931)
CheckMemberSize(struct _XGlyphElt16,yOff,4,6,53932)
CheckOffset(struct _XGlyphElt16,yOff,16,6,53932)
#elif defined __ia64__
CheckTypeSize(struct _XGlyphElt16,32, 16710, 3, 1.3, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt16,chars,8,3,53929)
CheckOffset(struct _XGlyphElt16,chars,8,3,53929)
CheckMemberSize(struct _XGlyphElt16,nchars,4,3,53930)
CheckOffset(struct _XGlyphElt16,nchars,16,3,53930)
CheckMemberSize(struct _XGlyphElt16,xOff,4,3,53931)
CheckOffset(struct _XGlyphElt16,xOff,20,3,53931)
CheckMemberSize(struct _XGlyphElt16,yOff,4,3,53932)
CheckOffset(struct _XGlyphElt16,yOff,24,3,53932)
#elif defined __i386__
CheckTypeSize(struct _XGlyphElt16,20, 16710, 2, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XGlyphElt16,chars,4,2,53929)
CheckOffset(struct _XGlyphElt16,chars,4,2,53929)
CheckMemberSize(struct _XGlyphElt16,nchars,4,2,53930)
CheckOffset(struct _XGlyphElt16,nchars,8,2,53930)
CheckMemberSize(struct _XGlyphElt16,xOff,4,2,53931)
CheckOffset(struct _XGlyphElt16,xOff,12,2,53931)
CheckMemberSize(struct _XGlyphElt16,yOff,4,2,53932)
CheckOffset(struct _XGlyphElt16,yOff,16,2,53932)
#else
Msg("Find size of _XGlyphElt16 (16710)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,0,NULL);\n",architecture,16710,0);
#endif

#if defined __s390x__
CheckTypeSize(XGlyphElt16,32, 16713, 12, 1.3, NULL, 16710, NULL)
#elif defined __x86_64__
CheckTypeSize(XGlyphElt16,32, 16713, 11, 2.0, NULL, 16710, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(XGlyphElt16,20, 16713, 10, 1.3, NULL, 16710, NULL)
#elif defined __powerpc64__
CheckTypeSize(XGlyphElt16,32, 16713, 9, 2.0, NULL, 16710, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(XGlyphElt16,20, 16713, 6, 1.2, NULL, 16710, NULL)
#elif defined __ia64__
CheckTypeSize(XGlyphElt16,32, 16713, 3, 1.3, NULL, 16710, NULL)
#elif defined __i386__
CheckTypeSize(XGlyphElt16,20, 16713, 2, 1.2, NULL, 16710, NULL)
#else
Msg("Find size of XGlyphElt16 (16713)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""1.2""',NULL,16710,NULL);\n",architecture,16713,0);
#endif

#if 1
CheckTypeSize(struct _XTriangle,24, 16716, 1, 1.2, NULL, 0, NULL)
CheckMemberSize(struct _XTriangle,p2,8,1,53934)
CheckOffset(struct _XTriangle,p2,8,1,53934)
#endif

#if 1
CheckTypeSize(XTriangle,24, 16717, 1, 1.2, NULL, 16716, NULL)
#endif

#if defined __s390x__
CheckTypeSize(GlyphSet,8, 16624, 12, 1.3, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(GlyphSet,8, 16624, 11, 2.0, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(GlyphSet,4, 16624, 10, 1.3, NULL, 11186, NULL)
#elif defined __powerpc64__
CheckTypeSize(GlyphSet,8, 16624, 9, 2.0, NULL, 11186, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(GlyphSet,4, 16624, 6, 1.2, NULL, 11186, NULL)
#elif defined __ia64__
CheckTypeSize(GlyphSet,8, 16624, 3, 1.3, NULL, 11186, NULL)
#elif defined __i386__
CheckTypeSize(GlyphSet,4, 16624, 2, 1.2, NULL, 11186, NULL)
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
CheckMemberSize(struct _XLineFixed,p2,8,1,64003)
CheckOffset(struct _XLineFixed,p2,8,1,64003)
#endif

#if 1
CheckTypeSize(XLineFixed,16, 17025, 1, 1.2, NULL, 17024, NULL)
#endif

extern int XRenderQuerySubpixelOrder_db(Display *, int);
CheckInterfacedef(XRenderQuerySubpixelOrder,XRenderQuerySubpixelOrder_db);
extern void XRenderFreeGlyphSet_db(Display *, GlyphSet);
CheckInterfacedef(XRenderFreeGlyphSet,XRenderFreeGlyphSet_db);
extern void XRenderFillRectangles_db(Display *, int, Picture, const XRenderColor *, const XRectangle *, int);
CheckInterfacedef(XRenderFillRectangles,XRenderFillRectangles_db);
extern int XRenderParseColor_db(Display *, char *, XRenderColor *);
CheckInterfacedef(XRenderParseColor,XRenderParseColor_db);
extern void XRenderFreeGlyphs_db(Display *, GlyphSet, const Glyph *, int);
CheckInterfacedef(XRenderFreeGlyphs,XRenderFreeGlyphs_db);
extern GlyphSet XRenderCreateGlyphSet_db(Display *, const XRenderPictFormat *);
CheckInterfacedef(XRenderCreateGlyphSet,XRenderCreateGlyphSet_db);
extern void XRenderCompositeTriStrip_db(Display *, int, Picture, Picture, const XRenderPictFormat *, int, int, const XPointFixed *, int);
CheckInterfacedef(XRenderCompositeTriStrip,XRenderCompositeTriStrip_db);
extern void XRenderAddGlyphs_db(Display *, GlyphSet, const Glyph *, const XGlyphInfo *, int, const char *, int);
CheckInterfacedef(XRenderAddGlyphs,XRenderAddGlyphs_db);
extern XFilters * XRenderQueryFilters_db(Display *, Drawable);
CheckInterfacedef(XRenderQueryFilters,XRenderQueryFilters_db);
extern void XRenderSetPictureClipRegion_db(Display *, Picture, Region);
CheckInterfacedef(XRenderSetPictureClipRegion,XRenderSetPictureClipRegion_db);
extern XRenderPictFormat * XRenderFindStandardFormat_db(Display *, int);
CheckInterfacedef(XRenderFindStandardFormat,XRenderFindStandardFormat_db);
extern void XRenderSetPictureTransform_db(Display *, Picture, XTransform *);
CheckInterfacedef(XRenderSetPictureTransform,XRenderSetPictureTransform_db);
extern Cursor XRenderCreateAnimCursor_db(Display *, int, XAnimCursor *);
CheckInterfacedef(XRenderCreateAnimCursor,XRenderCreateAnimCursor_db);
extern Picture XRenderCreateRadialGradient_db(Display *, const XRadialGradient *, const XFixed *, const XRenderColor *, int);
CheckInterfacedef(XRenderCreateRadialGradient,XRenderCreateRadialGradient_db);
extern void XRenderCompositeText32_db(Display *, int, Picture, Picture, const XRenderPictFormat *, int, int, int, int, const XGlyphElt32 *, int);
CheckInterfacedef(XRenderCompositeText32,XRenderCompositeText32_db);
extern void XRenderComposite_db(Display *, int, Picture, Picture, Picture, int, int, int, int, int, int, unsigned int, unsigned int);
CheckInterfacedef(XRenderComposite,XRenderComposite_db);
extern void XRenderCompositeText8_db(Display *, int, Picture, Picture, const XRenderPictFormat *, int, int, int, int, const XGlyphElt8 *, int);
CheckInterfacedef(XRenderCompositeText8,XRenderCompositeText8_db);
extern Picture XRenderCreateConicalGradient_db(Display *, const XConicalGradient *, const XFixed *, const XRenderColor *, int);
CheckInterfacedef(XRenderCreateConicalGradient,XRenderCreateConicalGradient_db);
extern XRenderPictFormat * XRenderFindVisualFormat_db(Display *, const Visual *);
CheckInterfacedef(XRenderFindVisualFormat,XRenderFindVisualFormat_db);
extern Picture XRenderCreateLinearGradient_db(Display *, const XLinearGradient *, const XFixed *, const XRenderColor *, int);
CheckInterfacedef(XRenderCreateLinearGradient,XRenderCreateLinearGradient_db);
extern void XRenderCompositeDoublePoly_db(Display *, int, Picture, Picture, const XRenderPictFormat *, int, int, int, int, const XPointDouble *, int, int);
CheckInterfacedef(XRenderCompositeDoublePoly,XRenderCompositeDoublePoly_db);
extern Picture XRenderCreateSolidFill_db(Display *, const XRenderColor *);
CheckInterfacedef(XRenderCreateSolidFill,XRenderCreateSolidFill_db);
extern int XRenderQueryExtension_db(Display *, int *, int *);
CheckInterfacedef(XRenderQueryExtension,XRenderQueryExtension_db);
extern void XRenderCompositeTrapezoids_db(Display *, int, Picture, Picture, const XRenderPictFormat *, int, int, const XTrapezoid *, int);
CheckInterfacedef(XRenderCompositeTrapezoids,XRenderCompositeTrapezoids_db);
extern void XRenderChangePicture_db(Display *, Picture, long unsigned int, const XRenderPictureAttributes *);
CheckInterfacedef(XRenderChangePicture,XRenderChangePicture_db);
extern void XRenderCompositeString8_db(Display *, int, Picture, Picture, const XRenderPictFormat *, GlyphSet, int, int, int, int, const char *, int);
CheckInterfacedef(XRenderCompositeString8,XRenderCompositeString8_db);
extern void XRenderAddTraps_db(Display *, Picture, int, int, const XTrap *, int);
CheckInterfacedef(XRenderAddTraps,XRenderAddTraps_db);
extern XRenderPictFormat * XRenderFindFormat_db(Display *, long unsigned int, const XRenderPictFormat *, int);
CheckInterfacedef(XRenderFindFormat,XRenderFindFormat_db);
extern void XRenderCompositeTriFan_db(Display *, int, Picture, Picture, const XRenderPictFormat *, int, int, const XPointFixed *, int);
CheckInterfacedef(XRenderCompositeTriFan,XRenderCompositeTriFan_db);
extern XIndexValue * XRenderQueryPictIndexValues_db(Display *, const XRenderPictFormat *, int *);
CheckInterfacedef(XRenderQueryPictIndexValues,XRenderQueryPictIndexValues_db);
extern int XRenderSetSubpixelOrder_db(Display *, int, int);
CheckInterfacedef(XRenderSetSubpixelOrder,XRenderSetSubpixelOrder_db);
extern int XRenderQueryVersion_db(Display *, int *, int *);
CheckInterfacedef(XRenderQueryVersion,XRenderQueryVersion_db);
extern void XRenderCompositeText16_db(Display *, int, Picture, Picture, const XRenderPictFormat *, int, int, int, int, const XGlyphElt16 *, int);
CheckInterfacedef(XRenderCompositeText16,XRenderCompositeText16_db);
extern void XRenderSetPictureClipRectangles_db(Display *, Picture, int, int, const XRectangle *, int);
CheckInterfacedef(XRenderSetPictureClipRectangles,XRenderSetPictureClipRectangles_db);
extern int XRenderQueryFormats_db(Display *);
CheckInterfacedef(XRenderQueryFormats,XRenderQueryFormats_db);
extern void XRenderFillRectangle_db(Display *, int, Picture, const XRenderColor *, int, int, unsigned int, unsigned int);
CheckInterfacedef(XRenderFillRectangle,XRenderFillRectangle_db);
extern void XRenderFreePicture_db(Display *, Picture);
CheckInterfacedef(XRenderFreePicture,XRenderFreePicture_db);
extern void XRenderCompositeTriangles_db(Display *, int, Picture, Picture, const XRenderPictFormat *, int, int, const XTriangle *, int);
CheckInterfacedef(XRenderCompositeTriangles,XRenderCompositeTriangles_db);
extern void XRenderCompositeString32_db(Display *, int, Picture, Picture, const XRenderPictFormat *, GlyphSet, int, int, int, int, const unsigned int *, int);
CheckInterfacedef(XRenderCompositeString32,XRenderCompositeString32_db);
extern Picture XRenderCreatePicture_db(Display *, Drawable, const XRenderPictFormat *, long unsigned int, const XRenderPictureAttributes *);
CheckInterfacedef(XRenderCreatePicture,XRenderCreatePicture_db);
extern GlyphSet XRenderReferenceGlyphSet_db(Display *, GlyphSet);
CheckInterfacedef(XRenderReferenceGlyphSet,XRenderReferenceGlyphSet_db);
extern void XRenderCompositeString16_db(Display *, int, Picture, Picture, const XRenderPictFormat *, GlyphSet, int, int, int, int, const short unsigned int *, int);
CheckInterfacedef(XRenderCompositeString16,XRenderCompositeString16_db);
extern Cursor XRenderCreateCursor_db(Display *, Picture, unsigned int, unsigned int);
CheckInterfacedef(XRenderCreateCursor,XRenderCreateCursor_db);
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
