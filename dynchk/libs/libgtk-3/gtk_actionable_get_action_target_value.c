// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_actionable_get_action_target_value
static GVariant *(*funcptr) (GtkActionable * ) = 0;

extern int __lsb_check_params;
GVariant * gtk_actionable_get_action_target_value (GtkActionable * arg0 )
{
	int reset_flag = __lsb_check_params;
	GVariant * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_actionable_get_action_target_value()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_actionable_get_action_target_value");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_actionable_get_action_target_value. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_actionable_get_action_target_value() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_actionable_get_action_target_value - arg0 (actionable)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_actionable_get_action_target_value - arg0 (actionable)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

