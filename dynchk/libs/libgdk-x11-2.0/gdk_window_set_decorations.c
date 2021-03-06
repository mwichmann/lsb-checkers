// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_window_set_decorations
static void(*funcptr) (GdkWindow * , GdkWMDecoration ) = 0;

extern int __lsb_check_params;
void gdk_window_set_decorations (GdkWindow * arg0 , GdkWMDecoration arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_window_set_decorations()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_window_set_decorations");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_window_set_decorations. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_window_set_decorations() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_window_set_decorations - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_window_set_decorations - arg0 (window)");
		validate_NULL_TYPETYPE(  arg1, "gdk_window_set_decorations - arg1 (decorations)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

