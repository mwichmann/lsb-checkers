// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <glib-2.0/glib.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_visual_get_best_with_both
static GdkVisual *(*funcptr) (gint , GdkVisualType ) = 0;

extern int __lsb_check_params;
GdkVisual * gdk_visual_get_best_with_both (gint arg0 , GdkVisualType arg1 )
{
	int reset_flag = __lsb_check_params;
	GdkVisual * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_visual_get_best_with_both()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_visual_get_best_with_both");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_visual_get_best_with_both. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_visual_get_best_with_both() - validating");
		validate_NULL_TYPETYPE(  arg0, "gdk_visual_get_best_with_both - arg0 (depth)");
		validate_NULL_TYPETYPE(  arg1, "gdk_visual_get_best_with_both - arg1 (visual_type)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

