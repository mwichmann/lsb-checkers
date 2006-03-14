/*
 * Test of fontconfig/fontconfig.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
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
#ifdef TET_TEST
Msg("Checking data structures in fontconfig/fontconfig.h\n");
#endif

printf("Checking data structures in fontconfig/fontconfig.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef FC_MAJOR
	CompareConstant(FC_MAJOR,2,5314,architecture)
#else
Msg( "Error: Constant not found: FC_MAJOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_MINOR
	CompareConstant(FC_MINOR,3,5315,architecture)
#else
Msg( "Error: Constant not found: FC_MINOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_REVISION
	CompareConstant(FC_REVISION,2,5316,architecture)
#else
Msg( "Error: Constant not found: FC_REVISION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_VERSION
	CompareConstant(FC_VERSION,((FC_MAJOR * 10000) + (FC_MINOR * 100) + (FC_REVISION)),5317,architecture)
#else
Msg( "Error: Constant not found: FC_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_CACHE_VERSION
	CompareStringConstant(FC_CACHE_VERSION,"1")
#else
Msg( "Error: Constant not found: FC_CACHE_VERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FcTrue
	CompareConstant(FcTrue,1,5319,architecture)
#else
Msg( "Error: Constant not found: FcTrue\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FcFalse
	CompareConstant(FcFalse,0,5320,architecture)
#else
Msg( "Error: Constant not found: FcFalse\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FAMILY
	CompareStringConstant(FC_FAMILY,"family")
#else
Msg( "Error: Constant not found: FC_FAMILY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_STYLE
	CompareStringConstant(FC_STYLE,"style")
#else
Msg( "Error: Constant not found: FC_STYLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SLANT
	CompareStringConstant(FC_SLANT,"slant")
#else
Msg( "Error: Constant not found: FC_SLANT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT
	CompareStringConstant(FC_WEIGHT,"weight")
#else
Msg( "Error: Constant not found: FC_WEIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SIZE
	CompareStringConstant(FC_SIZE,"size")
#else
Msg( "Error: Constant not found: FC_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_ASPECT
	CompareStringConstant(FC_ASPECT,"aspect")
#else
Msg( "Error: Constant not found: FC_ASPECT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_PIXEL_SIZE
	CompareStringConstant(FC_PIXEL_SIZE,"pixelsize")
#else
Msg( "Error: Constant not found: FC_PIXEL_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SPACING
	CompareStringConstant(FC_SPACING,"spacing")
#else
Msg( "Error: Constant not found: FC_SPACING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FOUNDRY
	CompareStringConstant(FC_FOUNDRY,"foundry")
#else
Msg( "Error: Constant not found: FC_FOUNDRY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_ANTIALIAS
	CompareStringConstant(FC_ANTIALIAS,"antialias")
#else
Msg( "Error: Constant not found: FC_ANTIALIAS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_HINTING
	CompareStringConstant(FC_HINTING,"hinting")
#else
Msg( "Error: Constant not found: FC_HINTING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_HINT_STYLE
	CompareStringConstant(FC_HINT_STYLE,"hintstyle")
#else
Msg( "Error: Constant not found: FC_HINT_STYLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_VERTICAL_LAYOUT
	CompareStringConstant(FC_VERTICAL_LAYOUT,"verticallayout")
#else
Msg( "Error: Constant not found: FC_VERTICAL_LAYOUT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_AUTOHINT
	CompareStringConstant(FC_AUTOHINT,"autohint")
#else
Msg( "Error: Constant not found: FC_AUTOHINT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_GLOBAL_ADVANCE
	CompareStringConstant(FC_GLOBAL_ADVANCE,"globaladvance")
#else
Msg( "Error: Constant not found: FC_GLOBAL_ADVANCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH
	CompareStringConstant(FC_WIDTH,"width")
#else
Msg( "Error: Constant not found: FC_WIDTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FILE
	CompareStringConstant(FC_FILE,"file")
#else
Msg( "Error: Constant not found: FC_FILE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_INDEX
	CompareStringConstant(FC_INDEX,"index")
#else
Msg( "Error: Constant not found: FC_INDEX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FT_FACE
	CompareStringConstant(FC_FT_FACE,"ftface")
#else
Msg( "Error: Constant not found: FC_FT_FACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_RASTERIZER
	CompareStringConstant(FC_RASTERIZER,"rasterizer")
#else
Msg( "Error: Constant not found: FC_RASTERIZER\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_OUTLINE
	CompareStringConstant(FC_OUTLINE,"outline")
#else
Msg( "Error: Constant not found: FC_OUTLINE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SCALABLE
	CompareStringConstant(FC_SCALABLE,"scalable")
#else
Msg( "Error: Constant not found: FC_SCALABLE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SCALE
	CompareStringConstant(FC_SCALE,"scale")
#else
Msg( "Error: Constant not found: FC_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_DPI
	CompareStringConstant(FC_DPI,"dpi")
#else
Msg( "Error: Constant not found: FC_DPI\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_RGBA
	CompareStringConstant(FC_RGBA,"rgba")
#else
Msg( "Error: Constant not found: FC_RGBA\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_MINSPACE
	CompareStringConstant(FC_MINSPACE,"minspace")
#else
Msg( "Error: Constant not found: FC_MINSPACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SOURCE
	CompareStringConstant(FC_SOURCE,"source")
#else
Msg( "Error: Constant not found: FC_SOURCE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_CHARSET
	CompareStringConstant(FC_CHARSET,"charset")
#else
Msg( "Error: Constant not found: FC_CHARSET\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_LANG
	CompareStringConstant(FC_LANG,"lang")
#else
Msg( "Error: Constant not found: FC_LANG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FONTVERSION
	CompareStringConstant(FC_FONTVERSION,"fontversion")
#else
Msg( "Error: Constant not found: FC_FONTVERSION\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FULLNAME
	CompareStringConstant(FC_FULLNAME,"fullname")
#else
Msg( "Error: Constant not found: FC_FULLNAME\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FAMILYLANG
	CompareStringConstant(FC_FAMILYLANG,"familylang")
#else
Msg( "Error: Constant not found: FC_FAMILYLANG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_STYLELANG
	CompareStringConstant(FC_STYLELANG,"stylelang")
#else
Msg( "Error: Constant not found: FC_STYLELANG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FULLNAMELANG
	CompareStringConstant(FC_FULLNAMELANG,"fullnamelang")
#else
Msg( "Error: Constant not found: FC_FULLNAMELANG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_CAPABILITY
	CompareStringConstant(FC_CAPABILITY,"capability")
#else
Msg( "Error: Constant not found: FC_CAPABILITY\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_FONTFORMAT
	CompareStringConstant(FC_FONTFORMAT,"fontformat")
#else
Msg( "Error: Constant not found: FC_FONTFORMAT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_EMBOLDEN
	CompareStringConstant(FC_EMBOLDEN,"embolden")
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
	CompareStringConstant(FC_CHAR_WIDTH,"charwidth")
#else
Msg( "Error: Constant not found: FC_CHAR_WIDTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_CHAR_HEIGHT
	CompareStringConstant(FC_CHAR_HEIGHT,"charheight")
#else
Msg( "Error: Constant not found: FC_CHAR_HEIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_MATRIX
	CompareStringConstant(FC_MATRIX,"matrix")
#else
Msg( "Error: Constant not found: FC_MATRIX\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_THIN
	CompareConstant(FC_WEIGHT_THIN,0,5363,architecture)
#else
Msg( "Error: Constant not found: FC_WEIGHT_THIN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_EXTRALIGHT
	CompareConstant(FC_WEIGHT_EXTRALIGHT,40,5364,architecture)
#else
Msg( "Error: Constant not found: FC_WEIGHT_EXTRALIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for FC_WEIGHT_ULTRALIGHT */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_LIGHT
	CompareConstant(FC_WEIGHT_LIGHT,50,5366,architecture)
