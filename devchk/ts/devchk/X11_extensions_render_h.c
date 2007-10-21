/*
 * Test of X11/extensions/render.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#include "X11/extensions/render.h"



#ifdef TET_TEST
void X11_extensions_render_h()
{
#else
int X11_extensions_render_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in X11/extensions/render.h\n");
#endif

printf("Checking data structures in X11/extensions/render.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef BadGlyph
	CompareConstant(BadGlyph,4,9503,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: BadGlyph\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadGlyphSet
	CompareConstant(BadGlyphSet,3,9504,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: BadGlyphSet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadPictFormat
	CompareConstant(BadPictFormat,0,9505,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: BadPictFormat\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadPictOp
	CompareConstant(BadPictOp,2,9506,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: BadPictOp\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef BadPicture
	CompareConstant(BadPicture,1,9507,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: BadPicture\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CPLastBit
	CompareConstant(CPLastBit,12,9508,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: CPLastBit\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpAdd
	CompareConstant(PictOpAdd,12,9509,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpAdd\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpAtop
	CompareConstant(PictOpAtop,9,9510,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpAtop\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpAtopReverse
	CompareConstant(PictOpAtopReverse,10,9511,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpAtopReverse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpClear
	CompareConstant(PictOpClear,0,9512,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpClear\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpConjointAtop
	CompareConstant(PictOpConjointAtop,0x29,9513,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpConjointAtop\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpConjointAtopReverse
	CompareConstant(PictOpConjointAtopReverse,0x2a,9514,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpConjointAtopReverse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpConjointClear
	CompareConstant(PictOpConjointClear,0x20,9515,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpConjointClear\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpConjointDst
	CompareConstant(PictOpConjointDst,0x22,9516,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpConjointDst\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpConjointIn
	CompareConstant(PictOpConjointIn,0x25,9517,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpConjointIn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpConjointInReverse
	CompareConstant(PictOpConjointInReverse,0x26,9518,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpConjointInReverse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpConjointMaximum
	CompareConstant(PictOpConjointMaximum,0x2b,9519,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpConjointMaximum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpConjointMinimum
	CompareConstant(PictOpConjointMinimum,0x20,9520,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpConjointMinimum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpConjointOut
	CompareConstant(PictOpConjointOut,0x27,9521,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpConjointOut\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpConjointOutReverse
	CompareConstant(PictOpConjointOutReverse,0x28,9522,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpConjointOutReverse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpConjointOver
	CompareConstant(PictOpConjointOver,0x23,9523,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpConjointOver\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpConjointOverReverse
	CompareConstant(PictOpConjointOverReverse,0x24,9524,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpConjointOverReverse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpConjointSrc
	CompareConstant(PictOpConjointSrc,0x21,9525,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpConjointSrc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpConjointXor
	CompareConstant(PictOpConjointXor,0x2b,9526,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpConjointXor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpDisjointAtop
	CompareConstant(PictOpDisjointAtop,0x19,9527,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpDisjointAtop\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpDisjointAtopReverse
	CompareConstant(PictOpDisjointAtopReverse,0x1a,9528,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpDisjointAtopReverse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpDisjointClear
	CompareConstant(PictOpDisjointClear,0x10,9529,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpDisjointClear\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpDisjointDst
	CompareConstant(PictOpDisjointDst,0x12,9530,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpDisjointDst\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpDisjointIn
	CompareConstant(PictOpDisjointIn,0x15,9531,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpDisjointIn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpDisjointInReverse
	CompareConstant(PictOpDisjointInReverse,0x16,9532,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpDisjointInReverse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpDisjointMaximum
	CompareConstant(PictOpDisjointMaximum,0x1b,9533,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpDisjointMaximum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpDisjointMinimum
	CompareConstant(PictOpDisjointMinimum,0x10,9534,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpDisjointMinimum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpDisjointOut
	CompareConstant(PictOpDisjointOut,0x17,9535,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpDisjointOut\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpDisjointOutReverse
	CompareConstant(PictOpDisjointOutReverse,0x18,9536,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpDisjointOutReverse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpDisjointOver
	CompareConstant(PictOpDisjointOver,0x13,9537,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpDisjointOver\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpDisjointOverReverse
	CompareConstant(PictOpDisjointOverReverse,0x14,9538,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpDisjointOverReverse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpDisjointSrc
	CompareConstant(PictOpDisjointSrc,0x11,9539,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpDisjointSrc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpDisjointXor
	CompareConstant(PictOpDisjointXor,0x1b,9540,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpDisjointXor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpDst
	CompareConstant(PictOpDst,2,9541,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpDst\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpIn
	CompareConstant(PictOpIn,5,9542,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpIn\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpInReverse
	CompareConstant(PictOpInReverse,6,9543,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpInReverse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpMaximum
	CompareConstant(PictOpMaximum,13,9544,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpMaximum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpMinimum
	CompareConstant(PictOpMinimum,0,9545,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpMinimum\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpOut
	CompareConstant(PictOpOut,7,9546,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpOut\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpOutReverse
	CompareConstant(PictOpOutReverse,8,9547,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpOutReverse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpOver
	CompareConstant(PictOpOver,3,9548,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpOver\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpOverReverse
	CompareConstant(PictOpOverReverse,4,9549,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpOverReverse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpSaturate
	CompareConstant(PictOpSaturate,13,9550,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpSaturate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpSrc
	CompareConstant(PictOpSrc,1,9551,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpSrc\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictOpXor
	CompareConstant(PictOpXor,11,9552,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictOpXor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictTypeDirect
	CompareConstant(PictTypeDirect,1,9553,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictTypeDirect\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PictTypeIndexed
	CompareConstant(PictTypeIndexed,0,9554,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PictTypeIndexed\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PolyEdgeSharp
	CompareConstant(PolyEdgeSharp,0,9555,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PolyEdgeSharp\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PolyEdgeSmooth
	CompareConstant(PolyEdgeSmooth,1,9556,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PolyEdgeSmooth\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PolyModeImprecise
	CompareConstant(PolyModeImprecise,1,9557,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PolyModeImprecise\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef PolyModePrecise
	CompareConstant(PolyModePrecise,0,9558,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: PolyModePrecise\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RENDER_MAJOR
	CompareConstant(RENDER_MAJOR,0,9559,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: RENDER_MAJOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RENDER_MINOR
	CompareConstant(RENDER_MINOR,10,9560,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: RENDER_MINOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RepeatNone
	CompareConstant(RepeatNone,0,9561,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: RepeatNone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RepeatNormal
	CompareConstant(RepeatNormal,1,9562,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: RepeatNormal\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RepeatPad
	CompareConstant(RepeatPad,2,9563,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: RepeatPad\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef RepeatReflect
	CompareConstant(RepeatReflect,3,9564,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: RepeatReflect\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SubPixelHorizontalBGR
	CompareConstant(SubPixelHorizontalBGR,2,9565,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SubPixelHorizontalBGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SubPixelHorizontalRGB
	CompareConstant(SubPixelHorizontalRGB,1,9566,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SubPixelHorizontalRGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SubPixelNone
	CompareConstant(SubPixelNone,5,9567,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SubPixelNone\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SubPixelUnknown
	CompareConstant(SubPixelUnknown,0,9568,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SubPixelUnknown\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SubPixelVerticalBGR
	CompareConstant(SubPixelVerticalBGR,4,9569,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SubPixelVerticalBGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef SubPixelVerticalRGB
	CompareConstant(SubPixelVerticalRGB,3,9570,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: SubPixelVerticalRGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderAddGlyphs
	CompareConstant(X_RenderAddGlyphs,20,9571,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderAddGlyphs\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderAddGlyphsFromPicture
	CompareConstant(X_RenderAddGlyphsFromPicture,21,9572,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderAddGlyphsFromPicture\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderAddTraps
	CompareConstant(X_RenderAddTraps,32,9573,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderAddTraps\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderChangePicture
	CompareConstant(X_RenderChangePicture,5,9574,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderChangePicture\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderColorTrapezoids
	CompareConstant(X_RenderColorTrapezoids,14,9575,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderColorTrapezoids\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderColorTriangles
	CompareConstant(X_RenderColorTriangles,15,9576,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderColorTriangles\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderComposite
	CompareConstant(X_RenderComposite,8,9577,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderComposite\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderCompositeGlyphs16
	CompareConstant(X_RenderCompositeGlyphs16,24,9578,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderCompositeGlyphs16\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderCompositeGlyphs32
	CompareConstant(X_RenderCompositeGlyphs32,25,9579,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderCompositeGlyphs32\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderCompositeGlyphs8
	CompareConstant(X_RenderCompositeGlyphs8,23,9580,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderCompositeGlyphs8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderCreateAnimCursor
	CompareConstant(X_RenderCreateAnimCursor,31,9581,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderCreateAnimCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderCreateConicalGradient
	CompareConstant(X_RenderCreateConicalGradient,36,9582,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderCreateConicalGradient\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderCreateCursor
	CompareConstant(X_RenderCreateCursor,27,9583,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderCreateCursor\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderCreateGlyphSet
	CompareConstant(X_RenderCreateGlyphSet,17,9584,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderCreateGlyphSet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderCreateLinearGradient
	CompareConstant(X_RenderCreateLinearGradient,34,9585,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderCreateLinearGradient\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderCreatePicture
	CompareConstant(X_RenderCreatePicture,4,9586,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderCreatePicture\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderCreateRadialGradient
	CompareConstant(X_RenderCreateRadialGradient,35,9587,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderCreateRadialGradient\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderCreateSolidFill
	CompareConstant(X_RenderCreateSolidFill,33,9588,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderCreateSolidFill\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderFillRectangles
	CompareConstant(X_RenderFillRectangles,26,9589,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderFillRectangles\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderFreeGlyphs
	CompareConstant(X_RenderFreeGlyphs,22,9590,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderFreeGlyphs\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderFreeGlyphSet
	CompareConstant(X_RenderFreeGlyphSet,19,9591,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderFreeGlyphSet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderFreePicture
	CompareConstant(X_RenderFreePicture,7,9592,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderFreePicture\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderQueryDithers
	CompareConstant(X_RenderQueryDithers,3,9593,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderQueryDithers\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderQueryFilters
	CompareConstant(X_RenderQueryFilters,29,9594,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderQueryFilters\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderQueryPictFormats
	CompareConstant(X_RenderQueryPictFormats,1,9595,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderQueryPictFormats\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderQueryPictIndexValues
	CompareConstant(X_RenderQueryPictIndexValues,2,9596,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderQueryPictIndexValues\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderQueryVersion
	CompareConstant(X_RenderQueryVersion,0,9597,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderQueryVersion\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderReferenceGlyphSet
	CompareConstant(X_RenderReferenceGlyphSet,18,9598,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderReferenceGlyphSet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderScale
	CompareConstant(X_RenderScale,9,9599,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderScale\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderSetPictureClipRectangles
	CompareConstant(X_RenderSetPictureClipRectangles,6,9600,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderSetPictureClipRectangles\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderSetPictureFilter
	CompareConstant(X_RenderSetPictureFilter,30,9601,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderSetPictureFilter\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderSetPictureTransform
	CompareConstant(X_RenderSetPictureTransform,28,9602,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderSetPictureTransform\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderTrapezoids
	CompareConstant(X_RenderTrapezoids,10,9603,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderTrapezoids\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderTriangles
	CompareConstant(X_RenderTriangles,11,9604,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderTriangles\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderTriFan
	CompareConstant(X_RenderTriFan,13,9605,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderTriFan\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef X_RenderTriStrip
	CompareConstant(X_RenderTriStrip,12,9606,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: X_RenderTriStrip\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPAlphaMap */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPAlphaXOrigin */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPAlphaYOrigin */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPClipMask */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPClipXOrigin */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPClipYOrigin */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPComponentAlpha */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPDither */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPGraphicsExposure */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPPolyEdge */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPPolyMode */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPRepeat */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for CPSubwindowMode */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FilterAliasNone */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FilterBest */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FilterBilinear */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FilterConvolution */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FilterFast */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FilterGood */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FilterNearest */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for RENDER_NAME */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for RenderNumberErrors */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for RenderNumberRequests */
#endif

#if defined __i386__
CheckTypeSize(Picture,4, 12562, 2, 3.2, NULL, 11186, NULL)
#elif defined __x86_64__
CheckTypeSize(Picture,8, 12562, 11, 3.2, NULL, 11186, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(Picture,4, 12562, 10, 3.2, NULL, 11186, NULL)
#elif defined __s390x__
CheckTypeSize(Picture,8, 12562, 12, 3.2, NULL, 11186, NULL)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.2""',NULL,11186, NULL);\n",architecture,12562,0);
Msg("Find size of Picture (12562)\n");
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/extensions/render.h\n\n",pcnt,cnt);
return cnt;
#endif

}
