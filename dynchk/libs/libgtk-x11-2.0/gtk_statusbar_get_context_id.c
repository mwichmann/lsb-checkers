// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_statusbar_get_context_id
static guint(*funcptr) (GtkStatusbar * , const gchar * ) = 0;

extern int __lsb_check_params;
guint gtk_statusbar_get_context_id (GtkStatusbar * arg0 , const gchar * arg1 )
{
	int reset_flag = __lsb_check_params;
	guint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_statusbar_get_context_id()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_statusbar_get_context_id");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_statusbar_get_context_id. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_statusbar_get_context_id() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_statusbar_get_context_id - arg0 (statusbar)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_statusbar_get_context_id - arg0 (statusbar)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_statusbar_get_context_id - arg1 (context_description)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_statusbar_get_context_id - arg1 (context_description)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

