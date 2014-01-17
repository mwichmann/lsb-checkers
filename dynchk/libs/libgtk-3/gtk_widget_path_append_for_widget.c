// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_widget_path_append_for_widget
static gint(*funcptr) (GtkWidgetPath * , GtkWidget * ) = 0;

extern int __lsb_check_params;
gint gtk_widget_path_append_for_widget (GtkWidgetPath * arg0 , GtkWidget * arg1 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_widget_path_append_for_widget()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_widget_path_append_for_widget");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_widget_path_append_for_widget. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_widget_path_append_for_widget() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_widget_path_append_for_widget - arg0 (path)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_widget_path_append_for_widget - arg0 (path)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_widget_path_append_for_widget - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_widget_path_append_for_widget - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

