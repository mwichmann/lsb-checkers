// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#include <gtk-3.0/gtk/gtk.h>
#include <gtk-3.0/gdk/gdk.h>
#undef gtk_cairo_transform_to_window
static void(*funcptr) (cairo_t * , GtkWidget * , GdkWindow * ) = 0;

extern int __lsb_check_params;
void gtk_cairo_transform_to_window (cairo_t * arg0 , GtkWidget * arg1 , GdkWindow * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_cairo_transform_to_window()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_cairo_transform_to_window");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_cairo_transform_to_window. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_cairo_transform_to_window() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_cairo_transform_to_window - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_cairo_transform_to_window - arg0 (cr)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_cairo_transform_to_window - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_cairo_transform_to_window - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_cairo_transform_to_window - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_cairo_transform_to_window - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}
