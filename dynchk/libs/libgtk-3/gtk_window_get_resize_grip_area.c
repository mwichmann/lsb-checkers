// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <gtk-3.0/gdk/gdk.h>
#undef gtk_window_get_resize_grip_area
static gboolean(*funcptr) (GtkWindow * , GdkRectangle * ) = 0;

extern int __lsb_check_params;
gboolean gtk_window_get_resize_grip_area (GtkWindow * arg0 , GdkRectangle * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_window_get_resize_grip_area()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_window_get_resize_grip_area");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_window_get_resize_grip_area. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_window_get_resize_grip_area() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_window_get_resize_grip_area - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_window_get_resize_grip_area - arg0 (window)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_window_get_resize_grip_area - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_window_get_resize_grip_area - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
