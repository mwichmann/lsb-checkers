/*
 * Test of fontconfig/fontconfig.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
struct _FcPattern {};
struct _FcCharSet {};
struct _FcLangSet {};
struct _FcStrList {};
struct _FcStrSet {};
struct _FcConfig {};
struct _FcBlanks {};
struct _FcAtomic {};
struct _FcGlobalCache {};
struct FT_FaceRec_ {};
#define FcGlobalCache FcFileCache
#ifndef LSBCC_MODE
#define _FCINT_H_
#include "fontconfig/fontconfig.h"
#if (FC_MINOR >= 5) || (FC_MAJOR > 2)
extern int FcConfigGetRescanInverval(FcConfig *);
extern FcBool FcConfigSetRescanInverval(FcConfig *, int);
#endif
#endif /* LSBCC_MODE */
#include "fontconfig/fontconfig.h"



#ifdef TET_TEST
void fontconfig_fontconfig_h()
{
#else
int fontconfig_fontconfig_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in fontconfig/fontconfig.h\n");
#endif

printf("Checking data structures in fontconfig/fontconfig.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef FC_MAJOR
	CompareConstant(FC_MAJOR,2,5314,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_MAJOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_MINOR
	CompareConstant(FC_MINOR,3,5315,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_MINOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_REVISION
	CompareConstant(FC_REVISION,2,5316,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_REVISION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_VERSION
	CompareConstant(FC_VERSION,((FC_MAJOR * 10000) + (FC_MINOR * 100) + (FC_REVISION)),5317,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_CACHE_VERSION
	CompareStringConstant(FC_CACHE_VERSION,"1",5318,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_CACHE_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FcTrue
	CompareConstant(FcTrue,1,5319,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FcTrue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FcFalse
	CompareConstant(FcFalse,0,5320,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FcFalse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FAMILY
	CompareStringConstant(FC_FAMILY,"family",5321,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_FAMILY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_STYLE
	CompareStringConstant(FC_STYLE,"style",5322,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_STYLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SLANT
	CompareStringConstant(FC_SLANT,"slant",5323,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_SLANT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT
	CompareStringConstant(FC_WEIGHT,"weight",5324,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WEIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SIZE
	CompareStringConstant(FC_SIZE,"size",5325,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_ASPECT
	CompareStringConstant(FC_ASPECT,"aspect",5326,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_ASPECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_PIXEL_SIZE
	CompareStringConstant(FC_PIXEL_SIZE,"pixelsize",5327,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_PIXEL_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SPACING
	CompareStringConstant(FC_SPACING,"spacing",5328,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_SPACING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FOUNDRY
	CompareStringConstant(FC_FOUNDRY,"foundry",5329,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_FOUNDRY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_ANTIALIAS
	CompareStringConstant(FC_ANTIALIAS,"antialias",5330,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_ANTIALIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_HINTING
	CompareStringConstant(FC_HINTING,"hinting",5331,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_HINTING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_HINT_STYLE
	CompareStringConstant(FC_HINT_STYLE,"hintstyle",5332,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_HINT_STYLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_VERTICAL_LAYOUT
	CompareStringConstant(FC_VERTICAL_LAYOUT,"verticallayout",5333,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_VERTICAL_LAYOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_AUTOHINT
	CompareStringConstant(FC_AUTOHINT,"autohint",5334,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_AUTOHINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_GLOBAL_ADVANCE
	CompareStringConstant(FC_GLOBAL_ADVANCE,"globaladvance",5335,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_GLOBAL_ADVANCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH
	CompareStringConstant(FC_WIDTH,"width",5336,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WIDTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FILE
	CompareStringConstant(FC_FILE,"file",5337,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_FILE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_INDEX
	CompareStringConstant(FC_INDEX,"index",5338,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_INDEX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FT_FACE
	CompareStringConstant(FC_FT_FACE,"ftface",5339,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_FT_FACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_RASTERIZER
	CompareStringConstant(FC_RASTERIZER,"rasterizer",5340,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_RASTERIZER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_OUTLINE
	CompareStringConstant(FC_OUTLINE,"outline",5341,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_OUTLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SCALABLE
	CompareStringConstant(FC_SCALABLE,"scalable",5342,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_SCALABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SCALE
	CompareStringConstant(FC_SCALE,"scale",5343,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_DPI
	CompareStringConstant(FC_DPI,"dpi",5344,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_DPI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_RGBA
	CompareStringConstant(FC_RGBA,"rgba",5345,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_RGBA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_MINSPACE
	CompareStringConstant(FC_MINSPACE,"minspace",5346,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_MINSPACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SOURCE
	CompareStringConstant(FC_SOURCE,"source",5347,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_SOURCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_CHARSET
	CompareStringConstant(FC_CHARSET,"charset",5348,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_CHARSET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_LANG
	CompareStringConstant(FC_LANG,"lang",5349,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_LANG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FONTVERSION
	CompareStringConstant(FC_FONTVERSION,"fontversion",5350,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_FONTVERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FULLNAME
	CompareStringConstant(FC_FULLNAME,"fullname",5351,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_FULLNAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FAMILYLANG
	CompareStringConstant(FC_FAMILYLANG,"familylang",5352,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_FAMILYLANG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_STYLELANG
	CompareStringConstant(FC_STYLELANG,"stylelang",5353,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_STYLELANG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FULLNAMELANG
	CompareStringConstant(FC_FULLNAMELANG,"fullnamelang",5354,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_FULLNAMELANG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_CAPABILITY
	CompareStringConstant(FC_CAPABILITY,"capability",5355,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_CAPABILITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FONTFORMAT
	CompareStringConstant(FC_FONTFORMAT,"fontformat",5356,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_FONTFORMAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_EMBOLDEN
	CompareStringConstant(FC_EMBOLDEN,"embolden",5357,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_EMBOLDEN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for FC_DIR_CACHE_FILE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FC_USER_CACHE_FILE */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_CHAR_WIDTH
	CompareStringConstant(FC_CHAR_WIDTH,"charwidth",5360,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_CHAR_WIDTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_CHAR_HEIGHT
	CompareStringConstant(FC_CHAR_HEIGHT,"charheight",5361,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_CHAR_HEIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_MATRIX
	CompareStringConstant(FC_MATRIX,"matrix",5362,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_MATRIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_THIN
	CompareConstant(FC_WEIGHT_THIN,0,5363,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WEIGHT_THIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_EXTRALIGHT
	CompareConstant(FC_WEIGHT_EXTRALIGHT,40,5364,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WEIGHT_EXTRALIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_ULTRALIGHT
	CompareConstant(FC_WEIGHT_ULTRALIGHT,FC_WEIGHT_EXTRALIGHT,5365,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WEIGHT_ULTRALIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_LIGHT
	CompareConstant(FC_WEIGHT_LIGHT,50,5366,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WEIGHT_LIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_BOOK
	CompareConstant(FC_WEIGHT_BOOK,75,5367,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WEIGHT_BOOK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_REGULAR
	CompareConstant(FC_WEIGHT_REGULAR,80,5368,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WEIGHT_REGULAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_NORMAL
	CompareConstant(FC_WEIGHT_NORMAL,FC_WEIGHT_REGULAR,5369,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WEIGHT_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_MEDIUM
	CompareConstant(FC_WEIGHT_MEDIUM,100,5370,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WEIGHT_MEDIUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_DEMIBOLD
	CompareConstant(FC_WEIGHT_DEMIBOLD,180,5371,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WEIGHT_DEMIBOLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_SEMIBOLD
	CompareConstant(FC_WEIGHT_SEMIBOLD,FC_WEIGHT_DEMIBOLD,5372,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WEIGHT_SEMIBOLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_BOLD
	CompareConstant(FC_WEIGHT_BOLD,200,5373,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WEIGHT_BOLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_EXTRABOLD
	CompareConstant(FC_WEIGHT_EXTRABOLD,205,5374,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WEIGHT_EXTRABOLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_ULTRABOLD
	CompareConstant(FC_WEIGHT_ULTRABOLD,FC_WEIGHT_EXTRABOLD,5375,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WEIGHT_ULTRABOLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_BLACK
	CompareConstant(FC_WEIGHT_BLACK,210,5376,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WEIGHT_BLACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_HEAVY
	CompareConstant(FC_WEIGHT_HEAVY,FC_WEIGHT_BLACK,5377,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WEIGHT_HEAVY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SLANT_ROMAN
	CompareConstant(FC_SLANT_ROMAN,0,5378,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_SLANT_ROMAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SLANT_ITALIC
	CompareConstant(FC_SLANT_ITALIC,100,5379,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_SLANT_ITALIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SLANT_OBLIQUE
	CompareConstant(FC_SLANT_OBLIQUE,110,5380,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_SLANT_OBLIQUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_ULTRACONDENSED
	CompareConstant(FC_WIDTH_ULTRACONDENSED,50,5381,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WIDTH_ULTRACONDENSED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_EXTRACONDENSED
	CompareConstant(FC_WIDTH_EXTRACONDENSED,63,5382,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WIDTH_EXTRACONDENSED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_CONDENSED
	CompareConstant(FC_WIDTH_CONDENSED,75,5383,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WIDTH_CONDENSED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_SEMICONDENSED
	CompareConstant(FC_WIDTH_SEMICONDENSED,87,5384,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WIDTH_SEMICONDENSED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_NORMAL
	CompareConstant(FC_WIDTH_NORMAL,100,5385,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WIDTH_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_SEMIEXPANDED
	CompareConstant(FC_WIDTH_SEMIEXPANDED,113,5386,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WIDTH_SEMIEXPANDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_EXPANDED
	CompareConstant(FC_WIDTH_EXPANDED,125,5387,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WIDTH_EXPANDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_EXTRAEXPANDED
	CompareConstant(FC_WIDTH_EXTRAEXPANDED,150,5388,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WIDTH_EXTRAEXPANDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_ULTRAEXPANDED
	CompareConstant(FC_WIDTH_ULTRAEXPANDED,200,5389,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_WIDTH_ULTRAEXPANDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_PROPORTIONAL
	CompareConstant(FC_PROPORTIONAL,0,5390,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_PROPORTIONAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_DUAL
	CompareConstant(FC_DUAL,90,5391,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_DUAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_MONO
	CompareConstant(FC_MONO,100,5392,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_MONO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_CHARCELL
	CompareConstant(FC_CHARCELL,110,5393,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_CHARCELL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_RGBA_UNKNOWN
	CompareConstant(FC_RGBA_UNKNOWN,0,5394,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_RGBA_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_RGBA_RGB
	CompareConstant(FC_RGBA_RGB,1,5395,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_RGBA_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_RGBA_BGR
	CompareConstant(FC_RGBA_BGR,2,5396,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_RGBA_BGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_RGBA_VRGB
	CompareConstant(FC_RGBA_VRGB,3,5397,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_RGBA_VRGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_RGBA_VBGR
	CompareConstant(FC_RGBA_VBGR,4,5398,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_RGBA_VBGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_RGBA_NONE
	CompareConstant(FC_RGBA_NONE,5,5399,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_RGBA_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_HINT_NONE
	CompareConstant(FC_HINT_NONE,0,5400,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_HINT_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_HINT_SLIGHT
	CompareConstant(FC_HINT_SLIGHT,1,5401,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_HINT_SLIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_HINT_MEDIUM
	CompareConstant(FC_HINT_MEDIUM,2,5402,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_HINT_MEDIUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_HINT_FULL
	CompareConstant(FC_HINT_FULL,3,5403,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_HINT_FULL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for FcMatrixInit(m) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _FCFUNCPROTOBEGIN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for _FCFUNCPROTOEND */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_CHARSET_MAP_SIZE
	CompareConstant(FC_CHARSET_MAP_SIZE,(256/32),5407,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_CHARSET_MAP_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_CHARSET_DONE
	CompareConstant(FC_CHARSET_DONE,((FcChar32) -1),5408,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_CHARSET_DONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for FcIsUpper(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FcIsLower(c) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for FcToLower(c) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_UTF8_MAX_LEN
	CompareConstant(FC_UTF8_MAX_LEN,6,5412,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: FC_UTF8_MAX_LEN\n");
cnt++;
#endif

#endif

#if defined __s390x__
CheckTypeSize(FcBool,4, 11078, 12, 3.1, NULL, 6, NULL)
#elif defined __x86_64__
CheckTypeSize(FcBool,4, 11078, 11, 3.1, NULL, 6, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FcBool,4, 11078, 10, 3.1, NULL, 6, NULL)
#elif defined __powerpc64__
CheckTypeSize(FcBool,4, 11078, 9, 3.1, NULL, 6, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FcBool,4, 11078, 6, 3.1, NULL, 6, NULL)
#elif defined __ia64__
CheckTypeSize(FcBool,4, 11078, 3, 3.1, NULL, 6, NULL)
#elif defined __i386__
CheckTypeSize(FcBool,4, 11078, 2, 3.1, NULL, 6, NULL)
#else
Msg("Find size of FcBool (11078)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,6,NULL);\n",architecture,11078,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _FcValue,16, 11082, 12, , NULL, 0, NULL)
CheckMemberSize(struct _FcValue,u,8,12,40935)
CheckOffset(struct _FcValue,u,8,12,40935)
#elif defined __x86_64__
CheckTypeSize(struct _FcValue,16, 11082, 11, , NULL, 0, NULL)
CheckMemberSize(struct _FcValue,u,8,11,40935)
CheckOffset(struct _FcValue,u,8,11,40935)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _FcValue,16, 11082, 10, , NULL, 0, NULL)
CheckMemberSize(struct _FcValue,u,8,10,40935)
CheckOffset(struct _FcValue,u,8,10,40935)
#elif defined __powerpc64__
CheckTypeSize(struct _FcValue,16, 11082, 9, , NULL, 0, NULL)
CheckMemberSize(struct _FcValue,u,8,9,40935)
CheckOffset(struct _FcValue,u,8,9,40935)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _FcValue,16, 11082, 6, , NULL, 0, NULL)
CheckMemberSize(struct _FcValue,u,8,6,40935)
CheckOffset(struct _FcValue,u,8,6,40935)
#elif defined __ia64__
CheckTypeSize(struct _FcValue,16, 11082, 3, , NULL, 0, NULL)
CheckMemberSize(struct _FcValue,u,8,3,40935)
CheckOffset(struct _FcValue,u,8,3,40935)
#elif defined __i386__
CheckTypeSize(struct _FcValue,12, 11082, 2, , NULL, 0, NULL)
CheckMemberSize(struct _FcValue,u,8,2,40935)
CheckOffset(struct _FcValue,u,4,2,40935)
#elif 1
CheckTypeSize(struct _FcValue,0, 11082, 1, , NULL, 0, NULL)
Msg("Missing member data for _FcValue on All\n");
CheckOffset(struct _FcValue,type,0,1,40921)
#endif

#if defined __s390x__
CheckTypeSize(FcType,4, 11084, 12, 3.1, NULL, 11083, NULL)
#elif defined __x86_64__
CheckTypeSize(FcType,4, 11084, 11, 3.1, NULL, 11083, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FcType,4, 11084, 10, 3.1, NULL, 11083, NULL)
#elif defined __powerpc64__
CheckTypeSize(FcType,4, 11084, 9, 3.1, NULL, 11083, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FcType,4, 11084, 6, 3.1, NULL, 11083, NULL)
#elif defined __ia64__
CheckTypeSize(FcType,4, 11084, 3, 3.1, NULL, 11083, NULL)
#elif defined __i386__
CheckTypeSize(FcType,4, 11084, 2, 3.1, NULL, 11083, NULL)
#else
Msg("Find size of FcType (11084)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11083,NULL);\n",architecture,11084,0);
#endif

#if defined __s390x__
CheckTypeSize(FcChar8,1, 11085, 12, 3.1, NULL, 3, NULL)
#elif defined __x86_64__
CheckTypeSize(FcChar8,1, 11085, 11, 3.1, NULL, 3, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FcChar8,1, 11085, 10, 3.1, NULL, 3, NULL)
#elif defined __powerpc64__
CheckTypeSize(FcChar8,1, 11085, 9, 3.1, NULL, 3, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FcChar8,1, 11085, 6, 3.1, NULL, 3, NULL)
#elif defined __ia64__
CheckTypeSize(FcChar8,1, 11085, 3, 3.1, NULL, 3, NULL)
#elif defined __i386__
CheckTypeSize(FcChar8,1, 11085, 2, 3.1, NULL, 3, NULL)
#else
Msg("Find size of FcChar8 (11085)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,3,NULL);\n",architecture,11085,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _FcMatrix,32, 11088, 12, , NULL, 0, NULL)
CheckMemberSize(struct _FcMatrix,xy,8,12,40923)
CheckOffset(struct _FcMatrix,xy,8,12,40923)
CheckMemberSize(struct _FcMatrix,yx,8,12,40924)
CheckOffset(struct _FcMatrix,yx,16,12,40924)
CheckMemberSize(struct _FcMatrix,yy,8,12,40925)
CheckOffset(struct _FcMatrix,yy,24,12,40925)
#elif defined __x86_64__
CheckTypeSize(struct _FcMatrix,32, 11088, 11, , NULL, 0, NULL)
CheckMemberSize(struct _FcMatrix,xy,8,11,40923)
CheckOffset(struct _FcMatrix,xy,8,11,40923)
CheckMemberSize(struct _FcMatrix,yx,8,11,40924)
CheckOffset(struct _FcMatrix,yx,16,11,40924)
CheckMemberSize(struct _FcMatrix,yy,8,11,40925)
CheckOffset(struct _FcMatrix,yy,24,11,40925)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _FcMatrix,32, 11088, 10, , NULL, 0, NULL)
CheckMemberSize(struct _FcMatrix,xy,8,10,40923)
CheckOffset(struct _FcMatrix,xy,8,10,40923)
CheckMemberSize(struct _FcMatrix,yx,8,10,40924)
CheckOffset(struct _FcMatrix,yx,16,10,40924)
CheckMemberSize(struct _FcMatrix,yy,8,10,40925)
CheckOffset(struct _FcMatrix,yy,24,10,40925)
#elif defined __powerpc64__
CheckTypeSize(struct _FcMatrix,32, 11088, 9, , NULL, 0, NULL)
CheckMemberSize(struct _FcMatrix,xy,8,9,40923)
CheckOffset(struct _FcMatrix,xy,8,9,40923)
CheckMemberSize(struct _FcMatrix,yx,8,9,40924)
CheckOffset(struct _FcMatrix,yx,16,9,40924)
CheckMemberSize(struct _FcMatrix,yy,8,9,40925)
CheckOffset(struct _FcMatrix,yy,24,9,40925)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _FcMatrix,32, 11088, 6, , NULL, 0, NULL)
CheckMemberSize(struct _FcMatrix,xy,8,6,40923)
CheckOffset(struct _FcMatrix,xy,8,6,40923)
CheckMemberSize(struct _FcMatrix,yx,8,6,40924)
CheckOffset(struct _FcMatrix,yx,16,6,40924)
CheckMemberSize(struct _FcMatrix,yy,8,6,40925)
CheckOffset(struct _FcMatrix,yy,24,6,40925)
#elif defined __ia64__
CheckTypeSize(struct _FcMatrix,32, 11088, 3, , NULL, 0, NULL)
CheckMemberSize(struct _FcMatrix,xy,8,3,40923)
CheckOffset(struct _FcMatrix,xy,8,3,40923)
CheckMemberSize(struct _FcMatrix,yx,8,3,40924)
CheckOffset(struct _FcMatrix,yx,16,3,40924)
CheckMemberSize(struct _FcMatrix,yy,8,3,40925)
CheckOffset(struct _FcMatrix,yy,24,3,40925)
#elif defined __i386__
CheckTypeSize(struct _FcMatrix,32, 11088, 2, , NULL, 0, NULL)
CheckMemberSize(struct _FcMatrix,xy,8,2,40923)
CheckOffset(struct _FcMatrix,xy,8,2,40923)
CheckMemberSize(struct _FcMatrix,yx,8,2,40924)
CheckOffset(struct _FcMatrix,yx,16,2,40924)
CheckMemberSize(struct _FcMatrix,yy,8,2,40925)
CheckOffset(struct _FcMatrix,yy,24,2,40925)
#elif 1
CheckTypeSize(struct _FcMatrix,0, 11088, 1, , NULL, 0, NULL)
Msg("Missing member data for _FcMatrix on All\n");
CheckOffset(struct _FcMatrix,xx,0,1,40922)
#endif

#if defined __s390x__
CheckTypeSize(FcMatrix,32, 11089, 12, 3.1, NULL, 11088, NULL)
#elif defined __x86_64__
CheckTypeSize(FcMatrix,32, 11089, 11, 3.1, NULL, 11088, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FcMatrix,32, 11089, 10, 3.1, NULL, 11088, NULL)
#elif defined __powerpc64__
CheckTypeSize(FcMatrix,32, 11089, 9, 3.1, NULL, 11088, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FcMatrix,32, 11089, 6, 3.1, NULL, 11088, NULL)
#elif defined __ia64__
CheckTypeSize(FcMatrix,32, 11089, 3, 3.1, NULL, 11088, NULL)
#elif defined __i386__
CheckTypeSize(FcMatrix,32, 11089, 2, 3.1, NULL, 11088, NULL)
#else
Msg("Find size of FcMatrix (11089)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11088,NULL);\n",architecture,11089,0);
#endif

#if defined __s390x__
CheckTypeSize(FcValue,16, 11103, 12, 3.1, NULL, 11082, NULL)
#elif defined __x86_64__
CheckTypeSize(FcValue,16, 11103, 11, 3.1, NULL, 11082, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FcValue,16, 11103, 10, 3.1, NULL, 11082, NULL)
#elif defined __powerpc64__
CheckTypeSize(FcValue,16, 11103, 9, 3.1, NULL, 11082, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FcValue,16, 11103, 6, 3.1, NULL, 11082, NULL)
#elif defined __ia64__
CheckTypeSize(FcValue,16, 11103, 3, 3.1, NULL, 11082, NULL)
#elif defined __i386__
CheckTypeSize(FcValue,12, 11103, 2, 3.1, NULL, 11082, NULL)
#else
Msg("Find size of FcValue (11103)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11082,NULL);\n",architecture,11103,0);
#endif

#if defined __s390x__
CheckTypeSize(FcChar32,4, 11113, 12, 3.1, NULL, 7, NULL)
#elif defined __x86_64__
CheckTypeSize(FcChar32,4, 11113, 11, 3.1, NULL, 7, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FcChar32,4, 11113, 10, 3.1, NULL, 7, NULL)
#elif defined __powerpc64__
CheckTypeSize(FcChar32,4, 11113, 9, 3.1, NULL, 7, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FcChar32,4, 11113, 6, 3.1, NULL, 7, NULL)
#elif defined __ia64__
CheckTypeSize(FcChar32,4, 11113, 3, 3.1, NULL, 7, NULL)
#elif defined __i386__
CheckTypeSize(FcChar32,4, 11113, 2, 3.1, NULL, 7, NULL)
#else
Msg("Find size of FcChar32 (11113)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,7,NULL);\n",architecture,11113,0);
#endif

#if defined __s390x__
CheckTypeSize(FcMatchKind,4, 11116, 12, 3.1, NULL, 11115, NULL)
#elif defined __x86_64__
CheckTypeSize(FcMatchKind,4, 11116, 11, 3.1, NULL, 11115, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FcMatchKind,4, 11116, 10, 3.1, NULL, 11115, NULL)
#elif defined __powerpc64__
CheckTypeSize(FcMatchKind,4, 11116, 9, 3.1, NULL, 11115, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FcMatchKind,4, 11116, 6, 3.1, NULL, 11115, NULL)
#elif defined __ia64__
CheckTypeSize(FcMatchKind,4, 11116, 3, 3.1, NULL, 11115, NULL)
#elif defined __i386__
CheckTypeSize(FcMatchKind,4, 11116, 2, 3.1, NULL, 11115, NULL)
#else
Msg("Find size of FcMatchKind (11116)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11115,NULL);\n",architecture,11116,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _FcObjectSet,16, 11117, 12, , NULL, 0, NULL)
CheckMemberSize(struct _FcObjectSet,sobject,4,12,40939)
CheckOffset(struct _FcObjectSet,sobject,4,12,40939)
CheckMemberSize(struct _FcObjectSet,objects,8,12,40940)
CheckOffset(struct _FcObjectSet,objects,8,12,40940)
#elif defined __x86_64__
CheckTypeSize(struct _FcObjectSet,16, 11117, 11, , NULL, 0, NULL)
CheckMemberSize(struct _FcObjectSet,sobject,4,11,40939)
CheckOffset(struct _FcObjectSet,sobject,4,11,40939)
CheckMemberSize(struct _FcObjectSet,objects,8,11,40940)
CheckOffset(struct _FcObjectSet,objects,8,11,40940)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _FcObjectSet,12, 11117, 10, , NULL, 0, NULL)
CheckMemberSize(struct _FcObjectSet,sobject,4,10,40939)
CheckOffset(struct _FcObjectSet,sobject,4,10,40939)
CheckMemberSize(struct _FcObjectSet,objects,4,10,40940)
CheckOffset(struct _FcObjectSet,objects,8,10,40940)
#elif defined __powerpc64__
CheckTypeSize(struct _FcObjectSet,16, 11117, 9, , NULL, 0, NULL)
CheckMemberSize(struct _FcObjectSet,sobject,4,9,40939)
CheckOffset(struct _FcObjectSet,sobject,4,9,40939)
CheckMemberSize(struct _FcObjectSet,objects,8,9,40940)
CheckOffset(struct _FcObjectSet,objects,8,9,40940)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _FcObjectSet,12, 11117, 6, , NULL, 0, NULL)
CheckMemberSize(struct _FcObjectSet,sobject,4,6,40939)
CheckOffset(struct _FcObjectSet,sobject,4,6,40939)
CheckMemberSize(struct _FcObjectSet,objects,4,6,40940)
CheckOffset(struct _FcObjectSet,objects,8,6,40940)
#elif defined __ia64__
CheckTypeSize(struct _FcObjectSet,16, 11117, 3, , NULL, 0, NULL)
CheckMemberSize(struct _FcObjectSet,sobject,4,3,40939)
CheckOffset(struct _FcObjectSet,sobject,4,3,40939)
CheckMemberSize(struct _FcObjectSet,objects,8,3,40940)
CheckOffset(struct _FcObjectSet,objects,8,3,40940)
#elif defined __i386__
CheckTypeSize(struct _FcObjectSet,12, 11117, 2, , NULL, 0, NULL)
CheckMemberSize(struct _FcObjectSet,sobject,4,2,40939)
CheckOffset(struct _FcObjectSet,sobject,4,2,40939)
CheckMemberSize(struct _FcObjectSet,objects,4,2,40940)
CheckOffset(struct _FcObjectSet,objects,8,2,40940)
#elif 1
CheckTypeSize(struct _FcObjectSet,0, 11117, 1, , NULL, 0, NULL)
Msg("Missing member data for _FcObjectSet on All\n");
CheckOffset(struct _FcObjectSet,nobject,0,1,40938)
#endif

#if defined __s390x__
CheckTypeSize(FcObjectSet,16, 11118, 12, 3.1, NULL, 11117, NULL)
#elif defined __x86_64__
CheckTypeSize(FcObjectSet,16, 11118, 11, 3.1, NULL, 11117, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FcObjectSet,12, 11118, 10, 3.1, NULL, 11117, NULL)
#elif defined __powerpc64__
CheckTypeSize(FcObjectSet,16, 11118, 9, 3.1, NULL, 11117, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FcObjectSet,12, 11118, 6, 3.1, NULL, 11117, NULL)
#elif defined __ia64__
CheckTypeSize(FcObjectSet,16, 11118, 3, 3.1, NULL, 11117, NULL)
#elif defined __i386__
CheckTypeSize(FcObjectSet,12, 11118, 2, 3.1, NULL, 11117, NULL)
#else
Msg("Find size of FcObjectSet (11118)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11117,NULL);\n",architecture,11118,0);
#endif

#if defined __s390x__
CheckTypeSize(FcEndian,4, 11121, 12, 3.1, NULL, 11120, NULL)
#elif defined __x86_64__
CheckTypeSize(FcEndian,4, 11121, 11, 3.1, NULL, 11120, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FcEndian,4, 11121, 10, 3.1, NULL, 11120, NULL)
#elif defined __powerpc64__
CheckTypeSize(FcEndian,4, 11121, 9, 3.1, NULL, 11120, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FcEndian,4, 11121, 6, 3.1, NULL, 11120, NULL)
#elif defined __ia64__
CheckTypeSize(FcEndian,4, 11121, 3, 3.1, NULL, 11120, NULL)
#elif defined __i386__
CheckTypeSize(FcEndian,4, 11121, 2, 3.1, NULL, 11120, NULL)
#else
Msg("Find size of FcEndian (11121)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11120,NULL);\n",architecture,11121,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _FcConstant,24, 11126, 12, , NULL, 0, NULL)
CheckMemberSize(struct _FcConstant,object,8,12,40944)
CheckOffset(struct _FcConstant,object,8,12,40944)
CheckMemberSize(struct _FcConstant,value,4,12,40945)
CheckOffset(struct _FcConstant,value,16,12,40945)
#elif defined __x86_64__
CheckTypeSize(struct _FcConstant,24, 11126, 11, , NULL, 0, NULL)
CheckMemberSize(struct _FcConstant,object,8,11,40944)
CheckOffset(struct _FcConstant,object,8,11,40944)
CheckMemberSize(struct _FcConstant,value,4,11,40945)
CheckOffset(struct _FcConstant,value,16,11,40945)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _FcConstant,12, 11126, 10, , NULL, 0, NULL)
CheckMemberSize(struct _FcConstant,object,4,10,40944)
CheckOffset(struct _FcConstant,object,4,10,40944)
CheckMemberSize(struct _FcConstant,value,4,10,40945)
CheckOffset(struct _FcConstant,value,8,10,40945)
#elif defined __powerpc64__
CheckTypeSize(struct _FcConstant,24, 11126, 9, , NULL, 0, NULL)
CheckMemberSize(struct _FcConstant,object,8,9,40944)
CheckOffset(struct _FcConstant,object,8,9,40944)
CheckMemberSize(struct _FcConstant,value,4,9,40945)
CheckOffset(struct _FcConstant,value,16,9,40945)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _FcConstant,12, 11126, 6, , NULL, 0, NULL)
CheckMemberSize(struct _FcConstant,object,4,6,40944)
CheckOffset(struct _FcConstant,object,4,6,40944)
CheckMemberSize(struct _FcConstant,value,4,6,40945)
CheckOffset(struct _FcConstant,value,8,6,40945)
#elif defined __ia64__
CheckTypeSize(struct _FcConstant,24, 11126, 3, , NULL, 0, NULL)
CheckMemberSize(struct _FcConstant,object,8,3,40944)
CheckOffset(struct _FcConstant,object,8,3,40944)
CheckMemberSize(struct _FcConstant,value,4,3,40945)
CheckOffset(struct _FcConstant,value,16,3,40945)
#elif defined __i386__
CheckTypeSize(struct _FcConstant,12, 11126, 2, , NULL, 0, NULL)
CheckMemberSize(struct _FcConstant,object,4,2,40944)
CheckOffset(struct _FcConstant,object,4,2,40944)
CheckMemberSize(struct _FcConstant,value,4,2,40945)
CheckOffset(struct _FcConstant,value,8,2,40945)
#elif 1
CheckTypeSize(struct _FcConstant,0, 11126, 1, , NULL, 0, NULL)
Msg("Missing member data for _FcConstant on All\n");
CheckOffset(struct _FcConstant,name,0,1,40943)
#endif

#if defined __s390x__
CheckTypeSize(FcConstant,24, 11127, 12, 3.1, NULL, 11126, NULL)
#elif defined __x86_64__
CheckTypeSize(FcConstant,24, 11127, 11, 3.1, NULL, 11126, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FcConstant,12, 11127, 10, 3.1, NULL, 11126, NULL)
#elif defined __powerpc64__
CheckTypeSize(FcConstant,24, 11127, 9, 3.1, NULL, 11126, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FcConstant,12, 11127, 6, 3.1, NULL, 11126, NULL)
#elif defined __ia64__
CheckTypeSize(FcConstant,24, 11127, 3, 3.1, NULL, 11126, NULL)
#elif defined __i386__
CheckTypeSize(FcConstant,12, 11127, 2, 3.1, NULL, 11126, NULL)
#else
Msg("Find size of FcConstant (11127)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11126,NULL);\n",architecture,11127,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _FcFontSet,16, 11130, 12, , NULL, 0, NULL)
CheckMemberSize(struct _FcFontSet,sfont,4,12,40947)
CheckOffset(struct _FcFontSet,sfont,4,12,40947)
CheckMemberSize(struct _FcFontSet,fonts,8,12,40948)
CheckOffset(struct _FcFontSet,fonts,8,12,40948)
#elif defined __x86_64__
CheckTypeSize(struct _FcFontSet,16, 11130, 11, , NULL, 0, NULL)
CheckMemberSize(struct _FcFontSet,sfont,4,11,40947)
CheckOffset(struct _FcFontSet,sfont,4,11,40947)
CheckMemberSize(struct _FcFontSet,fonts,8,11,40948)
CheckOffset(struct _FcFontSet,fonts,8,11,40948)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _FcFontSet,12, 11130, 10, , NULL, 0, NULL)
CheckMemberSize(struct _FcFontSet,sfont,4,10,40947)
CheckOffset(struct _FcFontSet,sfont,4,10,40947)
CheckMemberSize(struct _FcFontSet,fonts,4,10,40948)
CheckOffset(struct _FcFontSet,fonts,8,10,40948)
#elif defined __powerpc64__
CheckTypeSize(struct _FcFontSet,16, 11130, 9, , NULL, 0, NULL)
CheckMemberSize(struct _FcFontSet,sfont,4,9,40947)
CheckOffset(struct _FcFontSet,sfont,4,9,40947)
CheckMemberSize(struct _FcFontSet,fonts,8,9,40948)
CheckOffset(struct _FcFontSet,fonts,8,9,40948)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _FcFontSet,12, 11130, 6, , NULL, 0, NULL)
CheckMemberSize(struct _FcFontSet,sfont,4,6,40947)
CheckOffset(struct _FcFontSet,sfont,4,6,40947)
CheckMemberSize(struct _FcFontSet,fonts,4,6,40948)
CheckOffset(struct _FcFontSet,fonts,8,6,40948)
#elif defined __ia64__
CheckTypeSize(struct _FcFontSet,16, 11130, 3, , NULL, 0, NULL)
CheckMemberSize(struct _FcFontSet,sfont,4,3,40947)
CheckOffset(struct _FcFontSet,sfont,4,3,40947)
CheckMemberSize(struct _FcFontSet,fonts,8,3,40948)
CheckOffset(struct _FcFontSet,fonts,8,3,40948)
#elif defined __i386__
CheckTypeSize(struct _FcFontSet,12, 11130, 2, , NULL, 0, NULL)
CheckMemberSize(struct _FcFontSet,sfont,4,2,40947)
CheckOffset(struct _FcFontSet,sfont,4,2,40947)
CheckMemberSize(struct _FcFontSet,fonts,4,2,40948)
CheckOffset(struct _FcFontSet,fonts,8,2,40948)
#elif 1
CheckTypeSize(struct _FcFontSet,0, 11130, 1, , NULL, 0, NULL)
Msg("Missing member data for _FcFontSet on All\n");
CheckOffset(struct _FcFontSet,nfont,0,1,40946)
#endif

#if defined __s390x__
CheckTypeSize(FcFontSet,16, 11132, 12, 3.1, NULL, 11130, NULL)
#elif defined __x86_64__
CheckTypeSize(FcFontSet,16, 11132, 11, 3.1, NULL, 11130, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FcFontSet,12, 11132, 10, 3.1, NULL, 11130, NULL)
#elif defined __powerpc64__
CheckTypeSize(FcFontSet,16, 11132, 9, 3.1, NULL, 11130, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FcFontSet,12, 11132, 6, 3.1, NULL, 11130, NULL)
#elif defined __ia64__
CheckTypeSize(FcFontSet,16, 11132, 3, 3.1, NULL, 11130, NULL)
#elif defined __i386__
CheckTypeSize(FcFontSet,12, 11132, 2, 3.1, NULL, 11130, NULL)
#else
Msg("Find size of FcFontSet (11132)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11130,NULL);\n",architecture,11132,0);
#endif

#if defined __s390x__
CheckTypeSize(FcSetName,4, 11135, 12, 3.1, NULL, 11134, NULL)
#elif defined __x86_64__
CheckTypeSize(FcSetName,4, 11135, 11, 3.1, NULL, 11134, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FcSetName,4, 11135, 10, 3.1, NULL, 11134, NULL)
#elif defined __powerpc64__
CheckTypeSize(FcSetName,4, 11135, 9, 3.1, NULL, 11134, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FcSetName,4, 11135, 6, 3.1, NULL, 11134, NULL)
#elif defined __ia64__
CheckTypeSize(FcSetName,4, 11135, 3, 3.1, NULL, 11134, NULL)
#elif defined __i386__
CheckTypeSize(FcSetName,4, 11135, 2, 3.1, NULL, 11134, NULL)
#else
Msg("Find size of FcSetName (11135)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11134,NULL);\n",architecture,11135,0);
#endif

#if defined __s390x__
CheckTypeSize(FcResult,4, 11142, 12, 3.1, NULL, 11141, NULL)
#elif defined __x86_64__
CheckTypeSize(FcResult,4, 11142, 11, 3.1, NULL, 11141, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FcResult,4, 11142, 10, 3.1, NULL, 11141, NULL)
#elif defined __powerpc64__
CheckTypeSize(FcResult,4, 11142, 9, 3.1, NULL, 11141, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FcResult,4, 11142, 6, 3.1, NULL, 11141, NULL)
#elif defined __ia64__
CheckTypeSize(FcResult,4, 11142, 3, 3.1, NULL, 11141, NULL)
#elif defined __i386__
CheckTypeSize(FcResult,4, 11142, 2, 3.1, NULL, 11141, NULL)
#else
Msg("Find size of FcResult (11142)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11141,NULL);\n",architecture,11142,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _FcObjectType,16, 11144, 12, , NULL, 0, NULL)
CheckMemberSize(struct _FcObjectType,type,4,12,40957)
CheckOffset(struct _FcObjectType,type,8,12,40957)
#elif defined __x86_64__
CheckTypeSize(struct _FcObjectType,16, 11144, 11, , NULL, 0, NULL)
CheckMemberSize(struct _FcObjectType,type,4,11,40957)
CheckOffset(struct _FcObjectType,type,8,11,40957)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _FcObjectType,8, 11144, 10, , NULL, 0, NULL)
CheckMemberSize(struct _FcObjectType,type,4,10,40957)
CheckOffset(struct _FcObjectType,type,4,10,40957)
#elif defined __powerpc64__
CheckTypeSize(struct _FcObjectType,16, 11144, 9, , NULL, 0, NULL)
CheckMemberSize(struct _FcObjectType,type,4,9,40957)
CheckOffset(struct _FcObjectType,type,8,9,40957)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _FcObjectType,8, 11144, 6, , NULL, 0, NULL)
CheckMemberSize(struct _FcObjectType,type,4,6,40957)
CheckOffset(struct _FcObjectType,type,4,6,40957)
#elif defined __ia64__
CheckTypeSize(struct _FcObjectType,16, 11144, 3, , NULL, 0, NULL)
CheckMemberSize(struct _FcObjectType,type,4,3,40957)
CheckOffset(struct _FcObjectType,type,8,3,40957)
#elif defined __i386__
CheckTypeSize(struct _FcObjectType,8, 11144, 2, , NULL, 0, NULL)
CheckMemberSize(struct _FcObjectType,type,4,2,40957)
CheckOffset(struct _FcObjectType,type,4,2,40957)
#elif 1
CheckTypeSize(struct _FcObjectType,0, 11144, 1, , NULL, 0, NULL)
Msg("Missing member data for _FcObjectType on All\n");
CheckOffset(struct _FcObjectType,object,0,1,40956)
#endif

#if defined __s390x__
CheckTypeSize(FcObjectType,16, 11145, 12, 3.1, NULL, 11144, NULL)
#elif defined __x86_64__
CheckTypeSize(FcObjectType,16, 11145, 11, 3.1, NULL, 11144, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FcObjectType,8, 11145, 10, 3.1, NULL, 11144, NULL)
#elif defined __powerpc64__
CheckTypeSize(FcObjectType,16, 11145, 9, 3.1, NULL, 11144, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FcObjectType,8, 11145, 6, 3.1, NULL, 11144, NULL)
#elif defined __ia64__
CheckTypeSize(FcObjectType,16, 11145, 3, 3.1, NULL, 11144, NULL)
#elif defined __i386__
CheckTypeSize(FcObjectType,8, 11145, 2, 3.1, NULL, 11144, NULL)
#else
Msg("Find size of FcObjectType (11145)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11144,NULL);\n",architecture,11145,0);
#endif

#if defined __s390x__
CheckTypeSize(FcLangResult,4, 11161, 12, 3.1, NULL, 11160, NULL)
#elif defined __x86_64__
CheckTypeSize(FcLangResult,4, 11161, 11, 3.1, NULL, 11160, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FcLangResult,4, 11161, 10, 3.1, NULL, 11160, NULL)
#elif defined __powerpc64__
CheckTypeSize(FcLangResult,4, 11161, 9, 3.1, NULL, 11160, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FcLangResult,4, 11161, 6, 3.1, NULL, 11160, NULL)
#elif defined __ia64__
CheckTypeSize(FcLangResult,4, 11161, 3, 3.1, NULL, 11160, NULL)
#elif defined __i386__
CheckTypeSize(FcLangResult,4, 11161, 2, 3.1, NULL, 11160, NULL)
#else
Msg("Find size of FcLangResult (11161)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11160,NULL);\n",architecture,11161,0);
#endif

#if defined __s390x__
CheckTypeSize(FcChar16,2, 16181, 12, 3.1, NULL, 11209, NULL)
#elif defined __x86_64__
CheckTypeSize(FcChar16,2, 16181, 11, 3.1, NULL, 11209, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(FcChar16,2, 16181, 10, 3.1, NULL, 11209, NULL)
#elif defined __powerpc64__
CheckTypeSize(FcChar16,2, 16181, 9, 3.1, NULL, 11209, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(FcChar16,2, 16181, 6, 3.1, NULL, 11209, NULL)
#elif defined __ia64__
CheckTypeSize(FcChar16,2, 16181, 3, 3.1, NULL, 11209, NULL)
#elif defined __i386__
CheckTypeSize(FcChar16,2, 16181, 2, 3.1, NULL, 11209, NULL)
#else
Msg("Find size of FcChar16 (16181)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11209, NULL);\n",architecture,16181,0);
#endif

extern FcBool FcPatternAdd_db(FcPattern *, const char *, FcValue, FcBool);
CheckInterfacedef(FcPatternAdd,FcPatternAdd_db);
extern FcStrList * FcConfigGetConfigFiles_db(FcConfig *);
CheckInterfacedef(FcConfigGetConfigFiles,FcConfigGetConfigFiles_db);
extern FcBool FcStrSetAdd_db(FcStrSet *, const FcChar8 *);
CheckInterfacedef(FcStrSetAdd,FcStrSetAdd_db);
extern FcBool FcCharSetIsSubset_db(const FcCharSet *, const FcCharSet *);
CheckInterfacedef(FcCharSetIsSubset,FcCharSetIsSubset_db);
extern void FcDefaultSubstitute_db(FcPattern *);
CheckInterfacedef(FcDefaultSubstitute,FcDefaultSubstitute_db);
extern FcChar32 FcCharSetIntersectCount_db(const FcCharSet *, const FcCharSet *);
CheckInterfacedef(FcCharSetIntersectCount,FcCharSetIntersectCount_db);
extern FcBool FcConfigUptoDate_db(FcConfig *);
CheckInterfacedef(FcConfigUptoDate,FcConfigUptoDate_db);
extern void FcPatternDestroy_db(FcPattern *);
CheckInterfacedef(FcPatternDestroy,FcPatternDestroy_db);
extern FcLangSet * FcLangSetCopy_db(const FcLangSet *);
CheckInterfacedef(FcLangSetCopy,FcLangSetCopy_db);
extern FcBool FcPatternAddCharSet_db(FcPattern *, const char *, const FcCharSet *);
CheckInterfacedef(FcPatternAddCharSet,FcPatternAddCharSet_db);
extern FcBool FcPatternAddLangSet_db(FcPattern *, const char *, const FcLangSet *);
CheckInterfacedef(FcPatternAddLangSet,FcPatternAddLangSet_db);
extern void FcConfigAppFontClear_db(FcConfig *);
CheckInterfacedef(FcConfigAppFontClear,FcConfigAppFontClear_db);
extern int FcConfigGetRescanInverval_db(FcConfig *);
CheckInterfacedef(FcConfigGetRescanInverval,FcConfigGetRescanInverval_db);
extern FcBool FcConfigSubstitute_db(FcConfig *, FcPattern *, FcMatchKind);
CheckInterfacedef(FcConfigSubstitute,FcConfigSubstitute_db);
extern FcObjectSet * FcObjectSetBuild_db(const char *, ...);
CheckInterfacedef(FcObjectSetBuild,FcObjectSetBuild_db);
extern FcBool FcObjectSetAdd_db(FcObjectSet *, const char *);
CheckInterfacedef(FcObjectSetAdd,FcObjectSetAdd_db);
extern FcChar32 FcCharSetSubtractCount_db(const FcCharSet *, const FcCharSet *);
CheckInterfacedef(FcCharSetSubtractCount,FcCharSetSubtractCount_db);
extern FcBool FcUtf16Len_db(const FcChar8 *, FcEndian, int, int *, int *);
CheckInterfacedef(FcUtf16Len,FcUtf16Len_db);
extern FcBool FcConfigBuildFonts_db(FcConfig *);
CheckInterfacedef(FcConfigBuildFonts,FcConfigBuildFonts_db);
extern FcChar8 * FcAtomicOrigFile_db(FcAtomic *);
CheckInterfacedef(FcAtomicOrigFile,FcAtomicOrigFile_db);
extern FcBool FcNameUnregisterConstants_db(const FcConstant *, int);
CheckInterfacedef(FcNameUnregisterConstants,FcNameUnregisterConstants_db);
extern FcBool FcConfigSetRescanInverval_db(FcConfig *, int);
CheckInterfacedef(FcConfigSetRescanInverval,FcConfigSetRescanInverval_db);
extern FcBool FcAtomicLock_db(FcAtomic *);
CheckInterfacedef(FcAtomicLock,FcAtomicLock_db);
extern FcPattern * FcPatternBuild_db(FcPattern *, ...);
CheckInterfacedef(FcPatternBuild,FcPatternBuild_db);
extern FcFontSet * FcConfigGetFonts_db(FcConfig *, FcSetName);
CheckInterfacedef(FcConfigGetFonts,FcConfigGetFonts_db);
extern void FcStrListDone_db(FcStrList *);
CheckInterfacedef(FcStrListDone,FcStrListDone_db);
extern FcBool FcLangSetEqual_db(const FcLangSet *, const FcLangSet *);
CheckInterfacedef(FcLangSetEqual,FcLangSetEqual_db);
extern const FcConstant * FcNameGetConstant_db(FcChar8 *);
CheckInterfacedef(FcNameGetConstant,FcNameGetConstant_db);
extern void FcMatrixShear_db(FcMatrix *, double, double);
CheckInterfacedef(FcMatrixShear,FcMatrixShear_db);
extern FcMatrix * FcMatrixCopy_db(const FcMatrix *);
CheckInterfacedef(FcMatrixCopy,FcMatrixCopy_db);
extern FcStrList * FcConfigGetConfigDirs_db(FcConfig *);
CheckInterfacedef(FcConfigGetConfigDirs,FcConfigGetConfigDirs_db);
extern FcBool FcStrSetDel_db(FcStrSet *, const FcChar8 *);
CheckInterfacedef(FcStrSetDel,FcStrSetDel_db);
extern FcBool FcConfigEnableHome_db(FcBool);
CheckInterfacedef(FcConfigEnableHome,FcConfigEnableHome_db);
extern FcStrSet * FcStrSetCreate_db(void);
CheckInterfacedef(FcStrSetCreate,FcStrSetCreate_db);
extern int FcStrCmpIgnoreCase_db(const FcChar8 *, const FcChar8 *);
CheckInterfacedef(FcStrCmpIgnoreCase,FcStrCmpIgnoreCase_db);
extern FcCharSet * FcCharSetUnion_db(const FcCharSet *, const FcCharSet *);
CheckInterfacedef(FcCharSetUnion,FcCharSetUnion_db);
extern FcObjectSet * FcObjectSetCreate_db(void);
CheckInterfacedef(FcObjectSetCreate,FcObjectSetCreate_db);
extern FcBlanks * FcBlanksCreate_db(void);
CheckInterfacedef(FcBlanksCreate,FcBlanksCreate_db);
extern void FcBlanksDestroy_db(FcBlanks *);
CheckInterfacedef(FcBlanksDestroy,FcBlanksDestroy_db);
extern FcBool FcNameConstant_db(FcChar8 *, int *);
CheckInterfacedef(FcNameConstant,FcNameConstant_db);
extern void FcMatrixRotate_db(FcMatrix *, double, double);
CheckInterfacedef(FcMatrixRotate,FcMatrixRotate_db);
extern FcPattern * FcNameParse_db(const FcChar8 *);
CheckInterfacedef(FcNameParse,FcNameParse_db);
extern void FcMatrixMultiply_db(FcMatrix *, const FcMatrix *, const FcMatrix *);
CheckInterfacedef(FcMatrixMultiply,FcMatrixMultiply_db);
extern FcResult FcPatternGetLangSet_db(const FcPattern *, const char *, int, FcLangSet * *);
CheckInterfacedef(FcPatternGetLangSet,FcPatternGetLangSet_db);
extern FcValue FcValueSave_db(FcValue);
CheckInterfacedef(FcValueSave,FcValueSave_db);
extern void FcAtomicDestroy_db(FcAtomic *);
CheckInterfacedef(FcAtomicDestroy,FcAtomicDestroy_db);
extern FcBool FcPatternEqual_db(const FcPattern *, const FcPattern *);
CheckInterfacedef(FcPatternEqual,FcPatternEqual_db);
extern FcBool FcNameRegisterObjectTypes_db(const FcObjectType *, int);
CheckInterfacedef(FcNameRegisterObjectTypes,FcNameRegisterObjectTypes_db);
extern FcChar32 FcCharSetNextPage_db(const FcCharSet *, FcChar32 *, FcChar32 *);
CheckInterfacedef(FcCharSetNextPage,FcCharSetNextPage_db);
extern FcBool FcConfigSetCurrent_db(FcConfig *);
CheckInterfacedef(FcConfigSetCurrent,FcConfigSetCurrent_db);
extern FcPattern * FcFreeTypeQuery_db(const FcChar8 *, int, FcBlanks *, int *);
CheckInterfacedef(FcFreeTypeQuery,FcFreeTypeQuery_db);
extern FcChar8 * FcStrListNext_db(FcStrList *);
CheckInterfacedef(FcStrListNext,FcStrListNext_db);
extern FcBool FcNameRegisterConstants_db(const FcConstant *, int);
CheckInterfacedef(FcNameRegisterConstants,FcNameRegisterConstants_db);
extern void FcValueDestroy_db(FcValue);
CheckInterfacedef(FcValueDestroy,FcValueDestroy_db);
extern FcBool FcFileScan_db(FcFontSet *, FcStrSet *, FcGlobalCache *, FcBlanks *, const FcChar8 *, FcBool);
CheckInterfacedef(FcFileScan,FcFileScan_db);
extern FcFontSet * FcFontSetSort_db(FcConfig *, FcFontSet * *, int, FcPattern *, FcBool, FcCharSet * *, FcResult *);
CheckInterfacedef(FcFontSetSort,FcFontSetSort_db);
extern FcResult FcPatternGetString_db(const FcPattern *, const char *, int, FcChar8 * *);
CheckInterfacedef(FcPatternGetString,FcPatternGetString_db);
extern FcChar8 * FcStrCopy_db(const FcChar8 *);
CheckInterfacedef(FcStrCopy,FcStrCopy_db);
extern FcBool FcPatternEqualSubset_db(const FcPattern *, const FcPattern *, const FcObjectSet *);
CheckInterfacedef(FcPatternEqualSubset,FcPatternEqualSubset_db);
extern FcConfig * FcInitLoadConfig_db(void);
CheckInterfacedef(FcInitLoadConfig,FcInitLoadConfig_db);
extern FcStrList * FcStrListCreate_db(FcStrSet *);
CheckInterfacedef(FcStrListCreate,FcStrListCreate_db);
extern FcResult FcPatternGetCharSet_db(const FcPattern *, const char *, int, FcCharSet * *);
CheckInterfacedef(FcPatternGetCharSet,FcPatternGetCharSet_db);
extern FcPattern * FcPatternCreate_db(void);
CheckInterfacedef(FcPatternCreate,FcPatternCreate_db);
extern FcChar32 FcPatternHash_db(const FcPattern *);
CheckInterfacedef(FcPatternHash,FcPatternHash_db);
extern FcChar8 * FcConfigFilename_db(const FcChar8 *);
CheckInterfacedef(FcConfigFilename,FcConfigFilename_db);
extern FcBool FcPatternDel_db(FcPattern *, const char *);
CheckInterfacedef(FcPatternDel,FcPatternDel_db);
extern FcCharSet * FcCharSetCopy_db(FcCharSet *);
CheckInterfacedef(FcCharSetCopy,FcCharSetCopy_db);
extern FcBool FcInitReinitialize_db(void);
CheckInterfacedef(FcInitReinitialize,FcInitReinitialize_db);
extern FcFontSet * FcFontList_db(FcConfig *, FcPattern *, FcObjectSet *);
CheckInterfacedef(FcFontList,FcFontList_db);
extern int FcUcs4ToUtf8_db(FcChar32, FcChar8 *);
CheckInterfacedef(FcUcs4ToUtf8,FcUcs4ToUtf8_db);
extern FcBool FcAtomicReplaceOrig_db(FcAtomic *);
CheckInterfacedef(FcAtomicReplaceOrig,FcAtomicReplaceOrig_db);
extern FcObjectSet * FcObjectSetVaBuild_db(const char *, va_list);
CheckInterfacedef(FcObjectSetVaBuild,FcObjectSetVaBuild_db);
extern FcBool FcInitBringUptoDate_db(void);
CheckInterfacedef(FcInitBringUptoDate,FcInitBringUptoDate_db);
extern FcResult FcPatternGetDouble_db(const FcPattern *, const char *, int, double *);
CheckInterfacedef(FcPatternGetDouble,FcPatternGetDouble_db);
extern int FcStrCmp_db(const FcChar8 *, const FcChar8 *);
CheckInterfacedef(FcStrCmp,FcStrCmp_db);
extern FcChar8 * FcConfigGetCache_db(FcConfig *);
CheckInterfacedef(FcConfigGetCache,FcConfigGetCache_db);
extern FcAtomic * FcAtomicCreate_db(const FcChar8 *);
CheckInterfacedef(FcAtomicCreate,FcAtomicCreate_db);
extern FcPattern * FcPatternDuplicate_db(const FcPattern *);
CheckInterfacedef(FcPatternDuplicate,FcPatternDuplicate_db);
extern FcChar8 * FcStrDirname_db(const FcChar8 *);
CheckInterfacedef(FcStrDirname,FcStrDirname_db);
extern FcBool FcConfigSubstituteWithPat_db(FcConfig *, FcPattern *, FcPattern *, FcMatchKind);
CheckInterfacedef(FcConfigSubstituteWithPat,FcConfigSubstituteWithPat_db);
extern FcBool FcDirScan_db(FcFontSet *, FcStrSet *, FcGlobalCache *, FcBlanks *, const FcChar8 *, FcBool);
CheckInterfacedef(FcDirScan,FcDirScan_db);
extern FcChar8 * FcStrCopyFilename_db(const FcChar8 *);
CheckInterfacedef(FcStrCopyFilename,FcStrCopyFilename_db);
extern FcBool FcLangSetAdd_db(FcLangSet *, const FcChar8 *);
CheckInterfacedef(FcLangSetAdd,FcLangSetAdd_db);
extern FcResult FcPatternGetInteger_db(const FcPattern *, const char *, int, int *);
CheckInterfacedef(FcPatternGetInteger,FcPatternGetInteger_db);
extern FcBool FcConfigParseAndLoad_db(FcConfig *, const FcChar8 *, FcBool);
CheckInterfacedef(FcConfigParseAndLoad,FcConfigParseAndLoad_db);
extern FcBool FcStrSetEqual_db(FcStrSet *, FcStrSet *);
CheckInterfacedef(FcStrSetEqual,FcStrSetEqual_db);
extern FcBool FcConfigAppFontAddFile_db(FcConfig *, const FcChar8 *);
CheckInterfacedef(FcConfigAppFontAddFile,FcConfigAppFontAddFile_db);
extern FcPattern * FcFontSetMatch_db(FcConfig *, FcFontSet * *, int, FcPattern *, FcResult *);
CheckInterfacedef(FcFontSetMatch,FcFontSetMatch_db);
extern FcBool FcStrSetAddFilename_db(FcStrSet *, const FcChar8 *);
CheckInterfacedef(FcStrSetAddFilename,FcStrSetAddFilename_db);
extern FcChar8 * FcNameUnparse_db(FcPattern *);
CheckInterfacedef(FcNameUnparse,FcNameUnparse_db);
extern FcChar32 FcCharSetFirstPage_db(const FcCharSet *, FcChar32 *, FcChar32 *);
CheckInterfacedef(FcCharSetFirstPage,FcCharSetFirstPage_db);
extern void FcFontSetPrint_db(const FcFontSet *);
CheckInterfacedef(FcFontSetPrint,FcFontSetPrint_db);
extern FcPattern * FcPatternVaBuild_db(FcPattern *, va_list);
CheckInterfacedef(FcPatternVaBuild,FcPatternVaBuild_db);
extern FcChar8 * FcConfigHome_db(void);
CheckInterfacedef(FcConfigHome,FcConfigHome_db);
extern FcBool FcBlanksAdd_db(FcBlanks *, FcChar32);
CheckInterfacedef(FcBlanksAdd,FcBlanksAdd_db);
extern FcBool FcBlanksIsMember_db(FcBlanks *, FcChar32);
CheckInterfacedef(FcBlanksIsMember,FcBlanksIsMember_db);
extern FcBool FcNameUnregisterObjectTypes_db(const FcObjectType *, int);
CheckInterfacedef(FcNameUnregisterObjectTypes,FcNameUnregisterObjectTypes_db);
extern FcLangResult FcLangSetHasLang_db(const FcLangSet *, const FcChar8 *);
CheckInterfacedef(FcLangSetHasLang,FcLangSetHasLang_db);
extern FcChar8 * FcStrBasename_db(const FcChar8 *);
CheckInterfacedef(FcStrBasename,FcStrBasename_db);
extern FcPattern * FcFontMatch_db(FcConfig *, FcPattern *, FcResult *);
CheckInterfacedef(FcFontMatch,FcFontMatch_db);
extern void FcValuePrint_db(const FcValue);
CheckInterfacedef(FcValuePrint,FcValuePrint_db);
extern FcLangSet * FcLangSetCreate_db(void);
CheckInterfacedef(FcLangSetCreate,FcLangSetCreate_db);
extern FcStrList * FcConfigGetFontDirs_db(FcConfig *);
CheckInterfacedef(FcConfigGetFontDirs,FcConfigGetFontDirs_db);
extern FcBool FcCharSetAddChar_db(FcCharSet *, FcChar32);
CheckInterfacedef(FcCharSetAddChar,FcCharSetAddChar_db);
extern FcCharSet * FcCharSetIntersect_db(const FcCharSet *, const FcCharSet *);
CheckInterfacedef(FcCharSetIntersect,FcCharSetIntersect_db);
extern void FcMatrixScale_db(FcMatrix *, double, double);
CheckInterfacedef(FcMatrixScale,FcMatrixScale_db);
extern void FcPatternReference_db(FcPattern *);
CheckInterfacedef(FcPatternReference,FcPatternReference_db);
extern FcBool FcCharSetEqual_db(const FcCharSet *, const FcCharSet *);
CheckInterfacedef(FcCharSetEqual,FcCharSetEqual_db);
extern FcBool FcFontSetAdd_db(FcFontSet *, FcPattern *);
CheckInterfacedef(FcFontSetAdd,FcFontSetAdd_db);
extern FcChar8 * FcAtomicNewFile_db(FcAtomic *);
CheckInterfacedef(FcAtomicNewFile,FcAtomicNewFile_db);
extern FcFontSet * FcFontSetList_db(FcConfig *, FcFontSet * *, int, FcPattern *, FcObjectSet *);
CheckInterfacedef(FcFontSetList,FcFontSetList_db);
extern void FcFontSetSortDestroy_db(FcFontSet *);
CheckInterfacedef(FcFontSetSortDestroy,FcFontSetSortDestroy_db);
extern FcBool FcPatternAddMatrix_db(FcPattern *, const char *, const FcMatrix *);
CheckInterfacedef(FcPatternAddMatrix,FcPatternAddMatrix_db);
extern FcChar32 FcCharSetCount_db(const FcCharSet *);
CheckInterfacedef(FcCharSetCount,FcCharSetCount_db);
extern FcBool FcPatternAddString_db(FcPattern *, const char *, const FcChar8 *);
CheckInterfacedef(FcPatternAddString,FcPatternAddString_db);
extern void FcStrSetDestroy_db(FcStrSet *);
CheckInterfacedef(FcStrSetDestroy,FcStrSetDestroy_db);
extern FcConfig * FcConfigGetCurrent_db(void);
CheckInterfacedef(FcConfigGetCurrent,FcConfigGetCurrent_db);
extern FcBool FcPatternAddInteger_db(FcPattern *, const char *, int);
CheckInterfacedef(FcPatternAddInteger,FcPatternAddInteger_db);
extern FcResult FcPatternGetMatrix_db(const FcPattern *, const char *, int, FcMatrix * *);
CheckInterfacedef(FcPatternGetMatrix,FcPatternGetMatrix_db);
extern int FcGetVersion_db(void);
CheckInterfacedef(FcGetVersion,FcGetVersion_db);
extern FcBool FcCharSetHasChar_db(const FcCharSet *, FcChar32);
CheckInterfacedef(FcCharSetHasChar,FcCharSetHasChar_db);
extern FcBool FcPatternAddBool_db(FcPattern *, const char *, FcBool);
CheckInterfacedef(FcPatternAddBool,FcPatternAddBool_db);
extern const FcObjectType * FcNameGetObjectType_db(const char *);
CheckInterfacedef(FcNameGetObjectType,FcNameGetObjectType_db);
extern FcBool FcDirCacheValid_db(const FcChar8 *);
CheckInterfacedef(FcDirCacheValid,FcDirCacheValid_db);
extern FcBool FcUtf8Len_db(const FcChar8 *, int, int *, int *);
CheckInterfacedef(FcUtf8Len,FcUtf8Len_db);
extern FcConfig * FcInitLoadConfigAndFonts_db(void);
CheckInterfacedef(FcInitLoadConfigAndFonts,FcInitLoadConfigAndFonts_db);
extern FcResult FcPatternGetBool_db(const FcPattern *, const char *, int, FcBool *);
CheckInterfacedef(FcPatternGetBool,FcPatternGetBool_db);
extern void FcFontSetDestroy_db(FcFontSet *);
CheckInterfacedef(FcFontSetDestroy,FcFontSetDestroy_db);
extern FcBool FcConfigAppFontAddDir_db(FcConfig *, const FcChar8 *);
CheckInterfacedef(FcConfigAppFontAddDir,FcConfigAppFontAddDir_db);
extern int FcUtf16ToUcs4_db(const FcChar8 *, FcEndian, FcChar32 *, int);
CheckInterfacedef(FcUtf16ToUcs4,FcUtf16ToUcs4_db);
extern int FcUtf8ToUcs4_db(const FcChar8 *, FcChar32 *, int);
CheckInterfacedef(FcUtf8ToUcs4,FcUtf8ToUcs4_db);
extern FcFontSet * FcFontSetCreate_db(void);
CheckInterfacedef(FcFontSetCreate,FcFontSetCreate_db);
extern FcBool FcDirSave_db(FcFontSet *, FcStrSet *, const FcChar8 *);
CheckInterfacedef(FcDirSave,FcDirSave_db);
extern void FcConfigDestroy_db(FcConfig *);
CheckInterfacedef(FcConfigDestroy,FcConfigDestroy_db);
extern FcBool FcPatternAddDouble_db(FcPattern *, const char *, double);
CheckInterfacedef(FcPatternAddDouble,FcPatternAddDouble_db);
extern FcFontSet * FcFontSort_db(FcConfig *, FcPattern *, FcBool, FcCharSet * *, FcResult *);
CheckInterfacedef(FcFontSort,FcFontSort_db);
extern FcPattern * FcFontRenderPrepare_db(FcConfig *, FcPattern *, FcPattern *);
CheckInterfacedef(FcFontRenderPrepare,FcFontRenderPrepare_db);
extern void FcLangSetDestroy_db(FcLangSet *);
CheckInterfacedef(FcLangSetDestroy,FcLangSetDestroy_db);
extern void FcCharSetDestroy_db(FcCharSet *);
CheckInterfacedef(FcCharSetDestroy,FcCharSetDestroy_db);
extern FcBool FcValueEqual_db(FcValue, FcValue);
CheckInterfacedef(FcValueEqual,FcValueEqual_db);
extern FcBool FcPatternAddWeak_db(FcPattern *, const char *, FcValue, FcBool);
CheckInterfacedef(FcPatternAddWeak,FcPatternAddWeak_db);
extern FcBool FcLangSetContains_db(const FcLangSet *, const FcLangSet *);
CheckInterfacedef(FcLangSetContains,FcLangSetContains_db);
extern void FcObjectSetDestroy_db(FcObjectSet *);
CheckInterfacedef(FcObjectSetDestroy,FcObjectSetDestroy_db);
extern FcCharSet * FcCharSetCreate_db(void);
CheckInterfacedef(FcCharSetCreate,FcCharSetCreate_db);
extern FcLangResult FcLangSetCompare_db(const FcLangSet *, const FcLangSet *);
CheckInterfacedef(FcLangSetCompare,FcLangSetCompare_db);
extern FcBool FcMatrixEqual_db(const FcMatrix *, const FcMatrix *);
CheckInterfacedef(FcMatrixEqual,FcMatrixEqual_db);
extern void FcAtomicUnlock_db(FcAtomic *);
CheckInterfacedef(FcAtomicUnlock,FcAtomicUnlock_db);
extern FcBool FcStrSetMember_db(FcStrSet *, const FcChar8 *);
CheckInterfacedef(FcStrSetMember,FcStrSetMember_db);
extern FcChar32 FcLangSetHash_db(const FcLangSet *);
CheckInterfacedef(FcLangSetHash,FcLangSetHash_db);
extern void FcAtomicDeleteNew_db(FcAtomic *);
CheckInterfacedef(FcAtomicDeleteNew,FcAtomicDeleteNew_db);
extern FcCharSet * FcCharSetSubtract_db(const FcCharSet *, const FcCharSet *);
CheckInterfacedef(FcCharSetSubtract,FcCharSetSubtract_db);
extern FcBool FcInit_db(void);
CheckInterfacedef(FcInit,FcInit_db);
extern FcResult FcPatternGet_db(const FcPattern *, const char *, int, FcValue *);
CheckInterfacedef(FcPatternGet,FcPatternGet_db);
extern void FcPatternPrint_db(const FcPattern *);
CheckInterfacedef(FcPatternPrint,FcPatternPrint_db);
extern FcBlanks * FcConfigGetBlanks_db(FcConfig *);
CheckInterfacedef(FcConfigGetBlanks,FcConfigGetBlanks_db);
extern void FcFini_db(void);
CheckInterfacedef(FcFini,FcFini_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in fontconfig/fontconfig.h\n\n",pcnt,cnt);
return cnt;
#endif

}
