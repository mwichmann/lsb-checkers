/*
 * Test of X11/Xatom.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "X11/Xatom.h"



#ifdef TET_TEST
void X11_Xatom_h()
{
#else
int X11_Xatom_h()
{
#endif

int cnt=0;

int pcnt=0;
char *real_macro_value, *stripped_macro_value;
int macro_ndx, stripped_value_ndx;
real_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );
stripped_macro_value=(char*)malloc( (MAX_VALUE_LENGTH+1)*sizeof(char) );

#ifdef TET_TEST
Msg("Checking data structures in X11/Xatom.h\n");
#endif

printf("Checking data structures in X11/Xatom.h\n");
#if _LSB_DEFAULT_ARCH
/* No test for XA_PRIMARY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_SECONDARY */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_ARC */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_ATOM */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_BITMAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_CARDINAL */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_COLORMAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_CURSOR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_CUT_BUFFER0 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_CUT_BUFFER1 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_CUT_BUFFER2 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_CUT_BUFFER3 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_CUT_BUFFER4 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_CUT_BUFFER5 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_CUT_BUFFER6 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_CUT_BUFFER7 */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_DRAWABLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_FONT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_INTEGER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_PIXMAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_POINT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_RECTANGLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_RESOURCE_MANAGER */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_RGB_COLOR_MAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_RGB_BEST_MAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_RGB_BLUE_MAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_RGB_DEFAULT_MAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_RGB_GRAY_MAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_RGB_GREEN_MAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_RGB_RED_MAP */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_STRING */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_VISUALID */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_WINDOW */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_WM_COMMAND */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_WM_HINTS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_WM_CLIENT_MACHINE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_WM_ICON_NAME */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_WM_ICON_SIZE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_WM_NAME */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_WM_NORMAL_HINTS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_WM_SIZE_HINTS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_WM_ZOOM_HINTS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_MIN_SPACE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_NORM_SPACE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_MAX_SPACE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_END_SPACE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_SUPERSCRIPT_X */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_SUPERSCRIPT_Y */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_SUBSCRIPT_X */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_SUBSCRIPT_Y */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_UNDERLINE_POSITION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_UNDERLINE_THICKNESS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_STRIKEOUT_ASCENT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_STRIKEOUT_DESCENT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_ITALIC_ANGLE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_X_HEIGHT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_QUAD_WIDTH */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_WEIGHT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_POINT_SIZE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_RESOLUTION */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_COPYRIGHT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_NOTICE */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_FONT_NAME */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_FAMILY_NAME */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_FULL_NAME */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_CAP_HEIGHT */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_WM_CLASS */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_WM_TRANSIENT_FOR */
#endif

#if _LSB_DEFAULT_ARCH
/* No test for XA_LAST_PREDEFINED */
#endif

#if _LSB_DEFAULT_ARCH
#ifndef XATOM_H
Msg( "Error: Constant not found: XATOM_H\n");
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
printf("%d tests passed out of %d tests in X11/Xatom.h\n\n",pcnt,cnt);
return cnt;
#endif

}