#else
Msg( "Error: Constant not found: FC_WEIGHT_LIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_BOOK
	CompareConstant(FC_WEIGHT_BOOK,75,5367,architecture)
#else
Msg( "Error: Constant not found: FC_WEIGHT_BOOK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_REGULAR
	CompareConstant(FC_WEIGHT_REGULAR,80,5368,architecture)
#else
Msg( "Error: Constant not found: FC_WEIGHT_REGULAR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for FC_WEIGHT_NORMAL */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_MEDIUM
	CompareConstant(FC_WEIGHT_MEDIUM,100,5370,architecture)
#else
Msg( "Error: Constant not found: FC_WEIGHT_MEDIUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_DEMIBOLD
	CompareConstant(FC_WEIGHT_DEMIBOLD,180,5371,architecture)
#else
Msg( "Error: Constant not found: FC_WEIGHT_DEMIBOLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for FC_WEIGHT_SEMIBOLD */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_BOLD
	CompareConstant(FC_WEIGHT_BOLD,200,5373,architecture)
#else
Msg( "Error: Constant not found: FC_WEIGHT_BOLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_EXTRABOLD
	CompareConstant(FC_WEIGHT_EXTRABOLD,205,5374,architecture)
#else
Msg( "Error: Constant not found: FC_WEIGHT_EXTRABOLD\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for FC_WEIGHT_ULTRABOLD */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WEIGHT_BLACK
	CompareConstant(FC_WEIGHT_BLACK,210,5376,architecture)
#else
Msg( "Error: Constant not found: FC_WEIGHT_BLACK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for FC_WEIGHT_HEAVY */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SLANT_ROMAN
	CompareConstant(FC_SLANT_ROMAN,0,5378,architecture)
#else
Msg( "Error: Constant not found: FC_SLANT_ROMAN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SLANT_ITALIC
	CompareConstant(FC_SLANT_ITALIC,100,5379,architecture)
#else
Msg( "Error: Constant not found: FC_SLANT_ITALIC\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_SLANT_OBLIQUE
	CompareConstant(FC_SLANT_OBLIQUE,110,5380,architecture)
#else
Msg( "Error: Constant not found: FC_SLANT_OBLIQUE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_ULTRACONDENSED
	CompareConstant(FC_WIDTH_ULTRACONDENSED,50,5381,architecture)
#else
Msg( "Error: Constant not found: FC_WIDTH_ULTRACONDENSED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_EXTRACONDENSED
	CompareConstant(FC_WIDTH_EXTRACONDENSED,63,5382,architecture)
#else
Msg( "Error: Constant not found: FC_WIDTH_EXTRACONDENSED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_CONDENSED
	CompareConstant(FC_WIDTH_CONDENSED,75,5383,architecture)
#else
Msg( "Error: Constant not found: FC_WIDTH_CONDENSED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_SEMICONDENSED
	CompareConstant(FC_WIDTH_SEMICONDENSED,87,5384,architecture)
#else
Msg( "Error: Constant not found: FC_WIDTH_SEMICONDENSED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_NORMAL
	CompareConstant(FC_WIDTH_NORMAL,100,5385,architecture)
#else
Msg( "Error: Constant not found: FC_WIDTH_NORMAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_SEMIEXPANDED
	CompareConstant(FC_WIDTH_SEMIEXPANDED,113,5386,architecture)
#else
Msg( "Error: Constant not found: FC_WIDTH_SEMIEXPANDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_EXPANDED
	CompareConstant(FC_WIDTH_EXPANDED,125,5387,architecture)
#else
Msg( "Error: Constant not found: FC_WIDTH_EXPANDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_EXTRAEXPANDED
	CompareConstant(FC_WIDTH_EXTRAEXPANDED,150,5388,architecture)
#else
Msg( "Error: Constant not found: FC_WIDTH_EXTRAEXPANDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_WIDTH_ULTRAEXPANDED
	CompareConstant(FC_WIDTH_ULTRAEXPANDED,200,5389,architecture)
#else
Msg( "Error: Constant not found: FC_WIDTH_ULTRAEXPANDED\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_PROPORTIONAL
	CompareConstant(FC_PROPORTIONAL,0,5390,architecture)
#else
Msg( "Error: Constant not found: FC_PROPORTIONAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_DUAL
	CompareConstant(FC_DUAL,90,5391,architecture)
#else
Msg( "Error: Constant not found: FC_DUAL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_MONO
	CompareConstant(FC_MONO,100,5392,architecture)
#else
Msg( "Error: Constant not found: FC_MONO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_CHARCELL
	CompareConstant(FC_CHARCELL,110,5393,architecture)
#else
Msg( "Error: Constant not found: FC_CHARCELL\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_RGBA_UNKNOWN
	CompareConstant(FC_RGBA_UNKNOWN,0,5394,architecture)
#else
Msg( "Error: Constant not found: FC_RGBA_UNKNOWN\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_RGBA_RGB
	CompareConstant(FC_RGBA_RGB,1,5395,architecture)
#else
Msg( "Error: Constant not found: FC_RGBA_RGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_RGBA_BGR
	CompareConstant(FC_RGBA_BGR,2,5396,architecture)
#else
Msg( "Error: Constant not found: FC_RGBA_BGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_RGBA_VRGB
	CompareConstant(FC_RGBA_VRGB,3,5397,architecture)
#else
Msg( "Error: Constant not found: FC_RGBA_VRGB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_RGBA_VBGR
	CompareConstant(FC_RGBA_VBGR,4,5398,architecture)
#else
Msg( "Error: Constant not found: FC_RGBA_VBGR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_RGBA_NONE
	CompareConstant(FC_RGBA_NONE,5,5399,architecture)
#else
Msg( "Error: Constant not found: FC_RGBA_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_HINT_NONE
	CompareConstant(FC_HINT_NONE,0,5400,architecture)
#else
Msg( "Error: Constant not found: FC_HINT_NONE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_HINT_SLIGHT
	CompareConstant(FC_HINT_SLIGHT,1,5401,architecture)
#else
Msg( "Error: Constant not found: FC_HINT_SLIGHT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_HINT_MEDIUM
	CompareConstant(FC_HINT_MEDIUM,2,5402,architecture)
#else
Msg( "Error: Constant not found: FC_HINT_MEDIUM\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_HINT_FULL
	CompareConstant(FC_HINT_FULL,3,5403,architecture)
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
	CompareConstant(FC_CHARSET_MAP_SIZE,(256/32),5407,architecture)
#else
Msg( "Error: Constant not found: FC_CHARSET_MAP_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FC_CHARSET_DONE
	CompareConstant(FC_CHARSET_DONE,((FcChar32) -1),5408,architecture)
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
	CompareConstant(FC_UTF8_MAX_LEN,6,5412,architecture)
#else
Msg( "Error: Constant not found: FC_UTF8_MAX_LEN\n");
cnt++;
#endif

#endif

#if __i386__
CheckTypeSize(FcBool,4, 11078, 2)
#elif __x86_64__
CheckTypeSize(FcBool,4, 11078, 11)
#elif __ia64__
CheckTypeSize(FcBool,4, 11078, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcBool,4, 11078, 6)
#elif __powerpc64__
CheckTypeSize(FcBool,4, 11078, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcBool,4, 11078, 10)
#elif __s390x__
CheckTypeSize(FcBool,4, 11078, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11078,0);
Msg("Find size of FcBool (11078)\n");
#endif

#if __i386__
CheckTypeSize(FcPattern,0, 11080, 2)
#elif __x86_64__
CheckTypeSize(FcPattern,0, 11080, 11)
#elif __ia64__
CheckTypeSize(FcPattern,0, 11080, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcPattern,0, 11080, 6)
#elif __powerpc64__
CheckTypeSize(FcPattern,0, 11080, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcPattern,0, 11080, 10)
#elif __s390x__
CheckTypeSize(FcPattern,0, 11080, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11080,0);
Msg("Find size of FcPattern (11080)\n");
#endif

#if __i386__
CheckTypeSize(FcPattern *,4, 11081, 2)
#elif __x86_64__
CheckTypeSize(FcPattern *,8, 11081, 11)
#elif __ia64__
CheckTypeSize(FcPattern *,8, 11081, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcPattern *,4, 11081, 6)
#elif __powerpc64__
CheckTypeSize(FcPattern *,8, 11081, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcPattern *,4, 11081, 10)
#elif __s390x__
CheckTypeSize(FcPattern *,8, 11081, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11081,0);
Msg("Find size of FcPattern * (11081)\n");
#endif

#if __i386__
CheckTypeSize(struct _FcValue,12, 11082, 2)
CheckMemberSize(struct _FcValue,u,8,2,40935)
CheckOffset(struct _FcValue,u,4,2,40935)
#elif __x86_64__
CheckTypeSize(struct _FcValue,16, 11082, 11)
CheckMemberSize(struct _FcValue,u,8,11,40935)
CheckOffset(struct _FcValue,u,8,11,40935)
#elif __ia64__
CheckTypeSize(struct _FcValue,16, 11082, 3)
CheckMemberSize(struct _FcValue,u,8,3,40935)
CheckOffset(struct _FcValue,u,8,3,40935)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _FcValue,16, 11082, 6)
CheckMemberSize(struct _FcValue,u,8,6,40935)
CheckOffset(struct _FcValue,u,8,6,40935)
#elif __powerpc64__
CheckTypeSize(struct _FcValue,16, 11082, 9)
CheckMemberSize(struct _FcValue,u,8,9,40935)
CheckOffset(struct _FcValue,u,8,9,40935)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _FcValue,16, 11082, 10)
CheckMemberSize(struct _FcValue,u,8,10,40935)
CheckOffset(struct _FcValue,u,8,10,40935)
#elif __s390x__
CheckTypeSize(struct _FcValue,16, 11082, 12)
CheckMemberSize(struct _FcValue,u,8,12,40935)
CheckOffset(struct _FcValue,u,8,12,40935)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11082,0);
Msg("Find size of _FcValue (11082)\n");
#endif

#if __i386__
CheckEnum("FcTypeVoid",FcTypeVoid,0,40912);
CheckEnum("FcTypeInteger",FcTypeInteger,1,40913);
CheckEnum("FcTypeDouble",FcTypeDouble,2,40914);
CheckEnum("FcTypeString",FcTypeString,3,40915);
CheckEnum("FcTypeBool",FcTypeBool,4,40916);
CheckEnum("FcTypeMatrix",FcTypeMatrix,5,40917);
CheckEnum("FcTypeCharSet",FcTypeCharSet,6,40918);
CheckEnum("FcTypeFTFace",FcTypeFTFace,7,40919);
CheckEnum("FcTypeLangSet",FcTypeLangSet,8,40920);
#elif __x86_64__
CheckEnum("FcTypeVoid",FcTypeVoid,0,40912);
CheckEnum("FcTypeInteger",FcTypeInteger,1,40913);
CheckEnum("FcTypeDouble",FcTypeDouble,2,40914);
CheckEnum("FcTypeString",FcTypeString,3,40915);
CheckEnum("FcTypeBool",FcTypeBool,4,40916);
CheckEnum("FcTypeMatrix",FcTypeMatrix,5,40917);
CheckEnum("FcTypeCharSet",FcTypeCharSet,6,40918);
CheckEnum("FcTypeFTFace",FcTypeFTFace,7,40919);
CheckEnum("FcTypeLangSet",FcTypeLangSet,8,40920);
#elif __ia64__
CheckEnum("FcTypeVoid",FcTypeVoid,0,40912);
CheckEnum("FcTypeInteger",FcTypeInteger,1,40913);
CheckEnum("FcTypeDouble",FcTypeDouble,2,40914);
CheckEnum("FcTypeString",FcTypeString,3,40915);
CheckEnum("FcTypeBool",FcTypeBool,4,40916);
CheckEnum("FcTypeMatrix",FcTypeMatrix,5,40917);
CheckEnum("FcTypeCharSet",FcTypeCharSet,6,40918);
CheckEnum("FcTypeFTFace",FcTypeFTFace,7,40919);
CheckEnum("FcTypeLangSet",FcTypeLangSet,8,40920);
#elif __powerpc__ && !__powerpc64__
CheckEnum("FcTypeVoid",FcTypeVoid,0,40912);
CheckEnum("FcTypeInteger",FcTypeInteger,1,40913);
CheckEnum("FcTypeDouble",FcTypeDouble,2,40914);
CheckEnum("FcTypeString",FcTypeString,3,40915);
CheckEnum("FcTypeBool",FcTypeBool,4,40916);
CheckEnum("FcTypeMatrix",FcTypeMatrix,5,40917);
CheckEnum("FcTypeCharSet",FcTypeCharSet,6,40918);
CheckEnum("FcTypeFTFace",FcTypeFTFace,7,40919);
CheckEnum("FcTypeLangSet",FcTypeLangSet,8,40920);
#elif __powerpc64__
CheckEnum("FcTypeVoid",FcTypeVoid,0,40912);
CheckEnum("FcTypeInteger",FcTypeInteger,1,40913);
CheckEnum("FcTypeDouble",FcTypeDouble,2,40914);
CheckEnum("FcTypeString",FcTypeString,3,40915);
CheckEnum("FcTypeBool",FcTypeBool,4,40916);
CheckEnum("FcTypeMatrix",FcTypeMatrix,5,40917);
CheckEnum("FcTypeCharSet",FcTypeCharSet,6,40918);
CheckEnum("FcTypeFTFace",FcTypeFTFace,7,40919);
CheckEnum("FcTypeLangSet",FcTypeLangSet,8,40920);
#elif __s390__ && !__s390x__
CheckEnum("FcTypeVoid",FcTypeVoid,0,40912);
CheckEnum("FcTypeInteger",FcTypeInteger,1,40913);
CheckEnum("FcTypeDouble",FcTypeDouble,2,40914);
CheckEnum("FcTypeString",FcTypeString,3,40915);
CheckEnum("FcTypeBool",FcTypeBool,4,40916);
CheckEnum("FcTypeMatrix",FcTypeMatrix,5,40917);
CheckEnum("FcTypeCharSet",FcTypeCharSet,6,40918);
CheckEnum("FcTypeFTFace",FcTypeFTFace,7,40919);
CheckEnum("FcTypeLangSet",FcTypeLangSet,8,40920);
#elif __s390x__
CheckEnum("FcTypeVoid",FcTypeVoid,0,40912);
CheckEnum("FcTypeInteger",FcTypeInteger,1,40913);
CheckEnum("FcTypeDouble",FcTypeDouble,2,40914);
CheckEnum("FcTypeString",FcTypeString,3,40915);
CheckEnum("FcTypeBool",FcTypeBool,4,40916);
CheckEnum("FcTypeMatrix",FcTypeMatrix,5,40917);
CheckEnum("FcTypeCharSet",FcTypeCharSet,6,40918);
CheckEnum("FcTypeFTFace",FcTypeFTFace,7,40919);
CheckEnum("FcTypeLangSet",FcTypeLangSet,8,40920);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11083,0);
Msg("Find size of _FcType (11083)\n");
#endif

#if __i386__
CheckTypeSize(FcType,4, 11084, 2)
#elif __x86_64__
CheckTypeSize(FcType,4, 11084, 11)
#elif __ia64__
CheckTypeSize(FcType,4, 11084, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcType,4, 11084, 6)
#elif __powerpc64__
CheckTypeSize(FcType,4, 11084, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcType,4, 11084, 10)
#elif __s390x__
CheckTypeSize(FcType,4, 11084, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11084,0);
Msg("Find size of FcType (11084)\n");
#endif

#if __i386__
CheckTypeSize(FcChar8,1, 11085, 2)
#elif __x86_64__
CheckTypeSize(FcChar8,1, 11085, 11)
#elif __ia64__
CheckTypeSize(FcChar8,1, 11085, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcChar8,1, 11085, 6)
#elif __powerpc64__
CheckTypeSize(FcChar8,1, 11085, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcChar8,1, 11085, 10)
#elif __s390x__
CheckTypeSize(FcChar8,1, 11085, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11085,0);
Msg("Find size of FcChar8 (11085)\n");
#endif

#if __i386__
CheckTypeSize(const FcChar8,1, 11086, 2)
#elif __x86_64__
CheckTypeSize(const FcChar8,1, 11086, 11)
#elif __ia64__
CheckTypeSize(const FcChar8,1, 11086, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const FcChar8,1, 11086, 6)
#elif __powerpc64__
CheckTypeSize(const FcChar8,1, 11086, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const FcChar8,1, 11086, 10)
#elif __s390x__
CheckTypeSize(const FcChar8,1, 11086, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11086,0);
Msg("Find size of const FcChar8 (11086)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11087,0);
Msg("Find size of const FcChar8 * (11087)\n");
#endif

#if __i386__
CheckTypeSize(struct _FcMatrix,32, 11088, 2)
CheckMemberSize(struct _FcMatrix,xy,8,2,40923)
CheckOffset(struct _FcMatrix,xy,8,2,40923)
CheckMemberSize(struct _FcMatrix,yx,8,2,40924)
CheckOffset(struct _FcMatrix,yx,16,2,40924)
CheckMemberSize(struct _FcMatrix,yy,8,2,40925)
CheckOffset(struct _FcMatrix,yy,24,2,40925)
#elif __x86_64__
CheckTypeSize(struct _FcMatrix,32, 11088, 11)
CheckMemberSize(struct _FcMatrix,xy,8,11,40923)
CheckOffset(struct _FcMatrix,xy,8,11,40923)
CheckMemberSize(struct _FcMatrix,yx,8,11,40924)
CheckOffset(struct _FcMatrix,yx,16,11,40924)
CheckMemberSize(struct _FcMatrix,yy,8,11,40925)
CheckOffset(struct _FcMatrix,yy,24,11,40925)
#elif __ia64__
CheckTypeSize(struct _FcMatrix,32, 11088, 3)
CheckMemberSize(struct _FcMatrix,xy,8,3,40923)
CheckOffset(struct _FcMatrix,xy,8,3,40923)
CheckMemberSize(struct _FcMatrix,yx,8,3,40924)
CheckOffset(struct _FcMatrix,yx,16,3,40924)
CheckMemberSize(struct _FcMatrix,yy,8,3,40925)
CheckOffset(struct _FcMatrix,yy,24,3,40925)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _FcMatrix,32, 11088, 6)
CheckMemberSize(struct _FcMatrix,xy,8,6,40923)
CheckOffset(struct _FcMatrix,xy,8,6,40923)
CheckMemberSize(struct _FcMatrix,yx,8,6,40924)
CheckOffset(struct _FcMatrix,yx,16,6,40924)
CheckMemberSize(struct _FcMatrix,yy,8,6,40925)
CheckOffset(struct _FcMatrix,yy,24,6,40925)
#elif __powerpc64__
CheckTypeSize(struct _FcMatrix,32, 11088, 9)
CheckMemberSize(struct _FcMatrix,xy,8,9,40923)
CheckOffset(struct _FcMatrix,xy,8,9,40923)
CheckMemberSize(struct _FcMatrix,yx,8,9,40924)
CheckOffset(struct _FcMatrix,yx,16,9,40924)
CheckMemberSize(struct _FcMatrix,yy,8,9,40925)
CheckOffset(struct _FcMatrix,yy,24,9,40925)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _FcMatrix,32, 11088, 10)
CheckMemberSize(struct _FcMatrix,xy,8,10,40923)
CheckOffset(struct _FcMatrix,xy,8,10,40923)
CheckMemberSize(struct _FcMatrix,yx,8,10,40924)
CheckOffset(struct _FcMatrix,yx,16,10,40924)
CheckMemberSize(struct _FcMatrix,yy,8,10,40925)
CheckOffset(struct _FcMatrix,yy,24,10,40925)
#elif __s390x__
CheckTypeSize(struct _FcMatrix,32, 11088, 12)
CheckMemberSize(struct _FcMatrix,xy,8,12,40923)
CheckOffset(struct _FcMatrix,xy,8,12,40923)
CheckMemberSize(struct _FcMatrix,yx,8,12,40924)
CheckOffset(struct _FcMatrix,yx,16,12,40924)
CheckMemberSize(struct _FcMatrix,yy,8,12,40925)
CheckOffset(struct _FcMatrix,yy,24,12,40925)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11088,0);
Msg("Find size of _FcMatrix (11088)\n");
#endif

#if __i386__
CheckTypeSize(FcMatrix,32, 11089, 2)
#elif __x86_64__
CheckTypeSize(FcMatrix,32, 11089, 11)
#elif __ia64__
CheckTypeSize(FcMatrix,32, 11089, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcMatrix,32, 11089, 6)
#elif __powerpc64__
CheckTypeSize(FcMatrix,32, 11089, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcMatrix,32, 11089, 10)
#elif __s390x__
CheckTypeSize(FcMatrix,32, 11089, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11089,0);
Msg("Find size of FcMatrix (11089)\n");
#endif

#if __i386__
CheckTypeSize(const FcMatrix,32, 11090, 2)
#elif __x86_64__
CheckTypeSize(const FcMatrix,32, 11090, 11)
#elif __ia64__
CheckTypeSize(const FcMatrix,32, 11090, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const FcMatrix,32, 11090, 6)
#elif __powerpc64__
CheckTypeSize(const FcMatrix,32, 11090, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const FcMatrix,32, 11090, 10)
#elif __s390x__
CheckTypeSize(const FcMatrix,32, 11090, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11090,0);
Msg("Find size of const FcMatrix (11090)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11091,0);
Msg("Find size of const FcMatrix * (11091)\n");
#endif

#if __i386__
CheckTypeSize(FcCharSet,0, 11093, 2)
#elif __x86_64__
CheckTypeSize(FcCharSet,0, 11093, 11)
#elif __ia64__
CheckTypeSize(FcCharSet,0, 11093, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcCharSet,0, 11093, 6)
#elif __powerpc64__
CheckTypeSize(FcCharSet,0, 11093, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcCharSet,0, 11093, 10)
#elif __s390x__
CheckTypeSize(FcCharSet,0, 11093, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11093,0);
Msg("Find size of FcCharSet (11093)\n");
#endif

#if __i386__
CheckTypeSize(const FcCharSet,0, 11094, 2)
#elif __x86_64__
CheckTypeSize(const FcCharSet,0, 11094, 11)
#elif __ia64__
CheckTypeSize(const FcCharSet,0, 11094, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const FcCharSet,0, 11094, 6)
#elif __powerpc64__
CheckTypeSize(const FcCharSet,0, 11094, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const FcCharSet,0, 11094, 10)
#elif __s390x__
CheckTypeSize(const FcCharSet,0, 11094, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11094,0);
Msg("Find size of const FcCharSet (11094)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11095,0);
Msg("Find size of const FcCharSet * (11095)\n");
#endif

#if __i386__
CheckTypeSize(const FcPattern,0, 11096, 2)
#elif __x86_64__
CheckTypeSize(const FcPattern,0, 11096, 11)
#elif __ia64__
CheckTypeSize(const FcPattern,0, 11096, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const FcPattern,0, 11096, 6)
#elif __powerpc64__
CheckTypeSize(const FcPattern,0, 11096, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const FcPattern,0, 11096, 10)
#elif __s390x__
CheckTypeSize(const FcPattern,0, 11096, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11096,0);
Msg("Find size of const FcPattern (11096)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11097,0);
Msg("Find size of const FcPattern * (11097)\n");
#endif

#if __i386__
CheckTypeSize(FcLangSet,0, 11099, 2)
#elif __x86_64__
CheckTypeSize(FcLangSet,0, 11099, 11)
#elif __ia64__
CheckTypeSize(FcLangSet,0, 11099, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcLangSet,0, 11099, 6)
#elif __powerpc64__
CheckTypeSize(FcLangSet,0, 11099, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcLangSet,0, 11099, 10)
#elif __s390x__
CheckTypeSize(FcLangSet,0, 11099, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11099,0);
Msg("Find size of FcLangSet (11099)\n");
#endif

#if __i386__
CheckTypeSize(const FcLangSet,0, 11100, 2)
#elif __x86_64__
CheckTypeSize(const FcLangSet,0, 11100, 11)
#elif __ia64__
CheckTypeSize(const FcLangSet,0, 11100, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const FcLangSet,0, 11100, 6)
#elif __powerpc64__
CheckTypeSize(const FcLangSet,0, 11100, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const FcLangSet,0, 11100, 10)
#elif __s390x__
CheckTypeSize(const FcLangSet,0, 11100, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11100,0);
Msg("Find size of const FcLangSet (11100)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11101,0);
Msg("Find size of const FcLangSet * (11101)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11102,0);
Msg("Find size of anon-fontconfig/fontconfig.h-238 (11102)\n");
#endif

#if __i386__
CheckTypeSize(FcValue,12, 11103, 2)
#elif __x86_64__
CheckTypeSize(FcValue,16, 11103, 11)
#elif __ia64__
CheckTypeSize(FcValue,16, 11103, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcValue,16, 11103, 6)
#elif __powerpc64__
CheckTypeSize(FcValue,16, 11103, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcValue,16, 11103, 10)
#elif __s390x__
CheckTypeSize(FcValue,16, 11103, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11103,0);
Msg("Find size of FcValue (11103)\n");
#endif

#if __i386__
CheckTypeSize(FcStrList,0, 11105, 2)
#elif __x86_64__
CheckTypeSize(FcStrList,0, 11105, 11)
#elif __ia64__
CheckTypeSize(FcStrList,0, 11105, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcStrList,0, 11105, 6)
#elif __powerpc64__
CheckTypeSize(FcStrList,0, 11105, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcStrList,0, 11105, 10)
#elif __s390x__
CheckTypeSize(FcStrList,0, 11105, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11105,0);
Msg("Find size of FcStrList (11105)\n");
#endif

#if __i386__
CheckTypeSize(FcStrList *,4, 11106, 2)
#elif __x86_64__
CheckTypeSize(FcStrList *,8, 11106, 11)
#elif __ia64__
CheckTypeSize(FcStrList *,8, 11106, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcStrList *,4, 11106, 6)
#elif __powerpc64__
CheckTypeSize(FcStrList *,8, 11106, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcStrList *,4, 11106, 10)
#elif __s390x__
CheckTypeSize(FcStrList *,8, 11106, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11106,0);
Msg("Find size of FcStrList * (11106)\n");
#endif

#if __i386__
CheckTypeSize(FcConfig,0, 11108, 2)
#elif __x86_64__
CheckTypeSize(FcConfig,0, 11108, 11)
#elif __ia64__
CheckTypeSize(FcConfig,0, 11108, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcConfig,0, 11108, 6)
#elif __powerpc64__
CheckTypeSize(FcConfig,0, 11108, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcConfig,0, 11108, 10)
#elif __s390x__
CheckTypeSize(FcConfig,0, 11108, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11108,0);
Msg("Find size of FcConfig (11108)\n");
#endif

#if __i386__
CheckTypeSize(FcConfig *,4, 11109, 2)
#elif __x86_64__
CheckTypeSize(FcConfig *,8, 11109, 11)
#elif __ia64__
CheckTypeSize(FcConfig *,8, 11109, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcConfig *,4, 11109, 6)
#elif __powerpc64__
CheckTypeSize(FcConfig *,8, 11109, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcConfig *,4, 11109, 10)
#elif __s390x__
CheckTypeSize(FcConfig *,8, 11109, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11109,0);
Msg("Find size of FcConfig * (11109)\n");
#endif

#if __i386__
CheckTypeSize(FcStrSet,0, 11111, 2)
#elif __x86_64__
CheckTypeSize(FcStrSet,0, 11111, 11)
#elif __ia64__
CheckTypeSize(FcStrSet,0, 11111, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcStrSet,0, 11111, 6)
#elif __powerpc64__
CheckTypeSize(FcStrSet,0, 11111, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcStrSet,0, 11111, 10)
#elif __s390x__
CheckTypeSize(FcStrSet,0, 11111, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11111,0);
Msg("Find size of FcStrSet (11111)\n");
#endif

#if __i386__
CheckTypeSize(FcStrSet *,4, 11112, 2)
#elif __x86_64__
CheckTypeSize(FcStrSet *,8, 11112, 11)
#elif __ia64__
CheckTypeSize(FcStrSet *,8, 11112, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcStrSet *,4, 11112, 6)
#elif __powerpc64__
CheckTypeSize(FcStrSet *,8, 11112, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcStrSet *,4, 11112, 10)
#elif __s390x__
CheckTypeSize(FcStrSet *,8, 11112, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11112,0);
Msg("Find size of FcStrSet * (11112)\n");
#endif

#if __i386__
CheckTypeSize(FcChar32,4, 11113, 2)
#elif __x86_64__
CheckTypeSize(FcChar32,4, 11113, 11)
#elif __ia64__
CheckTypeSize(FcChar32,4, 11113, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcChar32,4, 11113, 6)
#elif __powerpc64__
CheckTypeSize(FcChar32,4, 11113, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcChar32,4, 11113, 10)
#elif __s390x__
CheckTypeSize(FcChar32,4, 11113, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11113,0);
Msg("Find size of FcChar32 (11113)\n");
#endif

#if __i386__
CheckTypeSize(FcLangSet *,4, 11114, 2)
#elif __x86_64__
CheckTypeSize(FcLangSet *,8, 11114, 11)
#elif __ia64__
CheckTypeSize(FcLangSet *,8, 11114, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcLangSet *,4, 11114, 6)
#elif __powerpc64__
CheckTypeSize(FcLangSet *,8, 11114, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcLangSet *,4, 11114, 10)
#elif __s390x__
CheckTypeSize(FcLangSet *,8, 11114, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11114,0);
Msg("Find size of FcLangSet * (11114)\n");
#endif

#if __i386__
CheckEnum("FcMatchPattern",FcMatchPattern,0,40936);
CheckEnum("FcMatchFont",FcMatchFont,1,40937);
#elif __x86_64__
CheckEnum("FcMatchPattern",FcMatchPattern,0,40936);
CheckEnum("FcMatchFont",FcMatchFont,1,40937);
#elif __ia64__
CheckEnum("FcMatchPattern",FcMatchPattern,0,40936);
CheckEnum("FcMatchFont",FcMatchFont,1,40937);
#elif __powerpc__ && !__powerpc64__
CheckEnum("FcMatchPattern",FcMatchPattern,0,40936);
CheckEnum("FcMatchFont",FcMatchFont,1,40937);
#elif __powerpc64__
CheckEnum("FcMatchPattern",FcMatchPattern,0,40936);
CheckEnum("FcMatchFont",FcMatchFont,1,40937);
#elif __s390__ && !__s390x__
CheckEnum("FcMatchPattern",FcMatchPattern,0,40936);
CheckEnum("FcMatchFont",FcMatchFont,1,40937);
#elif __s390x__
CheckEnum("FcMatchPattern",FcMatchPattern,0,40936);
CheckEnum("FcMatchFont",FcMatchFont,1,40937);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11115,0);
Msg("Find size of _FcMatchKind (11115)\n");
#endif

#if __i386__
CheckTypeSize(FcMatchKind,4, 11116, 2)
#elif __x86_64__
CheckTypeSize(FcMatchKind,4, 11116, 11)
#elif __ia64__
CheckTypeSize(FcMatchKind,4, 11116, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcMatchKind,4, 11116, 6)
#elif __powerpc64__
CheckTypeSize(FcMatchKind,4, 11116, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcMatchKind,4, 11116, 10)
#elif __s390x__
CheckTypeSize(FcMatchKind,4, 11116, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11116,0);
Msg("Find size of FcMatchKind (11116)\n");
#endif

#if __i386__
CheckTypeSize(struct _FcObjectSet,12, 11117, 2)
CheckMemberSize(struct _FcObjectSet,sobject,4,2,40939)
CheckOffset(struct _FcObjectSet,sobject,4,2,40939)
CheckMemberSize(struct _FcObjectSet,objects,4,2,40940)
CheckOffset(struct _FcObjectSet,objects,8,2,40940)
#elif __x86_64__
CheckTypeSize(struct _FcObjectSet,16, 11117, 11)
CheckMemberSize(struct _FcObjectSet,sobject,4,11,40939)
CheckOffset(struct _FcObjectSet,sobject,4,11,40939)
CheckMemberSize(struct _FcObjectSet,objects,8,11,40940)
CheckOffset(struct _FcObjectSet,objects,8,11,40940)
#elif __ia64__
CheckTypeSize(struct _FcObjectSet,16, 11117, 3)
CheckMemberSize(struct _FcObjectSet,sobject,4,3,40939)
CheckOffset(struct _FcObjectSet,sobject,4,3,40939)
CheckMemberSize(struct _FcObjectSet,objects,8,3,40940)
CheckOffset(struct _FcObjectSet,objects,8,3,40940)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _FcObjectSet,12, 11117, 6)
CheckMemberSize(struct _FcObjectSet,sobject,4,6,40939)
CheckOffset(struct _FcObjectSet,sobject,4,6,40939)
CheckMemberSize(struct _FcObjectSet,objects,4,6,40940)
CheckOffset(struct _FcObjectSet,objects,8,6,40940)
#elif __powerpc64__
CheckTypeSize(struct _FcObjectSet,16, 11117, 9)
CheckMemberSize(struct _FcObjectSet,sobject,4,9,40939)
CheckOffset(struct _FcObjectSet,sobject,4,9,40939)
CheckMemberSize(struct _FcObjectSet,objects,8,9,40940)
CheckOffset(struct _FcObjectSet,objects,8,9,40940)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _FcObjectSet,12, 11117, 10)
CheckMemberSize(struct _FcObjectSet,sobject,4,10,40939)
CheckOffset(struct _FcObjectSet,sobject,4,10,40939)
CheckMemberSize(struct _FcObjectSet,objects,4,10,40940)
CheckOffset(struct _FcObjectSet,objects,8,10,40940)
#elif __s390x__
CheckTypeSize(struct _FcObjectSet,16, 11117, 12)
CheckMemberSize(struct _FcObjectSet,sobject,4,12,40939)
CheckOffset(struct _FcObjectSet,sobject,4,12,40939)
CheckMemberSize(struct _FcObjectSet,objects,8,12,40940)
CheckOffset(struct _FcObjectSet,objects,8,12,40940)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11117,0);
Msg("Find size of _FcObjectSet (11117)\n");
#endif

#if __i386__
CheckTypeSize(FcObjectSet,12, 11118, 2)
#elif __x86_64__
CheckTypeSize(FcObjectSet,16, 11118, 11)
#elif __ia64__
CheckTypeSize(FcObjectSet,16, 11118, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcObjectSet,12, 11118, 6)
#elif __powerpc64__
CheckTypeSize(FcObjectSet,16, 11118, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcObjectSet,12, 11118, 10)
#elif __s390x__
CheckTypeSize(FcObjectSet,16, 11118, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11118,0);
Msg("Find size of FcObjectSet (11118)\n");
#endif

#if __i386__
CheckTypeSize(FcObjectSet *,4, 11119, 2)
#elif __x86_64__
CheckTypeSize(FcObjectSet *,8, 11119, 11)
#elif __ia64__
CheckTypeSize(FcObjectSet *,8, 11119, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcObjectSet *,4, 11119, 6)
#elif __powerpc64__
CheckTypeSize(FcObjectSet *,8, 11119, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcObjectSet *,4, 11119, 10)
#elif __s390x__
CheckTypeSize(FcObjectSet *,8, 11119, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11119,0);
Msg("Find size of FcObjectSet * (11119)\n");
#endif

#if __i386__
CheckEnum("FcEndianBig",FcEndianBig,0,40941);
CheckEnum("FcEndianLittle",FcEndianLittle,1,40942);
#elif __x86_64__
CheckEnum("FcEndianBig",FcEndianBig,0,40941);
CheckEnum("FcEndianLittle",FcEndianLittle,1,40942);
#elif __ia64__
CheckEnum("FcEndianBig",FcEndianBig,0,40941);
CheckEnum("FcEndianLittle",FcEndianLittle,1,40942);
#elif __powerpc__ && !__powerpc64__
CheckEnum("FcEndianBig",FcEndianBig,0,40941);
CheckEnum("FcEndianLittle",FcEndianLittle,1,40942);
#elif __powerpc64__
CheckEnum("FcEndianBig",FcEndianBig,0,40941);
CheckEnum("FcEndianLittle",FcEndianLittle,1,40942);
#elif __s390__ && !__s390x__
CheckEnum("FcEndianBig",FcEndianBig,0,40941);
CheckEnum("FcEndianLittle",FcEndianLittle,1,40942);
#elif __s390x__
CheckEnum("FcEndianBig",FcEndianBig,0,40941);
CheckEnum("FcEndianLittle",FcEndianLittle,1,40942);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11120,0);
Msg("Find size of anon-fontconfig/fontconfig.h-239 (11120)\n");
#endif

#if __i386__
CheckTypeSize(FcEndian,4, 11121, 2)
#elif __x86_64__
CheckTypeSize(FcEndian,4, 11121, 11)
#elif __ia64__
CheckTypeSize(FcEndian,4, 11121, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcEndian,4, 11121, 6)
#elif __powerpc64__
CheckTypeSize(FcEndian,4, 11121, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcEndian,4, 11121, 10)
#elif __s390x__
CheckTypeSize(FcEndian,4, 11121, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11121,0);
Msg("Find size of FcEndian (11121)\n");
#endif

#if __i386__
CheckTypeSize(FcChar8 *,4, 11122, 2)
#elif __x86_64__
CheckTypeSize(FcChar8 *,8, 11122, 11)
#elif __ia64__
CheckTypeSize(FcChar8 *,8, 11122, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcChar8 *,4, 11122, 6)
#elif __powerpc64__
CheckTypeSize(FcChar8 *,8, 11122, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcChar8 *,4, 11122, 10)
#elif __s390x__
CheckTypeSize(FcChar8 *,8, 11122, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11122,0);
Msg("Find size of FcChar8 * (11122)\n");
#endif

#if __i386__
CheckTypeSize(FcAtomic,0, 11124, 2)
#elif __x86_64__
CheckTypeSize(FcAtomic,0, 11124, 11)
#elif __ia64__
CheckTypeSize(FcAtomic,0, 11124, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcAtomic,0, 11124, 6)
#elif __powerpc64__
CheckTypeSize(FcAtomic,0, 11124, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcAtomic,0, 11124, 10)
#elif __s390x__
CheckTypeSize(FcAtomic,0, 11124, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11124,0);
Msg("Find size of FcAtomic (11124)\n");
#endif

#if __i386__
CheckTypeSize(FcAtomic *,4, 11125, 2)
#elif __x86_64__
CheckTypeSize(FcAtomic *,8, 11125, 11)
#elif __ia64__
CheckTypeSize(FcAtomic *,8, 11125, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcAtomic *,4, 11125, 6)
#elif __powerpc64__
CheckTypeSize(FcAtomic *,8, 11125, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcAtomic *,4, 11125, 10)
#elif __s390x__
CheckTypeSize(FcAtomic *,8, 11125, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11125,0);
Msg("Find size of FcAtomic * (11125)\n");
#endif

#if __i386__
CheckTypeSize(struct _FcConstant,12, 11126, 2)
CheckMemberSize(struct _FcConstant,object,4,2,40944)
CheckOffset(struct _FcConstant,object,4,2,40944)
CheckMemberSize(struct _FcConstant,value,4,2,40945)
CheckOffset(struct _FcConstant,value,8,2,40945)
#elif __x86_64__
CheckTypeSize(struct _FcConstant,24, 11126, 11)
CheckMemberSize(struct _FcConstant,object,8,11,40944)
CheckOffset(struct _FcConstant,object,8,11,40944)
CheckMemberSize(struct _FcConstant,value,4,11,40945)
CheckOffset(struct _FcConstant,value,16,11,40945)
#elif __ia64__
CheckTypeSize(struct _FcConstant,24, 11126, 3)
CheckMemberSize(struct _FcConstant,object,8,3,40944)
CheckOffset(struct _FcConstant,object,8,3,40944)
CheckMemberSize(struct _FcConstant,value,4,3,40945)
CheckOffset(struct _FcConstant,value,16,3,40945)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _FcConstant,12, 11126, 6)
CheckMemberSize(struct _FcConstant,object,4,6,40944)
CheckOffset(struct _FcConstant,object,4,6,40944)
CheckMemberSize(struct _FcConstant,value,4,6,40945)
CheckOffset(struct _FcConstant,value,8,6,40945)
#elif __powerpc64__
CheckTypeSize(struct _FcConstant,24, 11126, 9)
CheckMemberSize(struct _FcConstant,object,8,9,40944)
CheckOffset(struct _FcConstant,object,8,9,40944)
CheckMemberSize(struct _FcConstant,value,4,9,40945)
CheckOffset(struct _FcConstant,value,16,9,40945)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _FcConstant,12, 11126, 10)
CheckMemberSize(struct _FcConstant,object,4,10,40944)
CheckOffset(struct _FcConstant,object,4,10,40944)
CheckMemberSize(struct _FcConstant,value,4,10,40945)
CheckOffset(struct _FcConstant,value,8,10,40945)
#elif __s390x__
CheckTypeSize(struct _FcConstant,24, 11126, 12)
CheckMemberSize(struct _FcConstant,object,8,12,40944)
CheckOffset(struct _FcConstant,object,8,12,40944)
CheckMemberSize(struct _FcConstant,value,4,12,40945)
CheckOffset(struct _FcConstant,value,16,12,40945)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11126,0);
Msg("Find size of _FcConstant (11126)\n");
#endif

#if __i386__
CheckTypeSize(FcConstant,12, 11127, 2)
#elif __x86_64__
CheckTypeSize(FcConstant,24, 11127, 11)
#elif __ia64__
CheckTypeSize(FcConstant,24, 11127, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcConstant,12, 11127, 6)
#elif __powerpc64__
CheckTypeSize(FcConstant,24, 11127, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcConstant,12, 11127, 10)
#elif __s390x__
CheckTypeSize(FcConstant,24, 11127, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11127,0);
Msg("Find size of FcConstant (11127)\n");
#endif

#if __i386__
CheckTypeSize(const FcConstant,12, 11128, 2)
#elif __x86_64__
CheckTypeSize(const FcConstant,24, 11128, 11)
#elif __ia64__
CheckTypeSize(const FcConstant,24, 11128, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const FcConstant,12, 11128, 6)
#elif __powerpc64__
CheckTypeSize(const FcConstant,24, 11128, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const FcConstant,12, 11128, 10)
#elif __s390x__
CheckTypeSize(const FcConstant,24, 11128, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11128,0);
Msg("Find size of const FcConstant (11128)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11129,0);
Msg("Find size of const FcConstant * (11129)\n");
#endif

#if __i386__
CheckTypeSize(struct _FcFontSet,12, 11130, 2)
CheckMemberSize(struct _FcFontSet,sfont,4,2,40947)
CheckOffset(struct _FcFontSet,sfont,4,2,40947)
CheckMemberSize(struct _FcFontSet,fonts,4,2,40948)
CheckOffset(struct _FcFontSet,fonts,8,2,40948)
#elif __x86_64__
CheckTypeSize(struct _FcFontSet,16, 11130, 11)
CheckMemberSize(struct _FcFontSet,sfont,4,11,40947)
CheckOffset(struct _FcFontSet,sfont,4,11,40947)
CheckMemberSize(struct _FcFontSet,fonts,8,11,40948)
CheckOffset(struct _FcFontSet,fonts,8,11,40948)
#elif __ia64__
CheckTypeSize(struct _FcFontSet,16, 11130, 3)
CheckMemberSize(struct _FcFontSet,sfont,4,3,40947)
CheckOffset(struct _FcFontSet,sfont,4,3,40947)
CheckMemberSize(struct _FcFontSet,fonts,8,3,40948)
CheckOffset(struct _FcFontSet,fonts,8,3,40948)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _FcFontSet,12, 11130, 6)
CheckMemberSize(struct _FcFontSet,sfont,4,6,40947)
CheckOffset(struct _FcFontSet,sfont,4,6,40947)
CheckMemberSize(struct _FcFontSet,fonts,4,6,40948)
CheckOffset(struct _FcFontSet,fonts,8,6,40948)
#elif __powerpc64__
CheckTypeSize(struct _FcFontSet,16, 11130, 9)
CheckMemberSize(struct _FcFontSet,sfont,4,9,40947)
CheckOffset(struct _FcFontSet,sfont,4,9,40947)
CheckMemberSize(struct _FcFontSet,fonts,8,9,40948)
CheckOffset(struct _FcFontSet,fonts,8,9,40948)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _FcFontSet,12, 11130, 10)
CheckMemberSize(struct _FcFontSet,sfont,4,10,40947)
CheckOffset(struct _FcFontSet,sfont,4,10,40947)
CheckMemberSize(struct _FcFontSet,fonts,4,10,40948)
CheckOffset(struct _FcFontSet,fonts,8,10,40948)
#elif __s390x__
CheckTypeSize(struct _FcFontSet,16, 11130, 12)
CheckMemberSize(struct _FcFontSet,sfont,4,12,40947)
CheckOffset(struct _FcFontSet,sfont,4,12,40947)
CheckMemberSize(struct _FcFontSet,fonts,8,12,40948)
CheckOffset(struct _FcFontSet,fonts,8,12,40948)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11130,0);
Msg("Find size of _FcFontSet (11130)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11131,0);
Msg("Find size of FcPattern * * (11131)\n");
#endif

#if __i386__
CheckTypeSize(FcFontSet,12, 11132, 2)
#elif __x86_64__
CheckTypeSize(FcFontSet,16, 11132, 11)
#elif __ia64__
CheckTypeSize(FcFontSet,16, 11132, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcFontSet,12, 11132, 6)
#elif __powerpc64__
CheckTypeSize(FcFontSet,16, 11132, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcFontSet,12, 11132, 10)
#elif __s390x__
CheckTypeSize(FcFontSet,16, 11132, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11132,0);
Msg("Find size of FcFontSet (11132)\n");
#endif

#if __i386__
CheckTypeSize(FcFontSet *,4, 11133, 2)
#elif __x86_64__
CheckTypeSize(FcFontSet *,8, 11133, 11)
#elif __ia64__
CheckTypeSize(FcFontSet *,8, 11133, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcFontSet *,4, 11133, 6)
#elif __powerpc64__
CheckTypeSize(FcFontSet *,8, 11133, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcFontSet *,4, 11133, 10)
#elif __s390x__
CheckTypeSize(FcFontSet *,8, 11133, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11133,0);
Msg("Find size of FcFontSet * (11133)\n");
#endif

#if __i386__
CheckEnum("FcSetSystem",FcSetSystem,0,40949);
CheckEnum("FcSetApplication",FcSetApplication,1,40950);
#elif __x86_64__
CheckEnum("FcSetSystem",FcSetSystem,0,40949);
CheckEnum("FcSetApplication",FcSetApplication,1,40950);
#elif __ia64__
CheckEnum("FcSetSystem",FcSetSystem,0,40949);
CheckEnum("FcSetApplication",FcSetApplication,1,40950);
#elif __powerpc__ && !__powerpc64__
CheckEnum("FcSetSystem",FcSetSystem,0,40949);
CheckEnum("FcSetApplication",FcSetApplication,1,40950);
#elif __powerpc64__
CheckEnum("FcSetSystem",FcSetSystem,0,40949);
CheckEnum("FcSetApplication",FcSetApplication,1,40950);
#elif __s390__ && !__s390x__
CheckEnum("FcSetSystem",FcSetSystem,0,40949);
CheckEnum("FcSetApplication",FcSetApplication,1,40950);
#elif __s390x__
CheckEnum("FcSetSystem",FcSetSystem,0,40949);
CheckEnum("FcSetApplication",FcSetApplication,1,40950);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11134,0);
Msg("Find size of _FcSetName (11134)\n");
#endif

#if __i386__
CheckTypeSize(FcSetName,4, 11135, 2)
#elif __x86_64__
CheckTypeSize(FcSetName,4, 11135, 11)
#elif __ia64__
CheckTypeSize(FcSetName,4, 11135, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcSetName,4, 11135, 6)
#elif __powerpc64__
CheckTypeSize(FcSetName,4, 11135, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcSetName,4, 11135, 10)
#elif __s390x__
CheckTypeSize(FcSetName,4, 11135, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11135,0);
Msg("Find size of FcSetName (11135)\n");
#endif

#if __i386__
CheckTypeSize(FcMatrix *,4, 11136, 2)
#elif __x86_64__
CheckTypeSize(FcMatrix *,8, 11136, 11)
#elif __ia64__
CheckTypeSize(FcMatrix *,8, 11136, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcMatrix *,4, 11136, 6)
#elif __powerpc64__
CheckTypeSize(FcMatrix *,8, 11136, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcMatrix *,4, 11136, 10)
#elif __s390x__
CheckTypeSize(FcMatrix *,8, 11136, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11136,0);
Msg("Find size of FcMatrix * (11136)\n");
#endif

#if __i386__
CheckTypeSize(FcCharSet *,4, 11137, 2)
#elif __x86_64__
CheckTypeSize(FcCharSet *,8, 11137, 11)
#elif __ia64__
CheckTypeSize(FcCharSet *,8, 11137, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcCharSet *,4, 11137, 6)
#elif __powerpc64__
CheckTypeSize(FcCharSet *,8, 11137, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcCharSet *,4, 11137, 10)
#elif __s390x__
CheckTypeSize(FcCharSet *,8, 11137, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11137,0);
Msg("Find size of FcCharSet * (11137)\n");
#endif

#if __i386__
CheckTypeSize(FcBlanks,0, 11139, 2)
#elif __x86_64__
CheckTypeSize(FcBlanks,0, 11139, 11)
#elif __ia64__
CheckTypeSize(FcBlanks,0, 11139, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcBlanks,0, 11139, 6)
#elif __powerpc64__
CheckTypeSize(FcBlanks,0, 11139, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcBlanks,0, 11139, 10)
#elif __s390x__
CheckTypeSize(FcBlanks,0, 11139, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11139,0);
Msg("Find size of FcBlanks (11139)\n");
#endif

#if __i386__
CheckTypeSize(FcBlanks *,4, 11140, 2)
#elif __x86_64__
CheckTypeSize(FcBlanks *,8, 11140, 11)
#elif __ia64__
CheckTypeSize(FcBlanks *,8, 11140, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcBlanks *,4, 11140, 6)
#elif __powerpc64__
CheckTypeSize(FcBlanks *,8, 11140, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcBlanks *,4, 11140, 10)
#elif __s390x__
CheckTypeSize(FcBlanks *,8, 11140, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11140,0);
Msg("Find size of FcBlanks * (11140)\n");
#endif

#if __i386__
CheckEnum("FcResultMatch",FcResultMatch,0,40951);
CheckEnum("FcResultNoMatch",FcResultNoMatch,1,40952);
CheckEnum("FcResultTypeMismatch",FcResultTypeMismatch,2,40953);
CheckEnum("FcResultNoId",FcResultNoId,3,40954);
CheckEnum("FcResultOutOfMemory",FcResultOutOfMemory,4,40955);
#elif __x86_64__
CheckEnum("FcResultMatch",FcResultMatch,0,40951);
CheckEnum("FcResultNoMatch",FcResultNoMatch,1,40952);
CheckEnum("FcResultTypeMismatch",FcResultTypeMismatch,2,40953);
CheckEnum("FcResultNoId",FcResultNoId,3,40954);
CheckEnum("FcResultOutOfMemory",FcResultOutOfMemory,4,40955);
#elif __ia64__
CheckEnum("FcResultMatch",FcResultMatch,0,40951);
CheckEnum("FcResultNoMatch",FcResultNoMatch,1,40952);
CheckEnum("FcResultTypeMismatch",FcResultTypeMismatch,2,40953);
CheckEnum("FcResultNoId",FcResultNoId,3,40954);
CheckEnum("FcResultOutOfMemory",FcResultOutOfMemory,4,40955);
#elif __powerpc__ && !__powerpc64__
CheckEnum("FcResultMatch",FcResultMatch,0,40951);
CheckEnum("FcResultNoMatch",FcResultNoMatch,1,40952);
CheckEnum("FcResultTypeMismatch",FcResultTypeMismatch,2,40953);
CheckEnum("FcResultNoId",FcResultNoId,3,40954);
CheckEnum("FcResultOutOfMemory",FcResultOutOfMemory,4,40955);
#elif __powerpc64__
CheckEnum("FcResultMatch",FcResultMatch,0,40951);
CheckEnum("FcResultNoMatch",FcResultNoMatch,1,40952);
CheckEnum("FcResultTypeMismatch",FcResultTypeMismatch,2,40953);
CheckEnum("FcResultNoId",FcResultNoId,3,40954);
CheckEnum("FcResultOutOfMemory",FcResultOutOfMemory,4,40955);
#elif __s390__ && !__s390x__
CheckEnum("FcResultMatch",FcResultMatch,0,40951);
CheckEnum("FcResultNoMatch",FcResultNoMatch,1,40952);
CheckEnum("FcResultTypeMismatch",FcResultTypeMismatch,2,40953);
CheckEnum("FcResultNoId",FcResultNoId,3,40954);
CheckEnum("FcResultOutOfMemory",FcResultOutOfMemory,4,40955);
#elif __s390x__
CheckEnum("FcResultMatch",FcResultMatch,0,40951);
CheckEnum("FcResultNoMatch",FcResultNoMatch,1,40952);
CheckEnum("FcResultTypeMismatch",FcResultTypeMismatch,2,40953);
CheckEnum("FcResultNoId",FcResultNoId,3,40954);
CheckEnum("FcResultOutOfMemory",FcResultOutOfMemory,4,40955);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11141,0);
Msg("Find size of _FcResult (11141)\n");
#endif

#if __i386__
CheckTypeSize(FcResult,4, 11142, 2)
#elif __x86_64__
CheckTypeSize(FcResult,4, 11142, 11)
#elif __ia64__
CheckTypeSize(FcResult,4, 11142, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcResult,4, 11142, 6)
#elif __powerpc64__
CheckTypeSize(FcResult,4, 11142, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcResult,4, 11142, 10)
#elif __s390x__
CheckTypeSize(FcResult,4, 11142, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11142,0);
Msg("Find size of FcResult (11142)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11143,0);
Msg("Find size of FcLangSet * * (11143)\n");
#endif

#if __i386__
CheckTypeSize(struct _FcObjectType,8, 11144, 2)
CheckMemberSize(struct _FcObjectType,type,4,2,40957)
CheckOffset(struct _FcObjectType,type,4,2,40957)
#elif __x86_64__
CheckTypeSize(struct _FcObjectType,16, 11144, 11)
CheckMemberSize(struct _FcObjectType,type,4,11,40957)
CheckOffset(struct _FcObjectType,type,8,11,40957)
#elif __ia64__
CheckTypeSize(struct _FcObjectType,16, 11144, 3)
CheckMemberSize(struct _FcObjectType,type,4,3,40957)
CheckOffset(struct _FcObjectType,type,8,3,40957)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(struct _FcObjectType,8, 11144, 6)
CheckMemberSize(struct _FcObjectType,type,4,6,40957)
CheckOffset(struct _FcObjectType,type,4,6,40957)
#elif __powerpc64__
CheckTypeSize(struct _FcObjectType,16, 11144, 9)
CheckMemberSize(struct _FcObjectType,type,4,9,40957)
CheckOffset(struct _FcObjectType,type,8,9,40957)
#elif __s390__ && !__s390x__
CheckTypeSize(struct _FcObjectType,8, 11144, 10)
CheckMemberSize(struct _FcObjectType,type,4,10,40957)
CheckOffset(struct _FcObjectType,type,4,10,40957)
#elif __s390x__
CheckTypeSize(struct _FcObjectType,16, 11144, 12)
CheckMemberSize(struct _FcObjectType,type,4,12,40957)
CheckOffset(struct _FcObjectType,type,8,12,40957)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11144,0);
Msg("Find size of _FcObjectType (11144)\n");
#endif

#if __i386__
CheckTypeSize(FcObjectType,8, 11145, 2)
#elif __x86_64__
CheckTypeSize(FcObjectType,16, 11145, 11)
#elif __ia64__
CheckTypeSize(FcObjectType,16, 11145, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcObjectType,8, 11145, 6)
#elif __powerpc64__
CheckTypeSize(FcObjectType,16, 11145, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcObjectType,8, 11145, 10)
#elif __s390x__
CheckTypeSize(FcObjectType,16, 11145, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11145,0);
Msg("Find size of FcObjectType (11145)\n");
#endif

#if __i386__
CheckTypeSize(const FcObjectType,8, 11146, 2)
#elif __x86_64__
CheckTypeSize(const FcObjectType,16, 11146, 11)
#elif __ia64__
CheckTypeSize(const FcObjectType,16, 11146, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const FcObjectType,8, 11146, 6)
#elif __powerpc64__
CheckTypeSize(const FcObjectType,16, 11146, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const FcObjectType,8, 11146, 10)
#elif __s390x__
CheckTypeSize(const FcObjectType,16, 11146, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11146,0);
Msg("Find size of const FcObjectType (11146)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11147,0);
Msg("Find size of const FcObjectType * (11147)\n");
#endif

#if __i386__
CheckTypeSize(FcChar32 *,4, 11148, 2)
#elif __x86_64__
CheckTypeSize(FcChar32 *,8, 11148, 11)
#elif __ia64__
CheckTypeSize(FcChar32 *,8, 11148, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcChar32 *,4, 11148, 6)
#elif __powerpc64__
CheckTypeSize(FcChar32 *,8, 11148, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcChar32 *,4, 11148, 10)
#elif __s390x__
CheckTypeSize(FcChar32 *,8, 11148, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11148,0);
Msg("Find size of FcChar32 * (11148)\n");
#endif

#if __i386__
CheckTypeSize(FcGlobalCache,0, 11150, 2)
#elif __x86_64__
CheckTypeSize(FcGlobalCache,0, 11150, 11)
#elif __ia64__
CheckTypeSize(FcGlobalCache,0, 11150, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcGlobalCache,0, 11150, 6)
#elif __powerpc64__
CheckTypeSize(FcGlobalCache,0, 11150, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcGlobalCache,0, 11150, 10)
#elif __s390x__
CheckTypeSize(FcGlobalCache,0, 11150, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11150,0);
Msg("Find size of FcGlobalCache (11150)\n");
#endif

#if __i386__
CheckTypeSize(FcGlobalCache *,4, 11151, 2)
#elif __x86_64__
CheckTypeSize(FcGlobalCache *,8, 11151, 11)
#elif __ia64__
CheckTypeSize(FcGlobalCache *,8, 11151, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcGlobalCache *,4, 11151, 6)
#elif __powerpc64__
CheckTypeSize(FcGlobalCache *,8, 11151, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcGlobalCache *,4, 11151, 10)
#elif __s390x__
CheckTypeSize(FcGlobalCache *,8, 11151, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11151,0);
Msg("Find size of FcGlobalCache * (11151)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11152,0);
Msg("Find size of FcFontSet * * (11152)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11153,0);
Msg("Find size of FcCharSet * * (11153)\n");
#endif

#if __i386__
CheckTypeSize(FcResult *,4, 11154, 2)
#elif __x86_64__
CheckTypeSize(FcResult *,8, 11154, 11)
#elif __ia64__
CheckTypeSize(FcResult *,8, 11154, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcResult *,4, 11154, 6)
#elif __powerpc64__
CheckTypeSize(FcResult *,8, 11154, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcResult *,4, 11154, 10)
#elif __s390x__
CheckTypeSize(FcResult *,8, 11154, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11154,0);
Msg("Find size of FcResult * (11154)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11155,0);
Msg("Find size of FcChar8 * * (11155)\n");
#endif

#if __i386__
CheckTypeSize(const FcObjectSet,12, 11156, 2)
#elif __x86_64__
CheckTypeSize(const FcObjectSet,16, 11156, 11)
#elif __ia64__
CheckTypeSize(const FcObjectSet,16, 11156, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const FcObjectSet,12, 11156, 6)
#elif __powerpc64__
CheckTypeSize(const FcObjectSet,16, 11156, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const FcObjectSet,12, 11156, 10)
#elif __s390x__
CheckTypeSize(const FcObjectSet,16, 11156, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11156,0);
Msg("Find size of const FcObjectSet (11156)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11157,0);
Msg("Find size of const FcObjectSet * (11157)\n");
#endif

#if __i386__
CheckTypeSize(const FcFontSet,12, 11158, 2)
#elif __x86_64__
CheckTypeSize(const FcFontSet,16, 11158, 11)
#elif __ia64__
CheckTypeSize(const FcFontSet,16, 11158, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const FcFontSet,12, 11158, 6)
#elif __powerpc64__
CheckTypeSize(const FcFontSet,16, 11158, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const FcFontSet,12, 11158, 10)
#elif __s390x__
CheckTypeSize(const FcFontSet,16, 11158, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11158,0);
Msg("Find size of const FcFontSet (11158)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11159,0);
Msg("Find size of const FcFontSet * (11159)\n");
#endif

#if __i386__
CheckEnum("FcLangEqual",FcLangEqual,0,40958);
CheckEnum("FcLangDifferentCountry",FcLangDifferentCountry,1,40959);
CheckEnum("FcLangDifferentLang",FcLangDifferentLang,2,40960);
#elif __x86_64__
CheckEnum("FcLangEqual",FcLangEqual,0,40958);
CheckEnum("FcLangDifferentCountry",FcLangDifferentCountry,1,40959);
CheckEnum("FcLangDifferentLang",FcLangDifferentLang,2,40960);
#elif __ia64__
CheckEnum("FcLangEqual",FcLangEqual,0,40958);
CheckEnum("FcLangDifferentCountry",FcLangDifferentCountry,1,40959);
CheckEnum("FcLangDifferentLang",FcLangDifferentLang,2,40960);
#elif __powerpc__ && !__powerpc64__
CheckEnum("FcLangEqual",FcLangEqual,0,40958);
CheckEnum("FcLangDifferentCountry",FcLangDifferentCountry,1,40959);
CheckEnum("FcLangDifferentLang",FcLangDifferentLang,2,40960);
#elif __powerpc64__
CheckEnum("FcLangEqual",FcLangEqual,0,40958);
CheckEnum("FcLangDifferentCountry",FcLangDifferentCountry,1,40959);
CheckEnum("FcLangDifferentLang",FcLangDifferentLang,2,40960);
#elif __s390__ && !__s390x__
CheckEnum("FcLangEqual",FcLangEqual,0,40958);
CheckEnum("FcLangDifferentCountry",FcLangDifferentCountry,1,40959);
CheckEnum("FcLangDifferentLang",FcLangDifferentLang,2,40960);
#elif __s390x__
CheckEnum("FcLangEqual",FcLangEqual,0,40958);
CheckEnum("FcLangDifferentCountry",FcLangDifferentCountry,1,40959);
CheckEnum("FcLangDifferentLang",FcLangDifferentLang,2,40960);
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11160,0);
Msg("Find size of _FcLangResult (11160)\n");
#endif

#if __i386__
CheckTypeSize(FcLangResult,4, 11161, 2)
#elif __x86_64__
CheckTypeSize(FcLangResult,4, 11161, 11)
#elif __ia64__
CheckTypeSize(FcLangResult,4, 11161, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcLangResult,4, 11161, 6)
#elif __powerpc64__
CheckTypeSize(FcLangResult,4, 11161, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcLangResult,4, 11161, 10)
#elif __s390x__
CheckTypeSize(FcLangResult,4, 11161, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11161,0);
Msg("Find size of FcLangResult (11161)\n");
#endif

#if __i386__
CheckTypeSize(const FcValue,12, 11162, 2)
#elif __x86_64__
CheckTypeSize(const FcValue,16, 11162, 11)
#elif __ia64__
CheckTypeSize(const FcValue,16, 11162, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(const FcValue,16, 11162, 6)
#elif __powerpc64__
CheckTypeSize(const FcValue,16, 11162, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(const FcValue,16, 11162, 10)
#elif __s390x__
CheckTypeSize(const FcValue,16, 11162, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11162,0);
Msg("Find size of const FcValue (11162)\n");
#endif

#if __i386__
#elif __x86_64__
#elif __ia64__
#elif __powerpc__ && !__powerpc64__
#elif __powerpc64__
#elif __s390__ && !__s390x__
#elif __s390x__
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11163,0);
Msg("Find size of FcMatrix * * (11163)\n");
#endif

#if __i386__
CheckTypeSize(FcBool *,4, 11164, 2)
#elif __x86_64__
CheckTypeSize(FcBool *,8, 11164, 11)
#elif __ia64__
CheckTypeSize(FcBool *,8, 11164, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcBool *,4, 11164, 6)
#elif __powerpc64__
CheckTypeSize(FcBool *,8, 11164, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcBool *,4, 11164, 10)
#elif __s390x__
CheckTypeSize(FcBool *,8, 11164, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11164,0);
Msg("Find size of FcBool * (11164)\n");
#endif

#if __i386__
CheckTypeSize(FcValue *,4, 11165, 2)
#elif __x86_64__
CheckTypeSize(FcValue *,8, 11165, 11)
#elif __ia64__
CheckTypeSize(FcValue *,8, 11165, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcValue *,4, 11165, 6)
#elif __powerpc64__
CheckTypeSize(FcValue *,8, 11165, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcValue *,4, 11165, 10)
#elif __s390x__
CheckTypeSize(FcValue *,8, 11165, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,11165,0);
Msg("Find size of FcValue * (11165)\n");
#endif

#if __i386__
CheckTypeSize(FcChar16,2, 16181, 2)
#elif __x86_64__
CheckTypeSize(FcChar16,2, 16181, 11)
#elif __ia64__
CheckTypeSize(FcChar16,2, 16181, 3)
#elif __powerpc__ && !__powerpc64__
CheckTypeSize(FcChar16,2, 16181, 6)
#elif __powerpc64__
CheckTypeSize(FcChar16,2, 16181, 9)
#elif __s390__ && !__s390x__
CheckTypeSize(FcChar16,2, 16181, 10)
#elif __s390x__
CheckTypeSize(FcChar16,2, 16181, 12)
#else
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d);\n",architecture,16181,0);
Msg("Find size of FcChar16 (16181)\n");
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
