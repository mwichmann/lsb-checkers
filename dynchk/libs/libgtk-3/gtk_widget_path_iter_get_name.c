// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_widget_path_iter_get_name
static const char *(*funcptr) (const GtkWidgetPath * , gint ) = 0;

extern int __lsb_check_params;
const char * gtk_widget_path_iter_get_name (const GtkWidgetPath * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	const char * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_widget_path_iter_get_name()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_widget_path_iter_get_name");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_widget_path_iter_get_name. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_widget_path_iter_get_name() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gtk_widget_path_iter_get_name - arg0 (path)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_widget_path_iter_get_name - arg0 (path)");
		validate_NULL_TYPETYPE(  arg1, "gtk_widget_path_iter_get_name - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

