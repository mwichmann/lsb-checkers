// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_widget_path_get_object_type
static GType(*funcptr) (const GtkWidgetPath * ) = 0;

extern int __lsb_check_params;
GType gtk_widget_path_get_object_type (const GtkWidgetPath * arg0 )
{
	int reset_flag = __lsb_check_params;
	GType ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_widget_path_get_object_type()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_widget_path_get_object_type");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_widget_path_get_object_type. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_widget_path_get_object_type() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gtk_widget_path_get_object_type - arg0 (path)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_widget_path_get_object_type - arg0 (path)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

