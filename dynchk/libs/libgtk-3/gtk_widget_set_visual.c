// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <gtk-3.0/gdk/gdk.h>
#undef gtk_widget_set_visual
static void(*funcptr) (GtkWidget * , GdkVisual * ) = 0;

extern int __lsb_check_params;
void gtk_widget_set_visual (GtkWidget * arg0 , GdkVisual * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_widget_set_visual()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_widget_set_visual");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_widget_set_visual. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_widget_set_visual() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_widget_set_visual - arg0 (widget)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_widget_set_visual - arg0 (widget)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_widget_set_visual - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_widget_set_visual - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
