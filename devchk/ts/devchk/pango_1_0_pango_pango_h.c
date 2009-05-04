/*
 * Test of pango-1.0/pango/pango.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

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

#if defined __s390x__
CheckTypeSize(PangoWrapMode,4, 12352, 12, 3.1, NULL, 12351, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoWrapMode,4, 12352, 11, 3.1, NULL, 12351, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoWrapMode,4, 12352, 10, 3.1, NULL, 12351, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoWrapMode,4, 12352, 9, 3.1, NULL, 12351, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoWrapMode,4, 12352, 6, 3.1, NULL, 12351, NULL)
#elif defined __ia64__
CheckTypeSize(PangoWrapMode,4, 12352, 3, 3.1, NULL, 12351, NULL)
#elif defined __i386__
CheckTypeSize(PangoWrapMode,4, 12352, 2, 3.1, NULL, 12351, NULL)
#else
Msg("Find size of PangoWrapMode (12352)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12351,NULL);\n",architecture,12352,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoScript,4, 12360, 12, 3.1, NULL, 12359, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoScript,4, 12360, 11, 3.1, NULL, 12359, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoScript,4, 12360, 10, 3.1, NULL, 12359, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoScript,4, 12360, 9, 3.1, NULL, 12359, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoScript,4, 12360, 6, 3.1, NULL, 12359, NULL)
#elif defined __ia64__
CheckTypeSize(PangoScript,4, 12360, 3, 3.1, NULL, 12359, NULL)
#elif defined __i386__
CheckTypeSize(PangoScript,4, 12360, 2, 3.1, NULL, 12359, NULL)
#else
Msg("Find size of PangoScript (12360)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12359,NULL);\n",architecture,12360,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoAttribute,16, 12371, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttribute,start_index,4,12,43092)
CheckOffset(struct _PangoAttribute,start_index,8,12,43092)
CheckMemberSize(struct _PangoAttribute,end_index,4,12,43093)
CheckOffset(struct _PangoAttribute,end_index,12,12,43093)
#elif defined __x86_64__
CheckTypeSize(struct _PangoAttribute,16, 12371, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttribute,start_index,4,11,43092)
CheckOffset(struct _PangoAttribute,start_index,8,11,43092)
CheckMemberSize(struct _PangoAttribute,end_index,4,11,43093)
CheckOffset(struct _PangoAttribute,end_index,12,11,43093)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoAttribute,12, 12371, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttribute,start_index,4,10,43092)
CheckOffset(struct _PangoAttribute,start_index,4,10,43092)
CheckMemberSize(struct _PangoAttribute,end_index,4,10,43093)
CheckOffset(struct _PangoAttribute,end_index,8,10,43093)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoAttribute,16, 12371, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttribute,start_index,4,9,43092)
CheckOffset(struct _PangoAttribute,start_index,8,9,43092)
CheckMemberSize(struct _PangoAttribute,end_index,4,9,43093)
CheckOffset(struct _PangoAttribute,end_index,12,9,43093)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoAttribute,12, 12371, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttribute,start_index,4,6,43092)
CheckOffset(struct _PangoAttribute,start_index,4,6,43092)
CheckMemberSize(struct _PangoAttribute,end_index,4,6,43093)
CheckOffset(struct _PangoAttribute,end_index,8,6,43093)
#elif defined __ia64__
CheckTypeSize(struct _PangoAttribute,16, 12371, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttribute,start_index,4,3,43092)
CheckOffset(struct _PangoAttribute,start_index,8,3,43092)
CheckMemberSize(struct _PangoAttribute,end_index,4,3,43093)
CheckOffset(struct _PangoAttribute,end_index,12,3,43093)
#elif defined __i386__
CheckTypeSize(struct _PangoAttribute,12, 12371, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttribute,start_index,4,2,43092)
CheckOffset(struct _PangoAttribute,start_index,4,2,43092)
CheckMemberSize(struct _PangoAttribute,end_index,4,2,43093)
CheckOffset(struct _PangoAttribute,end_index,8,2,43093)
#elif 1
CheckTypeSize(struct _PangoAttribute,0, 12371, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoAttribute on All\n");
CheckOffset(struct _PangoAttribute,klass,0,1,43091)
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoAttrClass,32, 12372, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrClass,copy,8,12,43085)
CheckOffset(struct _PangoAttrClass,copy,8,12,43085)
CheckMemberSize(struct _PangoAttrClass,destroy,8,12,43087)
CheckOffset(struct _PangoAttrClass,destroy,16,12,43087)
CheckMemberSize(struct _PangoAttrClass,equal,8,12,43090)
CheckOffset(struct _PangoAttrClass,equal,24,12,43090)
#elif defined __x86_64__
CheckTypeSize(struct _PangoAttrClass,32, 12372, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrClass,copy,8,11,43085)
CheckOffset(struct _PangoAttrClass,copy,8,11,43085)
CheckMemberSize(struct _PangoAttrClass,destroy,8,11,43087)
CheckOffset(struct _PangoAttrClass,destroy,16,11,43087)
CheckMemberSize(struct _PangoAttrClass,equal,8,11,43090)
CheckOffset(struct _PangoAttrClass,equal,24,11,43090)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoAttrClass,16, 12372, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrClass,copy,4,10,43085)
CheckOffset(struct _PangoAttrClass,copy,4,10,43085)
CheckMemberSize(struct _PangoAttrClass,destroy,4,10,43087)
CheckOffset(struct _PangoAttrClass,destroy,8,10,43087)
CheckMemberSize(struct _PangoAttrClass,equal,4,10,43090)
CheckOffset(struct _PangoAttrClass,equal,12,10,43090)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoAttrClass,32, 12372, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrClass,copy,8,9,43085)
CheckOffset(struct _PangoAttrClass,copy,8,9,43085)
CheckMemberSize(struct _PangoAttrClass,destroy,8,9,43087)
CheckOffset(struct _PangoAttrClass,destroy,16,9,43087)
CheckMemberSize(struct _PangoAttrClass,equal,8,9,43090)
CheckOffset(struct _PangoAttrClass,equal,24,9,43090)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoAttrClass,16, 12372, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrClass,copy,4,6,43085)
CheckOffset(struct _PangoAttrClass,copy,4,6,43085)
CheckMemberSize(struct _PangoAttrClass,destroy,4,6,43087)
CheckOffset(struct _PangoAttrClass,destroy,8,6,43087)
CheckMemberSize(struct _PangoAttrClass,equal,4,6,43090)
CheckOffset(struct _PangoAttrClass,equal,12,6,43090)
#elif defined __ia64__
CheckTypeSize(struct _PangoAttrClass,32, 12372, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrClass,copy,8,3,43085)
CheckOffset(struct _PangoAttrClass,copy,8,3,43085)
CheckMemberSize(struct _PangoAttrClass,destroy,8,3,43087)
CheckOffset(struct _PangoAttrClass,destroy,16,3,43087)
CheckMemberSize(struct _PangoAttrClass,equal,8,3,43090)
CheckOffset(struct _PangoAttrClass,equal,24,3,43090)
#elif defined __i386__
CheckTypeSize(struct _PangoAttrClass,16, 12372, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrClass,copy,4,2,43085)
CheckOffset(struct _PangoAttrClass,copy,4,2,43085)
CheckMemberSize(struct _PangoAttrClass,destroy,4,2,43087)
CheckOffset(struct _PangoAttrClass,destroy,8,2,43087)
CheckMemberSize(struct _PangoAttrClass,equal,4,2,43090)
CheckOffset(struct _PangoAttrClass,equal,12,2,43090)
#elif 1
CheckTypeSize(struct _PangoAttrClass,0, 12372, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoAttrClass on All\n");
CheckOffset(struct _PangoAttrClass,type,0,1,43083)
#endif

#if defined __s390x__
CheckTypeSize(PangoAttrType,4, 12374, 12, 3.1, NULL, 12373, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrType,4, 12374, 11, 3.1, NULL, 12373, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrType,4, 12374, 10, 3.1, NULL, 12373, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrType,4, 12374, 9, 3.1, NULL, 12373, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrType,4, 12374, 6, 3.1, NULL, 12373, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrType,4, 12374, 3, 3.1, NULL, 12373, NULL)
#elif defined __i386__
CheckTypeSize(PangoAttrType,4, 12374, 2, 3.1, NULL, 12373, NULL)
#else
Msg("Find size of PangoAttrType (12374)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12373,NULL);\n",architecture,12374,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoAttribute,16, 12375, 12, 3.1, NULL, 12371, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttribute,16, 12375, 11, 3.1, NULL, 12371, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttribute,12, 12375, 10, 3.1, NULL, 12371, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttribute,16, 12375, 9, 3.1, NULL, 12371, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttribute,12, 12375, 6, 3.1, NULL, 12371, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttribute,16, 12375, 3, 3.1, NULL, 12371, NULL)
#elif defined __i386__
CheckTypeSize(PangoAttribute,12, 12375, 2, 3.1, NULL, 12371, NULL)
#else
Msg("Find size of PangoAttribute (12375)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12371,NULL);\n",architecture,12375,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoAttrClass,32, 12382, 12, 3.1, NULL, 12372, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrClass,32, 12382, 11, 3.1, NULL, 12372, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrClass,16, 12382, 10, 3.1, NULL, 12372, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrClass,32, 12382, 9, 3.1, NULL, 12372, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrClass,16, 12382, 6, 3.1, NULL, 12372, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrClass,32, 12382, 3, 3.1, NULL, 12372, NULL)
#elif defined __i386__
CheckTypeSize(PangoAttrClass,16, 12382, 2, 3.1, NULL, 12372, NULL)
#else
Msg("Find size of PangoAttrClass (12382)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12372,NULL);\n",architecture,12382,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoLogAttr,4, 12388, 12, , NULL, 0, NULL)
CheckBitField(struct _PangoLogAttr,is_line_break,1,12,43094)
CheckBitField(struct _PangoLogAttr,is_mandatory_break,1,12,43095)
CheckBitField(struct _PangoLogAttr,is_char_break,1,12,43096)
CheckBitField(struct _PangoLogAttr,is_white,1,12,43097)
CheckBitField(struct _PangoLogAttr,is_cursor_position,1,12,43098)
CheckBitField(struct _PangoLogAttr,is_word_start,1,12,43099)
CheckBitField(struct _PangoLogAttr,is_word_end,1,12,43100)
CheckBitField(struct _PangoLogAttr,is_sentence_boundary,1,12,43101)
CheckBitField(struct _PangoLogAttr,is_sentence_start,1,12,43102)
CheckBitField(struct _PangoLogAttr,is_sentence_end,1,12,43103)
CheckBitField(struct _PangoLogAttr,backspace_deletes_character,1,12,43104)
#elif defined __x86_64__
CheckTypeSize(struct _PangoLogAttr,4, 12388, 11, , NULL, 0, NULL)
CheckBitField(struct _PangoLogAttr,is_line_break,1,11,43094)
CheckBitField(struct _PangoLogAttr,is_mandatory_break,1,11,43095)
CheckBitField(struct _PangoLogAttr,is_char_break,1,11,43096)
CheckBitField(struct _PangoLogAttr,is_white,1,11,43097)
CheckBitField(struct _PangoLogAttr,is_cursor_position,1,11,43098)
CheckBitField(struct _PangoLogAttr,is_word_start,1,11,43099)
CheckBitField(struct _PangoLogAttr,is_word_end,1,11,43100)
CheckBitField(struct _PangoLogAttr,is_sentence_boundary,1,11,43101)
CheckBitField(struct _PangoLogAttr,is_sentence_start,1,11,43102)
CheckBitField(struct _PangoLogAttr,is_sentence_end,1,11,43103)
CheckBitField(struct _PangoLogAttr,backspace_deletes_character,1,11,43104)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoLogAttr,4, 12388, 10, , NULL, 0, NULL)
CheckBitField(struct _PangoLogAttr,is_line_break,1,10,43094)
CheckBitField(struct _PangoLogAttr,is_mandatory_break,1,10,43095)
CheckBitField(struct _PangoLogAttr,is_char_break,1,10,43096)
CheckBitField(struct _PangoLogAttr,is_white,1,10,43097)
CheckBitField(struct _PangoLogAttr,is_cursor_position,1,10,43098)
CheckBitField(struct _PangoLogAttr,is_word_start,1,10,43099)
CheckBitField(struct _PangoLogAttr,is_word_end,1,10,43100)
CheckBitField(struct _PangoLogAttr,is_sentence_boundary,1,10,43101)
CheckBitField(struct _PangoLogAttr,is_sentence_start,1,10,43102)
CheckBitField(struct _PangoLogAttr,is_sentence_end,1,10,43103)
CheckBitField(struct _PangoLogAttr,backspace_deletes_character,1,10,43104)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoLogAttr,4, 12388, 9, , NULL, 0, NULL)
CheckBitField(struct _PangoLogAttr,is_line_break,1,9,43094)
CheckBitField(struct _PangoLogAttr,is_mandatory_break,1,9,43095)
CheckBitField(struct _PangoLogAttr,is_char_break,1,9,43096)
CheckBitField(struct _PangoLogAttr,is_white,1,9,43097)
CheckBitField(struct _PangoLogAttr,is_cursor_position,1,9,43098)
CheckBitField(struct _PangoLogAttr,is_word_start,1,9,43099)
CheckBitField(struct _PangoLogAttr,is_word_end,1,9,43100)
CheckBitField(struct _PangoLogAttr,is_sentence_boundary,1,9,43101)
CheckBitField(struct _PangoLogAttr,is_sentence_start,1,9,43102)
CheckBitField(struct _PangoLogAttr,is_sentence_end,1,9,43103)
CheckBitField(struct _PangoLogAttr,backspace_deletes_character,1,9,43104)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoLogAttr,4, 12388, 6, , NULL, 0, NULL)
CheckBitField(struct _PangoLogAttr,is_line_break,1,6,43094)
CheckBitField(struct _PangoLogAttr,is_mandatory_break,1,6,43095)
CheckBitField(struct _PangoLogAttr,is_char_break,1,6,43096)
CheckBitField(struct _PangoLogAttr,is_white,1,6,43097)
CheckBitField(struct _PangoLogAttr,is_cursor_position,1,6,43098)
CheckBitField(struct _PangoLogAttr,is_word_start,1,6,43099)
CheckBitField(struct _PangoLogAttr,is_word_end,1,6,43100)
CheckBitField(struct _PangoLogAttr,is_sentence_boundary,1,6,43101)
CheckBitField(struct _PangoLogAttr,is_sentence_start,1,6,43102)
CheckBitField(struct _PangoLogAttr,is_sentence_end,1,6,43103)
CheckBitField(struct _PangoLogAttr,backspace_deletes_character,1,6,43104)
#elif defined __ia64__
CheckTypeSize(struct _PangoLogAttr,4, 12388, 3, , NULL, 0, NULL)
CheckBitField(struct _PangoLogAttr,is_line_break,1,3,43094)
CheckBitField(struct _PangoLogAttr,is_mandatory_break,1,3,43095)
CheckBitField(struct _PangoLogAttr,is_char_break,1,3,43096)
CheckBitField(struct _PangoLogAttr,is_white,1,3,43097)
CheckBitField(struct _PangoLogAttr,is_cursor_position,1,3,43098)
CheckBitField(struct _PangoLogAttr,is_word_start,1,3,43099)
CheckBitField(struct _PangoLogAttr,is_word_end,1,3,43100)
CheckBitField(struct _PangoLogAttr,is_sentence_boundary,1,3,43101)
CheckBitField(struct _PangoLogAttr,is_sentence_start,1,3,43102)
CheckBitField(struct _PangoLogAttr,is_sentence_end,1,3,43103)
CheckBitField(struct _PangoLogAttr,backspace_deletes_character,1,3,43104)
#elif defined __i386__
CheckTypeSize(struct _PangoLogAttr,4, 12388, 2, , NULL, 0, NULL)
CheckBitField(struct _PangoLogAttr,is_line_break,1,2,43094)
CheckBitField(struct _PangoLogAttr,is_mandatory_break,1,2,43095)
CheckBitField(struct _PangoLogAttr,is_char_break,1,2,43096)
CheckBitField(struct _PangoLogAttr,is_white,1,2,43097)
CheckBitField(struct _PangoLogAttr,is_cursor_position,1,2,43098)
CheckBitField(struct _PangoLogAttr,is_word_start,1,2,43099)
CheckBitField(struct _PangoLogAttr,is_word_end,1,2,43100)
CheckBitField(struct _PangoLogAttr,is_sentence_boundary,1,2,43101)
CheckBitField(struct _PangoLogAttr,is_sentence_start,1,2,43102)
CheckBitField(struct _PangoLogAttr,is_sentence_end,1,2,43103)
CheckBitField(struct _PangoLogAttr,backspace_deletes_character,1,2,43104)
#elif 1
CheckTypeSize(struct _PangoLogAttr,0, 12388, 1, , NULL, 0, NULL)
CheckBitField(struct _PangoLogAttr,is_line_break,1,1,43094)
CheckBitField(struct _PangoLogAttr,is_mandatory_break,1,1,43095)
CheckBitField(struct _PangoLogAttr,is_char_break,1,1,43096)
CheckBitField(struct _PangoLogAttr,is_white,1,1,43097)
CheckBitField(struct _PangoLogAttr,is_cursor_position,1,1,43098)
CheckBitField(struct _PangoLogAttr,is_word_start,1,1,43099)
CheckBitField(struct _PangoLogAttr,is_word_end,1,1,43100)
CheckBitField(struct _PangoLogAttr,is_sentence_boundary,1,1,43101)
CheckBitField(struct _PangoLogAttr,is_sentence_start,1,1,43102)
CheckBitField(struct _PangoLogAttr,is_sentence_end,1,1,43103)
CheckBitField(struct _PangoLogAttr,backspace_deletes_character,1,1,43104)
#endif

#if defined __s390x__
CheckTypeSize(PangoLogAttr,4, 12389, 12, 3.1, NULL, 12388, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoLogAttr,4, 12389, 11, 3.1, NULL, 12388, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoLogAttr,4, 12389, 10, 3.1, NULL, 12388, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoLogAttr,4, 12389, 9, 3.1, NULL, 12388, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoLogAttr,4, 12389, 6, 3.1, NULL, 12388, NULL)
#elif defined __ia64__
CheckTypeSize(PangoLogAttr,4, 12389, 3, 3.1, NULL, 12388, NULL)
#elif defined __i386__
CheckTypeSize(PangoLogAttr,4, 12389, 2, 3.1, NULL, 12388, NULL)
#else
Msg("Find size of PangoLogAttr (12389)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12388,NULL);\n",architecture,12389,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoColor,6, 12391, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoColor,green,2,12,43106)
CheckOffset(struct _PangoColor,green,2,12,43106)
CheckMemberSize(struct _PangoColor,blue,2,12,43107)
CheckOffset(struct _PangoColor,blue,4,12,43107)
#elif defined __x86_64__
CheckTypeSize(struct _PangoColor,6, 12391, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoColor,green,2,11,43106)
CheckOffset(struct _PangoColor,green,2,11,43106)
CheckMemberSize(struct _PangoColor,blue,2,11,43107)
CheckOffset(struct _PangoColor,blue,4,11,43107)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoColor,6, 12391, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoColor,green,2,10,43106)
CheckOffset(struct _PangoColor,green,2,10,43106)
CheckMemberSize(struct _PangoColor,blue,2,10,43107)
CheckOffset(struct _PangoColor,blue,4,10,43107)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoColor,6, 12391, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoColor,green,2,9,43106)
CheckOffset(struct _PangoColor,green,2,9,43106)
CheckMemberSize(struct _PangoColor,blue,2,9,43107)
CheckOffset(struct _PangoColor,blue,4,9,43107)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoColor,6, 12391, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoColor,green,2,6,43106)
CheckOffset(struct _PangoColor,green,2,6,43106)
CheckMemberSize(struct _PangoColor,blue,2,6,43107)
CheckOffset(struct _PangoColor,blue,4,6,43107)
#elif defined __ia64__
CheckTypeSize(struct _PangoColor,6, 12391, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoColor,green,2,3,43106)
CheckOffset(struct _PangoColor,green,2,3,43106)
CheckMemberSize(struct _PangoColor,blue,2,3,43107)
CheckOffset(struct _PangoColor,blue,4,3,43107)
#elif defined __i386__
CheckTypeSize(struct _PangoColor,6, 12391, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoColor,green,2,2,43106)
CheckOffset(struct _PangoColor,green,2,2,43106)
CheckMemberSize(struct _PangoColor,blue,2,2,43107)
CheckOffset(struct _PangoColor,blue,4,2,43107)
#elif 1
CheckTypeSize(struct _PangoColor,0, 12391, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoColor on All\n");
CheckOffset(struct _PangoColor,red,0,1,43105)
#endif

#if defined __s390x__
CheckTypeSize(PangoColor,6, 12392, 12, 3.1, NULL, 12391, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoColor,6, 12392, 11, 3.1, NULL, 12391, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoColor,6, 12392, 10, 3.1, NULL, 12391, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoColor,6, 12392, 9, 3.1, NULL, 12391, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoColor,6, 12392, 6, 3.1, NULL, 12391, NULL)
#elif defined __ia64__
CheckTypeSize(PangoColor,6, 12392, 3, 3.1, NULL, 12391, NULL)
#elif defined __i386__
CheckTypeSize(PangoColor,6, 12392, 2, 3.1, NULL, 12391, NULL)
#else
Msg("Find size of PangoColor (12392)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12391,NULL);\n",architecture,12392,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoMatrix,48, 12394, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoMatrix,xy,8,12,43109)
CheckOffset(struct _PangoMatrix,xy,8,12,43109)
CheckMemberSize(struct _PangoMatrix,yx,8,12,43110)
CheckOffset(struct _PangoMatrix,yx,16,12,43110)
CheckMemberSize(struct _PangoMatrix,yy,8,12,43111)
CheckOffset(struct _PangoMatrix,yy,24,12,43111)
CheckMemberSize(struct _PangoMatrix,x0,8,12,43112)
CheckOffset(struct _PangoMatrix,x0,32,12,43112)
CheckMemberSize(struct _PangoMatrix,y0,8,12,43113)
CheckOffset(struct _PangoMatrix,y0,40,12,43113)
#elif defined __x86_64__
CheckTypeSize(struct _PangoMatrix,48, 12394, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoMatrix,xy,8,11,43109)
CheckOffset(struct _PangoMatrix,xy,8,11,43109)
CheckMemberSize(struct _PangoMatrix,yx,8,11,43110)
CheckOffset(struct _PangoMatrix,yx,16,11,43110)
CheckMemberSize(struct _PangoMatrix,yy,8,11,43111)
CheckOffset(struct _PangoMatrix,yy,24,11,43111)
CheckMemberSize(struct _PangoMatrix,x0,8,11,43112)
CheckOffset(struct _PangoMatrix,x0,32,11,43112)
CheckMemberSize(struct _PangoMatrix,y0,8,11,43113)
CheckOffset(struct _PangoMatrix,y0,40,11,43113)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoMatrix,48, 12394, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoMatrix,xy,8,10,43109)
CheckOffset(struct _PangoMatrix,xy,8,10,43109)
CheckMemberSize(struct _PangoMatrix,yx,8,10,43110)
CheckOffset(struct _PangoMatrix,yx,16,10,43110)
CheckMemberSize(struct _PangoMatrix,yy,8,10,43111)
CheckOffset(struct _PangoMatrix,yy,24,10,43111)
CheckMemberSize(struct _PangoMatrix,x0,8,10,43112)
CheckOffset(struct _PangoMatrix,x0,32,10,43112)
CheckMemberSize(struct _PangoMatrix,y0,8,10,43113)
CheckOffset(struct _PangoMatrix,y0,40,10,43113)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoMatrix,48, 12394, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoMatrix,xy,8,9,43109)
CheckOffset(struct _PangoMatrix,xy,8,9,43109)
CheckMemberSize(struct _PangoMatrix,yx,8,9,43110)
CheckOffset(struct _PangoMatrix,yx,16,9,43110)
CheckMemberSize(struct _PangoMatrix,yy,8,9,43111)
CheckOffset(struct _PangoMatrix,yy,24,9,43111)
CheckMemberSize(struct _PangoMatrix,x0,8,9,43112)
CheckOffset(struct _PangoMatrix,x0,32,9,43112)
CheckMemberSize(struct _PangoMatrix,y0,8,9,43113)
CheckOffset(struct _PangoMatrix,y0,40,9,43113)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoMatrix,48, 12394, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoMatrix,xy,8,6,43109)
CheckOffset(struct _PangoMatrix,xy,8,6,43109)
CheckMemberSize(struct _PangoMatrix,yx,8,6,43110)
CheckOffset(struct _PangoMatrix,yx,16,6,43110)
CheckMemberSize(struct _PangoMatrix,yy,8,6,43111)
CheckOffset(struct _PangoMatrix,yy,24,6,43111)
CheckMemberSize(struct _PangoMatrix,x0,8,6,43112)
CheckOffset(struct _PangoMatrix,x0,32,6,43112)
CheckMemberSize(struct _PangoMatrix,y0,8,6,43113)
CheckOffset(struct _PangoMatrix,y0,40,6,43113)
#elif defined __ia64__
CheckTypeSize(struct _PangoMatrix,48, 12394, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoMatrix,xy,8,3,43109)
CheckOffset(struct _PangoMatrix,xy,8,3,43109)
CheckMemberSize(struct _PangoMatrix,yx,8,3,43110)
CheckOffset(struct _PangoMatrix,yx,16,3,43110)
CheckMemberSize(struct _PangoMatrix,yy,8,3,43111)
CheckOffset(struct _PangoMatrix,yy,24,3,43111)
CheckMemberSize(struct _PangoMatrix,x0,8,3,43112)
CheckOffset(struct _PangoMatrix,x0,32,3,43112)
CheckMemberSize(struct _PangoMatrix,y0,8,3,43113)
CheckOffset(struct _PangoMatrix,y0,40,3,43113)
#elif defined __i386__
CheckTypeSize(struct _PangoMatrix,48, 12394, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoMatrix,xy,8,2,43109)
CheckOffset(struct _PangoMatrix,xy,8,2,43109)
CheckMemberSize(struct _PangoMatrix,yx,8,2,43110)
CheckOffset(struct _PangoMatrix,yx,16,2,43110)
CheckMemberSize(struct _PangoMatrix,yy,8,2,43111)
CheckOffset(struct _PangoMatrix,yy,24,2,43111)
CheckMemberSize(struct _PangoMatrix,x0,8,2,43112)
CheckOffset(struct _PangoMatrix,x0,32,2,43112)
CheckMemberSize(struct _PangoMatrix,y0,8,2,43113)
CheckOffset(struct _PangoMatrix,y0,40,2,43113)
#elif 1
CheckTypeSize(struct _PangoMatrix,0, 12394, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoMatrix on All\n");
CheckOffset(struct _PangoMatrix,xx,0,1,43108)
#endif

#if defined __s390x__
CheckTypeSize(PangoMatrix,48, 12395, 12, 3.1, NULL, 12394, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoMatrix,48, 12395, 11, 3.1, NULL, 12394, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoMatrix,48, 12395, 10, 3.1, NULL, 12394, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoMatrix,48, 12395, 9, 3.1, NULL, 12394, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoMatrix,48, 12395, 6, 3.1, NULL, 12394, NULL)
#elif defined __ia64__
CheckTypeSize(PangoMatrix,48, 12395, 3, 3.1, NULL, 12394, NULL)
#elif defined __i386__
CheckTypeSize(PangoMatrix,48, 12395, 2, 3.1, NULL, 12394, NULL)
#else
Msg("Find size of PangoMatrix (12395)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12394,NULL);\n",architecture,12395,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoGlyphItem,16, 12397, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphItem,glyphs,8,12,43136)
CheckOffset(struct _PangoGlyphItem,glyphs,8,12,43136)
#elif defined __x86_64__
CheckTypeSize(struct _PangoGlyphItem,16, 12397, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphItem,glyphs,8,11,43136)
CheckOffset(struct _PangoGlyphItem,glyphs,8,11,43136)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoGlyphItem,8, 12397, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphItem,glyphs,4,10,43136)
CheckOffset(struct _PangoGlyphItem,glyphs,4,10,43136)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoGlyphItem,16, 12397, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphItem,glyphs,8,9,43136)
CheckOffset(struct _PangoGlyphItem,glyphs,8,9,43136)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoGlyphItem,8, 12397, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphItem,glyphs,4,6,43136)
CheckOffset(struct _PangoGlyphItem,glyphs,4,6,43136)
#elif defined __ia64__
CheckTypeSize(struct _PangoGlyphItem,16, 12397, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphItem,glyphs,8,3,43136)
CheckOffset(struct _PangoGlyphItem,glyphs,8,3,43136)
#elif defined __i386__
CheckTypeSize(struct _PangoGlyphItem,8, 12397, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphItem,glyphs,4,2,43136)
CheckOffset(struct _PangoGlyphItem,glyphs,4,2,43136)
#elif 1
CheckTypeSize(struct _PangoGlyphItem,0, 12397, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoGlyphItem on All\n");
CheckOffset(struct _PangoGlyphItem,item,0,1,43124)
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoItem,64, 12398, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoItem,length,4,12,43115)
CheckOffset(struct _PangoItem,length,4,12,43115)
CheckMemberSize(struct _PangoItem,num_chars,4,12,43116)
CheckOffset(struct _PangoItem,num_chars,8,12,43116)
CheckMemberSize(struct _PangoItem,analysis,48,12,43123)
CheckOffset(struct _PangoItem,analysis,16,12,43123)
#elif defined __x86_64__
CheckTypeSize(struct _PangoItem,64, 12398, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoItem,length,4,11,43115)
CheckOffset(struct _PangoItem,length,4,11,43115)
CheckMemberSize(struct _PangoItem,num_chars,4,11,43116)
CheckOffset(struct _PangoItem,num_chars,8,11,43116)
CheckMemberSize(struct _PangoItem,analysis,48,11,43123)
CheckOffset(struct _PangoItem,analysis,16,11,43123)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoItem,36, 12398, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoItem,length,4,10,43115)
CheckOffset(struct _PangoItem,length,4,10,43115)
CheckMemberSize(struct _PangoItem,num_chars,4,10,43116)
CheckOffset(struct _PangoItem,num_chars,8,10,43116)
CheckMemberSize(struct _PangoItem,analysis,24,10,43123)
CheckOffset(struct _PangoItem,analysis,12,10,43123)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoItem,64, 12398, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoItem,length,4,9,43115)
CheckOffset(struct _PangoItem,length,4,9,43115)
CheckMemberSize(struct _PangoItem,num_chars,4,9,43116)
CheckOffset(struct _PangoItem,num_chars,8,9,43116)
CheckMemberSize(struct _PangoItem,analysis,48,9,43123)
CheckOffset(struct _PangoItem,analysis,16,9,43123)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoItem,36, 12398, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoItem,length,4,6,43115)
CheckOffset(struct _PangoItem,length,4,6,43115)
CheckMemberSize(struct _PangoItem,num_chars,4,6,43116)
CheckOffset(struct _PangoItem,num_chars,8,6,43116)
CheckMemberSize(struct _PangoItem,analysis,24,6,43123)
CheckOffset(struct _PangoItem,analysis,12,6,43123)
#elif defined __ia64__
CheckTypeSize(struct _PangoItem,64, 12398, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoItem,length,4,3,43115)
CheckOffset(struct _PangoItem,length,4,3,43115)
CheckMemberSize(struct _PangoItem,num_chars,4,3,43116)
CheckOffset(struct _PangoItem,num_chars,8,3,43116)
CheckMemberSize(struct _PangoItem,analysis,48,3,43123)
CheckOffset(struct _PangoItem,analysis,16,3,43123)
#elif defined __i386__
CheckTypeSize(struct _PangoItem,36, 12398, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoItem,length,4,2,43115)
CheckOffset(struct _PangoItem,length,4,2,43115)
CheckMemberSize(struct _PangoItem,num_chars,4,2,43116)
CheckOffset(struct _PangoItem,num_chars,8,2,43116)
CheckMemberSize(struct _PangoItem,analysis,24,2,43123)
CheckOffset(struct _PangoItem,analysis,12,2,43123)
#elif 1
CheckTypeSize(struct _PangoItem,0, 12398, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoItem on All\n");
CheckOffset(struct _PangoItem,offset,0,1,43114)
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoAnalysis,48, 12399, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAnalysis,lang_engine,8,12,43118)
CheckOffset(struct _PangoAnalysis,lang_engine,8,12,43118)
CheckMemberSize(struct _PangoAnalysis,font,8,12,43119)
CheckOffset(struct _PangoAnalysis,font,16,12,43119)
CheckMemberSize(struct _PangoAnalysis,level,1,12,43120)
CheckOffset(struct _PangoAnalysis,level,24,12,43120)
CheckMemberSize(struct _PangoAnalysis,language,8,12,43121)
CheckOffset(struct _PangoAnalysis,language,32,12,43121)
CheckMemberSize(struct _PangoAnalysis,extra_attrs,8,12,43122)
CheckOffset(struct _PangoAnalysis,extra_attrs,40,12,43122)
#elif defined __x86_64__
CheckTypeSize(struct _PangoAnalysis,48, 12399, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAnalysis,lang_engine,8,11,43118)
CheckOffset(struct _PangoAnalysis,lang_engine,8,11,43118)
CheckMemberSize(struct _PangoAnalysis,font,8,11,43119)
CheckOffset(struct _PangoAnalysis,font,16,11,43119)
CheckMemberSize(struct _PangoAnalysis,level,1,11,43120)
CheckOffset(struct _PangoAnalysis,level,24,11,43120)
CheckMemberSize(struct _PangoAnalysis,language,8,11,43121)
CheckOffset(struct _PangoAnalysis,language,32,11,43121)
CheckMemberSize(struct _PangoAnalysis,extra_attrs,8,11,43122)
CheckOffset(struct _PangoAnalysis,extra_attrs,40,11,43122)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoAnalysis,24, 12399, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAnalysis,lang_engine,4,10,43118)
CheckOffset(struct _PangoAnalysis,lang_engine,4,10,43118)
CheckMemberSize(struct _PangoAnalysis,font,4,10,43119)
CheckOffset(struct _PangoAnalysis,font,8,10,43119)
CheckMemberSize(struct _PangoAnalysis,level,1,10,43120)
CheckOffset(struct _PangoAnalysis,level,12,10,43120)
CheckMemberSize(struct _PangoAnalysis,language,4,10,43121)
CheckOffset(struct _PangoAnalysis,language,16,10,43121)
CheckMemberSize(struct _PangoAnalysis,extra_attrs,4,10,43122)
CheckOffset(struct _PangoAnalysis,extra_attrs,20,10,43122)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoAnalysis,48, 12399, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAnalysis,lang_engine,8,9,43118)
CheckOffset(struct _PangoAnalysis,lang_engine,8,9,43118)
CheckMemberSize(struct _PangoAnalysis,font,8,9,43119)
CheckOffset(struct _PangoAnalysis,font,16,9,43119)
CheckMemberSize(struct _PangoAnalysis,level,1,9,43120)
CheckOffset(struct _PangoAnalysis,level,24,9,43120)
CheckMemberSize(struct _PangoAnalysis,language,8,9,43121)
CheckOffset(struct _PangoAnalysis,language,32,9,43121)
CheckMemberSize(struct _PangoAnalysis,extra_attrs,8,9,43122)
CheckOffset(struct _PangoAnalysis,extra_attrs,40,9,43122)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoAnalysis,24, 12399, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAnalysis,lang_engine,4,6,43118)
CheckOffset(struct _PangoAnalysis,lang_engine,4,6,43118)
CheckMemberSize(struct _PangoAnalysis,font,4,6,43119)
CheckOffset(struct _PangoAnalysis,font,8,6,43119)
CheckMemberSize(struct _PangoAnalysis,level,1,6,43120)
CheckOffset(struct _PangoAnalysis,level,12,6,43120)
CheckMemberSize(struct _PangoAnalysis,language,4,6,43121)
CheckOffset(struct _PangoAnalysis,language,16,6,43121)
CheckMemberSize(struct _PangoAnalysis,extra_attrs,4,6,43122)
CheckOffset(struct _PangoAnalysis,extra_attrs,20,6,43122)
#elif defined __ia64__
CheckTypeSize(struct _PangoAnalysis,48, 12399, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAnalysis,lang_engine,8,3,43118)
CheckOffset(struct _PangoAnalysis,lang_engine,8,3,43118)
CheckMemberSize(struct _PangoAnalysis,font,8,3,43119)
CheckOffset(struct _PangoAnalysis,font,16,3,43119)
CheckMemberSize(struct _PangoAnalysis,level,1,3,43120)
CheckOffset(struct _PangoAnalysis,level,24,3,43120)
CheckMemberSize(struct _PangoAnalysis,language,8,3,43121)
CheckOffset(struct _PangoAnalysis,language,32,3,43121)
CheckMemberSize(struct _PangoAnalysis,extra_attrs,8,3,43122)
CheckOffset(struct _PangoAnalysis,extra_attrs,40,3,43122)
#elif defined __i386__
CheckTypeSize(struct _PangoAnalysis,24, 12399, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAnalysis,lang_engine,4,2,43118)
CheckOffset(struct _PangoAnalysis,lang_engine,4,2,43118)
CheckMemberSize(struct _PangoAnalysis,font,4,2,43119)
CheckOffset(struct _PangoAnalysis,font,8,2,43119)
CheckMemberSize(struct _PangoAnalysis,level,1,2,43120)
CheckOffset(struct _PangoAnalysis,level,12,2,43120)
CheckMemberSize(struct _PangoAnalysis,language,4,2,43121)
CheckOffset(struct _PangoAnalysis,language,16,2,43121)
CheckMemberSize(struct _PangoAnalysis,extra_attrs,4,2,43122)
CheckOffset(struct _PangoAnalysis,extra_attrs,20,2,43122)
#elif 1
CheckTypeSize(struct _PangoAnalysis,0, 12399, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoAnalysis on All\n");
CheckOffset(struct _PangoAnalysis,shape_engine,0,1,43117)
#endif

#if defined __s390x__
CheckTypeSize(PangoAnalysis,48, 12406, 12, 3.1, NULL, 12399, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAnalysis,48, 12406, 11, 3.1, NULL, 12399, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAnalysis,24, 12406, 10, 3.1, NULL, 12399, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAnalysis,48, 12406, 9, 3.1, NULL, 12399, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAnalysis,24, 12406, 6, 3.1, NULL, 12399, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAnalysis,48, 12406, 3, 3.1, NULL, 12399, NULL)
#elif defined __i386__
CheckTypeSize(PangoAnalysis,24, 12406, 2, 3.1, NULL, 12399, NULL)
#else
Msg("Find size of PangoAnalysis (12406)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12399,NULL);\n",architecture,12406,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoItem,64, 12407, 12, 3.1, NULL, 12398, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoItem,64, 12407, 11, 3.1, NULL, 12398, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoItem,36, 12407, 10, 3.1, NULL, 12398, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoItem,64, 12407, 9, 3.1, NULL, 12398, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoItem,36, 12407, 6, 3.1, NULL, 12398, NULL)
#elif defined __ia64__
CheckTypeSize(PangoItem,64, 12407, 3, 3.1, NULL, 12398, NULL)
#elif defined __i386__
CheckTypeSize(PangoItem,36, 12407, 2, 3.1, NULL, 12398, NULL)
#else
Msg("Find size of PangoItem (12407)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12398,NULL);\n",architecture,12407,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoGlyphString,32, 12409, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphString,glyphs,8,12,43133)
CheckOffset(struct _PangoGlyphString,glyphs,8,12,43133)
CheckMemberSize(struct _PangoGlyphString,log_clusters,8,12,43134)
CheckOffset(struct _PangoGlyphString,log_clusters,16,12,43134)
CheckMemberSize(struct _PangoGlyphString,space,4,12,43135)
CheckOffset(struct _PangoGlyphString,space,24,12,43135)
#elif defined __x86_64__
CheckTypeSize(struct _PangoGlyphString,32, 12409, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphString,glyphs,8,11,43133)
CheckOffset(struct _PangoGlyphString,glyphs,8,11,43133)
CheckMemberSize(struct _PangoGlyphString,log_clusters,8,11,43134)
CheckOffset(struct _PangoGlyphString,log_clusters,16,11,43134)
CheckMemberSize(struct _PangoGlyphString,space,4,11,43135)
CheckOffset(struct _PangoGlyphString,space,24,11,43135)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoGlyphString,16, 12409, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphString,glyphs,4,10,43133)
CheckOffset(struct _PangoGlyphString,glyphs,4,10,43133)
CheckMemberSize(struct _PangoGlyphString,log_clusters,4,10,43134)
CheckOffset(struct _PangoGlyphString,log_clusters,8,10,43134)
CheckMemberSize(struct _PangoGlyphString,space,4,10,43135)
CheckOffset(struct _PangoGlyphString,space,12,10,43135)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoGlyphString,32, 12409, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphString,glyphs,8,9,43133)
CheckOffset(struct _PangoGlyphString,glyphs,8,9,43133)
CheckMemberSize(struct _PangoGlyphString,log_clusters,8,9,43134)
CheckOffset(struct _PangoGlyphString,log_clusters,16,9,43134)
CheckMemberSize(struct _PangoGlyphString,space,4,9,43135)
CheckOffset(struct _PangoGlyphString,space,24,9,43135)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoGlyphString,16, 12409, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphString,glyphs,4,6,43133)
CheckOffset(struct _PangoGlyphString,glyphs,4,6,43133)
CheckMemberSize(struct _PangoGlyphString,log_clusters,4,6,43134)
CheckOffset(struct _PangoGlyphString,log_clusters,8,6,43134)
CheckMemberSize(struct _PangoGlyphString,space,4,6,43135)
CheckOffset(struct _PangoGlyphString,space,12,6,43135)
#elif defined __ia64__
CheckTypeSize(struct _PangoGlyphString,32, 12409, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphString,glyphs,8,3,43133)
CheckOffset(struct _PangoGlyphString,glyphs,8,3,43133)
CheckMemberSize(struct _PangoGlyphString,log_clusters,8,3,43134)
CheckOffset(struct _PangoGlyphString,log_clusters,16,3,43134)
CheckMemberSize(struct _PangoGlyphString,space,4,3,43135)
CheckOffset(struct _PangoGlyphString,space,24,3,43135)
#elif defined __i386__
CheckTypeSize(struct _PangoGlyphString,16, 12409, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphString,glyphs,4,2,43133)
CheckOffset(struct _PangoGlyphString,glyphs,4,2,43133)
CheckMemberSize(struct _PangoGlyphString,log_clusters,4,2,43134)
CheckOffset(struct _PangoGlyphString,log_clusters,8,2,43134)
CheckMemberSize(struct _PangoGlyphString,space,4,2,43135)
CheckOffset(struct _PangoGlyphString,space,12,2,43135)
#elif 1
CheckTypeSize(struct _PangoGlyphString,0, 12409, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoGlyphString on All\n");
CheckOffset(struct _PangoGlyphString,num_glyphs,0,1,43125)
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoGlyphInfo,20, 12410, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphInfo,geometry,12,12,43130)
CheckOffset(struct _PangoGlyphInfo,geometry,4,12,43130)
CheckMemberSize(struct _PangoGlyphInfo,attr,4,12,43132)
CheckOffset(struct _PangoGlyphInfo,attr,16,12,43132)
#elif defined __x86_64__
CheckTypeSize(struct _PangoGlyphInfo,20, 12410, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphInfo,geometry,12,11,43130)
CheckOffset(struct _PangoGlyphInfo,geometry,4,11,43130)
CheckMemberSize(struct _PangoGlyphInfo,attr,4,11,43132)
CheckOffset(struct _PangoGlyphInfo,attr,16,11,43132)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoGlyphInfo,20, 12410, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphInfo,geometry,12,10,43130)
CheckOffset(struct _PangoGlyphInfo,geometry,4,10,43130)
CheckMemberSize(struct _PangoGlyphInfo,attr,4,10,43132)
CheckOffset(struct _PangoGlyphInfo,attr,16,10,43132)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoGlyphInfo,20, 12410, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphInfo,geometry,12,9,43130)
CheckOffset(struct _PangoGlyphInfo,geometry,4,9,43130)
CheckMemberSize(struct _PangoGlyphInfo,attr,4,9,43132)
CheckOffset(struct _PangoGlyphInfo,attr,16,9,43132)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoGlyphInfo,20, 12410, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphInfo,geometry,12,6,43130)
CheckOffset(struct _PangoGlyphInfo,geometry,4,6,43130)
CheckMemberSize(struct _PangoGlyphInfo,attr,4,6,43132)
CheckOffset(struct _PangoGlyphInfo,attr,16,6,43132)
#elif defined __ia64__
CheckTypeSize(struct _PangoGlyphInfo,20, 12410, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphInfo,geometry,12,3,43130)
CheckOffset(struct _PangoGlyphInfo,geometry,4,3,43130)
CheckMemberSize(struct _PangoGlyphInfo,attr,4,3,43132)
CheckOffset(struct _PangoGlyphInfo,attr,16,3,43132)
#elif defined __i386__
CheckTypeSize(struct _PangoGlyphInfo,20, 12410, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphInfo,geometry,12,2,43130)
CheckOffset(struct _PangoGlyphInfo,geometry,4,2,43130)
CheckMemberSize(struct _PangoGlyphInfo,attr,4,2,43132)
CheckOffset(struct _PangoGlyphInfo,attr,16,2,43132)
#elif 1
CheckTypeSize(struct _PangoGlyphInfo,0, 12410, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoGlyphInfo on All\n");
CheckOffset(struct _PangoGlyphInfo,glyph,0,1,43126)
#endif

#if defined __s390x__
CheckTypeSize(PangoGlyph,4, 12411, 12, 3.1, NULL, 11412, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoGlyph,4, 12411, 11, 3.1, NULL, 11412, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoGlyph,4, 12411, 10, 3.1, NULL, 11412, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoGlyph,4, 12411, 9, 3.1, NULL, 11412, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoGlyph,4, 12411, 6, 3.1, NULL, 11412, NULL)
#elif defined __ia64__
CheckTypeSize(PangoGlyph,4, 12411, 3, 3.1, NULL, 11412, NULL)
#elif defined __i386__
CheckTypeSize(PangoGlyph,4, 12411, 2, 3.1, NULL, 11412, NULL)
#else
Msg("Find size of PangoGlyph (12411)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11412,NULL);\n",architecture,12411,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoGlyphGeometry,12, 12412, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphGeometry,x_offset,4,12,43128)
CheckOffset(struct _PangoGlyphGeometry,x_offset,4,12,43128)
CheckMemberSize(struct _PangoGlyphGeometry,y_offset,4,12,43129)
CheckOffset(struct _PangoGlyphGeometry,y_offset,8,12,43129)
#elif defined __x86_64__
CheckTypeSize(struct _PangoGlyphGeometry,12, 12412, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphGeometry,x_offset,4,11,43128)
CheckOffset(struct _PangoGlyphGeometry,x_offset,4,11,43128)
CheckMemberSize(struct _PangoGlyphGeometry,y_offset,4,11,43129)
CheckOffset(struct _PangoGlyphGeometry,y_offset,8,11,43129)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoGlyphGeometry,12, 12412, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphGeometry,x_offset,4,10,43128)
CheckOffset(struct _PangoGlyphGeometry,x_offset,4,10,43128)
CheckMemberSize(struct _PangoGlyphGeometry,y_offset,4,10,43129)
CheckOffset(struct _PangoGlyphGeometry,y_offset,8,10,43129)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoGlyphGeometry,12, 12412, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphGeometry,x_offset,4,9,43128)
CheckOffset(struct _PangoGlyphGeometry,x_offset,4,9,43128)
CheckMemberSize(struct _PangoGlyphGeometry,y_offset,4,9,43129)
CheckOffset(struct _PangoGlyphGeometry,y_offset,8,9,43129)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoGlyphGeometry,12, 12412, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphGeometry,x_offset,4,6,43128)
CheckOffset(struct _PangoGlyphGeometry,x_offset,4,6,43128)
CheckMemberSize(struct _PangoGlyphGeometry,y_offset,4,6,43129)
CheckOffset(struct _PangoGlyphGeometry,y_offset,8,6,43129)
#elif defined __ia64__
CheckTypeSize(struct _PangoGlyphGeometry,12, 12412, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphGeometry,x_offset,4,3,43128)
CheckOffset(struct _PangoGlyphGeometry,x_offset,4,3,43128)
CheckMemberSize(struct _PangoGlyphGeometry,y_offset,4,3,43129)
CheckOffset(struct _PangoGlyphGeometry,y_offset,8,3,43129)
#elif defined __i386__
CheckTypeSize(struct _PangoGlyphGeometry,12, 12412, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoGlyphGeometry,x_offset,4,2,43128)
CheckOffset(struct _PangoGlyphGeometry,x_offset,4,2,43128)
CheckMemberSize(struct _PangoGlyphGeometry,y_offset,4,2,43129)
CheckOffset(struct _PangoGlyphGeometry,y_offset,8,2,43129)
#elif 1
CheckTypeSize(struct _PangoGlyphGeometry,0, 12412, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoGlyphGeometry on All\n");
CheckOffset(struct _PangoGlyphGeometry,width,0,1,43127)
#endif

#if defined __s390x__
CheckTypeSize(PangoGlyphUnit,4, 12413, 12, 3.1, NULL, 11654, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoGlyphUnit,4, 12413, 11, 3.1, NULL, 11654, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoGlyphUnit,4, 12413, 10, 3.1, NULL, 11654, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoGlyphUnit,4, 12413, 9, 3.1, NULL, 11654, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoGlyphUnit,4, 12413, 6, 3.1, NULL, 11654, NULL)
#elif defined __ia64__
CheckTypeSize(PangoGlyphUnit,4, 12413, 3, 3.1, NULL, 11654, NULL)
#elif defined __i386__
CheckTypeSize(PangoGlyphUnit,4, 12413, 2, 3.1, NULL, 11654, NULL)
#else
Msg("Find size of PangoGlyphUnit (12413)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,11654,NULL);\n",architecture,12413,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoGlyphGeometry,12, 12414, 12, 3.1, NULL, 12412, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoGlyphGeometry,12, 12414, 11, 3.1, NULL, 12412, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoGlyphGeometry,12, 12414, 10, 3.1, NULL, 12412, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoGlyphGeometry,12, 12414, 9, 3.1, NULL, 12412, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoGlyphGeometry,12, 12414, 6, 3.1, NULL, 12412, NULL)
#elif defined __ia64__
CheckTypeSize(PangoGlyphGeometry,12, 12414, 3, 3.1, NULL, 12412, NULL)
#elif defined __i386__
CheckTypeSize(PangoGlyphGeometry,12, 12414, 2, 3.1, NULL, 12412, NULL)
#else
Msg("Find size of PangoGlyphGeometry (12414)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12412,NULL);\n",architecture,12414,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoGlyphVisAttr,4, 12415, 12, , NULL, 0, NULL)
CheckBitField(struct _PangoGlyphVisAttr,is_cluster_start,1,12,43131)
#elif defined __x86_64__
CheckTypeSize(struct _PangoGlyphVisAttr,4, 12415, 11, , NULL, 0, NULL)
CheckBitField(struct _PangoGlyphVisAttr,is_cluster_start,1,11,43131)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoGlyphVisAttr,4, 12415, 10, , NULL, 0, NULL)
CheckBitField(struct _PangoGlyphVisAttr,is_cluster_start,1,10,43131)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoGlyphVisAttr,4, 12415, 9, , NULL, 0, NULL)
CheckBitField(struct _PangoGlyphVisAttr,is_cluster_start,1,9,43131)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoGlyphVisAttr,4, 12415, 6, , NULL, 0, NULL)
CheckBitField(struct _PangoGlyphVisAttr,is_cluster_start,1,6,43131)
#elif defined __ia64__
CheckTypeSize(struct _PangoGlyphVisAttr,4, 12415, 3, , NULL, 0, NULL)
CheckBitField(struct _PangoGlyphVisAttr,is_cluster_start,1,3,43131)
#elif defined __i386__
CheckTypeSize(struct _PangoGlyphVisAttr,4, 12415, 2, , NULL, 0, NULL)
CheckBitField(struct _PangoGlyphVisAttr,is_cluster_start,1,2,43131)
#elif 1
CheckTypeSize(struct _PangoGlyphVisAttr,0, 12415, 1, , NULL, 0, NULL)
CheckBitField(struct _PangoGlyphVisAttr,is_cluster_start,1,1,43131)
#endif

#if defined __s390x__
CheckTypeSize(PangoGlyphVisAttr,4, 12416, 12, 3.1, NULL, 12415, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoGlyphVisAttr,4, 12416, 11, 3.1, NULL, 12415, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoGlyphVisAttr,4, 12416, 10, 3.1, NULL, 12415, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoGlyphVisAttr,4, 12416, 9, 3.1, NULL, 12415, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoGlyphVisAttr,4, 12416, 6, 3.1, NULL, 12415, NULL)
#elif defined __ia64__
CheckTypeSize(PangoGlyphVisAttr,4, 12416, 3, 3.1, NULL, 12415, NULL)
#elif defined __i386__
CheckTypeSize(PangoGlyphVisAttr,4, 12416, 2, 3.1, NULL, 12415, NULL)
#else
Msg("Find size of PangoGlyphVisAttr (12416)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12415,NULL);\n",architecture,12416,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoGlyphInfo,20, 12417, 12, 3.1, NULL, 12410, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoGlyphInfo,20, 12417, 11, 3.1, NULL, 12410, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoGlyphInfo,20, 12417, 10, 3.1, NULL, 12410, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoGlyphInfo,20, 12417, 9, 3.1, NULL, 12410, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoGlyphInfo,20, 12417, 6, 3.1, NULL, 12410, NULL)
#elif defined __ia64__
CheckTypeSize(PangoGlyphInfo,20, 12417, 3, 3.1, NULL, 12410, NULL)
#elif defined __i386__
CheckTypeSize(PangoGlyphInfo,20, 12417, 2, 3.1, NULL, 12410, NULL)
#else
Msg("Find size of PangoGlyphInfo (12417)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12410,NULL);\n",architecture,12417,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoGlyphString,32, 12419, 12, 3.1, NULL, 12409, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoGlyphString,32, 12419, 11, 3.1, NULL, 12409, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoGlyphString,16, 12419, 10, 3.1, NULL, 12409, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoGlyphString,32, 12419, 9, 3.1, NULL, 12409, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoGlyphString,16, 12419, 6, 3.1, NULL, 12409, NULL)
#elif defined __ia64__
CheckTypeSize(PangoGlyphString,32, 12419, 3, 3.1, NULL, 12409, NULL)
#elif defined __i386__
CheckTypeSize(PangoGlyphString,16, 12419, 2, 3.1, NULL, 12409, NULL)
#else
Msg("Find size of PangoGlyphString (12419)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12409,NULL);\n",architecture,12419,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoGlyphItem,16, 12421, 12, 3.1, NULL, 12397, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoGlyphItem,16, 12421, 11, 3.1, NULL, 12397, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoGlyphItem,8, 12421, 10, 3.1, NULL, 12397, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoGlyphItem,16, 12421, 9, 3.1, NULL, 12397, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoGlyphItem,8, 12421, 6, 3.1, NULL, 12397, NULL)
#elif defined __ia64__
CheckTypeSize(PangoGlyphItem,16, 12421, 3, 3.1, NULL, 12397, NULL)
#elif defined __i386__
CheckTypeSize(PangoGlyphItem,8, 12421, 2, 3.1, NULL, 12397, NULL)
#else
Msg("Find size of PangoGlyphItem (12421)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12397,NULL);\n",architecture,12421,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoLayoutRun,16, 12422, 12, 3.1, NULL, 12421, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoLayoutRun,16, 12422, 11, 3.1, NULL, 12421, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoLayoutRun,8, 12422, 10, 3.1, NULL, 12421, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoLayoutRun,16, 12422, 9, 3.1, NULL, 12421, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoLayoutRun,8, 12422, 6, 3.1, NULL, 12421, NULL)
#elif defined __ia64__
CheckTypeSize(PangoLayoutRun,16, 12422, 3, 3.1, NULL, 12421, NULL)
#elif defined __i386__
CheckTypeSize(PangoLayoutRun,8, 12422, 2, 3.1, NULL, 12421, NULL)
#else
Msg("Find size of PangoLayoutRun (12422)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12421,NULL);\n",architecture,12422,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoRenderer,56, 12427, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRenderer,underline,4,12,43143)
CheckOffset(struct _PangoRenderer,underline,24,12,43143)
CheckMemberSize(struct _PangoRenderer,strikethrough,4,12,43144)
CheckOffset(struct _PangoRenderer,strikethrough,28,12,43144)
CheckMemberSize(struct _PangoRenderer,active_count,4,12,43145)
CheckOffset(struct _PangoRenderer,active_count,32,12,43145)
CheckMemberSize(struct _PangoRenderer,matrix,8,12,43146)
CheckOffset(struct _PangoRenderer,matrix,40,12,43146)
CheckMemberSize(struct _PangoRenderer,priv,8,12,43147)
CheckOffset(struct _PangoRenderer,priv,48,12,43147)
#elif defined __x86_64__
CheckTypeSize(struct _PangoRenderer,56, 12427, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRenderer,underline,4,11,43143)
CheckOffset(struct _PangoRenderer,underline,24,11,43143)
CheckMemberSize(struct _PangoRenderer,strikethrough,4,11,43144)
CheckOffset(struct _PangoRenderer,strikethrough,28,11,43144)
CheckMemberSize(struct _PangoRenderer,active_count,4,11,43145)
CheckOffset(struct _PangoRenderer,active_count,32,11,43145)
CheckMemberSize(struct _PangoRenderer,matrix,8,11,43146)
CheckOffset(struct _PangoRenderer,matrix,40,11,43146)
CheckMemberSize(struct _PangoRenderer,priv,8,11,43147)
CheckOffset(struct _PangoRenderer,priv,48,11,43147)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoRenderer,32, 12427, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRenderer,underline,4,10,43143)
CheckOffset(struct _PangoRenderer,underline,12,10,43143)
CheckMemberSize(struct _PangoRenderer,strikethrough,4,10,43144)
CheckOffset(struct _PangoRenderer,strikethrough,16,10,43144)
CheckMemberSize(struct _PangoRenderer,active_count,4,10,43145)
CheckOffset(struct _PangoRenderer,active_count,20,10,43145)
CheckMemberSize(struct _PangoRenderer,matrix,4,10,43146)
CheckOffset(struct _PangoRenderer,matrix,24,10,43146)
CheckMemberSize(struct _PangoRenderer,priv,4,10,43147)
CheckOffset(struct _PangoRenderer,priv,28,10,43147)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoRenderer,56, 12427, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRenderer,underline,4,9,43143)
CheckOffset(struct _PangoRenderer,underline,24,9,43143)
CheckMemberSize(struct _PangoRenderer,strikethrough,4,9,43144)
CheckOffset(struct _PangoRenderer,strikethrough,28,9,43144)
CheckMemberSize(struct _PangoRenderer,active_count,4,9,43145)
CheckOffset(struct _PangoRenderer,active_count,32,9,43145)
CheckMemberSize(struct _PangoRenderer,matrix,8,9,43146)
CheckOffset(struct _PangoRenderer,matrix,40,9,43146)
CheckMemberSize(struct _PangoRenderer,priv,8,9,43147)
CheckOffset(struct _PangoRenderer,priv,48,9,43147)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoRenderer,32, 12427, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRenderer,underline,4,6,43143)
CheckOffset(struct _PangoRenderer,underline,12,6,43143)
CheckMemberSize(struct _PangoRenderer,strikethrough,4,6,43144)
CheckOffset(struct _PangoRenderer,strikethrough,16,6,43144)
CheckMemberSize(struct _PangoRenderer,active_count,4,6,43145)
CheckOffset(struct _PangoRenderer,active_count,20,6,43145)
CheckMemberSize(struct _PangoRenderer,matrix,4,6,43146)
CheckOffset(struct _PangoRenderer,matrix,24,6,43146)
CheckMemberSize(struct _PangoRenderer,priv,4,6,43147)
CheckOffset(struct _PangoRenderer,priv,28,6,43147)
#elif defined __ia64__
CheckTypeSize(struct _PangoRenderer,56, 12427, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRenderer,underline,4,3,43143)
CheckOffset(struct _PangoRenderer,underline,24,3,43143)
CheckMemberSize(struct _PangoRenderer,strikethrough,4,3,43144)
CheckOffset(struct _PangoRenderer,strikethrough,28,3,43144)
CheckMemberSize(struct _PangoRenderer,active_count,4,3,43145)
CheckOffset(struct _PangoRenderer,active_count,32,3,43145)
CheckMemberSize(struct _PangoRenderer,matrix,8,3,43146)
CheckOffset(struct _PangoRenderer,matrix,40,3,43146)
CheckMemberSize(struct _PangoRenderer,priv,8,3,43147)
CheckOffset(struct _PangoRenderer,priv,48,3,43147)
#elif defined __i386__
CheckTypeSize(struct _PangoRenderer,32, 12427, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRenderer,underline,4,2,43143)
CheckOffset(struct _PangoRenderer,underline,12,2,43143)
CheckMemberSize(struct _PangoRenderer,strikethrough,4,2,43144)
CheckOffset(struct _PangoRenderer,strikethrough,16,2,43144)
CheckMemberSize(struct _PangoRenderer,active_count,4,2,43145)
CheckOffset(struct _PangoRenderer,active_count,20,2,43145)
CheckMemberSize(struct _PangoRenderer,matrix,4,2,43146)
CheckOffset(struct _PangoRenderer,matrix,24,2,43146)
CheckMemberSize(struct _PangoRenderer,priv,4,2,43147)
CheckOffset(struct _PangoRenderer,priv,28,2,43147)
#elif 1
CheckTypeSize(struct _PangoRenderer,0, 12427, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoRenderer on All\n");
CheckOffset(struct _PangoRenderer,parent_instance,0,1,43137)
#endif

#if defined __s390x__
CheckTypeSize(PangoUnderline,4, 12429, 12, 3.1, NULL, 12428, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoUnderline,4, 12429, 11, 3.1, NULL, 12428, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoUnderline,4, 12429, 10, 3.1, NULL, 12428, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoUnderline,4, 12429, 9, 3.1, NULL, 12428, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoUnderline,4, 12429, 6, 3.1, NULL, 12428, NULL)
#elif defined __ia64__
CheckTypeSize(PangoUnderline,4, 12429, 3, 3.1, NULL, 12428, NULL)
#elif defined __i386__
CheckTypeSize(PangoUnderline,4, 12429, 2, 3.1, NULL, 12428, NULL)
#else
Msg("Find size of PangoUnderline (12429)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12428,NULL);\n",architecture,12429,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoRenderer,56, 12433, 12, 3.1, NULL, 12427, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoRenderer,56, 12433, 11, 3.1, NULL, 12427, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoRenderer,32, 12433, 10, 3.1, NULL, 12427, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoRenderer,56, 12433, 9, 3.1, NULL, 12427, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoRenderer,32, 12433, 6, 3.1, NULL, 12427, NULL)
#elif defined __ia64__
CheckTypeSize(PangoRenderer,56, 12433, 3, 3.1, NULL, 12427, NULL)
#elif defined __i386__
CheckTypeSize(PangoRenderer,32, 12433, 2, 3.1, NULL, 12427, NULL)
#else
Msg("Find size of PangoRenderer (12433)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12427,NULL);\n",architecture,12433,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoRenderPart,4, 12436, 12, 3.1, NULL, 12435, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoRenderPart,4, 12436, 11, 3.1, NULL, 12435, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoRenderPart,4, 12436, 10, 3.1, NULL, 12435, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoRenderPart,4, 12436, 9, 3.1, NULL, 12435, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoRenderPart,4, 12436, 6, 3.1, NULL, 12435, NULL)
#elif defined __ia64__
CheckTypeSize(PangoRenderPart,4, 12436, 3, 3.1, NULL, 12435, NULL)
#elif defined __i386__
CheckTypeSize(PangoRenderPart,4, 12436, 2, 3.1, NULL, 12435, NULL)
#else
Msg("Find size of PangoRenderPart (12436)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12435,NULL);\n",architecture,12436,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoLayoutLine,32, 12440, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoLayoutLine,start_index,4,12,43153)
CheckOffset(struct _PangoLayoutLine,start_index,8,12,43153)
CheckMemberSize(struct _PangoLayoutLine,length,4,12,43154)
CheckOffset(struct _PangoLayoutLine,length,12,12,43154)
CheckMemberSize(struct _PangoLayoutLine,runs,8,12,43155)
CheckOffset(struct _PangoLayoutLine,runs,16,12,43155)
#elif defined __x86_64__
CheckTypeSize(struct _PangoLayoutLine,32, 12440, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoLayoutLine,start_index,4,11,43153)
CheckOffset(struct _PangoLayoutLine,start_index,8,11,43153)
CheckMemberSize(struct _PangoLayoutLine,length,4,11,43154)
CheckOffset(struct _PangoLayoutLine,length,12,11,43154)
CheckMemberSize(struct _PangoLayoutLine,runs,8,11,43155)
CheckOffset(struct _PangoLayoutLine,runs,16,11,43155)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoLayoutLine,20, 12440, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoLayoutLine,start_index,4,10,43153)
CheckOffset(struct _PangoLayoutLine,start_index,4,10,43153)
CheckMemberSize(struct _PangoLayoutLine,length,4,10,43154)
CheckOffset(struct _PangoLayoutLine,length,8,10,43154)
CheckMemberSize(struct _PangoLayoutLine,runs,4,10,43155)
CheckOffset(struct _PangoLayoutLine,runs,12,10,43155)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoLayoutLine,32, 12440, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoLayoutLine,start_index,4,9,43153)
CheckOffset(struct _PangoLayoutLine,start_index,8,9,43153)
CheckMemberSize(struct _PangoLayoutLine,length,4,9,43154)
CheckOffset(struct _PangoLayoutLine,length,12,9,43154)
CheckMemberSize(struct _PangoLayoutLine,runs,8,9,43155)
CheckOffset(struct _PangoLayoutLine,runs,16,9,43155)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoLayoutLine,20, 12440, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoLayoutLine,start_index,4,6,43153)
CheckOffset(struct _PangoLayoutLine,start_index,4,6,43153)
CheckMemberSize(struct _PangoLayoutLine,length,4,6,43154)
CheckOffset(struct _PangoLayoutLine,length,8,6,43154)
CheckMemberSize(struct _PangoLayoutLine,runs,4,6,43155)
CheckOffset(struct _PangoLayoutLine,runs,12,6,43155)
#elif defined __ia64__
CheckTypeSize(struct _PangoLayoutLine,32, 12440, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoLayoutLine,start_index,4,3,43153)
CheckOffset(struct _PangoLayoutLine,start_index,8,3,43153)
CheckMemberSize(struct _PangoLayoutLine,length,4,3,43154)
CheckOffset(struct _PangoLayoutLine,length,12,3,43154)
CheckMemberSize(struct _PangoLayoutLine,runs,8,3,43155)
CheckOffset(struct _PangoLayoutLine,runs,16,3,43155)
#elif defined __i386__
CheckTypeSize(struct _PangoLayoutLine,20, 12440, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoLayoutLine,start_index,4,2,43153)
CheckOffset(struct _PangoLayoutLine,start_index,4,2,43153)
CheckMemberSize(struct _PangoLayoutLine,length,4,2,43154)
CheckOffset(struct _PangoLayoutLine,length,8,2,43154)
CheckMemberSize(struct _PangoLayoutLine,runs,4,2,43155)
CheckOffset(struct _PangoLayoutLine,runs,12,2,43155)
#elif 1
CheckTypeSize(struct _PangoLayoutLine,0, 12440, 1, , NULL, 0, NULL)
CheckBitField(struct _PangoLayoutLine,is_paragraph_start,1,1,43156)
CheckBitField(struct _PangoLayoutLine,resolved_dir,3,1,43157)
#endif

#if defined __s390x__
CheckTypeSize(PangoLayoutLine,32, 12441, 12, 3.1, NULL, 12440, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoLayoutLine,32, 12441, 11, 3.1, NULL, 12440, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoLayoutLine,20, 12441, 10, 3.1, NULL, 12440, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoLayoutLine,32, 12441, 9, 3.1, NULL, 12440, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoLayoutLine,20, 12441, 6, 3.1, NULL, 12440, NULL)
#elif defined __ia64__
CheckTypeSize(PangoLayoutLine,32, 12441, 3, 3.1, NULL, 12440, NULL)
#elif defined __i386__
CheckTypeSize(PangoLayoutLine,20, 12441, 2, 3.1, NULL, 12440, NULL)
#else
Msg("Find size of PangoLayoutLine (12441)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12440,NULL);\n",architecture,12441,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoStretch,4, 12444, 12, 3.1, NULL, 12443, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoStretch,4, 12444, 11, 3.1, NULL, 12443, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoStretch,4, 12444, 10, 3.1, NULL, 12443, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoStretch,4, 12444, 9, 3.1, NULL, 12443, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoStretch,4, 12444, 6, 3.1, NULL, 12443, NULL)
#elif defined __ia64__
CheckTypeSize(PangoStretch,4, 12444, 3, 3.1, NULL, 12443, NULL)
#elif defined __i386__
CheckTypeSize(PangoStretch,4, 12444, 2, 3.1, NULL, 12443, NULL)
#else
Msg("Find size of PangoStretch (12444)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12443,NULL);\n",architecture,12444,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoRectangle,16, 12445, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRectangle,y,4,12,43168)
CheckOffset(struct _PangoRectangle,y,4,12,43168)
CheckMemberSize(struct _PangoRectangle,width,4,12,43169)
CheckOffset(struct _PangoRectangle,width,8,12,43169)
CheckMemberSize(struct _PangoRectangle,height,4,12,43170)
CheckOffset(struct _PangoRectangle,height,12,12,43170)
#elif defined __x86_64__
CheckTypeSize(struct _PangoRectangle,16, 12445, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRectangle,y,4,11,43168)
CheckOffset(struct _PangoRectangle,y,4,11,43168)
CheckMemberSize(struct _PangoRectangle,width,4,11,43169)
CheckOffset(struct _PangoRectangle,width,8,11,43169)
CheckMemberSize(struct _PangoRectangle,height,4,11,43170)
CheckOffset(struct _PangoRectangle,height,12,11,43170)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoRectangle,16, 12445, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRectangle,y,4,10,43168)
CheckOffset(struct _PangoRectangle,y,4,10,43168)
CheckMemberSize(struct _PangoRectangle,width,4,10,43169)
CheckOffset(struct _PangoRectangle,width,8,10,43169)
CheckMemberSize(struct _PangoRectangle,height,4,10,43170)
CheckOffset(struct _PangoRectangle,height,12,10,43170)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoRectangle,16, 12445, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRectangle,y,4,9,43168)
CheckOffset(struct _PangoRectangle,y,4,9,43168)
CheckMemberSize(struct _PangoRectangle,width,4,9,43169)
CheckOffset(struct _PangoRectangle,width,8,9,43169)
CheckMemberSize(struct _PangoRectangle,height,4,9,43170)
CheckOffset(struct _PangoRectangle,height,12,9,43170)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoRectangle,16, 12445, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRectangle,y,4,6,43168)
CheckOffset(struct _PangoRectangle,y,4,6,43168)
CheckMemberSize(struct _PangoRectangle,width,4,6,43169)
CheckOffset(struct _PangoRectangle,width,8,6,43169)
CheckMemberSize(struct _PangoRectangle,height,4,6,43170)
CheckOffset(struct _PangoRectangle,height,12,6,43170)
#elif defined __ia64__
CheckTypeSize(struct _PangoRectangle,16, 12445, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRectangle,y,4,3,43168)
CheckOffset(struct _PangoRectangle,y,4,3,43168)
CheckMemberSize(struct _PangoRectangle,width,4,3,43169)
CheckOffset(struct _PangoRectangle,width,8,3,43169)
CheckMemberSize(struct _PangoRectangle,height,4,3,43170)
CheckOffset(struct _PangoRectangle,height,12,3,43170)
#elif defined __i386__
CheckTypeSize(struct _PangoRectangle,16, 12445, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRectangle,y,4,2,43168)
CheckOffset(struct _PangoRectangle,y,4,2,43168)
CheckMemberSize(struct _PangoRectangle,width,4,2,43169)
CheckOffset(struct _PangoRectangle,width,8,2,43169)
CheckMemberSize(struct _PangoRectangle,height,4,2,43170)
CheckOffset(struct _PangoRectangle,height,12,2,43170)
#elif 1
CheckTypeSize(struct _PangoRectangle,0, 12445, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoRectangle on All\n");
CheckOffset(struct _PangoRectangle,x,0,1,43167)
#endif

#if defined __s390x__
CheckTypeSize(PangoRectangle,16, 12446, 12, 3.1, NULL, 12445, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoRectangle,16, 12446, 11, 3.1, NULL, 12445, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoRectangle,16, 12446, 10, 3.1, NULL, 12445, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoRectangle,16, 12446, 9, 3.1, NULL, 12445, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoRectangle,16, 12446, 6, 3.1, NULL, 12445, NULL)
#elif defined __ia64__
CheckTypeSize(PangoRectangle,16, 12446, 3, 3.1, NULL, 12445, NULL)
#elif defined __i386__
CheckTypeSize(PangoRectangle,16, 12446, 2, 3.1, NULL, 12445, NULL)
#else
Msg("Find size of PangoRectangle (12446)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12445,NULL);\n",architecture,12446,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoTabAlign,4, 12461, 12, 3.1, NULL, 12460, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoTabAlign,4, 12461, 11, 3.1, NULL, 12460, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoTabAlign,4, 12461, 10, 3.1, NULL, 12460, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoTabAlign,4, 12461, 9, 3.1, NULL, 12460, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoTabAlign,4, 12461, 6, 3.1, NULL, 12460, NULL)
#elif defined __ia64__
CheckTypeSize(PangoTabAlign,4, 12461, 3, 3.1, NULL, 12460, NULL)
#elif defined __i386__
CheckTypeSize(PangoTabAlign,4, 12461, 2, 3.1, NULL, 12460, NULL)
#else
Msg("Find size of PangoTabAlign (12461)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12460,NULL);\n",architecture,12461,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoAlignment,4, 12467, 12, 3.1, NULL, 12466, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAlignment,4, 12467, 11, 3.1, NULL, 12466, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAlignment,4, 12467, 10, 3.1, NULL, 12466, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAlignment,4, 12467, 9, 3.1, NULL, 12466, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAlignment,4, 12467, 6, 3.1, NULL, 12466, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAlignment,4, 12467, 3, 3.1, NULL, 12466, NULL)
#elif defined __i386__
CheckTypeSize(PangoAlignment,4, 12467, 2, 3.1, NULL, 12466, NULL)
#else
Msg("Find size of PangoAlignment (12467)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12466,NULL);\n",architecture,12467,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoFontMask,4, 12474, 12, 3.1, NULL, 12473, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoFontMask,4, 12474, 11, 3.1, NULL, 12473, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoFontMask,4, 12474, 10, 3.1, NULL, 12473, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoFontMask,4, 12474, 9, 3.1, NULL, 12473, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoFontMask,4, 12474, 6, 3.1, NULL, 12473, NULL)
#elif defined __ia64__
CheckTypeSize(PangoFontMask,4, 12474, 3, 3.1, NULL, 12473, NULL)
#elif defined __i386__
CheckTypeSize(PangoFontMask,4, 12474, 2, 3.1, NULL, 12473, NULL)
#else
Msg("Find size of PangoFontMask (12474)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12473,NULL);\n",architecture,12474,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoDirection,4, 12476, 12, 3.1, NULL, 12475, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoDirection,4, 12476, 11, 3.1, NULL, 12475, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoDirection,4, 12476, 10, 3.1, NULL, 12475, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoDirection,4, 12476, 9, 3.1, NULL, 12475, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoDirection,4, 12476, 6, 3.1, NULL, 12475, NULL)
#elif defined __ia64__
CheckTypeSize(PangoDirection,4, 12476, 3, 3.1, NULL, 12475, NULL)
#elif defined __i386__
CheckTypeSize(PangoDirection,4, 12476, 2, 3.1, NULL, 12475, NULL)
#else
Msg("Find size of PangoDirection (12476)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12475,NULL);\n",architecture,12476,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoEllipsizeMode,4, 12478, 12, 3.1, NULL, 12477, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoEllipsizeMode,4, 12478, 11, 3.1, NULL, 12477, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoEllipsizeMode,4, 12478, 10, 3.1, NULL, 12477, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoEllipsizeMode,4, 12478, 9, 3.1, NULL, 12477, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoEllipsizeMode,4, 12478, 6, 3.1, NULL, 12477, NULL)
#elif defined __ia64__
CheckTypeSize(PangoEllipsizeMode,4, 12478, 3, 3.1, NULL, 12477, NULL)
#elif defined __i386__
CheckTypeSize(PangoEllipsizeMode,4, 12478, 2, 3.1, NULL, 12477, NULL)
#else
Msg("Find size of PangoEllipsizeMode (12478)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12477,NULL);\n",architecture,12478,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoStyle,4, 12484, 12, 3.1, NULL, 12483, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoStyle,4, 12484, 11, 3.1, NULL, 12483, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoStyle,4, 12484, 10, 3.1, NULL, 12483, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoStyle,4, 12484, 9, 3.1, NULL, 12483, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoStyle,4, 12484, 6, 3.1, NULL, 12483, NULL)
#elif defined __ia64__
CheckTypeSize(PangoStyle,4, 12484, 3, 3.1, NULL, 12483, NULL)
#elif defined __i386__
CheckTypeSize(PangoStyle,4, 12484, 2, 3.1, NULL, 12483, NULL)
#else
Msg("Find size of PangoStyle (12484)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12483,NULL);\n",architecture,12484,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoCoverageLevel,4, 12486, 12, 3.1, NULL, 12485, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoCoverageLevel,4, 12486, 11, 3.1, NULL, 12485, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoCoverageLevel,4, 12486, 10, 3.1, NULL, 12485, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoCoverageLevel,4, 12486, 9, 3.1, NULL, 12485, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoCoverageLevel,4, 12486, 6, 3.1, NULL, 12485, NULL)
#elif defined __ia64__
CheckTypeSize(PangoCoverageLevel,4, 12486, 3, 3.1, NULL, 12485, NULL)
#elif defined __i386__
CheckTypeSize(PangoCoverageLevel,4, 12486, 2, 3.1, NULL, 12485, NULL)
#else
Msg("Find size of PangoCoverageLevel (12486)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12485,NULL);\n",architecture,12486,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoAttrFilterFunc,8, 12491, 12, 3.1, NULL, 12490, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrFilterFunc,8, 12491, 11, 3.1, NULL, 12490, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrFilterFunc,4, 12491, 10, 3.1, NULL, 12490, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrFilterFunc,8, 12491, 9, 3.1, NULL, 12490, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrFilterFunc,4, 12491, 6, 3.1, NULL, 12490, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrFilterFunc,8, 12491, 3, 3.1, NULL, 12490, NULL)
#elif defined __i386__
CheckTypeSize(PangoAttrFilterFunc,4, 12491, 2, 3.1, NULL, 12490, NULL)
#else
Msg("Find size of PangoAttrFilterFunc (12491)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12490,NULL);\n",architecture,12491,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoWeight,4, 12500, 12, 3.1, NULL, 12499, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoWeight,4, 12500, 11, 3.1, NULL, 12499, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoWeight,4, 12500, 10, 3.1, NULL, 12499, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoWeight,4, 12500, 9, 3.1, NULL, 12499, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoWeight,4, 12500, 6, 3.1, NULL, 12499, NULL)
#elif defined __ia64__
CheckTypeSize(PangoWeight,4, 12500, 3, 3.1, NULL, 12499, NULL)
#elif defined __i386__
CheckTypeSize(PangoWeight,4, 12500, 2, 3.1, NULL, 12499, NULL)
#else
Msg("Find size of PangoWeight (12500)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12499,NULL);\n",architecture,12500,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoFontsetForeachFunc,8, 12507, 12, 3.1, NULL, 12506, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoFontsetForeachFunc,8, 12507, 11, 3.1, NULL, 12506, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoFontsetForeachFunc,4, 12507, 10, 3.1, NULL, 12506, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoFontsetForeachFunc,8, 12507, 9, 3.1, NULL, 12506, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoFontsetForeachFunc,4, 12507, 6, 3.1, NULL, 12506, NULL)
#elif defined __ia64__
CheckTypeSize(PangoFontsetForeachFunc,8, 12507, 3, 3.1, NULL, 12506, NULL)
#elif defined __i386__
CheckTypeSize(PangoFontsetForeachFunc,4, 12507, 2, 3.1, NULL, 12506, NULL)
#else
Msg("Find size of PangoFontsetForeachFunc (12507)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12506,NULL);\n",architecture,12507,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoVariant,4, 12509, 12, 3.1, NULL, 12508, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoVariant,4, 12509, 11, 3.1, NULL, 12508, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoVariant,4, 12509, 10, 3.1, NULL, 12508, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoVariant,4, 12509, 9, 3.1, NULL, 12508, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoVariant,4, 12509, 6, 3.1, NULL, 12508, NULL)
#elif defined __ia64__
CheckTypeSize(PangoVariant,4, 12509, 3, 3.1, NULL, 12508, NULL)
#elif defined __i386__
CheckTypeSize(PangoVariant,4, 12509, 2, 3.1, NULL, 12508, NULL)
#else
Msg("Find size of PangoVariant (12509)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12508,NULL);\n",architecture,12509,0);
#endif

#if defined __s390x__
CheckTypeSize(PangoAttrDataCopyFunc,8, 12515, 12, 3.1, NULL, 12514, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrDataCopyFunc,8, 12515, 11, 3.1, NULL, 12514, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrDataCopyFunc,4, 12515, 10, 3.1, NULL, 12514, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrDataCopyFunc,8, 12515, 9, 3.1, NULL, 12514, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrDataCopyFunc,4, 12515, 6, 3.1, NULL, 12514, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrDataCopyFunc,8, 12515, 3, 3.1, NULL, 12514, NULL)
#elif defined __i386__
CheckTypeSize(PangoAttrDataCopyFunc,4, 12515, 2, 3.1, NULL, 12514, NULL)
#else
Msg("Find size of PangoAttrDataCopyFunc (12515)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12514,NULL);\n",architecture,12515,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoAttrShape,72, 12516, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrShape,ink_rect,16,12,43215)
CheckOffset(struct _PangoAttrShape,ink_rect,16,12,43215)
CheckMemberSize(struct _PangoAttrShape,logical_rect,16,12,43216)
CheckOffset(struct _PangoAttrShape,logical_rect,32,12,43216)
CheckMemberSize(struct _PangoAttrShape,data,8,12,43217)
CheckOffset(struct _PangoAttrShape,data,48,12,43217)
CheckMemberSize(struct _PangoAttrShape,copy_func,8,12,43218)
CheckOffset(struct _PangoAttrShape,copy_func,56,12,43218)
CheckMemberSize(struct _PangoAttrShape,destroy_func,8,12,43219)
CheckOffset(struct _PangoAttrShape,destroy_func,64,12,43219)
#elif defined __x86_64__
CheckTypeSize(struct _PangoAttrShape,72, 12516, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrShape,ink_rect,16,11,43215)
CheckOffset(struct _PangoAttrShape,ink_rect,16,11,43215)
CheckMemberSize(struct _PangoAttrShape,logical_rect,16,11,43216)
CheckOffset(struct _PangoAttrShape,logical_rect,32,11,43216)
CheckMemberSize(struct _PangoAttrShape,data,8,11,43217)
CheckOffset(struct _PangoAttrShape,data,48,11,43217)
CheckMemberSize(struct _PangoAttrShape,copy_func,8,11,43218)
CheckOffset(struct _PangoAttrShape,copy_func,56,11,43218)
CheckMemberSize(struct _PangoAttrShape,destroy_func,8,11,43219)
CheckOffset(struct _PangoAttrShape,destroy_func,64,11,43219)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoAttrShape,56, 12516, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrShape,ink_rect,16,10,43215)
CheckOffset(struct _PangoAttrShape,ink_rect,12,10,43215)
CheckMemberSize(struct _PangoAttrShape,logical_rect,16,10,43216)
CheckOffset(struct _PangoAttrShape,logical_rect,28,10,43216)
CheckMemberSize(struct _PangoAttrShape,data,4,10,43217)
CheckOffset(struct _PangoAttrShape,data,44,10,43217)
CheckMemberSize(struct _PangoAttrShape,copy_func,4,10,43218)
CheckOffset(struct _PangoAttrShape,copy_func,48,10,43218)
CheckMemberSize(struct _PangoAttrShape,destroy_func,4,10,43219)
CheckOffset(struct _PangoAttrShape,destroy_func,52,10,43219)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoAttrShape,72, 12516, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrShape,ink_rect,16,9,43215)
CheckOffset(struct _PangoAttrShape,ink_rect,16,9,43215)
CheckMemberSize(struct _PangoAttrShape,logical_rect,16,9,43216)
CheckOffset(struct _PangoAttrShape,logical_rect,32,9,43216)
CheckMemberSize(struct _PangoAttrShape,data,8,9,43217)
CheckOffset(struct _PangoAttrShape,data,48,9,43217)
CheckMemberSize(struct _PangoAttrShape,copy_func,8,9,43218)
CheckOffset(struct _PangoAttrShape,copy_func,56,9,43218)
CheckMemberSize(struct _PangoAttrShape,destroy_func,8,9,43219)
CheckOffset(struct _PangoAttrShape,destroy_func,64,9,43219)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoAttrShape,56, 12516, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrShape,ink_rect,16,6,43215)
CheckOffset(struct _PangoAttrShape,ink_rect,12,6,43215)
CheckMemberSize(struct _PangoAttrShape,logical_rect,16,6,43216)
CheckOffset(struct _PangoAttrShape,logical_rect,28,6,43216)
CheckMemberSize(struct _PangoAttrShape,data,4,6,43217)
CheckOffset(struct _PangoAttrShape,data,44,6,43217)
CheckMemberSize(struct _PangoAttrShape,copy_func,4,6,43218)
CheckOffset(struct _PangoAttrShape,copy_func,48,6,43218)
CheckMemberSize(struct _PangoAttrShape,destroy_func,4,6,43219)
CheckOffset(struct _PangoAttrShape,destroy_func,52,6,43219)
#elif defined __ia64__
CheckTypeSize(struct _PangoAttrShape,72, 12516, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrShape,ink_rect,16,3,43215)
CheckOffset(struct _PangoAttrShape,ink_rect,16,3,43215)
CheckMemberSize(struct _PangoAttrShape,logical_rect,16,3,43216)
CheckOffset(struct _PangoAttrShape,logical_rect,32,3,43216)
CheckMemberSize(struct _PangoAttrShape,data,8,3,43217)
CheckOffset(struct _PangoAttrShape,data,48,3,43217)
CheckMemberSize(struct _PangoAttrShape,copy_func,8,3,43218)
CheckOffset(struct _PangoAttrShape,copy_func,56,3,43218)
CheckMemberSize(struct _PangoAttrShape,destroy_func,8,3,43219)
CheckOffset(struct _PangoAttrShape,destroy_func,64,3,43219)
#elif defined __i386__
CheckTypeSize(struct _PangoAttrShape,56, 12516, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrShape,ink_rect,16,2,43215)
CheckOffset(struct _PangoAttrShape,ink_rect,12,2,43215)
CheckMemberSize(struct _PangoAttrShape,logical_rect,16,2,43216)
CheckOffset(struct _PangoAttrShape,logical_rect,28,2,43216)
CheckMemberSize(struct _PangoAttrShape,data,4,2,43217)
CheckOffset(struct _PangoAttrShape,data,44,2,43217)
CheckMemberSize(struct _PangoAttrShape,copy_func,4,2,43218)
CheckOffset(struct _PangoAttrShape,copy_func,48,2,43218)
CheckMemberSize(struct _PangoAttrShape,destroy_func,4,2,43219)
CheckOffset(struct _PangoAttrShape,destroy_func,52,2,43219)
#elif 1
CheckTypeSize(struct _PangoAttrShape,0, 12516, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoAttrShape on All\n");
CheckOffset(struct _PangoAttrShape,attr,0,1,43214)
#endif

#if defined __s390x__
CheckTypeSize(PangoAttrShape,72, 12517, 12, 3.1, NULL, 12516, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrShape,72, 12517, 11, 3.1, NULL, 12516, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrShape,56, 12517, 10, 3.1, NULL, 12516, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrShape,72, 12517, 9, 3.1, NULL, 12516, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrShape,56, 12517, 6, 3.1, NULL, 12516, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrShape,72, 12517, 3, 3.1, NULL, 12516, NULL)
#elif defined __i386__
CheckTypeSize(PangoAttrShape,56, 12517, 2, 3.1, NULL, 12516, NULL)
#else
Msg("Find size of PangoAttrShape (12517)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12516,NULL);\n",architecture,12517,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoAttrString,24, 12520, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrString,value,8,12,43221)
CheckOffset(struct _PangoAttrString,value,16,12,43221)
#elif defined __x86_64__
CheckTypeSize(struct _PangoAttrString,24, 12520, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrString,value,8,11,43221)
CheckOffset(struct _PangoAttrString,value,16,11,43221)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoAttrString,16, 12520, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrString,value,4,10,43221)
CheckOffset(struct _PangoAttrString,value,12,10,43221)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoAttrString,24, 12520, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrString,value,8,9,43221)
CheckOffset(struct _PangoAttrString,value,16,9,43221)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoAttrString,16, 12520, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrString,value,4,6,43221)
CheckOffset(struct _PangoAttrString,value,12,6,43221)
#elif defined __ia64__
CheckTypeSize(struct _PangoAttrString,24, 12520, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrString,value,8,3,43221)
CheckOffset(struct _PangoAttrString,value,16,3,43221)
#elif defined __i386__
CheckTypeSize(struct _PangoAttrString,16, 12520, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrString,value,4,2,43221)
CheckOffset(struct _PangoAttrString,value,12,2,43221)
#elif 1
CheckTypeSize(struct _PangoAttrString,0, 12520, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoAttrString on All\n");
CheckOffset(struct _PangoAttrString,attr,0,1,43220)
#endif

#if defined __s390x__
CheckTypeSize(PangoAttrString,24, 12521, 12, 3.1, NULL, 12520, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrString,24, 12521, 11, 3.1, NULL, 12520, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrString,16, 12521, 10, 3.1, NULL, 12520, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrString,24, 12521, 9, 3.1, NULL, 12520, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrString,16, 12521, 6, 3.1, NULL, 12520, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrString,24, 12521, 3, 3.1, NULL, 12520, NULL)
#elif defined __i386__
CheckTypeSize(PangoAttrString,16, 12521, 2, 3.1, NULL, 12520, NULL)
#else
Msg("Find size of PangoAttrString (12521)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12520,NULL);\n",architecture,12521,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoAttrColor,24, 12522, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrColor,color,6,12,43223)
CheckOffset(struct _PangoAttrColor,color,16,12,43223)
#elif defined __x86_64__
CheckTypeSize(struct _PangoAttrColor,24, 12522, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrColor,color,6,11,43223)
CheckOffset(struct _PangoAttrColor,color,16,11,43223)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoAttrColor,20, 12522, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrColor,color,6,10,43223)
CheckOffset(struct _PangoAttrColor,color,12,10,43223)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoAttrColor,24, 12522, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrColor,color,6,9,43223)
CheckOffset(struct _PangoAttrColor,color,16,9,43223)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoAttrColor,20, 12522, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrColor,color,6,6,43223)
CheckOffset(struct _PangoAttrColor,color,12,6,43223)
#elif defined __ia64__
CheckTypeSize(struct _PangoAttrColor,24, 12522, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrColor,color,6,3,43223)
CheckOffset(struct _PangoAttrColor,color,16,3,43223)
#elif defined __i386__
CheckTypeSize(struct _PangoAttrColor,20, 12522, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrColor,color,6,2,43223)
CheckOffset(struct _PangoAttrColor,color,12,2,43223)
#elif 1
CheckTypeSize(struct _PangoAttrColor,0, 12522, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoAttrColor on All\n");
CheckOffset(struct _PangoAttrColor,attr,0,1,43222)
#endif

#if defined __s390x__
CheckTypeSize(PangoAttrColor,24, 12523, 12, 3.1, NULL, 12522, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrColor,24, 12523, 11, 3.1, NULL, 12522, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrColor,20, 12523, 10, 3.1, NULL, 12522, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrColor,24, 12523, 9, 3.1, NULL, 12522, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrColor,20, 12523, 6, 3.1, NULL, 12522, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrColor,24, 12523, 3, 3.1, NULL, 12522, NULL)
#elif defined __i386__
CheckTypeSize(PangoAttrColor,20, 12523, 2, 3.1, NULL, 12522, NULL)
#else
Msg("Find size of PangoAttrColor (12523)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12522,NULL);\n",architecture,12523,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoAttrFontDesc,24, 12524, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrFontDesc,desc,8,12,43225)
CheckOffset(struct _PangoAttrFontDesc,desc,16,12,43225)
#elif defined __x86_64__
CheckTypeSize(struct _PangoAttrFontDesc,24, 12524, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrFontDesc,desc,8,11,43225)
CheckOffset(struct _PangoAttrFontDesc,desc,16,11,43225)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoAttrFontDesc,16, 12524, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrFontDesc,desc,4,10,43225)
CheckOffset(struct _PangoAttrFontDesc,desc,12,10,43225)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoAttrFontDesc,24, 12524, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrFontDesc,desc,8,9,43225)
CheckOffset(struct _PangoAttrFontDesc,desc,16,9,43225)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoAttrFontDesc,16, 12524, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrFontDesc,desc,4,6,43225)
CheckOffset(struct _PangoAttrFontDesc,desc,12,6,43225)
#elif defined __ia64__
CheckTypeSize(struct _PangoAttrFontDesc,24, 12524, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrFontDesc,desc,8,3,43225)
CheckOffset(struct _PangoAttrFontDesc,desc,16,3,43225)
#elif defined __i386__
CheckTypeSize(struct _PangoAttrFontDesc,16, 12524, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrFontDesc,desc,4,2,43225)
CheckOffset(struct _PangoAttrFontDesc,desc,12,2,43225)
#elif 1
CheckTypeSize(struct _PangoAttrFontDesc,0, 12524, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoAttrFontDesc on All\n");
CheckOffset(struct _PangoAttrFontDesc,attr,0,1,43224)
#endif

#if defined __s390x__
CheckTypeSize(PangoAttrFontDesc,24, 12525, 12, 3.1, NULL, 12524, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrFontDesc,24, 12525, 11, 3.1, NULL, 12524, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrFontDesc,16, 12525, 10, 3.1, NULL, 12524, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrFontDesc,24, 12525, 9, 3.1, NULL, 12524, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrFontDesc,16, 12525, 6, 3.1, NULL, 12524, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrFontDesc,24, 12525, 3, 3.1, NULL, 12524, NULL)
#elif defined __i386__
CheckTypeSize(PangoAttrFontDesc,16, 12525, 2, 3.1, NULL, 12524, NULL)
#else
Msg("Find size of PangoAttrFontDesc (12525)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12524,NULL);\n",architecture,12525,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoAttrFloat,24, 12526, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrFloat,value,8,12,43227)
CheckOffset(struct _PangoAttrFloat,value,16,12,43227)
#elif defined __x86_64__
CheckTypeSize(struct _PangoAttrFloat,24, 12526, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrFloat,value,8,11,43227)
CheckOffset(struct _PangoAttrFloat,value,16,11,43227)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoAttrFloat,24, 12526, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrFloat,value,8,10,43227)
CheckOffset(struct _PangoAttrFloat,value,16,10,43227)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoAttrFloat,24, 12526, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrFloat,value,8,9,43227)
CheckOffset(struct _PangoAttrFloat,value,16,9,43227)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoAttrFloat,24, 12526, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrFloat,value,8,6,43227)
CheckOffset(struct _PangoAttrFloat,value,16,6,43227)
#elif defined __ia64__
CheckTypeSize(struct _PangoAttrFloat,24, 12526, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrFloat,value,8,3,43227)
CheckOffset(struct _PangoAttrFloat,value,16,3,43227)
#elif defined __i386__
CheckTypeSize(struct _PangoAttrFloat,20, 12526, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrFloat,value,8,2,43227)
CheckOffset(struct _PangoAttrFloat,value,12,2,43227)
#elif 1
CheckTypeSize(struct _PangoAttrFloat,0, 12526, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoAttrFloat on All\n");
CheckOffset(struct _PangoAttrFloat,attr,0,1,43226)
#endif

#if defined __s390x__
CheckTypeSize(PangoAttrFloat,24, 12527, 12, 3.1, NULL, 12526, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrFloat,24, 12527, 11, 3.1, NULL, 12526, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrFloat,24, 12527, 10, 3.1, NULL, 12526, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrFloat,24, 12527, 9, 3.1, NULL, 12526, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrFloat,24, 12527, 6, 3.1, NULL, 12526, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrFloat,24, 12527, 3, 3.1, NULL, 12526, NULL)
#elif defined __i386__
CheckTypeSize(PangoAttrFloat,20, 12527, 2, 3.1, NULL, 12526, NULL)
#else
Msg("Find size of PangoAttrFloat (12527)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12526,NULL);\n",architecture,12527,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoRendererClass,248, 12528, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRendererClass,draw_glyphs,8,12,43234)
CheckOffset(struct _PangoRendererClass,draw_glyphs,136,12,43234)
CheckMemberSize(struct _PangoRendererClass,draw_rectangle,8,12,43241)
CheckOffset(struct _PangoRendererClass,draw_rectangle,144,12,43241)
CheckMemberSize(struct _PangoRendererClass,draw_error_underline,8,12,43247)
CheckOffset(struct _PangoRendererClass,draw_error_underline,152,12,43247)
CheckMemberSize(struct _PangoRendererClass,draw_shape,8,12,43252)
CheckOffset(struct _PangoRendererClass,draw_shape,160,12,43252)
CheckMemberSize(struct _PangoRendererClass,draw_trapezoid,8,12,43261)
CheckOffset(struct _PangoRendererClass,draw_trapezoid,168,12,43261)
CheckMemberSize(struct _PangoRendererClass,draw_glyph,8,12,43267)
CheckOffset(struct _PangoRendererClass,draw_glyph,176,12,43267)
CheckMemberSize(struct _PangoRendererClass,part_changed,8,12,43270)
CheckOffset(struct _PangoRendererClass,part_changed,184,12,43270)
CheckMemberSize(struct _PangoRendererClass,begin,8,12,43272)
CheckOffset(struct _PangoRendererClass,begin,192,12,43272)
CheckMemberSize(struct _PangoRendererClass,end,8,12,43273)
CheckOffset(struct _PangoRendererClass,end,200,12,43273)
CheckMemberSize(struct _PangoRendererClass,prepare_run,8,12,43276)
CheckOffset(struct _PangoRendererClass,prepare_run,208,12,43276)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved2,8,12,43278)
CheckOffset(struct _PangoRendererClass,_pango_reserved2,224,12,43278)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved3,8,12,43279)
CheckOffset(struct _PangoRendererClass,_pango_reserved3,232,12,43279)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved4,8,12,43280)
CheckOffset(struct _PangoRendererClass,_pango_reserved4,240,12,43280)
#elif defined __x86_64__
CheckTypeSize(struct _PangoRendererClass,248, 12528, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRendererClass,draw_glyphs,8,11,43234)
CheckOffset(struct _PangoRendererClass,draw_glyphs,136,11,43234)
CheckMemberSize(struct _PangoRendererClass,draw_rectangle,8,11,43241)
CheckOffset(struct _PangoRendererClass,draw_rectangle,144,11,43241)
CheckMemberSize(struct _PangoRendererClass,draw_error_underline,8,11,43247)
CheckOffset(struct _PangoRendererClass,draw_error_underline,152,11,43247)
CheckMemberSize(struct _PangoRendererClass,draw_shape,8,11,43252)
CheckOffset(struct _PangoRendererClass,draw_shape,160,11,43252)
CheckMemberSize(struct _PangoRendererClass,draw_trapezoid,8,11,43261)
CheckOffset(struct _PangoRendererClass,draw_trapezoid,168,11,43261)
CheckMemberSize(struct _PangoRendererClass,draw_glyph,8,11,43267)
CheckOffset(struct _PangoRendererClass,draw_glyph,176,11,43267)
CheckMemberSize(struct _PangoRendererClass,part_changed,8,11,43270)
CheckOffset(struct _PangoRendererClass,part_changed,184,11,43270)
CheckMemberSize(struct _PangoRendererClass,begin,8,11,43272)
CheckOffset(struct _PangoRendererClass,begin,192,11,43272)
CheckMemberSize(struct _PangoRendererClass,end,8,11,43273)
CheckOffset(struct _PangoRendererClass,end,200,11,43273)
CheckMemberSize(struct _PangoRendererClass,prepare_run,8,11,43276)
CheckOffset(struct _PangoRendererClass,prepare_run,208,11,43276)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved2,8,11,43278)
CheckOffset(struct _PangoRendererClass,_pango_reserved2,224,11,43278)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved3,8,11,43279)
CheckOffset(struct _PangoRendererClass,_pango_reserved3,232,11,43279)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved4,8,11,43280)
CheckOffset(struct _PangoRendererClass,_pango_reserved4,240,11,43280)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoRendererClass,124, 12528, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRendererClass,draw_glyphs,4,10,43234)
CheckOffset(struct _PangoRendererClass,draw_glyphs,68,10,43234)
CheckMemberSize(struct _PangoRendererClass,draw_rectangle,4,10,43241)
CheckOffset(struct _PangoRendererClass,draw_rectangle,72,10,43241)
CheckMemberSize(struct _PangoRendererClass,draw_error_underline,4,10,43247)
CheckOffset(struct _PangoRendererClass,draw_error_underline,76,10,43247)
CheckMemberSize(struct _PangoRendererClass,draw_shape,4,10,43252)
CheckOffset(struct _PangoRendererClass,draw_shape,80,10,43252)
CheckMemberSize(struct _PangoRendererClass,draw_trapezoid,4,10,43261)
CheckOffset(struct _PangoRendererClass,draw_trapezoid,84,10,43261)
CheckMemberSize(struct _PangoRendererClass,draw_glyph,4,10,43267)
CheckOffset(struct _PangoRendererClass,draw_glyph,88,10,43267)
CheckMemberSize(struct _PangoRendererClass,part_changed,4,10,43270)
CheckOffset(struct _PangoRendererClass,part_changed,92,10,43270)
CheckMemberSize(struct _PangoRendererClass,begin,4,10,43272)
CheckOffset(struct _PangoRendererClass,begin,96,10,43272)
CheckMemberSize(struct _PangoRendererClass,end,4,10,43273)
CheckOffset(struct _PangoRendererClass,end,100,10,43273)
CheckMemberSize(struct _PangoRendererClass,prepare_run,4,10,43276)
CheckOffset(struct _PangoRendererClass,prepare_run,104,10,43276)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved2,4,10,43278)
CheckOffset(struct _PangoRendererClass,_pango_reserved2,112,10,43278)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved3,4,10,43279)
CheckOffset(struct _PangoRendererClass,_pango_reserved3,116,10,43279)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved4,4,10,43280)
CheckOffset(struct _PangoRendererClass,_pango_reserved4,120,10,43280)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoRendererClass,248, 12528, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRendererClass,draw_glyphs,8,9,43234)
CheckOffset(struct _PangoRendererClass,draw_glyphs,136,9,43234)
CheckMemberSize(struct _PangoRendererClass,draw_rectangle,8,9,43241)
CheckOffset(struct _PangoRendererClass,draw_rectangle,144,9,43241)
CheckMemberSize(struct _PangoRendererClass,draw_error_underline,8,9,43247)
CheckOffset(struct _PangoRendererClass,draw_error_underline,152,9,43247)
CheckMemberSize(struct _PangoRendererClass,draw_shape,8,9,43252)
CheckOffset(struct _PangoRendererClass,draw_shape,160,9,43252)
CheckMemberSize(struct _PangoRendererClass,draw_trapezoid,8,9,43261)
CheckOffset(struct _PangoRendererClass,draw_trapezoid,168,9,43261)
CheckMemberSize(struct _PangoRendererClass,draw_glyph,8,9,43267)
CheckOffset(struct _PangoRendererClass,draw_glyph,176,9,43267)
CheckMemberSize(struct _PangoRendererClass,part_changed,8,9,43270)
CheckOffset(struct _PangoRendererClass,part_changed,184,9,43270)
CheckMemberSize(struct _PangoRendererClass,begin,8,9,43272)
CheckOffset(struct _PangoRendererClass,begin,192,9,43272)
CheckMemberSize(struct _PangoRendererClass,end,8,9,43273)
CheckOffset(struct _PangoRendererClass,end,200,9,43273)
CheckMemberSize(struct _PangoRendererClass,prepare_run,8,9,43276)
CheckOffset(struct _PangoRendererClass,prepare_run,208,9,43276)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved2,8,9,43278)
CheckOffset(struct _PangoRendererClass,_pango_reserved2,224,9,43278)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved3,8,9,43279)
CheckOffset(struct _PangoRendererClass,_pango_reserved3,232,9,43279)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved4,8,9,43280)
CheckOffset(struct _PangoRendererClass,_pango_reserved4,240,9,43280)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoRendererClass,124, 12528, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRendererClass,draw_glyphs,4,6,43234)
CheckOffset(struct _PangoRendererClass,draw_glyphs,68,6,43234)
CheckMemberSize(struct _PangoRendererClass,draw_rectangle,4,6,43241)
CheckOffset(struct _PangoRendererClass,draw_rectangle,72,6,43241)
CheckMemberSize(struct _PangoRendererClass,draw_error_underline,4,6,43247)
CheckOffset(struct _PangoRendererClass,draw_error_underline,76,6,43247)
CheckMemberSize(struct _PangoRendererClass,draw_shape,4,6,43252)
CheckOffset(struct _PangoRendererClass,draw_shape,80,6,43252)
CheckMemberSize(struct _PangoRendererClass,draw_trapezoid,4,6,43261)
CheckOffset(struct _PangoRendererClass,draw_trapezoid,84,6,43261)
CheckMemberSize(struct _PangoRendererClass,draw_glyph,4,6,43267)
CheckOffset(struct _PangoRendererClass,draw_glyph,88,6,43267)
CheckMemberSize(struct _PangoRendererClass,part_changed,4,6,43270)
CheckOffset(struct _PangoRendererClass,part_changed,92,6,43270)
CheckMemberSize(struct _PangoRendererClass,begin,4,6,43272)
CheckOffset(struct _PangoRendererClass,begin,96,6,43272)
CheckMemberSize(struct _PangoRendererClass,end,4,6,43273)
CheckOffset(struct _PangoRendererClass,end,100,6,43273)
CheckMemberSize(struct _PangoRendererClass,prepare_run,4,6,43276)
CheckOffset(struct _PangoRendererClass,prepare_run,104,6,43276)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved2,4,6,43278)
CheckOffset(struct _PangoRendererClass,_pango_reserved2,112,6,43278)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved3,4,6,43279)
CheckOffset(struct _PangoRendererClass,_pango_reserved3,116,6,43279)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved4,4,6,43280)
CheckOffset(struct _PangoRendererClass,_pango_reserved4,120,6,43280)
#elif defined __ia64__
CheckTypeSize(struct _PangoRendererClass,248, 12528, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRendererClass,draw_glyphs,8,3,43234)
CheckOffset(struct _PangoRendererClass,draw_glyphs,136,3,43234)
CheckMemberSize(struct _PangoRendererClass,draw_rectangle,8,3,43241)
CheckOffset(struct _PangoRendererClass,draw_rectangle,144,3,43241)
CheckMemberSize(struct _PangoRendererClass,draw_error_underline,8,3,43247)
CheckOffset(struct _PangoRendererClass,draw_error_underline,152,3,43247)
CheckMemberSize(struct _PangoRendererClass,draw_shape,8,3,43252)
CheckOffset(struct _PangoRendererClass,draw_shape,160,3,43252)
CheckMemberSize(struct _PangoRendererClass,draw_trapezoid,8,3,43261)
CheckOffset(struct _PangoRendererClass,draw_trapezoid,168,3,43261)
CheckMemberSize(struct _PangoRendererClass,draw_glyph,8,3,43267)
CheckOffset(struct _PangoRendererClass,draw_glyph,176,3,43267)
CheckMemberSize(struct _PangoRendererClass,part_changed,8,3,43270)
CheckOffset(struct _PangoRendererClass,part_changed,184,3,43270)
CheckMemberSize(struct _PangoRendererClass,begin,8,3,43272)
CheckOffset(struct _PangoRendererClass,begin,192,3,43272)
CheckMemberSize(struct _PangoRendererClass,end,8,3,43273)
CheckOffset(struct _PangoRendererClass,end,200,3,43273)
CheckMemberSize(struct _PangoRendererClass,prepare_run,8,3,43276)
CheckOffset(struct _PangoRendererClass,prepare_run,208,3,43276)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved2,8,3,43278)
CheckOffset(struct _PangoRendererClass,_pango_reserved2,224,3,43278)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved3,8,3,43279)
CheckOffset(struct _PangoRendererClass,_pango_reserved3,232,3,43279)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved4,8,3,43280)
CheckOffset(struct _PangoRendererClass,_pango_reserved4,240,3,43280)
#elif defined __i386__
CheckTypeSize(struct _PangoRendererClass,124, 12528, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoRendererClass,draw_glyphs,4,2,43234)
CheckOffset(struct _PangoRendererClass,draw_glyphs,68,2,43234)
CheckMemberSize(struct _PangoRendererClass,draw_rectangle,4,2,43241)
CheckOffset(struct _PangoRendererClass,draw_rectangle,72,2,43241)
CheckMemberSize(struct _PangoRendererClass,draw_error_underline,4,2,43247)
CheckOffset(struct _PangoRendererClass,draw_error_underline,76,2,43247)
CheckMemberSize(struct _PangoRendererClass,draw_shape,4,2,43252)
CheckOffset(struct _PangoRendererClass,draw_shape,80,2,43252)
CheckMemberSize(struct _PangoRendererClass,draw_trapezoid,4,2,43261)
CheckOffset(struct _PangoRendererClass,draw_trapezoid,84,2,43261)
CheckMemberSize(struct _PangoRendererClass,draw_glyph,4,2,43267)
CheckOffset(struct _PangoRendererClass,draw_glyph,88,2,43267)
CheckMemberSize(struct _PangoRendererClass,part_changed,4,2,43270)
CheckOffset(struct _PangoRendererClass,part_changed,92,2,43270)
CheckMemberSize(struct _PangoRendererClass,begin,4,2,43272)
CheckOffset(struct _PangoRendererClass,begin,96,2,43272)
CheckMemberSize(struct _PangoRendererClass,end,4,2,43273)
CheckOffset(struct _PangoRendererClass,end,100,2,43273)
CheckMemberSize(struct _PangoRendererClass,prepare_run,4,2,43276)
CheckOffset(struct _PangoRendererClass,prepare_run,104,2,43276)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved2,4,2,43278)
CheckOffset(struct _PangoRendererClass,_pango_reserved2,112,2,43278)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved3,4,2,43279)
CheckOffset(struct _PangoRendererClass,_pango_reserved3,116,2,43279)
CheckMemberSize(struct _PangoRendererClass,_pango_reserved4,4,2,43280)
CheckOffset(struct _PangoRendererClass,_pango_reserved4,120,2,43280)
#elif 1
CheckTypeSize(struct _PangoRendererClass,0, 12528, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoRendererClass on All\n");
CheckOffset(struct _PangoRendererClass,parent_class,0,1,43228)
#endif

#if defined __s390x__
CheckTypeSize(PangoRendererClass,248, 12539, 12, 3.1, NULL, 12528, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoRendererClass,248, 12539, 11, 3.1, NULL, 12528, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoRendererClass,124, 12539, 10, 3.1, NULL, 12528, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoRendererClass,248, 12539, 9, 3.1, NULL, 12528, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoRendererClass,124, 12539, 6, 3.1, NULL, 12528, NULL)
#elif defined __ia64__
CheckTypeSize(PangoRendererClass,248, 12539, 3, 3.1, NULL, 12528, NULL)
#elif defined __i386__
CheckTypeSize(PangoRendererClass,124, 12539, 2, 3.1, NULL, 12528, NULL)
#else
Msg("Find size of PangoRendererClass (12539)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12528,NULL);\n",architecture,12539,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoAttrLanguage,24, 12540, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrLanguage,value,8,12,43282)
CheckOffset(struct _PangoAttrLanguage,value,16,12,43282)
#elif defined __x86_64__
CheckTypeSize(struct _PangoAttrLanguage,24, 12540, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrLanguage,value,8,11,43282)
CheckOffset(struct _PangoAttrLanguage,value,16,11,43282)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoAttrLanguage,16, 12540, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrLanguage,value,4,10,43282)
CheckOffset(struct _PangoAttrLanguage,value,12,10,43282)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoAttrLanguage,24, 12540, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrLanguage,value,8,9,43282)
CheckOffset(struct _PangoAttrLanguage,value,16,9,43282)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoAttrLanguage,16, 12540, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrLanguage,value,4,6,43282)
CheckOffset(struct _PangoAttrLanguage,value,12,6,43282)
#elif defined __ia64__
CheckTypeSize(struct _PangoAttrLanguage,24, 12540, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrLanguage,value,8,3,43282)
CheckOffset(struct _PangoAttrLanguage,value,16,3,43282)
#elif defined __i386__
CheckTypeSize(struct _PangoAttrLanguage,16, 12540, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrLanguage,value,4,2,43282)
CheckOffset(struct _PangoAttrLanguage,value,12,2,43282)
#elif 1
CheckTypeSize(struct _PangoAttrLanguage,0, 12540, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoAttrLanguage on All\n");
CheckOffset(struct _PangoAttrLanguage,attr,0,1,43281)
#endif

#if defined __s390x__
CheckTypeSize(PangoAttrLanguage,24, 12541, 12, 3.1, NULL, 12540, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrLanguage,24, 12541, 11, 3.1, NULL, 12540, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrLanguage,16, 12541, 10, 3.1, NULL, 12540, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrLanguage,24, 12541, 9, 3.1, NULL, 12540, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrLanguage,16, 12541, 6, 3.1, NULL, 12540, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrLanguage,24, 12541, 3, 3.1, NULL, 12540, NULL)
#elif defined __i386__
CheckTypeSize(PangoAttrLanguage,16, 12541, 2, 3.1, NULL, 12540, NULL)
#else
Msg("Find size of PangoAttrLanguage (12541)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12540,NULL);\n",architecture,12541,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoAttrInt,24, 12542, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrInt,value,4,12,43284)
CheckOffset(struct _PangoAttrInt,value,16,12,43284)
#elif defined __x86_64__
CheckTypeSize(struct _PangoAttrInt,24, 12542, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrInt,value,4,11,43284)
CheckOffset(struct _PangoAttrInt,value,16,11,43284)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoAttrInt,16, 12542, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrInt,value,4,10,43284)
CheckOffset(struct _PangoAttrInt,value,12,10,43284)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoAttrInt,24, 12542, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrInt,value,4,9,43284)
CheckOffset(struct _PangoAttrInt,value,16,9,43284)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoAttrInt,16, 12542, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrInt,value,4,6,43284)
CheckOffset(struct _PangoAttrInt,value,12,6,43284)
#elif defined __ia64__
CheckTypeSize(struct _PangoAttrInt,24, 12542, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrInt,value,4,3,43284)
CheckOffset(struct _PangoAttrInt,value,16,3,43284)
#elif defined __i386__
CheckTypeSize(struct _PangoAttrInt,16, 12542, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrInt,value,4,2,43284)
CheckOffset(struct _PangoAttrInt,value,12,2,43284)
#elif 1
CheckTypeSize(struct _PangoAttrInt,0, 12542, 1, , NULL, 0, NULL)
Msg("Missing member data for _PangoAttrInt on All\n");
CheckOffset(struct _PangoAttrInt,attr,0,1,43283)
#endif

#if defined __s390x__
CheckTypeSize(PangoAttrInt,24, 12543, 12, 3.1, NULL, 12542, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrInt,24, 12543, 11, 3.1, NULL, 12542, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrInt,16, 12543, 10, 3.1, NULL, 12542, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrInt,24, 12543, 9, 3.1, NULL, 12542, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrInt,16, 12543, 6, 3.1, NULL, 12542, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrInt,24, 12543, 3, 3.1, NULL, 12542, NULL)
#elif defined __i386__
CheckTypeSize(PangoAttrInt,16, 12543, 2, 3.1, NULL, 12542, NULL)
#else
Msg("Find size of PangoAttrInt (12543)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12542,NULL);\n",architecture,12543,0);
#endif

#if defined __s390x__
CheckTypeSize(struct _PangoAttrSize,24, 12544, 12, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrSize,size,4,12,43286)
CheckOffset(struct _PangoAttrSize,size,16,12,43286)
#elif defined __x86_64__
CheckTypeSize(struct _PangoAttrSize,24, 12544, 11, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrSize,size,4,11,43286)
CheckOffset(struct _PangoAttrSize,size,16,11,43286)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(struct _PangoAttrSize,20, 12544, 10, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrSize,size,4,10,43286)
CheckOffset(struct _PangoAttrSize,size,12,10,43286)
#elif defined __powerpc64__
CheckTypeSize(struct _PangoAttrSize,24, 12544, 9, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrSize,size,4,9,43286)
CheckOffset(struct _PangoAttrSize,size,16,9,43286)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(struct _PangoAttrSize,20, 12544, 6, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrSize,size,4,6,43286)
CheckOffset(struct _PangoAttrSize,size,12,6,43286)
#elif defined __ia64__
CheckTypeSize(struct _PangoAttrSize,24, 12544, 3, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrSize,size,4,3,43286)
CheckOffset(struct _PangoAttrSize,size,16,3,43286)
#elif defined __i386__
CheckTypeSize(struct _PangoAttrSize,20, 12544, 2, , NULL, 0, NULL)
CheckMemberSize(struct _PangoAttrSize,size,4,2,43286)
CheckOffset(struct _PangoAttrSize,size,12,2,43286)
#elif 1
CheckTypeSize(struct _PangoAttrSize,0, 12544, 1, , NULL, 0, NULL)
CheckBitField(struct _PangoAttrSize,absolute,1,1,43287)
#endif

#if defined __s390x__
CheckTypeSize(PangoAttrSize,24, 12545, 12, 3.1, NULL, 12544, NULL)
#elif defined __x86_64__
CheckTypeSize(PangoAttrSize,24, 12545, 11, 3.1, NULL, 12544, NULL)
#elif defined __s390__ && !defined __s390x__
CheckTypeSize(PangoAttrSize,20, 12545, 10, 3.1, NULL, 12544, NULL)
#elif defined __powerpc64__
CheckTypeSize(PangoAttrSize,24, 12545, 9, 3.1, NULL, 12544, NULL)
#elif defined __powerpc__ && !defined __powerpc64__
CheckTypeSize(PangoAttrSize,20, 12545, 6, 3.1, NULL, 12544, NULL)
#elif defined __ia64__
CheckTypeSize(PangoAttrSize,24, 12545, 3, 3.1, NULL, 12544, NULL)
#elif defined __i386__
CheckTypeSize(PangoAttrSize,20, 12545, 2, 3.1, NULL, 12544, NULL)
#else
Msg("Find size of PangoAttrSize (12545)\n");
Msg("REPLACE INTO ArchType VALUES (%d,%d,%d,'""3.1""',NULL,12544,NULL);\n",architecture,12545,0);
#endif

#if defined __s390x__
/* S390X */
typedef gboolean (*PangoAttrFilterFunc_db)(PangoAttribute *, gpointer);
CheckFunctionTypedef(PangoAttrFilterFunc,PangoAttrFilterFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef gboolean (*PangoAttrFilterFunc_db)(PangoAttribute *, gpointer);
CheckFunctionTypedef(PangoAttrFilterFunc,PangoAttrFilterFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef gboolean (*PangoAttrFilterFunc_db)(PangoAttribute *, gpointer);
CheckFunctionTypedef(PangoAttrFilterFunc,PangoAttrFilterFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef gboolean (*PangoAttrFilterFunc_db)(PangoAttribute *, gpointer);
CheckFunctionTypedef(PangoAttrFilterFunc,PangoAttrFilterFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef gboolean (*PangoAttrFilterFunc_db)(PangoAttribute *, gpointer);
CheckFunctionTypedef(PangoAttrFilterFunc,PangoAttrFilterFunc_db);
#elif defined __ia64__
/* IA64 */
typedef gboolean (*PangoAttrFilterFunc_db)(PangoAttribute *, gpointer);
CheckFunctionTypedef(PangoAttrFilterFunc,PangoAttrFilterFunc_db);
#elif defined __i386__
/* IA32 */
typedef gboolean (*PangoAttrFilterFunc_db)(PangoAttribute *, gpointer);
CheckFunctionTypedef(PangoAttrFilterFunc,PangoAttrFilterFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef gboolean (*PangoFontsetForeachFunc_db)(PangoFontset *, PangoFont *, gpointer);
CheckFunctionTypedef(PangoFontsetForeachFunc,PangoFontsetForeachFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef gboolean (*PangoFontsetForeachFunc_db)(PangoFontset *, PangoFont *, gpointer);
CheckFunctionTypedef(PangoFontsetForeachFunc,PangoFontsetForeachFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef gboolean (*PangoFontsetForeachFunc_db)(PangoFontset *, PangoFont *, gpointer);
CheckFunctionTypedef(PangoFontsetForeachFunc,PangoFontsetForeachFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef gboolean (*PangoFontsetForeachFunc_db)(PangoFontset *, PangoFont *, gpointer);
CheckFunctionTypedef(PangoFontsetForeachFunc,PangoFontsetForeachFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef gboolean (*PangoFontsetForeachFunc_db)(PangoFontset *, PangoFont *, gpointer);
CheckFunctionTypedef(PangoFontsetForeachFunc,PangoFontsetForeachFunc_db);
#elif defined __ia64__
/* IA64 */
typedef gboolean (*PangoFontsetForeachFunc_db)(PangoFontset *, PangoFont *, gpointer);
CheckFunctionTypedef(PangoFontsetForeachFunc,PangoFontsetForeachFunc_db);
#elif defined __i386__
/* IA32 */
typedef gboolean (*PangoFontsetForeachFunc_db)(PangoFontset *, PangoFont *, gpointer);
CheckFunctionTypedef(PangoFontsetForeachFunc,PangoFontsetForeachFunc_db);
#endif

#if defined __s390x__
/* S390X */
typedef gpointer (*PangoAttrDataCopyFunc_db)(gconstpointer);
CheckFunctionTypedef(PangoAttrDataCopyFunc,PangoAttrDataCopyFunc_db);
#elif defined __x86_64__
/* x86-64 */
typedef gpointer (*PangoAttrDataCopyFunc_db)(gconstpointer);
CheckFunctionTypedef(PangoAttrDataCopyFunc,PangoAttrDataCopyFunc_db);
#elif defined __s390__ && !defined __s390x__
/* S390 */
typedef gpointer (*PangoAttrDataCopyFunc_db)(gconstpointer);
CheckFunctionTypedef(PangoAttrDataCopyFunc,PangoAttrDataCopyFunc_db);
#elif defined __powerpc64__
/* PPC64 */
typedef gpointer (*PangoAttrDataCopyFunc_db)(gconstpointer);
CheckFunctionTypedef(PangoAttrDataCopyFunc,PangoAttrDataCopyFunc_db);
#elif defined __powerpc__ && !defined __powerpc64__
/* PPC32 */
typedef gpointer (*PangoAttrDataCopyFunc_db)(gconstpointer);
CheckFunctionTypedef(PangoAttrDataCopyFunc,PangoAttrDataCopyFunc_db);
#elif defined __ia64__
/* IA64 */
typedef gpointer (*PangoAttrDataCopyFunc_db)(gconstpointer);
CheckFunctionTypedef(PangoAttrDataCopyFunc,PangoAttrDataCopyFunc_db);
#elif defined __i386__
/* IA32 */
typedef gpointer (*PangoAttrDataCopyFunc_db)(gconstpointer);
CheckFunctionTypedef(PangoAttrDataCopyFunc,PangoAttrDataCopyFunc_db);
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
