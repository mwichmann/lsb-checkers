// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_region_get_rectangles
static void(*funcptr) (const GdkRegion * , GdkRectangle * * , gint * ) = 0;

extern int __lsb_check_params;
void gdk_region_get_rectangles (const GdkRegion * arg0 , GdkRectangle * * arg1 , gint * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_region_get_rectangles()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_region_get_rectangles");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_region_get_rectangles. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_region_get_rectangles() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gdk_region_get_rectangles - arg0 (region)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_region_get_rectangles - arg0 (region)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_region_get_rectangles - arg1 (rectangles)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_region_get_rectangles - arg1 (rectangles)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gdk_region_get_rectangles - arg2 (n_rectangles)");
		}
		validate_NULL_TYPETYPE(  arg2, "gdk_region_get_rectangles - arg2 (n_rectangles)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

