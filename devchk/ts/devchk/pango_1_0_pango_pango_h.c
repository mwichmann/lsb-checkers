/*
 * Test of pango-1.0/pango/pango.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
/* #define G_DISABLE_DEPRECATED */
#define G_ERRORCHECK_MUTEXES
#undef GOBJECT_COMPILATION
#undef GETTEXT_PACKAGE
/* #define PANGO_DISABLE_DEPRECATED */
struct _PangoFontFace { };
struct _PangoLayout { };
struct _PangoContext { };
struct _PangoContextClass { };
struct _PangoAttrList { };
struct _PangoFontDescription { };
struct _PangoTabArray { };
struct _PangoScriptIter { };
struct _PangoFont { };
struct _PangoLanguage { };
struct _PangoLayoutIter { };
struct _PangoRendererPrivate { };
struct _PangoFontFamily { };
struct _PangoFontMetrics { };
struct _PangoFontMap { };
struct _PangoAttrIterator { };
struct _PangoCoverage { };
struct _PangoFontsetSimple { };
struct _PangoFontset { };
struct _PangoLayoutClass { };
struct _PangoEngineLang { };
struct _PangoEngineShape { };
struct _PangoFcFont { };
#include "pango-1.0/pango/pango.h"



#ifdef TET_TEST
void pango_1_0_pango_pango_h()
{
#else
int pango_1_0_pango_pango_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in pango-1.0/pango/pango.h\n");
#endif

printf("Checking data structures in pango-1.0/pango/pango.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for PANGO_GET_UNKNOWN_GLYPH(wc) */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PANGO_GLYPH_UNKNOWN_FLAG
	CompareLongConstant(PANGO_GLYPH_UNKNOWN_FLAG,((PangoGlyph)0x10000000),15513,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: PANGO_GLYPH_UNKNOWN_FLAG\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_MATRIX */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_MATRIX_INIT */
#endif

#if _LSB_DEFAULT_ARCH
#ifdef PANGO_SCALE
	CompareConstant(PANGO_SCALE,1024,6515,architecture,3.1,NULL)
#else
Msg( "Error: Constant not found: PANGO_SCALE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_PIXELS(d) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_ASCENT(rect) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_DESCENT(rect) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_LBEARING(rect) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_RBEARING(rect) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_LANGUAGE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for pango_language_to_string(language) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_SCALE_XX_SMALL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_SCALE_X_SMALL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_SCALE_SMALL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_SCALE_MEDIUM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_SCALE_LARGE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_SCALE_X_LARGE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_SCALE_XX_LARGE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_FONT_DESCRIPTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_FONT_METRICS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_FONT_FAMILY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_FONT_FAMILY(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_FONT_FAMILY(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_FONT_FACE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_FONT_FACE(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_FONT_FACE(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_FONT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_FONT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_FONT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_COLOR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_ATTR_LIST */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_FONTSET */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_FONTSET(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_FONTSET(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_FONT_MAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_FONT_MAP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_FONT_MAP(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_CONTEXT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_CONTEXT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_CONTEXT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_CONTEXT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_CONTEXT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_CONTEXT_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_GLYPH_STRING */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_ATTR_TYPE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_UNDERLINE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_COVERAGE_LEVEL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_STYLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_VARIANT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_WEIGHT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_STRETCH */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_FONT_MASK */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_ALIGNMENT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_WRAP_MODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_ELLIPSIZE_MODE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_RENDER_PART */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_SCRIPT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_TAB_ALIGN */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_DIRECTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_TAB_ARRAY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_LAYOUT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_LAYOUT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_LAYOUT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_LAYOUT(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_LAYOUT_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_LAYOUT_GET_CLASS(obj) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_LAYOUT_ITER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_TYPE_RENDERER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_RENDERER(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_RENDERER(object) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_RENDERER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_IS_RENDERER_CLASS(klass) */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for PANGO_RENDERER_GET_CLASS(obj) */
#endif

#if defined __i386__
CheckTypeSize(PangoWrapMode,4, 12352, 2, 3.1, NULL, 12351, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoWrapMode,4, 12352, 11, 3.1, NULL, 12351, NULL)
#elif defined __ia64__
CheckTypeSize(PangoWrapMode,4, 12352, 3, 3.1, NULL, 12351, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoWrapMode,4, 12352, 6, 3.1, NULL, 12351, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoWrapMode,4, 12352, 9, 3.1, NULL, 12351, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoWrapMode,4, 12352, 10, 3.1, NULL, 12351, NULL)
#elif defined __s390x__
CheckTypeSize(PangoWrapMode,4, 12352, 12, 3.1, NULL, 12351, NULL)
#else
Msg("Find size of PangoWrapMode (12352)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12351,NULL);\n",architecture,12352,0);
#endif

#if defined __i386__
CheckTypeSize(PangoScript,4, 12360, 2, 3.1, NULL, 12359, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoScript,4, 12360, 11, 3.1, NULL, 12359, NULL)
#elif defined __ia64__
CheckTypeSize(PangoScript,4, 12360, 3, 3.1, NULL, 12359, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoScript,4, 12360, 6, 3.1, NULL, 12359, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoScript,4, 12360, 9, 3.1, NULL, 12359, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoScript,4, 12360, 10, 3.1, NULL, 12359, NULL)
#elif defined __s390x__
CheckTypeSize(PangoScript,4, 12360, 12, 3.1, NULL, 12359, NULL)
#else
Msg("Find size of PangoScript (12360)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12359,NULL);\n",architecture,12360,0);
#endif

#if defined __i386__
CheckTypeSize(PangoAttrType,4, 12374, 2, 3.1, NULL, 12373, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrType,4, 12374, 11, 3.1, NULL, 12373, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrType,4, 12374, 3, 3.1, NULL, 12373, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrType,4, 12374, 6, 3.1, NULL, 12373, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrType,4, 12374, 9, 3.1, NULL, 12373, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrType,4, 12374, 10, 3.1, NULL, 12373, NULL)
#elif defined __s390x__
CheckTypeSize(PangoAttrType,4, 12374, 12, 3.1, NULL, 12373, NULL)
#else
Msg("Find size of PangoAttrType (12374)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12373,NULL);\n",architecture,12374,0);
#endif

#if defined __i386__
CheckTypeSize(PangoAttribute,12, 12375, 2, 3.1, NULL, 12371, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttribute,16, 12375, 11, 3.1, NULL, 12371, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttribute,16, 12375, 3, 3.1, NULL, 12371, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttribute,12, 12375, 6, 3.1, NULL, 12371, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttribute,16, 12375, 9, 3.1, NULL, 12371, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttribute,12, 12375, 10, 3.1, NULL, 12371, NULL)
#elif defined __s390x__
CheckTypeSize(PangoAttribute,16, 12375, 12, 3.1, NULL, 12371, NULL)
#else
Msg("Find size of PangoAttribute (12375)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12371,NULL);\n",architecture,12375,0);
#endif

#if defined __i386__
CheckTypeSize(PangoAttrClass,16, 12382, 2, 3.1, NULL, 12372, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrClass,32, 12382, 11, 3.1, NULL, 12372, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrClass,32, 12382, 3, 3.1, NULL, 12372, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrClass,16, 12382, 6, 3.1, NULL, 12372, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrClass,32, 12382, 9, 3.1, NULL, 12372, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrClass,16, 12382, 10, 3.1, NULL, 12372, NULL)
#elif defined __s390x__
CheckTypeSize(PangoAttrClass,32, 12382, 12, 3.1, NULL, 12372, NULL)
#else
Msg("Find size of PangoAttrClass (12382)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12372,NULL);\n",architecture,12382,0);
#endif

#if defined __i386__
CheckTypeSize(PangoLogAttr,4, 12389, 2, 3.1, NULL, 12388, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoLogAttr,4, 12389, 11, 3.1, NULL, 12388, NULL)
#elif defined __ia64__
CheckTypeSize(PangoLogAttr,4, 12389, 3, 3.1, NULL, 12388, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoLogAttr,4, 12389, 6, 3.1, NULL, 12388, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoLogAttr,4, 12389, 9, 3.1, NULL, 12388, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoLogAttr,4, 12389, 10, 3.1, NULL, 12388, NULL)
#elif defined __s390x__
CheckTypeSize(PangoLogAttr,4, 12389, 12, 3.1, NULL, 12388, NULL)
#else
Msg("Find size of PangoLogAttr (12389)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12388,NULL);\n",architecture,12389,0);
#endif

#if defined __i386__
CheckTypeSize(PangoColor,6, 12392, 2, 3.1, NULL, 12391, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoColor,6, 12392, 11, 3.1, NULL, 12391, NULL)
#elif defined __ia64__
CheckTypeSize(PangoColor,6, 12392, 3, 3.1, NULL, 12391, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoColor,6, 12392, 6, 3.1, NULL, 12391, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoColor,6, 12392, 9, 3.1, NULL, 12391, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoColor,6, 12392, 10, 3.1, NULL, 12391, NULL)
#elif defined __s390x__
CheckTypeSize(PangoColor,6, 12392, 12, 3.1, NULL, 12391, NULL)
#else
Msg("Find size of PangoColor (12392)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12391,NULL);\n",architecture,12392,0);
#endif

#if defined __i386__
CheckTypeSize(PangoMatrix,48, 12395, 2, 3.1, NULL, 12394, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoMatrix,48, 12395, 11, 3.1, NULL, 12394, NULL)
#elif defined __ia64__
CheckTypeSize(PangoMatrix,48, 12395, 3, 3.1, NULL, 12394, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoMatrix,48, 12395, 6, 3.1, NULL, 12394, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoMatrix,48, 12395, 9, 3.1, NULL, 12394, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoMatrix,48, 12395, 10, 3.1, NULL, 12394, NULL)
#elif defined __s390x__
CheckTypeSize(PangoMatrix,48, 12395, 12, 3.1, NULL, 12394, NULL)
#else
Msg("Find size of PangoMatrix (12395)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12394,NULL);\n",architecture,12395,0);
#endif

#if defined __i386__
CheckTypeSize(PangoAnalysis,24, 12406, 2, 3.1, NULL, 12399, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAnalysis,48, 12406, 11, 3.1, NULL, 12399, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAnalysis,48, 12406, 3, 3.1, NULL, 12399, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAnalysis,24, 12406, 6, 3.1, NULL, 12399, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAnalysis,48, 12406, 9, 3.1, NULL, 12399, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAnalysis,24, 12406, 10, 3.1, NULL, 12399, NULL)
#elif defined __s390x__
CheckTypeSize(PangoAnalysis,48, 12406, 12, 3.1, NULL, 12399, NULL)
#else
Msg("Find size of PangoAnalysis (12406)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12399,NULL);\n",architecture,12406,0);
#endif

#if defined __i386__
CheckTypeSize(PangoItem,36, 12407, 2, 3.1, NULL, 12398, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoItem,64, 12407, 11, 3.1, NULL, 12398, NULL)
#elif defined __ia64__
CheckTypeSize(PangoItem,64, 12407, 3, 3.1, NULL, 12398, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoItem,36, 12407, 6, 3.1, NULL, 12398, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoItem,64, 12407, 9, 3.1, NULL, 12398, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoItem,36, 12407, 10, 3.1, NULL, 12398, NULL)
#elif defined __s390x__
CheckTypeSize(PangoItem,64, 12407, 12, 3.1, NULL, 12398, NULL)
#else
Msg("Find size of PangoItem (12407)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12398,NULL);\n",architecture,12407,0);
#endif

#if defined __i386__
CheckTypeSize(PangoGlyph,4, 12411, 2, 3.1, NULL, 11412, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoGlyph,4, 12411, 11, 3.1, NULL, 11412, NULL)
#elif defined __ia64__
CheckTypeSize(PangoGlyph,4, 12411, 3, 3.1, NULL, 11412, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoGlyph,4, 12411, 6, 3.1, NULL, 11412, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoGlyph,4, 12411, 9, 3.1, NULL, 11412, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoGlyph,4, 12411, 10, 3.1, NULL, 11412, NULL)
#elif defined __s390x__
CheckTypeSize(PangoGlyph,4, 12411, 12, 3.1, NULL, 11412, NULL)
#else
Msg("Find size of PangoGlyph (12411)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11412,NULL);\n",architecture,12411,0);
#endif

#if defined __i386__
CheckTypeSize(PangoGlyphUnit,4, 12413, 2, 3.1, NULL, 11654, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoGlyphUnit,4, 12413, 11, 3.1, NULL, 11654, NULL)
#elif defined __ia64__
CheckTypeSize(PangoGlyphUnit,4, 12413, 3, 3.1, NULL, 11654, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoGlyphUnit,4, 12413, 6, 3.1, NULL, 11654, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoGlyphUnit,4, 12413, 9, 3.1, NULL, 11654, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoGlyphUnit,4, 12413, 10, 3.1, NULL, 11654, NULL)
#elif defined __s390x__
CheckTypeSize(PangoGlyphUnit,4, 12413, 12, 3.1, NULL, 11654, NULL)
#else
Msg("Find size of PangoGlyphUnit (12413)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11654,NULL);\n",architecture,12413,0);
#endif

#if defined __i386__
CheckTypeSize(PangoGlyphGeometry,12, 12414, 2, 3.1, NULL, 12412, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoGlyphGeometry,12, 12414, 11, 3.1, NULL, 12412, NULL)
#elif defined __ia64__
CheckTypeSize(PangoGlyphGeometry,12, 12414, 3, 3.1, NULL, 12412, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoGlyphGeometry,12, 12414, 6, 3.1, NULL, 12412, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoGlyphGeometry,12, 12414, 9, 3.1, NULL, 12412, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoGlyphGeometry,12, 12414, 10, 3.1, NULL, 12412, NULL)
#elif defined __s390x__
CheckTypeSize(PangoGlyphGeometry,12, 12414, 12, 3.1, NULL, 12412, NULL)
#else
Msg("Find size of PangoGlyphGeometry (12414)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12412,NULL);\n",architecture,12414,0);
#endif

#if defined __i386__
CheckTypeSize(PangoGlyphVisAttr,4, 12416, 2, 3.1, NULL, 12415, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoGlyphVisAttr,4, 12416, 11, 3.1, NULL, 12415, NULL)
#elif defined __ia64__
CheckTypeSize(PangoGlyphVisAttr,4, 12416, 3, 3.1, NULL, 12415, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoGlyphVisAttr,4, 12416, 6, 3.1, NULL, 12415, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoGlyphVisAttr,4, 12416, 9, 3.1, NULL, 12415, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoGlyphVisAttr,4, 12416, 10, 3.1, NULL, 12415, NULL)
#elif defined __s390x__
CheckTypeSize(PangoGlyphVisAttr,4, 12416, 12, 3.1, NULL, 12415, NULL)
#else
Msg("Find size of PangoGlyphVisAttr (12416)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12415,NULL);\n",architecture,12416,0);
#endif

#if defined __i386__
CheckTypeSize(PangoGlyphInfo,20, 12417, 2, 3.1, NULL, 12410, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoGlyphInfo,20, 12417, 11, 3.1, NULL, 12410, NULL)
#elif defined __ia64__
CheckTypeSize(PangoGlyphInfo,20, 12417, 3, 3.1, NULL, 12410, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoGlyphInfo,20, 12417, 6, 3.1, NULL, 12410, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoGlyphInfo,20, 12417, 9, 3.1, NULL, 12410, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoGlyphInfo,20, 12417, 10, 3.1, NULL, 12410, NULL)
#elif defined __s390x__
CheckTypeSize(PangoGlyphInfo,20, 12417, 12, 3.1, NULL, 12410, NULL)
#else
Msg("Find size of PangoGlyphInfo (12417)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12410,NULL);\n",architecture,12417,0);
#endif

#if defined __i386__
CheckTypeSize(PangoGlyphString,16, 12419, 2, 3.1, NULL, 12409, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoGlyphString,32, 12419, 11, 3.1, NULL, 12409, NULL)
#elif defined __ia64__
CheckTypeSize(PangoGlyphString,32, 12419, 3, 3.1, NULL, 12409, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoGlyphString,16, 12419, 6, 3.1, NULL, 12409, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoGlyphString,32, 12419, 9, 3.1, NULL, 12409, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoGlyphString,16, 12419, 10, 3.1, NULL, 12409, NULL)
#elif defined __s390x__
CheckTypeSize(PangoGlyphString,32, 12419, 12, 3.1, NULL, 12409, NULL)
#else
Msg("Find size of PangoGlyphString (12419)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12409,NULL);\n",architecture,12419,0);
#endif

#if defined __i386__
CheckTypeSize(PangoGlyphItem,8, 12421, 2, 3.1, NULL, 12397, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoGlyphItem,16, 12421, 11, 3.1, NULL, 12397, NULL)
#elif defined __ia64__
CheckTypeSize(PangoGlyphItem,16, 12421, 3, 3.1, NULL, 12397, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoGlyphItem,8, 12421, 6, 3.1, NULL, 12397, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoGlyphItem,16, 12421, 9, 3.1, NULL, 12397, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoGlyphItem,8, 12421, 10, 3.1, NULL, 12397, NULL)
#elif defined __s390x__
CheckTypeSize(PangoGlyphItem,16, 12421, 12, 3.1, NULL, 12397, NULL)
#else
Msg("Find size of PangoGlyphItem (12421)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12397,NULL);\n",architecture,12421,0);
#endif

#if defined __i386__
CheckTypeSize(PangoLayoutRun,8, 12422, 2, 3.1, NULL, 12421, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoLayoutRun,16, 12422, 11, 3.1, NULL, 12421, NULL)
#elif defined __ia64__
CheckTypeSize(PangoLayoutRun,16, 12422, 3, 3.1, NULL, 12421, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoLayoutRun,8, 12422, 6, 3.1, NULL, 12421, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoLayoutRun,16, 12422, 9, 3.1, NULL, 12421, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoLayoutRun,8, 12422, 10, 3.1, NULL, 12421, NULL)
#elif defined __s390x__
CheckTypeSize(PangoLayoutRun,16, 12422, 12, 3.1, NULL, 12421, NULL)
#else
Msg("Find size of PangoLayoutRun (12422)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12421,NULL);\n",architecture,12422,0);
#endif

#if defined __i386__
CheckTypeSize(PangoUnderline,4, 12429, 2, 3.1, NULL, 12428, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoUnderline,4, 12429, 11, 3.1, NULL, 12428, NULL)
#elif defined __ia64__
CheckTypeSize(PangoUnderline,4, 12429, 3, 3.1, NULL, 12428, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoUnderline,4, 12429, 6, 3.1, NULL, 12428, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoUnderline,4, 12429, 9, 3.1, NULL, 12428, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoUnderline,4, 12429, 10, 3.1, NULL, 12428, NULL)
#elif defined __s390x__
CheckTypeSize(PangoUnderline,4, 12429, 12, 3.1, NULL, 12428, NULL)
#else
Msg("Find size of PangoUnderline (12429)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12428,NULL);\n",architecture,12429,0);
#endif

#if defined __i386__
CheckTypeSize(PangoRenderer,32, 12433, 2, 3.1, NULL, 12427, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoRenderer,56, 12433, 11, 3.1, NULL, 12427, NULL)
#elif defined __ia64__
CheckTypeSize(PangoRenderer,56, 12433, 3, 3.1, NULL, 12427, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoRenderer,32, 12433, 6, 3.1, NULL, 12427, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoRenderer,56, 12433, 9, 3.1, NULL, 12427, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoRenderer,32, 12433, 10, 3.1, NULL, 12427, NULL)
#elif defined __s390x__
CheckTypeSize(PangoRenderer,56, 12433, 12, 3.1, NULL, 12427, NULL)
#else
Msg("Find size of PangoRenderer (12433)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12427,NULL);\n",architecture,12433,0);
#endif

#if defined __i386__
CheckTypeSize(PangoRenderPart,4, 12436, 2, 3.1, NULL, 12435, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoRenderPart,4, 12436, 11, 3.1, NULL, 12435, NULL)
#elif defined __ia64__
CheckTypeSize(PangoRenderPart,4, 12436, 3, 3.1, NULL, 12435, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoRenderPart,4, 12436, 6, 3.1, NULL, 12435, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoRenderPart,4, 12436, 9, 3.1, NULL, 12435, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoRenderPart,4, 12436, 10, 3.1, NULL, 12435, NULL)
#elif defined __s390x__
CheckTypeSize(PangoRenderPart,4, 12436, 12, 3.1, NULL, 12435, NULL)
#else
Msg("Find size of PangoRenderPart (12436)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12435,NULL);\n",architecture,12436,0);
#endif

#if defined __i386__
CheckTypeSize(PangoLayoutLine,20, 12441, 2, 3.1, NULL, 12440, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoLayoutLine,32, 12441, 11, 3.1, NULL, 12440, NULL)
#elif defined __ia64__
CheckTypeSize(PangoLayoutLine,32, 12441, 3, 3.1, NULL, 12440, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoLayoutLine,20, 12441, 6, 3.1, NULL, 12440, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoLayoutLine,32, 12441, 9, 3.1, NULL, 12440, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoLayoutLine,20, 12441, 10, 3.1, NULL, 12440, NULL)
#elif defined __s390x__
CheckTypeSize(PangoLayoutLine,32, 12441, 12, 3.1, NULL, 12440, NULL)
#else
Msg("Find size of PangoLayoutLine (12441)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12440,NULL);\n",architecture,12441,0);
#endif

#if defined __i386__
CheckTypeSize(PangoStretch,4, 12444, 2, 3.1, NULL, 12443, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoStretch,4, 12444, 11, 3.1, NULL, 12443, NULL)
#elif defined __ia64__
CheckTypeSize(PangoStretch,4, 12444, 3, 3.1, NULL, 12443, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoStretch,4, 12444, 6, 3.1, NULL, 12443, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoStretch,4, 12444, 9, 3.1, NULL, 12443, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoStretch,4, 12444, 10, 3.1, NULL, 12443, NULL)
#elif defined __s390x__
CheckTypeSize(PangoStretch,4, 12444, 12, 3.1, NULL, 12443, NULL)
#else
Msg("Find size of PangoStretch (12444)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12443,NULL);\n",architecture,12444,0);
#endif

#if defined __i386__
CheckTypeSize(PangoRectangle,16, 12446, 2, 3.1, NULL, 12445, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoRectangle,16, 12446, 11, 3.1, NULL, 12445, NULL)
#elif defined __ia64__
CheckTypeSize(PangoRectangle,16, 12446, 3, 3.1, NULL, 12445, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoRectangle,16, 12446, 6, 3.1, NULL, 12445, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoRectangle,16, 12446, 9, 3.1, NULL, 12445, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoRectangle,16, 12446, 10, 3.1, NULL, 12445, NULL)
#elif defined __s390x__
CheckTypeSize(PangoRectangle,16, 12446, 12, 3.1, NULL, 12445, NULL)
#else
Msg("Find size of PangoRectangle (12446)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12445,NULL);\n",architecture,12446,0);
#endif

#if defined __i386__
CheckTypeSize(PangoTabAlign,4, 12461, 2, 3.1, NULL, 12460, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoTabAlign,4, 12461, 11, 3.1, NULL, 12460, NULL)
#elif defined __ia64__
CheckTypeSize(PangoTabAlign,4, 12461, 3, 3.1, NULL, 12460, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoTabAlign,4, 12461, 6, 3.1, NULL, 12460, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoTabAlign,4, 12461, 9, 3.1, NULL, 12460, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoTabAlign,4, 12461, 10, 3.1, NULL, 12460, NULL)
#elif defined __s390x__
CheckTypeSize(PangoTabAlign,4, 12461, 12, 3.1, NULL, 12460, NULL)
#else
Msg("Find size of PangoTabAlign (12461)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12460,NULL);\n",architecture,12461,0);
#endif

#if defined __i386__
CheckTypeSize(PangoAlignment,4, 12467, 2, 3.1, NULL, 12466, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAlignment,4, 12467, 11, 3.1, NULL, 12466, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAlignment,4, 12467, 3, 3.1, NULL, 12466, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAlignment,4, 12467, 6, 3.1, NULL, 12466, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAlignment,4, 12467, 9, 3.1, NULL, 12466, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAlignment,4, 12467, 10, 3.1, NULL, 12466, NULL)
#elif defined __s390x__
CheckTypeSize(PangoAlignment,4, 12467, 12, 3.1, NULL, 12466, NULL)
#else
Msg("Find size of PangoAlignment (12467)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12466,NULL);\n",architecture,12467,0);
#endif

#if defined __i386__
CheckTypeSize(PangoFontMask,4, 12474, 2, 3.1, NULL, 12473, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoFontMask,4, 12474, 11, 3.1, NULL, 12473, NULL)
#elif defined __ia64__
CheckTypeSize(PangoFontMask,4, 12474, 3, 3.1, NULL, 12473, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoFontMask,4, 12474, 6, 3.1, NULL, 12473, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoFontMask,4, 12474, 9, 3.1, NULL, 12473, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoFontMask,4, 12474, 10, 3.1, NULL, 12473, NULL)
#elif defined __s390x__
CheckTypeSize(PangoFontMask,4, 12474, 12, 3.1, NULL, 12473, NULL)
#else
Msg("Find size of PangoFontMask (12474)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12473,NULL);\n",architecture,12474,0);
#endif

#if defined __i386__
CheckTypeSize(PangoDirection,4, 12476, 2, 3.1, NULL, 12475, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoDirection,4, 12476, 11, 3.1, NULL, 12475, NULL)
#elif defined __ia64__
CheckTypeSize(PangoDirection,4, 12476, 3, 3.1, NULL, 12475, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoDirection,4, 12476, 6, 3.1, NULL, 12475, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoDirection,4, 12476, 9, 3.1, NULL, 12475, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoDirection,4, 12476, 10, 3.1, NULL, 12475, NULL)
#elif defined __s390x__
CheckTypeSize(PangoDirection,4, 12476, 12, 3.1, NULL, 12475, NULL)
#else
Msg("Find size of PangoDirection (12476)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12475,NULL);\n",architecture,12476,0);
#endif

#if defined __i386__
CheckTypeSize(PangoEllipsizeMode,4, 12478, 2, 3.1, NULL, 12477, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoEllipsizeMode,4, 12478, 11, 3.1, NULL, 12477, NULL)
#elif defined __ia64__
CheckTypeSize(PangoEllipsizeMode,4, 12478, 3, 3.1, NULL, 12477, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoEllipsizeMode,4, 12478, 6, 3.1, NULL, 12477, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoEllipsizeMode,4, 12478, 9, 3.1, NULL, 12477, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoEllipsizeMode,4, 12478, 10, 3.1, NULL, 12477, NULL)
#elif defined __s390x__
CheckTypeSize(PangoEllipsizeMode,4, 12478, 12, 3.1, NULL, 12477, NULL)
#else
Msg("Find size of PangoEllipsizeMode (12478)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12477,NULL);\n",architecture,12478,0);
#endif

#if defined __i386__
CheckTypeSize(PangoStyle,4, 12484, 2, 3.1, NULL, 12483, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoStyle,4, 12484, 11, 3.1, NULL, 12483, NULL)
#elif defined __ia64__
CheckTypeSize(PangoStyle,4, 12484, 3, 3.1, NULL, 12483, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoStyle,4, 12484, 6, 3.1, NULL, 12483, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoStyle,4, 12484, 9, 3.1, NULL, 12483, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoStyle,4, 12484, 10, 3.1, NULL, 12483, NULL)
#elif defined __s390x__
CheckTypeSize(PangoStyle,4, 12484, 12, 3.1, NULL, 12483, NULL)
#else
Msg("Find size of PangoStyle (12484)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12483,NULL);\n",architecture,12484,0);
#endif

#if defined __i386__
CheckTypeSize(PangoCoverageLevel,4, 12486, 2, 3.1, NULL, 12485, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoCoverageLevel,4, 12486, 11, 3.1, NULL, 12485, NULL)
#elif defined __ia64__
CheckTypeSize(PangoCoverageLevel,4, 12486, 3, 3.1, NULL, 12485, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoCoverageLevel,4, 12486, 6, 3.1, NULL, 12485, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoCoverageLevel,4, 12486, 9, 3.1, NULL, 12485, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoCoverageLevel,4, 12486, 10, 3.1, NULL, 12485, NULL)
#elif defined __s390x__
CheckTypeSize(PangoCoverageLevel,4, 12486, 12, 3.1, NULL, 12485, NULL)
#else
Msg("Find size of PangoCoverageLevel (12486)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12485,NULL);\n",architecture,12486,0);
#endif

#if defined __i386__
CheckTypeSize(PangoAttrFilterFunc,4, 12491, 2, 3.1, NULL, 12490, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrFilterFunc,8, 12491, 11, 3.1, NULL, 12490, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrFilterFunc,8, 12491, 3, 3.1, NULL, 12490, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrFilterFunc,4, 12491, 6, 3.1, NULL, 12490, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrFilterFunc,8, 12491, 9, 3.1, NULL, 12490, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrFilterFunc,4, 12491, 10, 3.1, NULL, 12490, NULL)
#elif defined __s390x__
CheckTypeSize(PangoAttrFilterFunc,8, 12491, 12, 3.1, NULL, 12490, NULL)
#else
Msg("Find size of PangoAttrFilterFunc (12491)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12490,NULL);\n",architecture,12491,0);
#endif

#if defined __i386__
CheckTypeSize(PangoWeight,4, 12500, 2, 3.1, NULL, 12499, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoWeight,4, 12500, 11, 3.1, NULL, 12499, NULL)
#elif defined __ia64__
CheckTypeSize(PangoWeight,4, 12500, 3, 3.1, NULL, 12499, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoWeight,4, 12500, 6, 3.1, NULL, 12499, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoWeight,4, 12500, 9, 3.1, NULL, 12499, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoWeight,4, 12500, 10, 3.1, NULL, 12499, NULL)
#elif defined __s390x__
CheckTypeSize(PangoWeight,4, 12500, 12, 3.1, NULL, 12499, NULL)
#else
Msg("Find size of PangoWeight (12500)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12499,NULL);\n",architecture,12500,0);
#endif

#if defined __i386__
CheckTypeSize(PangoFontsetForeachFunc,4, 12507, 2, 3.1, NULL, 12506, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoFontsetForeachFunc,8, 12507, 11, 3.1, NULL, 12506, NULL)
#elif defined __ia64__
CheckTypeSize(PangoFontsetForeachFunc,8, 12507, 3, 3.1, NULL, 12506, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoFontsetForeachFunc,4, 12507, 6, 3.1, NULL, 12506, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoFontsetForeachFunc,8, 12507, 9, 3.1, NULL, 12506, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoFontsetForeachFunc,4, 12507, 10, 3.1, NULL, 12506, NULL)
#elif defined __s390x__
CheckTypeSize(PangoFontsetForeachFunc,8, 12507, 12, 3.1, NULL, 12506, NULL)
#else
Msg("Find size of PangoFontsetForeachFunc (12507)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12506,NULL);\n",architecture,12507,0);
#endif

#if defined __i386__
CheckTypeSize(PangoVariant,4, 12509, 2, 3.1, NULL, 12508, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoVariant,4, 12509, 11, 3.1, NULL, 12508, NULL)
#elif defined __ia64__
CheckTypeSize(PangoVariant,4, 12509, 3, 3.1, NULL, 12508, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoVariant,4, 12509, 6, 3.1, NULL, 12508, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoVariant,4, 12509, 9, 3.1, NULL, 12508, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoVariant,4, 12509, 10, 3.1, NULL, 12508, NULL)
#elif defined __s390x__
CheckTypeSize(PangoVariant,4, 12509, 12, 3.1, NULL, 12508, NULL)
#else
Msg("Find size of PangoVariant (12509)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12508,NULL);\n",architecture,12509,0);
#endif

#if defined __i386__
CheckTypeSize(PangoAttrDataCopyFunc,4, 12515, 2, 3.1, NULL, 12514, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrDataCopyFunc,8, 12515, 11, 3.1, NULL, 12514, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrDataCopyFunc,8, 12515, 3, 3.1, NULL, 12514, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrDataCopyFunc,4, 12515, 6, 3.1, NULL, 12514, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrDataCopyFunc,8, 12515, 9, 3.1, NULL, 12514, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrDataCopyFunc,4, 12515, 10, 3.1, NULL, 12514, NULL)
#elif defined __s390x__
CheckTypeSize(PangoAttrDataCopyFunc,8, 12515, 12, 3.1, NULL, 12514, NULL)
#else
Msg("Find size of PangoAttrDataCopyFunc (12515)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12514,NULL);\n",architecture,12515,0);
#endif

#if defined __i386__
CheckTypeSize(PangoAttrShape,56, 12517, 2, 3.1, NULL, 12516, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrShape,72, 12517, 11, 3.1, NULL, 12516, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrShape,72, 12517, 3, 3.1, NULL, 12516, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrShape,56, 12517, 6, 3.1, NULL, 12516, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrShape,72, 12517, 9, 3.1, NULL, 12516, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrShape,56, 12517, 10, 3.1, NULL, 12516, NULL)
#elif defined __s390x__
CheckTypeSize(PangoAttrShape,72, 12517, 12, 3.1, NULL, 12516, NULL)
#else
Msg("Find size of PangoAttrShape (12517)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12516,NULL);\n",architecture,12517,0);
#endif

#if defined __i386__
CheckTypeSize(PangoAttrString,16, 12521, 2, 3.1, NULL, 12520, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrString,24, 12521, 11, 3.1, NULL, 12520, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrString,24, 12521, 3, 3.1, NULL, 12520, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrString,16, 12521, 6, 3.1, NULL, 12520, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrString,24, 12521, 9, 3.1, NULL, 12520, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrString,16, 12521, 10, 3.1, NULL, 12520, NULL)
#elif defined __s390x__
CheckTypeSize(PangoAttrString,24, 12521, 12, 3.1, NULL, 12520, NULL)
#else
Msg("Find size of PangoAttrString (12521)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12520,NULL);\n",architecture,12521,0);
#endif

#if defined __i386__
CheckTypeSize(PangoAttrColor,20, 12523, 2, 3.1, NULL, 12522, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrColor,24, 12523, 11, 3.1, NULL, 12522, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrColor,24, 12523, 3, 3.1, NULL, 12522, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrColor,20, 12523, 6, 3.1, NULL, 12522, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrColor,24, 12523, 9, 3.1, NULL, 12522, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrColor,20, 12523, 10, 3.1, NULL, 12522, NULL)
#elif defined __s390x__
CheckTypeSize(PangoAttrColor,24, 12523, 12, 3.1, NULL, 12522, NULL)
#else
Msg("Find size of PangoAttrColor (12523)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12522,NULL);\n",architecture,12523,0);
#endif

#if defined __i386__
CheckTypeSize(PangoAttrFontDesc,16, 12525, 2, 3.1, NULL, 12524, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrFontDesc,24, 12525, 11, 3.1, NULL, 12524, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrFontDesc,24, 12525, 3, 3.1, NULL, 12524, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrFontDesc,16, 12525, 6, 3.1, NULL, 12524, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrFontDesc,24, 12525, 9, 3.1, NULL, 12524, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrFontDesc,16, 12525, 10, 3.1, NULL, 12524, NULL)
#elif defined __s390x__
CheckTypeSize(PangoAttrFontDesc,24, 12525, 12, 3.1, NULL, 12524, NULL)
#else
Msg("Find size of PangoAttrFontDesc (12525)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12524,NULL);\n",architecture,12525,0);
#endif

#if defined __i386__
CheckTypeSize(PangoAttrFloat,20, 12527, 2, 3.1, NULL, 12526, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrFloat,24, 12527, 11, 3.1, NULL, 12526, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrFloat,24, 12527, 3, 3.1, NULL, 12526, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrFloat,24, 12527, 6, 3.1, NULL, 12526, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrFloat,24, 12527, 9, 3.1, NULL, 12526, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrFloat,24, 12527, 10, 3.1, NULL, 12526, NULL)
#elif defined __s390x__
CheckTypeSize(PangoAttrFloat,24, 12527, 12, 3.1, NULL, 12526, NULL)
#else
Msg("Find size of PangoAttrFloat (12527)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12526,NULL);\n",architecture,12527,0);
#endif

#if defined __i386__
CheckTypeSize(PangoRendererClass,124, 12539, 2, 3.1, NULL, 12528, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoRendererClass,248, 12539, 11, 3.1, NULL, 12528, NULL)
#elif defined __ia64__
CheckTypeSize(PangoRendererClass,248, 12539, 3, 3.1, NULL, 12528, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoRendererClass,124, 12539, 6, 3.1, NULL, 12528, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoRendererClass,248, 12539, 9, 3.1, NULL, 12528, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoRendererClass,124, 12539, 10, 3.1, NULL, 12528, NULL)
#elif defined __s390x__
CheckTypeSize(PangoRendererClass,248, 12539, 12, 3.1, NULL, 12528, NULL)
#else
Msg("Find size of PangoRendererClass (12539)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12528,NULL);\n",architecture,12539,0);
#endif

#if defined __i386__
CheckTypeSize(PangoAttrLanguage,16, 12541, 2, 3.1, NULL, 12540, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrLanguage,24, 12541, 11, 3.1, NULL, 12540, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrLanguage,24, 12541, 3, 3.1, NULL, 12540, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrLanguage,16, 12541, 6, 3.1, NULL, 12540, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrLanguage,24, 12541, 9, 3.1, NULL, 12540, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrLanguage,16, 12541, 10, 3.1, NULL, 12540, NULL)
#elif defined __s390x__
CheckTypeSize(PangoAttrLanguage,24, 12541, 12, 3.1, NULL, 12540, NULL)
#else
Msg("Find size of PangoAttrLanguage (12541)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12540,NULL);\n",architecture,12541,0);
#endif

#if defined __i386__
CheckTypeSize(PangoAttrInt,16, 12543, 2, 3.1, NULL, 12542, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrInt,24, 12543, 11, 3.1, NULL, 12542, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrInt,24, 12543, 3, 3.1, NULL, 12542, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrInt,16, 12543, 6, 3.1, NULL, 12542, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrInt,24, 12543, 9, 3.1, NULL, 12542, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrInt,16, 12543, 10, 3.1, NULL, 12542, NULL)
#elif defined __s390x__
CheckTypeSize(PangoAttrInt,24, 12543, 12, 3.1, NULL, 12542, NULL)
#else
Msg("Find size of PangoAttrInt (12543)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12542,NULL);\n",architecture,12543,0);
#endif

#if defined __i386__
CheckTypeSize(PangoAttrSize,20, 12545, 2, 3.1, NULL, 12544, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrSize,24, 12545, 11, 3.1, NULL, 12544, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrSize,24, 12545, 3, 3.1, NULL, 12544, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrSize,20, 12545, 6, 3.1, NULL, 12544, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrSize,24, 12545, 9, 3.1, NULL, 12544, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrSize,20, 12545, 10, 3.1, NULL, 12544, NULL)
#elif defined __s390x__
CheckTypeSize(PangoAttrSize,24, 12545, 12, 3.1, NULL, 12544, NULL)
#else
Msg("Find size of PangoAttrSize (12545)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12544,NULL);\n",architecture,12545,0);
#endif

extern GType pango_script_get_type_db(void);
CheckInterfacedef(pango_script_get_type,pango_script_get_type_db);
extern const char * pango_font_face_get_face_name_db(PangoFontFace *);
CheckInterfacedef(pango_font_face_get_face_name,pango_font_face_get_face_name_db);
extern PangoWrapMode pango_layout_get_wrap_db(PangoLayout *);
CheckInterfacedef(pango_layout_get_wrap,pango_layout_get_wrap_db);
extern void pango_layout_context_changed_db(PangoLayout *);
CheckInterfacedef(pango_layout_context_changed,pango_layout_context_changed_db);
extern gboolean pango_script_iter_next_db(PangoScriptIter *);
CheckInterfacedef(pango_script_iter_next,pango_script_iter_next_db);
extern PangoScript pango_script_for_unichar_db(gunichar);
CheckInterfacedef(pango_script_for_unichar,pango_script_for_unichar_db);
extern PangoFont * pango_context_load_font_db(PangoContext *, const PangoFontDescription *);
CheckInterfacedef(pango_context_load_font,pango_context_load_font_db);
extern gboolean pango_attribute_equal_db(const PangoAttribute *, const PangoAttribute *);
CheckInterfacedef(pango_attribute_equal,pango_attribute_equal_db);
extern void pango_get_log_attrs_db(const char *, int, int, PangoLanguage *, PangoLogAttr *, int);
CheckInterfacedef(pango_get_log_attrs,pango_get_log_attrs_db);
extern gboolean pango_color_parse_db(PangoColor *, const char *);
CheckInterfacedef(pango_color_parse,pango_color_parse_db);
extern gboolean pango_font_description_equal_db(const PangoFontDescription *, const PangoFontDescription *);
CheckInterfacedef(pango_font_description_equal,pango_font_description_equal_db);
extern PangoAttribute * pango_attr_rise_new_db(int);
CheckInterfacedef(pango_attr_rise_new,pango_attr_rise_new_db);
extern void pango_matrix_translate_db(PangoMatrix *, double, double);
CheckInterfacedef(pango_matrix_translate,pango_matrix_translate_db);
extern PangoLayoutRun * pango_layout_iter_get_run_db(PangoLayoutIter *);
CheckInterfacedef(pango_layout_iter_get_run,pango_layout_iter_get_run_db);
extern PangoLayout * pango_layout_new_db(PangoContext *);
CheckInterfacedef(pango_layout_new,pango_layout_new_db);
extern PangoAttribute * pango_attr_size_new_db(int);
CheckInterfacedef(pango_attr_size_new,pango_attr_size_new_db);
extern PangoAttribute * pango_attr_family_new_db(const char *);
CheckInterfacedef(pango_attr_family_new,pango_attr_family_new_db);
extern void pango_layout_set_markup_with_accel_db(PangoLayout *, const char *, int, gunichar, gunichar *);
CheckInterfacedef(pango_layout_set_markup_with_accel,pango_layout_set_markup_with_accel_db);
extern PangoLanguage * pango_script_get_sample_language_db(PangoScript);
CheckInterfacedef(pango_script_get_sample_language,pango_script_get_sample_language_db);
extern void pango_renderer_draw_trapezoid_db(PangoRenderer *, PangoRenderPart, double, double, double, double, double, double);
CheckInterfacedef(pango_renderer_draw_trapezoid,pango_renderer_draw_trapezoid_db);
extern void pango_attr_list_insert_before_db(PangoAttrList *, PangoAttribute *);
CheckInterfacedef(pango_attr_list_insert_before,pango_attr_list_insert_before_db);
extern PangoAttribute * pango_attr_underline_new_db(PangoUnderline);
CheckInterfacedef(pango_attr_underline_new,pango_attr_underline_new_db);
extern void pango_layout_line_unref_db(PangoLayoutLine *);
CheckInterfacedef(pango_layout_line_unref,pango_layout_line_unref_db);
extern void pango_glyph_string_get_logical_widths_db(PangoGlyphString *, const char *, int, int, int *);
CheckInterfacedef(pango_glyph_string_get_logical_widths,pango_glyph_string_get_logical_widths_db);
extern PangoStretch pango_font_description_get_stretch_db(const PangoFontDescription *);
CheckInterfacedef(pango_font_description_get_stretch,pango_font_description_get_stretch_db);
extern void pango_layout_iter_get_char_extents_db(PangoLayoutIter *, PangoRectangle *);
CheckInterfacedef(pango_layout_iter_get_char_extents,pango_layout_iter_get_char_extents_db);
extern PangoAttribute * pango_attr_scale_new_db(double);
CheckInterfacedef(pango_attr_scale_new,pango_attr_scale_new_db);
extern void pango_layout_set_width_db(PangoLayout *, int);
CheckInterfacedef(pango_layout_set_width,pango_layout_set_width_db);
extern void pango_layout_line_index_to_x_db(PangoLayoutLine *, int, int, int *);
CheckInterfacedef(pango_layout_line_index_to_x,pango_layout_line_index_to_x_db);
extern gboolean pango_font_family_is_monospace_db(PangoFontFamily *);
CheckInterfacedef(pango_font_family_is_monospace,pango_font_family_is_monospace_db);
extern void pango_font_descriptions_free_db(PangoFontDescription * *, int);
CheckInterfacedef(pango_font_descriptions_free,pango_font_descriptions_free_db);
extern void pango_layout_set_single_paragraph_mode_db(PangoLayout *, gboolean);
CheckInterfacedef(pango_layout_set_single_paragraph_mode,pango_layout_set_single_paragraph_mode_db);
extern char * pango_font_description_to_filename_db(const PangoFontDescription *);
CheckInterfacedef(pango_font_description_to_filename,pango_font_description_to_filename_db);
extern PangoLayout * pango_layout_copy_db(PangoLayout *);
CheckInterfacedef(pango_layout_copy,pango_layout_copy_db);
extern int pango_font_metrics_get_approximate_char_width_db(PangoFontMetrics *);
CheckInterfacedef(pango_font_metrics_get_approximate_char_width,pango_font_metrics_get_approximate_char_width_db);
extern void pango_shape_db(const gchar *, gint, PangoAnalysis *, PangoGlyphString *);
CheckInterfacedef(pango_shape,pango_shape_db);
extern void pango_layout_line_get_pixel_extents_db(PangoLayoutLine *, PangoRectangle *, PangoRectangle *);
CheckInterfacedef(pango_layout_line_get_pixel_extents,pango_layout_line_get_pixel_extents_db);
extern void pango_layout_set_wrap_db(PangoLayout *, PangoWrapMode);
CheckInterfacedef(pango_layout_set_wrap,pango_layout_set_wrap_db);
extern const char * pango_font_description_get_family_db(const PangoFontDescription *);
CheckInterfacedef(pango_font_description_get_family,pango_font_description_get_family_db);
extern void pango_tab_array_get_tabs_db(PangoTabArray *, PangoTabAlign * *, gint * *);
CheckInterfacedef(pango_tab_array_get_tabs,pango_tab_array_get_tabs_db);
extern void pango_script_iter_get_range_db(PangoScriptIter *, const char * *, const char * *, PangoScript *);
CheckInterfacedef(pango_script_iter_get_range,pango_script_iter_get_range_db);
extern gboolean pango_layout_iter_next_line_db(PangoLayoutIter *);
CheckInterfacedef(pango_layout_iter_next_line,pango_layout_iter_next_line_db);
extern void pango_layout_get_log_attrs_db(PangoLayout *, PangoLogAttr * *, gint *);
CheckInterfacedef(pango_layout_get_log_attrs,pango_layout_get_log_attrs_db);
extern void pango_tab_array_free_db(PangoTabArray *);
CheckInterfacedef(pango_tab_array_free,pango_tab_array_free_db);
extern PangoTabArray * pango_layout_get_tabs_db(PangoLayout *);
CheckInterfacedef(pango_layout_get_tabs,pango_layout_get_tabs_db);
extern PangoFontDescription * pango_font_describe_db(PangoFont *);
CheckInterfacedef(pango_font_describe,pango_font_describe_db);
extern void pango_context_set_font_description_db(PangoContext *, const PangoFontDescription *);
CheckInterfacedef(pango_context_set_font_description,pango_context_set_font_description_db);
extern gint pango_tab_array_get_size_db(PangoTabArray *);
CheckInterfacedef(pango_tab_array_get_size,pango_tab_array_get_size_db);
extern PangoAlignment pango_layout_get_alignment_db(PangoLayout *);
CheckInterfacedef(pango_layout_get_alignment,pango_layout_get_alignment_db);
extern const PangoMatrix * pango_renderer_get_matrix_db(PangoRenderer *);
CheckInterfacedef(pango_renderer_get_matrix,pango_renderer_get_matrix_db);
extern PangoAttrIterator * pango_attr_iterator_copy_db(PangoAttrIterator *);
CheckInterfacedef(pango_attr_iterator_copy,pango_attr_iterator_copy_db);
extern GType pango_style_get_type_db(void);
CheckInterfacedef(pango_style_get_type,pango_style_get_type_db);
extern PangoFontMask pango_font_description_get_set_fields_db(const PangoFontDescription *);
CheckInterfacedef(pango_font_description_get_set_fields,pango_font_description_get_set_fields_db);
extern gboolean pango_language_matches_db(PangoLanguage *, const char *);
CheckInterfacedef(pango_language_matches,pango_language_matches_db);
extern int pango_font_metrics_get_descent_db(PangoFontMetrics *);
CheckInterfacedef(pango_font_metrics_get_descent,pango_font_metrics_get_descent_db);
extern void pango_layout_get_extents_db(PangoLayout *, PangoRectangle *, PangoRectangle *);
CheckInterfacedef(pango_layout_get_extents,pango_layout_get_extents_db);
extern char * pango_font_description_to_string_db(const PangoFontDescription *);
CheckInterfacedef(pango_font_description_to_string,pango_font_description_to_string_db);
extern void pango_layout_set_justify_db(PangoLayout *, gboolean);
CheckInterfacedef(pango_layout_set_justify,pango_layout_set_justify_db);
extern void pango_find_paragraph_boundary_db(const gchar *, gint, gint *, gint *);
CheckInterfacedef(pango_find_paragraph_boundary,pango_find_paragraph_boundary_db);
extern PangoDirection pango_unichar_direction_db(gunichar);
CheckInterfacedef(pango_unichar_direction,pango_unichar_direction_db);
extern GList * pango_reorder_items_db(GList *);
CheckInterfacedef(pango_reorder_items,pango_reorder_items_db);
extern void pango_glyph_string_set_size_db(PangoGlyphString *, gint);
CheckInterfacedef(pango_glyph_string_set_size,pango_glyph_string_set_size_db);
extern PangoFontDescription * pango_font_description_from_string_db(const char *);
CheckInterfacedef(pango_font_description_from_string,pango_font_description_from_string_db);
extern int pango_font_metrics_get_strikethrough_position_db(PangoFontMetrics *);
CheckInterfacedef(pango_font_metrics_get_strikethrough_position,pango_font_metrics_get_strikethrough_position_db);
extern PangoEngineShape * pango_font_find_shaper_db(PangoFont *, PangoLanguage *, guint32);
CheckInterfacedef(pango_font_find_shaper,pango_font_find_shaper_db);
extern GType pango_glyph_string_get_type_db(void);
CheckInterfacedef(pango_glyph_string_get_type,pango_glyph_string_get_type_db);
extern PangoEllipsizeMode pango_layout_get_ellipsize_db(PangoLayout *);
CheckInterfacedef(pango_layout_get_ellipsize,pango_layout_get_ellipsize_db);
extern PangoFontDescription * pango_font_face_describe_db(PangoFontFace *);
CheckInterfacedef(pango_font_face_describe,pango_font_face_describe_db);
extern PangoMatrix * pango_matrix_copy_db(const PangoMatrix *);
CheckInterfacedef(pango_matrix_copy,pango_matrix_copy_db);
extern const PangoMatrix * pango_context_get_matrix_db(PangoContext *);
CheckInterfacedef(pango_context_get_matrix,pango_context_get_matrix_db);
extern void pango_attr_iterator_range_db(PangoAttrIterator *, gint *, gint *);
CheckInterfacedef(pango_attr_iterator_range,pango_attr_iterator_range_db);
extern void pango_context_set_language_db(PangoContext *, PangoLanguage *);
CheckInterfacedef(pango_context_set_language,pango_context_set_language_db);
extern void pango_glyph_item_letter_space_db(PangoGlyphItem *, const char *, PangoLogAttr *, int);
CheckInterfacedef(pango_glyph_item_letter_space,pango_glyph_item_letter_space_db);
extern void pango_coverage_max_db(PangoCoverage *, PangoCoverage *);
CheckInterfacedef(pango_coverage_max,pango_coverage_max_db);
extern PangoStyle pango_font_description_get_style_db(const PangoFontDescription *);
CheckInterfacedef(pango_font_description_get_style,pango_font_description_get_style_db);
extern void pango_layout_line_get_extents_db(PangoLayoutLine *, PangoRectangle *, PangoRectangle *);
CheckInterfacedef(pango_layout_line_get_extents,pango_layout_line_get_extents_db);
extern void pango_attribute_destroy_db(PangoAttribute *);
CheckInterfacedef(pango_attribute_destroy,pango_attribute_destroy_db);
extern PangoLayoutLine * pango_layout_get_line_db(PangoLayout *, int);
CheckInterfacedef(pango_layout_get_line,pango_layout_get_line_db);
extern gboolean pango_layout_get_auto_dir_db(PangoLayout *);
CheckInterfacedef(pango_layout_get_auto_dir,pango_layout_get_auto_dir_db);
extern int pango_font_metrics_get_approximate_digit_width_db(PangoFontMetrics *);
CheckInterfacedef(pango_font_metrics_get_approximate_digit_width,pango_font_metrics_get_approximate_digit_width_db);
extern void pango_attr_list_splice_db(PangoAttrList *, PangoAttrList *, gint, gint);
CheckInterfacedef(pango_attr_list_splice,pango_attr_list_splice_db);
extern PangoLayoutLine * pango_layout_iter_get_line_db(PangoLayoutIter *);
CheckInterfacedef(pango_layout_iter_get_line,pango_layout_iter_get_line_db);
extern PangoFontDescription * pango_font_description_new_db(void);
CheckInterfacedef(pango_font_description_new,pango_font_description_new_db);
extern PangoAttribute * pango_attr_font_desc_new_db(const PangoFontDescription *);
CheckInterfacedef(pango_attr_font_desc_new,pango_attr_font_desc_new_db);
extern PangoFontDescription * pango_font_description_copy_static_db(const PangoFontDescription *);
CheckInterfacedef(pango_font_description_copy_static,pango_font_description_copy_static_db);
extern void pango_font_metrics_unref_db(PangoFontMetrics *);
CheckInterfacedef(pango_font_metrics_unref,pango_font_metrics_unref_db);
extern PangoDirection pango_find_base_dir_db(const gchar *, gint);
CheckInterfacedef(pango_find_base_dir,pango_find_base_dir_db);
extern void pango_layout_iter_get_run_extents_db(PangoLayoutIter *, PangoRectangle *, PangoRectangle *);
CheckInterfacedef(pango_layout_iter_get_run_extents,pango_layout_iter_get_run_extents_db);
extern void pango_layout_index_to_pos_db(PangoLayout *, int, PangoRectangle *);
CheckInterfacedef(pango_layout_index_to_pos,pango_layout_index_to_pos_db);
extern const char * pango_font_family_get_name_db(PangoFontFamily *);
CheckInterfacedef(pango_font_family_get_name,pango_font_family_get_name_db);
extern void pango_layout_line_get_x_ranges_db(PangoLayoutLine *, int, int, int * *, int *);
CheckInterfacedef(pango_layout_line_get_x_ranges,pango_layout_line_get_x_ranges_db);
extern void pango_item_free_db(PangoItem *);
CheckInterfacedef(pango_item_free,pango_item_free_db);
extern GType pango_renderer_get_type_db(void);
CheckInterfacedef(pango_renderer_get_type,pango_renderer_get_type_db);
extern void pango_layout_set_indent_db(PangoLayout *, int);
CheckInterfacedef(pango_layout_set_indent,pango_layout_set_indent_db);
extern void pango_layout_set_text_db(PangoLayout *, const char *, int);
CheckInterfacedef(pango_layout_set_text,pango_layout_set_text_db);
extern gint pango_font_description_get_size_db(const PangoFontDescription *);
CheckInterfacedef(pango_font_description_get_size,pango_font_description_get_size_db);
extern GType pango_fontset_get_type_db(void);
CheckInterfacedef(pango_fontset_get_type,pango_fontset_get_type_db);
extern GType pango_weight_get_type_db(void);
CheckInterfacedef(pango_weight_get_type,pango_weight_get_type_db);
extern guint pango_font_description_hash_db(const PangoFontDescription *);
CheckInterfacedef(pango_font_description_hash,pango_font_description_hash_db);
extern void pango_renderer_activate_db(PangoRenderer *);
CheckInterfacedef(pango_renderer_activate,pango_renderer_activate_db);
extern PangoContext * pango_layout_get_context_db(PangoLayout *);
CheckInterfacedef(pango_layout_get_context,pango_layout_get_context_db);
extern PangoCoverage * pango_coverage_new_db(void);
CheckInterfacedef(pango_coverage_new,pango_coverage_new_db);
extern PangoAttribute * pango_attr_strikethrough_new_db(gboolean);
CheckInterfacedef(pango_attr_strikethrough_new,pango_attr_strikethrough_new_db);
extern void pango_coverage_set_db(PangoCoverage *, int, PangoCoverageLevel);
CheckInterfacedef(pango_coverage_set,pango_coverage_set_db);
extern PangoFont * pango_font_map_load_font_db(PangoFontMap *, PangoContext *, const PangoFontDescription *);
CheckInterfacedef(pango_font_map_load_font,pango_font_map_load_font_db);
extern int pango_layout_iter_get_baseline_db(PangoLayoutIter *);
CheckInterfacedef(pango_layout_iter_get_baseline,pango_layout_iter_get_baseline_db);
extern gboolean pango_font_description_better_match_db(const PangoFontDescription *, const PangoFontDescription *, const PangoFontDescription *);
CheckInterfacedef(pango_font_description_better_match,pango_font_description_better_match_db);
extern void pango_layout_iter_get_line_extents_db(PangoLayoutIter *, PangoRectangle *, PangoRectangle *);
CheckInterfacedef(pango_layout_iter_get_line_extents,pango_layout_iter_get_line_extents_db);
extern PangoItem * pango_item_new_db(void);
CheckInterfacedef(pango_item_new,pango_item_new_db);
extern GType pango_font_mask_get_type_db(void);
CheckInterfacedef(pango_font_mask_get_type,pango_font_mask_get_type_db);
extern void pango_tab_array_get_tab_db(PangoTabArray *, gint, PangoTabAlign *, gint *);
CheckInterfacedef(pango_tab_array_get_tab,pango_tab_array_get_tab_db);
extern gboolean pango_attr_iterator_next_db(PangoAttrIterator *);
CheckInterfacedef(pango_attr_iterator_next,pango_attr_iterator_next_db);
extern gboolean pango_layout_get_justify_db(PangoLayout *);
CheckInterfacedef(pango_layout_get_justify,pango_layout_get_justify_db);
extern PangoCoverage * pango_coverage_ref_db(PangoCoverage *);
CheckInterfacedef(pango_coverage_ref,pango_coverage_ref_db);
extern PangoAttribute * pango_attr_foreground_new_db(guint16, guint16, guint16);
CheckInterfacedef(pango_attr_foreground_new,pango_attr_foreground_new_db);
extern PangoAttrList * pango_attr_list_filter_db(PangoAttrList *, PangoAttrFilterFunc, gpointer);
CheckInterfacedef(pango_attr_list_filter,pango_attr_list_filter_db);
extern PangoFontDescription * pango_context_get_font_description_db(PangoContext *);
CheckInterfacedef(pango_context_get_font_description,pango_context_get_font_description_db);
extern PangoTabArray * pango_tab_array_new_with_positions_db(gint, gboolean, PangoTabAlign, gint, ...);
CheckInterfacedef(pango_tab_array_new_with_positions,pango_tab_array_new_with_positions_db);
extern GSList * pango_glyph_item_apply_attrs_db(PangoGlyphItem *, const char *, PangoAttrList *);
CheckInterfacedef(pango_glyph_item_apply_attrs,pango_glyph_item_apply_attrs_db);
extern PangoAttribute * pango_attr_shape_new_db(const PangoRectangle *, const PangoRectangle *);
CheckInterfacedef(pango_attr_shape_new,pango_attr_shape_new_db);
extern GType pango_variant_get_type_db(void);
CheckInterfacedef(pango_variant_get_type,pango_variant_get_type_db);
extern void pango_layout_set_spacing_db(PangoLayout *, int);
CheckInterfacedef(pango_layout_set_spacing,pango_layout_set_spacing_db);
extern PangoAttrList * pango_attr_list_ref_db(PangoAttrList *);
CheckInterfacedef(pango_attr_list_ref,pango_attr_list_ref_db);
extern void pango_font_description_set_family_static_db(PangoFontDescription *, const char *);
CheckInterfacedef(pango_font_description_set_family_static,pango_font_description_set_family_static_db);
extern gboolean pango_layout_iter_next_char_db(PangoLayoutIter *);
CheckInterfacedef(pango_layout_iter_next_char,pango_layout_iter_next_char_db);
extern void pango_glyph_string_index_to_x_db(PangoGlyphString *, char *, int, PangoAnalysis *, int, gboolean, int *);
CheckInterfacedef(pango_glyph_string_index_to_x,pango_glyph_string_index_to_x_db);
extern PangoAttribute * pango_attr_stretch_new_db(PangoStretch);
CheckInterfacedef(pango_attr_stretch_new,pango_attr_stretch_new_db);
extern GType pango_attr_type_get_type_db(void);
CheckInterfacedef(pango_attr_type_get_type,pango_attr_type_get_type_db);
extern GType pango_language_get_type_db(void);
CheckInterfacedef(pango_language_get_type,pango_language_get_type_db);
extern void pango_font_get_glyph_extents_db(PangoFont *, PangoGlyph, PangoRectangle *, PangoRectangle *);
CheckInterfacedef(pango_font_get_glyph_extents,pango_font_get_glyph_extents_db);
extern PangoAttribute * pango_attr_fallback_new_db(gboolean);
CheckInterfacedef(pango_attr_fallback_new,pango_attr_fallback_new_db);
extern void pango_font_description_merge_static_db(PangoFontDescription *, const PangoFontDescription *, gboolean);
CheckInterfacedef(pango_font_description_merge_static,pango_font_description_merge_static_db);
extern PangoAttrList * pango_layout_get_attributes_db(PangoLayout *);
CheckInterfacedef(pango_layout_get_attributes,pango_layout_get_attributes_db);
extern PangoFontset * pango_font_map_load_fontset_db(PangoFontMap *, PangoContext *, const PangoFontDescription *, PangoLanguage *);
CheckInterfacedef(pango_font_map_load_fontset,pango_font_map_load_fontset_db);
extern void pango_layout_set_tabs_db(PangoLayout *, PangoTabArray *);
CheckInterfacedef(pango_layout_set_tabs,pango_layout_set_tabs_db);
extern GType pango_attr_list_get_type_db(void);
CheckInterfacedef(pango_attr_list_get_type,pango_attr_list_get_type_db);
extern GType pango_font_family_get_type_db(void);
CheckInterfacedef(pango_font_family_get_type,pango_font_family_get_type_db);
extern void pango_matrix_free_db(PangoMatrix *);
CheckInterfacedef(pango_matrix_free,pango_matrix_free_db);
extern PangoAttribute * pango_attr_language_new_db(PangoLanguage *);
CheckInterfacedef(pango_attr_language_new,pango_attr_language_new_db);
extern void pango_layout_iter_get_cluster_extents_db(PangoLayoutIter *, PangoRectangle *, PangoRectangle *);
CheckInterfacedef(pango_layout_iter_get_cluster_extents,pango_layout_iter_get_cluster_extents_db);
extern PangoAttrType pango_attr_type_register_db(const gchar *);
CheckInterfacedef(pango_attr_type_register,pango_attr_type_register_db);
extern void pango_context_set_matrix_db(PangoContext *, const PangoMatrix *);
CheckInterfacedef(pango_context_set_matrix,pango_context_set_matrix_db);
extern void pango_layout_set_markup_db(PangoLayout *, const char *, int);
CheckInterfacedef(pango_layout_set_markup,pango_layout_set_markup_db);
extern GType pango_coverage_level_get_type_db(void);
CheckInterfacedef(pango_coverage_level_get_type,pango_coverage_level_get_type_db);
extern PangoTabArray * pango_tab_array_copy_db(PangoTabArray *);
CheckInterfacedef(pango_tab_array_copy,pango_tab_array_copy_db);
extern void pango_attr_list_change_db(PangoAttrList *, PangoAttribute *);
CheckInterfacedef(pango_attr_list_change,pango_attr_list_change_db);
extern PangoColor * pango_renderer_get_color_db(PangoRenderer *, PangoRenderPart);
CheckInterfacedef(pango_renderer_get_color,pango_renderer_get_color_db);
extern void pango_renderer_part_changed_db(PangoRenderer *, PangoRenderPart);
CheckInterfacedef(pango_renderer_part_changed,pango_renderer_part_changed_db);
extern void pango_glyph_string_x_to_index_db(PangoGlyphString *, char *, int, PangoAnalysis *, int, int *, gboolean *);
CheckInterfacedef(pango_glyph_string_x_to_index,pango_glyph_string_x_to_index_db);
extern void pango_tab_array_resize_db(PangoTabArray *, gint);
CheckInterfacedef(pango_tab_array_resize,pango_tab_array_resize_db);
extern void pango_break_db(const gchar *, gint, PangoAnalysis *, PangoLogAttr *, int);
CheckInterfacedef(pango_break,pango_break_db);
extern void pango_coverage_unref_db(PangoCoverage *);
CheckInterfacedef(pango_coverage_unref,pango_coverage_unref_db);
extern void pango_font_map_list_families_db(PangoFontMap *, PangoFontFamily * * *, int *);
CheckInterfacedef(pango_font_map_list_families,pango_font_map_list_families_db);
extern void pango_matrix_concat_db(PangoMatrix *, const PangoMatrix *);
CheckInterfacedef(pango_matrix_concat,pango_matrix_concat_db);
extern PangoAttrList * pango_attr_list_copy_db(PangoAttrList *);
CheckInterfacedef(pango_attr_list_copy,pango_attr_list_copy_db);
extern GType pango_layout_iter_get_type_db(void);
CheckInterfacedef(pango_layout_iter_get_type,pango_layout_iter_get_type_db);
extern void pango_layout_set_attributes_db(PangoLayout *, PangoAttrList *);
CheckInterfacedef(pango_layout_set_attributes,pango_layout_set_attributes_db);
extern void pango_color_free_db(PangoColor *);
CheckInterfacedef(pango_color_free,pango_color_free_db);
extern PangoItem * pango_item_copy_db(PangoItem *);
CheckInterfacedef(pango_item_copy,pango_item_copy_db);
extern void pango_font_description_set_weight_db(PangoFontDescription *, PangoWeight);
CheckInterfacedef(pango_font_description_set_weight,pango_font_description_set_weight_db);
extern PangoAttribute * pango_attr_letter_spacing_new_db(int);
CheckInterfacedef(pango_attr_letter_spacing_new,pango_attr_letter_spacing_new_db);
extern PangoLanguage * pango_language_from_string_db(const char *);
CheckInterfacedef(pango_language_from_string,pango_language_from_string_db);
extern PangoAttribute * pango_attr_strikethrough_color_new_db(guint16, guint16, guint16);
CheckInterfacedef(pango_attr_strikethrough_color_new,pango_attr_strikethrough_color_new_db);
extern void pango_attr_list_insert_db(PangoAttrList *, PangoAttribute *);
CheckInterfacedef(pango_attr_list_insert,pango_attr_list_insert_db);
extern gboolean pango_layout_line_x_to_index_db(PangoLayoutLine *, int, int *, int *);
CheckInterfacedef(pango_layout_line_x_to_index,pango_layout_line_x_to_index_db);
extern PangoFontMap * pango_context_get_font_map_db(PangoContext *);
CheckInterfacedef(pango_context_get_font_map,pango_context_get_font_map_db);
extern GType pango_direction_get_type_db(void);
CheckInterfacedef(pango_direction_get_type,pango_direction_get_type_db);
extern void pango_layout_iter_get_layout_extents_db(PangoLayoutIter *, PangoRectangle *, PangoRectangle *);
CheckInterfacedef(pango_layout_iter_get_layout_extents,pango_layout_iter_get_layout_extents_db);
extern void pango_glyph_string_free_db(PangoGlyphString *);
CheckInterfacedef(pango_glyph_string_free,pango_glyph_string_free_db);
extern gboolean pango_tab_array_get_positions_in_pixels_db(PangoTabArray *);
CheckInterfacedef(pango_tab_array_get_positions_in_pixels,pango_tab_array_get_positions_in_pixels_db);
extern PangoFontMetrics * pango_fontset_get_metrics_db(PangoFontset *);
CheckInterfacedef(pango_fontset_get_metrics,pango_fontset_get_metrics_db);
extern int pango_layout_iter_get_index_db(PangoLayoutIter *);
CheckInterfacedef(pango_layout_iter_get_index,pango_layout_iter_get_index_db);
extern int pango_layout_get_spacing_db(PangoLayout *);
CheckInterfacedef(pango_layout_get_spacing,pango_layout_get_spacing_db);
extern gboolean pango_layout_get_single_paragraph_mode_db(PangoLayout *);
CheckInterfacedef(pango_layout_get_single_paragraph_mode,pango_layout_get_single_paragraph_mode_db);
extern GSList * pango_layout_get_lines_db(PangoLayout *);
CheckInterfacedef(pango_layout_get_lines,pango_layout_get_lines_db);
extern GType pango_underline_get_type_db(void);
CheckInterfacedef(pango_underline_get_type,pango_underline_get_type_db);
extern void pango_layout_get_pixel_extents_db(PangoLayout *, PangoRectangle *, PangoRectangle *);
CheckInterfacedef(pango_layout_get_pixel_extents,pango_layout_get_pixel_extents_db);
extern void pango_matrix_scale_db(PangoMatrix *, double, double);
CheckInterfacedef(pango_matrix_scale,pango_matrix_scale_db);
extern void pango_attr_iterator_destroy_db(PangoAttrIterator *);
CheckInterfacedef(pango_attr_iterator_destroy,pango_attr_iterator_destroy_db);
extern void pango_glyph_string_extents_db(PangoGlyphString *, PangoFont *, PangoRectangle *, PangoRectangle *);
CheckInterfacedef(pango_glyph_string_extents,pango_glyph_string_extents_db);
extern PangoTabArray * pango_tab_array_new_db(gint, gboolean);
CheckInterfacedef(pango_tab_array_new,pango_tab_array_new_db);
extern PangoAttribute * pango_attr_weight_new_db(PangoWeight);
CheckInterfacedef(pango_attr_weight_new,pango_attr_weight_new_db);
extern int pango_layout_get_width_db(PangoLayout *);
CheckInterfacedef(pango_layout_get_width,pango_layout_get_width_db);
extern gboolean pango_parse_markup_db(const char *, int, gunichar, PangoAttrList * *, char * *, gunichar *, GError * *);
CheckInterfacedef(pango_parse_markup,pango_parse_markup_db);
extern void pango_matrix_rotate_db(PangoMatrix *, double);
CheckInterfacedef(pango_matrix_rotate,pango_matrix_rotate_db);
extern void pango_font_description_set_style_db(PangoFontDescription *, PangoStyle);
CheckInterfacedef(pango_font_description_set_style,pango_font_description_set_style_db);
extern void pango_layout_set_auto_dir_db(PangoLayout *, gboolean);
CheckInterfacedef(pango_layout_set_auto_dir,pango_layout_set_auto_dir_db);
extern GType pango_context_get_type_db(void);
CheckInterfacedef(pango_context_get_type,pango_context_get_type_db);
extern PangoAttribute * pango_attr_background_new_db(guint16, guint16, guint16);
CheckInterfacedef(pango_attr_background_new,pango_attr_background_new_db);
extern void pango_coverage_to_bytes_db(PangoCoverage *, guchar * *, int *);
CheckInterfacedef(pango_coverage_to_bytes,pango_coverage_to_bytes_db);
extern void pango_font_description_set_size_db(PangoFontDescription *, gint);
CheckInterfacedef(pango_font_description_set_size,pango_font_description_set_size_db);
extern void pango_attr_list_unref_db(PangoAttrList *);
CheckInterfacedef(pango_attr_list_unref,pango_attr_list_unref_db);
extern int pango_font_metrics_get_strikethrough_thickness_db(PangoFontMetrics *);
CheckInterfacedef(pango_font_metrics_get_strikethrough_thickness,pango_font_metrics_get_strikethrough_thickness_db);
extern PangoAttribute * pango_attr_size_new_absolute_db(int);
CheckInterfacedef(pango_attr_size_new_absolute,pango_attr_size_new_absolute_db);
extern PangoAttribute * pango_attribute_copy_db(const PangoAttribute *);
CheckInterfacedef(pango_attribute_copy,pango_attribute_copy_db);
extern PangoAttribute * pango_attr_iterator_get_db(PangoAttrIterator *, PangoAttrType);
CheckInterfacedef(pango_attr_iterator_get,pango_attr_iterator_get_db);
extern GType pango_matrix_get_type_db(void);
CheckInterfacedef(pango_matrix_get_type,pango_matrix_get_type_db);
extern PangoDirection pango_context_get_base_dir_db(PangoContext *);
CheckInterfacedef(pango_context_get_base_dir,pango_context_get_base_dir_db);
extern PangoAttribute * pango_attr_style_new_db(PangoStyle);
CheckInterfacedef(pango_attr_style_new,pango_attr_style_new_db);
extern void pango_attr_iterator_get_font_db(PangoAttrIterator *, PangoFontDescription *, PangoLanguage * *, GSList * *);
CheckInterfacedef(pango_attr_iterator_get_font,pango_attr_iterator_get_font_db);
extern void pango_renderer_draw_glyph_db(PangoRenderer *, PangoFont *, PangoGlyph, double, double);
CheckInterfacedef(pango_renderer_draw_glyph,pango_renderer_draw_glyph_db);
extern void pango_glyph_item_free_db(PangoGlyphItem *);
CheckInterfacedef(pango_glyph_item_free,pango_glyph_item_free_db);
extern gboolean pango_language_includes_script_db(PangoLanguage *, PangoScript);
CheckInterfacedef(pango_language_includes_script,pango_language_includes_script_db);
extern gboolean pango_font_description_get_size_is_absolute_db(const PangoFontDescription *);
CheckInterfacedef(pango_font_description_get_size_is_absolute,pango_font_description_get_size_is_absolute_db);
extern GSList * pango_attr_iterator_get_attrs_db(PangoAttrIterator *);
CheckInterfacedef(pango_attr_iterator_get_attrs,pango_attr_iterator_get_attrs_db);
extern GType pango_ellipsize_mode_get_type_db(void);
CheckInterfacedef(pango_ellipsize_mode_get_type,pango_ellipsize_mode_get_type_db);
extern void pango_font_face_list_sizes_db(PangoFontFace *, int * *, int *);
CheckInterfacedef(pango_font_face_list_sizes,pango_font_face_list_sizes_db);
extern void pango_layout_get_size_db(PangoLayout *, int *, int *);
CheckInterfacedef(pango_layout_get_size,pango_layout_get_size_db);
extern void pango_renderer_draw_glyphs_db(PangoRenderer *, PangoFont *, PangoGlyphString *, int, int);
CheckInterfacedef(pango_renderer_draw_glyphs,pango_renderer_draw_glyphs_db);
extern GType pango_tab_array_get_type_db(void);
CheckInterfacedef(pango_tab_array_get_type,pango_tab_array_get_type_db);
extern PangoGlyphItem * pango_glyph_item_split_db(PangoGlyphItem *, const char *, int);
CheckInterfacedef(pango_glyph_item_split,pango_glyph_item_split_db);
extern PangoLayoutIter * pango_layout_get_iter_db(PangoLayout *);
CheckInterfacedef(pango_layout_get_iter,pango_layout_get_iter_db);
extern PangoGlyphString * pango_glyph_string_new_db(void);
CheckInterfacedef(pango_glyph_string_new,pango_glyph_string_new_db);
extern gboolean pango_layout_iter_next_run_db(PangoLayoutIter *);
CheckInterfacedef(pango_layout_iter_next_run,pango_layout_iter_next_run_db);
extern void pango_glyph_string_extents_range_db(PangoGlyphString *, int, int, PangoFont *, PangoRectangle *, PangoRectangle *);
CheckInterfacedef(pango_glyph_string_extents_range,pango_glyph_string_extents_range_db);
extern PangoWeight pango_font_description_get_weight_db(const PangoFontDescription *);
CheckInterfacedef(pango_font_description_get_weight,pango_font_description_get_weight_db);
extern GType pango_font_description_get_type_db(void);
CheckInterfacedef(pango_font_description_get_type,pango_font_description_get_type_db);
extern void pango_renderer_deactivate_db(PangoRenderer *);
CheckInterfacedef(pango_renderer_deactivate,pango_renderer_deactivate_db);
extern PangoGlyphString * pango_glyph_string_copy_db(PangoGlyphString *);
CheckInterfacedef(pango_glyph_string_copy,pango_glyph_string_copy_db);
extern void pango_script_iter_free_db(PangoScriptIter *);
CheckInterfacedef(pango_script_iter_free,pango_script_iter_free_db);
extern PangoCoverage * pango_coverage_from_bytes_db(guchar *, int);
CheckInterfacedef(pango_coverage_from_bytes,pango_coverage_from_bytes_db);
extern void pango_layout_iter_get_line_yrange_db(PangoLayoutIter *, int *, int *);
CheckInterfacedef(pango_layout_iter_get_line_yrange,pango_layout_iter_get_line_yrange_db);
extern GType pango_stretch_get_type_db(void);
CheckInterfacedef(pango_stretch_get_type,pango_stretch_get_type_db);
extern int pango_layout_get_line_count_db(PangoLayout *);
CheckInterfacedef(pango_layout_get_line_count,pango_layout_get_line_count_db);
extern void pango_layout_set_ellipsize_db(PangoLayout *, PangoEllipsizeMode);
CheckInterfacedef(pango_layout_set_ellipsize,pango_layout_set_ellipsize_db);
extern PangoCoverage * pango_font_get_coverage_db(PangoFont *, PangoLanguage *);
CheckInterfacedef(pango_font_get_coverage,pango_font_get_coverage_db);
extern PangoFontDescription * pango_font_description_copy_db(const PangoFontDescription *);
CheckInterfacedef(pango_font_description_copy,pango_font_description_copy_db);
extern void pango_fontset_foreach_db(PangoFontset *, PangoFontsetForeachFunc, gpointer);
CheckInterfacedef(pango_fontset_foreach,pango_fontset_foreach_db);
extern GType pango_font_get_type_db(void);
CheckInterfacedef(pango_font_get_type,pango_font_get_type_db);
extern void pango_layout_set_alignment_db(PangoLayout *, PangoAlignment);
CheckInterfacedef(pango_layout_set_alignment,pango_layout_set_alignment_db);
extern GType pango_layout_get_type_db(void);
CheckInterfacedef(pango_layout_get_type,pango_layout_get_type_db);
extern void pango_renderer_draw_layout_line_db(PangoRenderer *, PangoLayoutLine *, int, int);
CheckInterfacedef(pango_renderer_draw_layout_line,pango_renderer_draw_layout_line_db);
extern GType pango_alignment_get_type_db(void);
CheckInterfacedef(pango_alignment_get_type,pango_alignment_get_type_db);
extern void pango_renderer_draw_rectangle_db(PangoRenderer *, PangoRenderPart, int, int, int, int);
CheckInterfacedef(pango_renderer_draw_rectangle,pango_renderer_draw_rectangle_db);
extern void pango_context_list_families_db(PangoContext *, PangoFontFamily * * *, int *);
CheckInterfacedef(pango_context_list_families,pango_context_list_families_db);
extern void pango_font_description_set_absolute_size_db(PangoFontDescription *, double);
CheckInterfacedef(pango_font_description_set_absolute_size,pango_font_description_set_absolute_size_db);
extern void pango_layout_iter_free_db(PangoLayoutIter *);
CheckInterfacedef(pango_layout_iter_free,pango_layout_iter_free_db);
extern PangoCoverageLevel pango_coverage_get_db(PangoCoverage *, int);
CheckInterfacedef(pango_coverage_get,pango_coverage_get_db);
extern void pango_renderer_draw_error_underline_db(PangoRenderer *, int, int, int, int);
CheckInterfacedef(pango_renderer_draw_error_underline,pango_renderer_draw_error_underline_db);
extern PangoFontset * pango_context_load_fontset_db(PangoContext *, const PangoFontDescription *, PangoLanguage *);
CheckInterfacedef(pango_context_load_fontset,pango_context_load_fontset_db);
extern PangoLayoutLine * pango_layout_line_ref_db(PangoLayoutLine *);
CheckInterfacedef(pango_layout_line_ref,pango_layout_line_ref_db);
extern void pango_font_description_set_family_db(PangoFontDescription *, const char *);
CheckInterfacedef(pango_font_description_set_family,pango_font_description_set_family_db);
extern gboolean pango_layout_iter_at_last_line_db(PangoLayoutIter *);
CheckInterfacedef(pango_layout_iter_at_last_line,pango_layout_iter_at_last_line_db);
extern GType pango_render_part_get_type_db(void);
CheckInterfacedef(pango_render_part_get_type,pango_render_part_get_type_db);
extern PangoAttrList * pango_attr_list_new_db(void);
CheckInterfacedef(pango_attr_list_new,pango_attr_list_new_db);
extern void pango_font_description_set_stretch_db(PangoFontDescription *, PangoStretch);
CheckInterfacedef(pango_font_description_set_stretch,pango_font_description_set_stretch_db);
extern void pango_font_description_merge_db(PangoFontDescription *, const PangoFontDescription *, gboolean);
CheckInterfacedef(pango_font_description_merge,pango_font_description_merge_db);
extern int pango_font_metrics_get_underline_thickness_db(PangoFontMetrics *);
CheckInterfacedef(pango_font_metrics_get_underline_thickness,pango_font_metrics_get_underline_thickness_db);
extern const char * pango_layout_get_text_db(PangoLayout *);
CheckInterfacedef(pango_layout_get_text,pango_layout_get_text_db);
extern int pango_font_metrics_get_ascent_db(PangoFontMetrics *);
CheckInterfacedef(pango_font_metrics_get_ascent,pango_font_metrics_get_ascent_db);
extern PangoFont * pango_fontset_get_font_db(PangoFontset *, guint);
CheckInterfacedef(pango_fontset_get_font,pango_fontset_get_font_db);
extern void pango_renderer_draw_layout_db(PangoRenderer *, PangoLayout *, int, int);
CheckInterfacedef(pango_renderer_draw_layout,pango_renderer_draw_layout_db);
extern int pango_font_metrics_get_underline_position_db(PangoFontMetrics *);
CheckInterfacedef(pango_font_metrics_get_underline_position,pango_font_metrics_get_underline_position_db);
extern GType pango_color_get_type_db(void);
CheckInterfacedef(pango_color_get_type,pango_color_get_type_db);
extern PangoFontMetrics * pango_context_get_metrics_db(PangoContext *, const PangoFontDescription *, PangoLanguage *);
CheckInterfacedef(pango_context_get_metrics,pango_context_get_metrics_db);
extern gboolean pango_layout_xy_to_index_db(PangoLayout *, int, int, int *, gint *);
CheckInterfacedef(pango_layout_xy_to_index,pango_layout_xy_to_index_db);
extern void pango_renderer_set_matrix_db(PangoRenderer *, const PangoMatrix *);
CheckInterfacedef(pango_renderer_set_matrix,pango_renderer_set_matrix_db);
extern void pango_font_description_set_variant_db(PangoFontDescription *, PangoVariant);
CheckInterfacedef(pango_font_description_set_variant,pango_font_description_set_variant_db);
extern GList * pango_itemize_db(PangoContext *, const char *, int, int, PangoAttrList *, PangoAttrIterator *);
CheckInterfacedef(pango_itemize,pango_itemize_db);
extern void pango_layout_move_cursor_visually_db(PangoLayout *, gboolean, int, int, int, int *, int *);
CheckInterfacedef(pango_layout_move_cursor_visually,pango_layout_move_cursor_visually_db);
extern int pango_layout_get_indent_db(PangoLayout *);
CheckInterfacedef(pango_layout_get_indent,pango_layout_get_indent_db);
extern PangoAttrIterator * pango_attr_list_get_iterator_db(PangoAttrList *);
CheckInterfacedef(pango_attr_list_get_iterator,pango_attr_list_get_iterator_db);
extern void pango_layout_get_pixel_size_db(PangoLayout *, int *, int *);
CheckInterfacedef(pango_layout_get_pixel_size,pango_layout_get_pixel_size_db);
extern void pango_font_description_unset_fields_db(PangoFontDescription *, PangoFontMask);
CheckInterfacedef(pango_font_description_unset_fields,pango_font_description_unset_fields_db);
extern GType pango_tab_align_get_type_db(void);
CheckInterfacedef(pango_tab_align_get_type,pango_tab_align_get_type_db);
extern PangoItem * pango_item_split_db(PangoItem *, int, int);
CheckInterfacedef(pango_item_split,pango_item_split_db);
extern PangoFontMetrics * pango_font_metrics_ref_db(PangoFontMetrics *);
CheckInterfacedef(pango_font_metrics_ref,pango_font_metrics_ref_db);
extern void pango_context_set_base_dir_db(PangoContext *, PangoDirection);
CheckInterfacedef(pango_context_set_base_dir,pango_context_set_base_dir_db);
extern PangoAttribute * pango_attr_underline_color_new_db(guint16, guint16, guint16);
CheckInterfacedef(pango_attr_underline_color_new,pango_attr_underline_color_new_db);
extern gboolean pango_layout_iter_next_cluster_db(PangoLayoutIter *);
CheckInterfacedef(pango_layout_iter_next_cluster,pango_layout_iter_next_cluster_db);
extern PangoAttribute * pango_attr_variant_new_db(PangoVariant);
CheckInterfacedef(pango_attr_variant_new,pango_attr_variant_new_db);
extern GType pango_font_face_get_type_db(void);
CheckInterfacedef(pango_font_face_get_type,pango_font_face_get_type_db);
extern void pango_font_family_list_faces_db(PangoFontFamily *, PangoFontFace * * *, int *);
CheckInterfacedef(pango_font_family_list_faces,pango_font_family_list_faces_db);
extern PangoColor * pango_color_copy_db(const PangoColor *);
CheckInterfacedef(pango_color_copy,pango_color_copy_db);
extern GType pango_wrap_mode_get_type_db(void);
CheckInterfacedef(pango_wrap_mode_get_type,pango_wrap_mode_get_type_db);
extern void pango_tab_array_set_tab_db(PangoTabArray *, gint, PangoTabAlign, gint);
CheckInterfacedef(pango_tab_array_set_tab,pango_tab_array_set_tab_db);
extern PangoAttribute * pango_attr_shape_new_with_data_db(const PangoRectangle *, const PangoRectangle *, gpointer, PangoAttrDataCopyFunc, GDestroyNotify);
CheckInterfacedef(pango_attr_shape_new_with_data,pango_attr_shape_new_with_data_db);
extern PangoVariant pango_font_description_get_variant_db(const PangoFontDescription *);
CheckInterfacedef(pango_font_description_get_variant,pango_font_description_get_variant_db);
extern void pango_font_description_free_db(PangoFontDescription *);
CheckInterfacedef(pango_font_description_free,pango_font_description_free_db);
extern GType pango_font_metrics_get_type_db(void);
CheckInterfacedef(pango_font_metrics_get_type,pango_font_metrics_get_type_db);
extern void pango_layout_get_cursor_pos_db(PangoLayout *, int, PangoRectangle *, PangoRectangle *);
CheckInterfacedef(pango_layout_get_cursor_pos,pango_layout_get_cursor_pos_db);
extern GList * pango_itemize_with_base_dir_db(PangoContext *, PangoDirection, const char *, int, int, PangoAttrList *, PangoAttrIterator *);
CheckInterfacedef(pango_itemize_with_base_dir,pango_itemize_with_base_dir_db);
extern PangoLanguage * pango_context_get_language_db(PangoContext *);
CheckInterfacedef(pango_context_get_language,pango_context_get_language_db);
extern void pango_renderer_set_color_db(PangoRenderer *, PangoRenderPart, const PangoColor *);
CheckInterfacedef(pango_renderer_set_color,pango_renderer_set_color_db);
extern GType pango_font_map_get_type_db(void);
CheckInterfacedef(pango_font_map_get_type,pango_font_map_get_type_db);
extern const PangoFontDescription * pango_layout_get_font_description_db(PangoLayout *);
CheckInterfacedef(pango_layout_get_font_description,pango_layout_get_font_description_db);
extern void pango_layout_set_font_description_db(PangoLayout *, const PangoFontDescription *);
CheckInterfacedef(pango_layout_set_font_description,pango_layout_set_font_description_db);
extern PangoFontMetrics * pango_font_get_metrics_db(PangoFont *, PangoLanguage *);
CheckInterfacedef(pango_font_get_metrics,pango_font_get_metrics_db);
extern PangoScriptIter * pango_script_iter_new_db(const char *, int);
CheckInterfacedef(pango_script_iter_new,pango_script_iter_new_db);
extern PangoFontMap * pango_font_get_font_map_db(PangoFont *);
CheckInterfacedef(pango_font_get_font_map,pango_font_get_font_map_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in pango-1.0/pango/pango.h\n\n",pcnt,cnt);
return cnt;
#endif

}
