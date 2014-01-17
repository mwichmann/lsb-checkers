// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#include <cairo/cairo.h>
#undef gdk_window_set_background_pattern
static void(*funcptr) (GdkWindow * , cairo_pattern_t * ) = 0;

extern int __lsb_check_params;
void gdk_window_set_background_pattern (GdkWindow * arg0 , cairo_pattern_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_window_set_background_pattern()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_window_set_background_pattern");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_window_set_background_pattern. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_window_set_background_pattern() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_window_set_background_pattern - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_window_set_background_pattern - arg0 (window)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_window_set_background_pattern - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_window_set_background_pattern - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

