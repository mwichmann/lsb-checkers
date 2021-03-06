// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_window_set_wmclass
static void(*funcptr) (GtkWindow * , const gchar * , const gchar * ) = 0;

extern int __lsb_check_params;
void gtk_window_set_wmclass (GtkWindow * arg0 , const gchar * arg1 , const gchar * arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_window_set_wmclass()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_window_set_wmclass");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_window_set_wmclass. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_window_set_wmclass() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_window_set_wmclass - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_window_set_wmclass - arg0 (window)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gtk_window_set_wmclass - arg1 (wmclass_name)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_window_set_wmclass - arg1 (wmclass_name)");
		if( arg2 ) {
		validate_Rdaddress( arg2, "gtk_window_set_wmclass - arg2 (wmclass_class)");
		}
		validate_NULL_TYPETYPE(  arg2, "gtk_window_set_wmclass - arg2 (wmclass_class)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

