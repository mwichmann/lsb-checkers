// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_button_get_event_window
static GdkWindow *(*funcptr) (GtkButton * ) = 0;

extern int __lsb_check_params;
GdkWindow * gtk_button_get_event_window (GtkButton * arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkWindow * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_button_get_event_window()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_button_get_event_window");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_button_get_event_window. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_button_get_event_window() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_button_get_event_window - arg0 (button)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_button_get_event_window - arg0 (button)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
