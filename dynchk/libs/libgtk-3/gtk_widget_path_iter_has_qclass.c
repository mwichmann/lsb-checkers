// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_widget_path_iter_has_qclass
static gboolean(*funcptr) (const struct _GtkWidgetPath * , gint , GQuark ) = 0;

extern int __lsb_check_params;
gboolean gtk_widget_path_iter_has_qclass (const struct _GtkWidgetPath * arg0 , gint arg1 , GQuark arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_widget_path_iter_has_qclass()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_widget_path_iter_has_qclass");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_widget_path_iter_has_qclass. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_widget_path_iter_has_qclass() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gtk_widget_path_iter_has_qclass - arg0 (path)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_widget_path_iter_has_qclass - arg0 (path)");
		validate_NULL_TYPETYPE(  arg1, "gtk_widget_path_iter_has_qclass - arg1");
		validate_NULL_TYPETYPE(  arg2, "gtk_widget_path_iter_has_qclass - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

