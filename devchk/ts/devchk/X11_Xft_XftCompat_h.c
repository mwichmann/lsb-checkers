/*
 * Test of X11/Xft/XftCompat.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include "fontconfig/fontconfig.h"
#include "X11/Xft/XftCompat.h"



#ifdef TET_TEST
void X11_Xft_XftCompat_h()
{
#else
int X11_Xft_XftCompat_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/Xft/XftCompat.h\n");
#endif

printf("Checking data structures in X11/Xft/XftCompat.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for XFT_FAMILY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_STYLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_SLANT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_WEIGHT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_SIZE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_PIXEL_SIZE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_SPACING */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_FOUNDRY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_ANTIALIAS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_FILE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_INDEX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_RASTERIZER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_OUTLINE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_SCALABLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_RGBA */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_SCALE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_MINSPACE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_DPI */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_CHAR_WIDTH */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_CHAR_HEIGHT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XFT_MATRIX */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_WEIGHT_LIGHT
	CompareConstant(XFT_WEIGHT_LIGHT,FC_WEIGHT_LIGHT,20044,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_WEIGHT_LIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_WEIGHT_MEDIUM
	CompareConstant(XFT_WEIGHT_MEDIUM,FC_WEIGHT_MEDIUM,20045,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_WEIGHT_MEDIUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_WEIGHT_DEMIBOLD
	CompareConstant(XFT_WEIGHT_DEMIBOLD,FC_WEIGHT_DEMIBOLD,20046,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_WEIGHT_DEMIBOLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_WEIGHT_BOLD
	CompareConstant(XFT_WEIGHT_BOLD,FC_WEIGHT_BOLD,20047,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_WEIGHT_BOLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_WEIGHT_BLACK
	CompareConstant(XFT_WEIGHT_BLACK,FC_WEIGHT_BLACK,20048,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_WEIGHT_BLACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_SLANT_ROMAN
	CompareConstant(XFT_SLANT_ROMAN,FC_SLANT_ROMAN,20049,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_SLANT_ROMAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_SLANT_ITALIC
	CompareConstant(XFT_SLANT_ITALIC,FC_SLANT_ITALIC,20050,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_SLANT_ITALIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_SLANT_OBLIQUE
	CompareConstant(XFT_SLANT_OBLIQUE,FC_SLANT_OBLIQUE,20051,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_SLANT_OBLIQUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_PROPORTIONAL
	CompareConstant(XFT_PROPORTIONAL,FC_PROPORTIONAL,20052,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_PROPORTIONAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_MONO
	CompareConstant(XFT_MONO,FC_MONO,20053,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_MONO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_CHARCELL
	CompareConstant(XFT_CHARCELL,FC_CHARCELL,20054,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_CHARCELL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_RGBA_UNKNOWN
	CompareConstant(XFT_RGBA_UNKNOWN,FC_RGBA_UNKNOWN,20055,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_RGBA_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_RGBA_RGB
	CompareConstant(XFT_RGBA_RGB,FC_RGBA_RGB,20056,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_RGBA_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_RGBA_BGR
	CompareConstant(XFT_RGBA_BGR,FC_RGBA_BGR,20057,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_RGBA_BGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_RGBA_VRGB
	CompareConstant(XFT_RGBA_VRGB,FC_RGBA_VRGB,20058,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_RGBA_VRGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_RGBA_VBGR
	CompareConstant(XFT_RGBA_VBGR,FC_RGBA_VBGR,20059,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_RGBA_VBGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_RGBA_NONE
	CompareConstant(XFT_RGBA_NONE,FC_RGBA_NONE,20060,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_RGBA_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XFT_ENCODING
	CompareStringConstant(XFT_ENCODING,"encoding",20061,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XFT_ENCODING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XftMatrixInit(m) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftResultMatch
	CompareMacro(XftResultMatch,FcResultMatch,FcResultMatch,20063,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftResultMatch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftResultNoMatch
	CompareMacro(XftResultNoMatch,FcResultNoMatch,FcResultNoMatch,20064,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftResultNoMatch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftResultTypeMismatch
	CompareMacro(XftResultTypeMismatch,FcResultTypeMismatch,FcResultTypeMismatch,20065,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftResultTypeMismatch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftResultNoId
	CompareMacro(XftResultNoId,FcResultNoId,FcResultNoId,20066,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftResultNoId\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftGlyphExists
	CompareMacro(XftGlyphExists,XftCharExists,XftCharExists,20067,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftGlyphExists\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftObjectSetCreate
	CompareMacro(XftObjectSetCreate,FcObjectSetCreate,FcObjectSetCreate,20068,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftObjectSetCreate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftObjectSetAdd
	CompareMacro(XftObjectSetAdd,FcObjectSetAdd,FcObjectSetAdd,20069,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftObjectSetAdd\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftObjectSetDestroy
	CompareMacro(XftObjectSetDestroy,FcObjectSetDestroy,FcObjectSetDestroy,20070,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftObjectSetDestroy\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftObjectSetVaBuild
	CompareMacro(XftObjectSetVaBuild,FcObjectSetVaBuild,FcObjectSetVaBuild,20071,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftObjectSetVaBuild\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftObjectSetBuild
	CompareMacro(XftObjectSetBuild,FcObjectSetBuild,FcObjectSetBuild,20072,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftObjectSetBuild\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftFontSetMatch
	CompareMacro(XftFontSetMatch,FcFontSetMatch,FcFontSetMatch,20073,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftFontSetMatch\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftFontSetDestroy
	CompareMacro(XftFontSetDestroy,FcFontSetDestroy,FcFontSetDestroy,20074,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftFontSetDestroy\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftMatrixEqual
	CompareMacro(XftMatrixEqual,FcMatrixEqual,FcMatrixEqual,20075,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftMatrixEqual\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftMatrixMultiply
	CompareMacro(XftMatrixMultiply,FcMatrixMultiply,FcMatrixMultiply,20076,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftMatrixMultiply\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftMatrixRotate
	CompareMacro(XftMatrixRotate,FcMatrixRotate,FcMatrixRotate,20077,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftMatrixRotate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftMatrixScale
	CompareMacro(XftMatrixScale,FcMatrixScale,FcMatrixScale,20078,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftMatrixScale\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftMatrixShear
	CompareMacro(XftMatrixShear,FcMatrixShear,FcMatrixShear,20079,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftMatrixShear\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftPatternCreate
	CompareMacro(XftPatternCreate,FcPatternCreate,FcPatternCreate,20080,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftPatternCreate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftPatternDuplicate
	CompareMacro(XftPatternDuplicate,FcPatternDuplicate,FcPatternDuplicate,20081,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftPatternDuplicate\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftValueDestroy
	CompareMacro(XftValueDestroy,FcValueDestroy,FcValueDestroy,20082,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftValueDestroy\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftPatternDestroy
	CompareMacro(XftPatternDestroy,FcPatternDestroy,FcPatternDestroy,20084,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftPatternDestroy\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftPatternAdd
	CompareMacro(XftPatternAdd,FcPatternAdd,FcPatternAdd,20086,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftPatternAdd\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftPatternGet
	CompareMacro(XftPatternGet,FcPatternGet,FcPatternGet,20087,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftPatternGet\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftPatternDel
	CompareMacro(XftPatternDel,FcPatternDel,FcPatternDel,20088,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftPatternDel\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftPatternAddInteger
	CompareMacro(XftPatternAddInteger,FcPatternAddInteger,FcPatternAddInteger,20089,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftPatternAddInteger\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftPatternAddDouble
	CompareMacro(XftPatternAddDouble,FcPatternAddDouble,FcPatternAddDouble,20090,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftPatternAddDouble\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XftPatternAddString(p,e,s) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftPatternAddMatrix
	CompareMacro(XftPatternAddMatrix,FcPatternAddMatrix,FcPatternAddMatrix,20092,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftPatternAddMatrix\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftPatternAddBool
	CompareMacro(XftPatternAddBool,FcPatternAddBool,FcPatternAddBool,20093,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftPatternAddBool\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftPatternGetInteger
	CompareMacro(XftPatternGetInteger,FcPatternGetInteger,FcPatternGetInteger,20094,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftPatternGetInteger\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftPatternGetDouble
	CompareMacro(XftPatternGetDouble,FcPatternGetDouble,FcPatternGetDouble,20095,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftPatternGetDouble\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XftPatternGetString(p,e,i,n) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftPatternGetMatrix
	CompareMacro(XftPatternGetMatrix,FcPatternGetMatrix,FcPatternGetMatrix,20097,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftPatternGetMatrix\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftPatternGetBool
	CompareMacro(XftPatternGetBool,FcPatternGetBool,FcPatternGetBool,20098,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftPatternGetBool\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftPatternVaBuild
	CompareMacro(XftPatternVaBuild,FcPatternVaBuild,FcPatternVaBuild,20099,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftPatternVaBuild\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftPatternBuild
	CompareMacro(XftPatternBuild,FcPatternBuild,FcPatternBuild,20100,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftPatternBuild\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftUtf8ToUcs4
	CompareMacro(XftUtf8ToUcs4,FcUtf8ToUcs4,FcUtf8ToUcs4,20101,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftUtf8ToUcs4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftUtf8Len
	CompareMacro(XftUtf8Len,FcUtf8Len,FcUtf8Len,20102,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftUtf8Len\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftTypeVoid
	CompareMacro(XftTypeVoid,FcTypeVoid,FcTypeVoid,20103,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftTypeVoid\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftTypeInteger
	CompareMacro(XftTypeInteger,FcTypeInteger,FcTypeInteger,20104,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftTypeInteger\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftTypeDouble
	CompareMacro(XftTypeDouble,FcTypeDouble,FcTypeDouble,20105,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftTypeDouble\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftTypeString
	CompareMacro(XftTypeString,FcTypeString,FcTypeString,20106,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftTypeString\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftTypeBool
	CompareMacro(XftTypeBool,FcTypeBool,FcTypeBool,20107,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftTypeBool\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef XftTypeMatrix
	CompareMacro(XftTypeMatrix,FcTypeMatrix,FcTypeMatrix,20108,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: XftTypeMatrix\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for XftConfigSubstitute(p) */
#endif

#if 1
CheckTypeSize(XftChar8,0, 39895, 1, 4.0, NULL, 3, NULL)
#endif

#if 1
CheckTypeSize(XftChar16,0, 39896, 1, 4.0, NULL, 5, NULL)
#endif

#if 1
CheckTypeSize(XftChar32,0, 39897, 1, 4.0, NULL, 7, NULL)
#endif

#if 1
CheckTypeSize(XftType,0, 39898, 1, 4.0, NULL, 11083, NULL)
#endif

#if 1
CheckTypeSize(XftMatrix,0, 39899, 1, 4.0, NULL, 11088, NULL)
#endif

#if 1
CheckTypeSize(XftResult,0, 39900, 1, 4.0, NULL, 11141, NULL)
#endif

#if 1
CheckTypeSize(XftValue,0, 39901, 1, 4.0, NULL, 11082, NULL)
#endif

#if 1
CheckTypeSize(XftFontSet,0, 39903, 1, 4.0, NULL, 11130, NULL)
#endif

#if 1
CheckTypeSize(XftObjectSet,0, 39904, 1, 4.0, NULL, 11117, NULL)
#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in X11/Xft/XftCompat.h\n\n",pcnt,cnt);
return cnt;
#endif

}
