// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_window_set_icon_list
static void(*funcptr) (GtkWindow * , GList * ) = 0;

extern int __lsb_check_params;
void gtk_window_set_icon_list (GtkWindow * arg0 , GList * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_window_set_icon_list()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_window_set_icon_list");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_window_set_icon_list. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_window_set_icon_list() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_window_set_icon_list - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_window_set_icon_list - arg0 (window)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gtk_window_set_icon_list - arg1 (list)");
		}
		validate_NULL_TYPETYPE(  arg1, "gtk_window_set_icon_list - arg1 (list)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

