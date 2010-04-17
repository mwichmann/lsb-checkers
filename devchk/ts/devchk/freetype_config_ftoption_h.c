/*
 * Test of freetype/config/ftoption.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 41
#include <ft2build.h>
#include FT_FREETYPE_H

#include "freetype/config/ftoption.h"



#ifdef TET_TEST
void freetype_config_ftoption_h()
{
#else
int freetype_config_ftoption_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in freetype/config/ftoption.h\n");
#endif

printf("Checking data structures in freetype/config/ftoption.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef FT_MAX_MODULES
	CompareConstant(FT_MAX_MODULES,32,10606,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_MAX_MODULES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef FT_RENDER_POOL_SIZE
	CompareConstant(FT_RENDER_POOL_SIZE,16384L,10607,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: FT_RENDER_POOL_SIZE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef T1_MAX_CHARSTRINGS_OPERANDS
	CompareConstant(T1_MAX_CHARSTRINGS_OPERANDS,256,10608,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: T1_MAX_CHARSTRINGS_OPERANDS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef T1_MAX_DICT_DEPTH
	CompareConstant(T1_MAX_DICT_DEPTH,5,10609,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: T1_MAX_DICT_DEPTH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef T1_MAX_SUBRS_CALLS
	CompareConstant(T1_MAX_SUBRS_CALLS,16,10610,architecture,3.2,NULL)
#else
Msg( "Error: Constant not found: T1_MAX_SUBRS_CALLS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef FT_CONFIG_OPTION_ADOBE_GLYPH_LIST
Msg( "Error: Constant not found: FT_CONFIG_OPTION_ADOBE_GLYPH_LIST\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef FT_CONFIG_OPTION_GUESSING_EMBEDDED_RFORK
Msg( "Error: Constant not found: FT_CONFIG_OPTION_GUESSING_EMBEDDED_RFORK\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef FT_CONFIG_OPTION_MAC_FONTS
Msg( "Error: Constant not found: FT_CONFIG_OPTION_MAC_FONTS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef FT_CONFIG_OPTION_POSTSCRIPT_NAMES
Msg( "Error: Constant not found: FT_CONFIG_OPTION_POSTSCRIPT_NAMES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef FT_CONFIG_OPTION_USE_LZW
Msg( "Error: Constant not found: FT_CONFIG_OPTION_USE_LZW\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef FT_CONFIG_OPTION_USE_ZLIB
Msg( "Error: Constant not found: FT_CONFIG_OPTION_USE_ZLIB\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef TT_CONFIG_CMAP_FORMAT_0
Msg( "Error: Constant not found: TT_CONFIG_CMAP_FORMAT_0\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef TT_CONFIG_CMAP_FORMAT_10
Msg( "Error: Constant not found: TT_CONFIG_CMAP_FORMAT_10\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef TT_CONFIG_CMAP_FORMAT_12
Msg( "Error: Constant not found: TT_CONFIG_CMAP_FORMAT_12\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef TT_CONFIG_CMAP_FORMAT_2
Msg( "Error: Constant not found: TT_CONFIG_CMAP_FORMAT_2\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef TT_CONFIG_CMAP_FORMAT_4
Msg( "Error: Constant not found: TT_CONFIG_CMAP_FORMAT_4\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef TT_CONFIG_CMAP_FORMAT_6
Msg( "Error: Constant not found: TT_CONFIG_CMAP_FORMAT_6\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef TT_CONFIG_CMAP_FORMAT_8
Msg( "Error: Constant not found: TT_CONFIG_CMAP_FORMAT_8\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef TT_CONFIG_OPTION_EMBEDDED_BITMAPS
Msg( "Error: Constant not found: TT_CONFIG_OPTION_EMBEDDED_BITMAPS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef TT_CONFIG_OPTION_GX_VAR_SUPPORT
Msg( "Error: Constant not found: TT_CONFIG_OPTION_GX_VAR_SUPPORT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef TT_CONFIG_OPTION_INTERPRETER_SWITCH
Msg( "Error: Constant not found: TT_CONFIG_OPTION_INTERPRETER_SWITCH\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef TT_CONFIG_OPTION_POSTSCRIPT_NAMES
Msg( "Error: Constant not found: TT_CONFIG_OPTION_POSTSCRIPT_NAMES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef TT_CONFIG_OPTION_SFNT_NAMES
Msg( "Error: Constant not found: TT_CONFIG_OPTION_SFNT_NAMES\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifndef TT_CONFIG_OPTION_UNPATENTED_HINTING
Msg( "Error: Constant not found: TT_CONFIG_OPTION_UNPATENTED_HINTING\n");
cnt++;
#endif

#endif

#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in freetype/config/ftoption.h\n\n",pcnt,cnt);
return cnt;
#endif

}
