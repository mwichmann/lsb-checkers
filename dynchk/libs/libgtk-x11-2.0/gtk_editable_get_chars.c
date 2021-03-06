// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_editable_get_chars
static gchar *(*funcptr) (GtkEditable * , gint , gint ) = 0;

extern int __lsb_check_params;
gchar * gtk_editable_get_chars (GtkEditable * arg0 , gint arg1 , gint arg2 )
{
	int reset_flag = __lsb_check_params;
	gchar * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_editable_get_chars()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_editable_get_chars");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_editable_get_chars. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_editable_get_chars() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_editable_get_chars - arg0 (editable)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_editable_get_chars - arg0 (editable)");
		validate_NULL_TYPETYPE(  arg1, "gtk_editable_get_chars - arg1 (start_pos)");
		validate_NULL_TYPETYPE(  arg2, "gtk_editable_get_chars - arg2 (end_pos)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

