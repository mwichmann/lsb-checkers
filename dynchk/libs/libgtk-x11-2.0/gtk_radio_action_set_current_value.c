// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_radio_action_set_current_value
static void(*funcptr) (GtkRadioAction * , gint ) = 0;

extern int __lsb_check_params;
void gtk_radio_action_set_current_value (GtkRadioAction * arg0 , gint arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_radio_action_set_current_value()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_radio_action_set_current_value");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_radio_action_set_current_value. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_radio_action_set_current_value() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_radio_action_set_current_value - arg0 (action)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_radio_action_set_current_value - arg0 (action)");
		validate_NULL_TYPETYPE(  arg1, "gtk_radio_action_set_current_value - arg1 (current_value)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}
