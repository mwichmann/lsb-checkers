// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <gtk-2.0/gdk/gdk.h>
#undef gtk_window_set_geometry_hints
static void(*funcptr) (GtkWindow * , GtkWidget * , GdkGeometry * , GdkWindowHints ) = 0;

extern int __lsb_check_params;
void gtk_window_set_geometry_hints (GtkWindow * arg0 , GtkWidget * arg1 , GdkGeometry * arg2 , GdkWindowHints arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_window_set_geometry_hints()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_window_set_geometry_hints");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_window_set_geometry_hints. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_window_set_geometry_hints() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_window_set_geometry_hints - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_window_set_geometry_hints - arg0 (window)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_window_set_geometry_hints - arg1 (geometry_widget)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_window_set_geometry_hints - arg1 (geometry_widget)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gtk_window_set_geometry_hints - arg2 (geometry)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_window_set_geometry_hints - arg2 (geometry)");
		validate_NULL_TYPETYPE(  arg3, "gtk_window_set_geometry_hints - arg3 (geom_mask)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

