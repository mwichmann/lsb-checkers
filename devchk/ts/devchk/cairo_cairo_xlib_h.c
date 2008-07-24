/*
 * Test of cairo/cairo-xlib.h
 */
#include "hdrchk.h"
#include <stdio.h>
#include <sys/types.h>
#define _LSB_DEFAULT_ARCH 1
#define __LSB_VERSION__ 40
#include "cairo/cairo-xlib.h"



#ifdef TET_TEST
void cairo_cairo_xlib_h()
{
#else
int cairo_cairo_xlib_h()
{
#endif

int cnt=0;

int pcnt=0;
#ifdef TET_TEST
Msg("Checking data structures in cairo/cairo-xlib.h\n");
#endif

printf("Checking data structures in cairo/cairo-xlib.h\n");
extern cairo_surface_t * cairo_xlib_surface_create_db(Display *, Drawable, Visual *, int, int);
CheckInterfacedef(cairo_xlib_surface_create,cairo_xlib_surface_create_db);
extern cairo_surface_t * cairo_xlib_surface_create_for_bitmap_db(Display *, Pixmap, Screen *, int, int);
CheckInterfacedef(cairo_xlib_surface_create_for_bitmap,cairo_xlib_surface_create_for_bitmap_db);
extern void cairo_xlib_surface_set_size_db(cairo_surface_t *, int, int);
CheckInterfacedef(cairo_xlib_surface_set_size,cairo_xlib_surface_set_size_db);
extern void cairo_xlib_surface_set_drawable_db(cairo_surface_t *, Drawable, int, int);
CheckInterfacedef(cairo_xlib_surface_set_drawable,cairo_xlib_surface_set_drawable_db);
#ifdef TET_TEST
if (pcnt == cnt )
	tet_result(TET_PASS);
else
	tet_result(TET_FAIL);
return;
#else
printf("%d tests passed out of %d tests in cairo/cairo-xlib.h\n\n",pcnt,cnt);
return cnt;
#endif

}
