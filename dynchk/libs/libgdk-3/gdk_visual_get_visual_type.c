// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#undef gdk_visual_get_visual_type
static GdkVisualType(*funcptr) (GdkVisual * ) = 0;

extern int __lsb_check_params;
GdkVisualType gdk_visual_get_visual_type (GdkVisual * arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkVisualType ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_visual_get_visual_type()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_visual_get_visual_type");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_visual_get_visual_type. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_visual_get_visual_type() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_visual_get_visual_type - arg0 (visual)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_visual_get_visual_type - arg0 (visual)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

