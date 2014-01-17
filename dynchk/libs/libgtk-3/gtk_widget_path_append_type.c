// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib-object.h>
#undef gtk_widget_path_append_type
static gint(*funcptr) (GtkWidgetPath * , GType ) = 0;

extern int __lsb_check_params;
gint gtk_widget_path_append_type (GtkWidgetPath * arg0 , GType arg1 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_widget_path_append_type()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_widget_path_append_type");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_widget_path_append_type. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_widget_path_append_type() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_widget_path_append_type - arg0 (path)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_widget_path_append_type - arg0 (path)");
		validate_NULL_TYPETYPE(  arg1, "gtk_widget_path_append_type - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

