// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#undef gdk_window_get_clip_region
static cairo_region_t *(*funcptr) (GdkWindow * ) = 0;

extern int __lsb_check_params;
cairo_region_t * gdk_window_get_clip_region (GdkWindow * arg0 )
{
	int reset_flag = __lsb_check_params;
	cairo_region_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_window_get_clip_region()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_window_get_clip_region");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_window_get_clip_region. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_window_get_clip_region() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_window_get_clip_region - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_window_get_clip_region - arg0 (window)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

