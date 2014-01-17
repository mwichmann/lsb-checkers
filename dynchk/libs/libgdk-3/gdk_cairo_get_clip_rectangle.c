// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#include <gtk-3.0/gdk/gdk.h>
#undef gdk_cairo_get_clip_rectangle
static gboolean(*funcptr) (cairo_t * , GdkRectangle * ) = 0;

extern int __lsb_check_params;
gboolean gdk_cairo_get_clip_rectangle (cairo_t * arg0 , GdkRectangle * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_cairo_get_clip_rectangle()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_cairo_get_clip_rectangle");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_cairo_get_clip_rectangle. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_cairo_get_clip_rectangle() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_cairo_get_clip_rectangle - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_cairo_get_clip_rectangle - arg0 (cr)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_cairo_get_clip_rectangle - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_cairo_get_clip_rectangle - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

