/*
 * Test of cairo/cairo-features.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#ifndef LSBCC_MODE
/* version defines have moved to cairo-version.h except for
 * CAIRO_VERSION_STRING which is in cairo.h now.  Include
 * the latter since it includes the former.
 * This is the only place this is an issue: normally people
 * wouldn't just include cairo-features.h directly.
 */
#ifndef CAIRO_VERSION_MAJOR
#include <cairo/cairo.h>
#endif
#endif
#include "cairo/cairo-features.h"



#ifdef TET_TEST
void cairo_cairo_features_h()
{
#else
int cairo_cairo_features_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

Msg("Checking data structures in cairo/cairo-features.h\n");
#if _LSB_DEFAULT_ARCH
#ifdef CAIRO_VERSION_MAJOR
	CompareConstant(CAIRO_VERSION_MAJOR,1,15614,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CAIRO_VERSION_MAJOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CAIRO_VERSION_MINOR
	CompareConstant(CAIRO_VERSION_MINOR,2,15615,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: CAIRO_VERSION_MINOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CAIRO_VERSION_MICRO
	CompareConstant(CAIRO_VERSION_MICRO,4,15616,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: CAIRO_VERSION_MICRO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CAIRO_VERSION_STRING
	CompareStringConstant(CAIRO_VERSION_STRING,"1.2.4",15617,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: CAIRO_VERSION_STRING\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CAIRO_HAS_SVG_SURFACE
	CompareConstant(CAIRO_HAS_SVG_SURFACE,1,15618,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: CAIRO_HAS_SVG_SURFACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CAIRO_HAS_PDF_SURFACE
	CompareConstant(CAIRO_HAS_PDF_SURFACE,1,15619,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CAIRO_HAS_PDF_SURFACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CAIRO_HAS_PS_SURFACE
	CompareConstant(CAIRO_HAS_PS_SURFACE,1,15620,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CAIRO_HAS_PS_SURFACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CAIRO_HAS_FT_FONT
	CompareConstant(CAIRO_HAS_FT_FONT,1,15621,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CAIRO_HAS_FT_FONT\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CAIRO_HAS_PNG_FUNCTIONS
	CompareConstant(CAIRO_HAS_PNG_FUNCTIONS,1,15623,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CAIRO_HAS_PNG_FUNCTIONS\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CAIRO_HAS_XLIB_XRENDER_SURFACE
	CompareConstant(CAIRO_HAS_XLIB_XRENDER_SURFACE,1,15624,architecture,4.1,NULL)
#else
Msg( "Error: Constant not found: CAIRO_HAS_XLIB_XRENDER_SURFACE\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CAIRO_HAS_XLIB_SURFACE
	CompareConstant(CAIRO_HAS_XLIB_SURFACE,1,15625,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CAIRO_HAS_XLIB_SURFACE\n");
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
Msg("%d tests passed out of %d tests in cairo/cairo-features.h\n\n",pcnt,cnt);
return cnt;
#endif

}
