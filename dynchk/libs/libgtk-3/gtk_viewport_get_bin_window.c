// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_viewport_get_bin_window
static GdkWindow *(*funcptr) (GtkViewport * ) = 0;

extern int __lsb_check_params;
GdkWindow * gtk_viewport_get_bin_window (GtkViewport * arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkWindow * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_viewport_get_bin_window()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_viewport_get_bin_window");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_viewport_get_bin_window. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_viewport_get_bin_window() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_viewport_get_bin_window - arg0 (viewport)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_viewport_get_bin_window - arg0 (viewport)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

