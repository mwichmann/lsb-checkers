// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#include <cairo/cairo.h>
#undef gdk_window_create_similar_surface
static cairo_surface_t *(*funcptr) (GdkWindow * , cairo_content_t , int , int ) = 0;

extern int __lsb_check_params;
cairo_surface_t * gdk_window_create_similar_surface (GdkWindow * arg0 , cairo_content_t arg1 , int arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	cairo_surface_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_window_create_similar_surface()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_window_create_similar_surface");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_window_create_similar_surface. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_window_create_similar_surface() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_window_create_similar_surface - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_window_create_similar_surface - arg0 (window)");
		validate_NULL_TYPETYPE(  arg1, "gdk_window_create_similar_surface - arg1");
		validate_NULL_TYPETYPE(  arg2, "gdk_window_create_similar_surface - arg2");
		validate_NULL_TYPETYPE(  arg3, "gdk_window_create_similar_surface - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

