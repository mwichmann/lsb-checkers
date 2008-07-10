/*
 * Test of cairo/cairo-features.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
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
#ifdef TET_TEST
Msg("Checking data structures in cairo/cairo-features.h\n");
#endif

printf("Checking data structures in cairo/cairo-features.h\n");
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
	CompareConstant(CAIRO_VERSION_MINOR,0,15615,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CAIRO_VERSION_MINOR\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CAIRO_VERSION_MICRO
	CompareConstant(CAIRO_VERSION_MICRO,2,15616,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CAIRO_VERSION_MICRO\n");
cnt++;
#endif

#endif

#if _LSB_DEFAULT_ARCH
#ifdef CAIRO_VERSION_STRING
	CompareConstant(CAIRO_VERSION_STRING,"1.0.2",15617,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CAIRO_VERSION_STRING\n");
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
#ifdef CAIRO_HAS_GLITZ_SURFACE
	CompareConstant(CAIRO_HAS_GLITZ_SURFACE,1,15622,architecture,4.0,NULL)
#else
Msg( "Error: Constant not found: CAIRO_HAS_GLITZ_SURFACE\n");
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
printf("%d tests passed out of %d tests in cairo/cairo-features.h\n\n",pcnt,cnt);
return cnt;
#endif

}
