/*
 * Test of cairo/cairo-xlib-xrender.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "cairo/cairo-xlib-xrender.h"



#ifdef TET_TEST
void cairo_cairo_xlib_xrender_h()
{
#else
int cairo_cairo_xlib_xrender_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in cairo/cairo-xlib-xrender.h\n");
#endif

printf("Checking data structures in cairo/cairo-xlib-xrender.h\n");
extern cairo_surface_t * cairo_xlib_surface_create_with_xrender_format_db(Display *, Drawable, Screen *, XRenderPictFormat *, int, int);
CheckInterfacedef(cairo_xlib_surface_create_with_xrender_format,cairo_xlib_surface_create_with_xrender_format_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in cairo/cairo-xlib-xrender.h\n\n",pcnt,cnt);
return cnt;
#endif

}
