// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_action_group_get_accel_group
static GtkAccelGroup *(*funcptr) (GtkActionGroup * ) = 0;

extern int __lsb_check_params;
GtkAccelGroup * gtk_action_group_get_accel_group (GtkActionGroup * arg0 )
{
	int reset_flag = __lsb_check_params;
	GtkAccelGroup * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_action_group_get_accel_group()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_action_group_get_accel_group");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_action_group_get_accel_group. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_action_group_get_accel_group() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_action_group_get_accel_group - arg0 (action_group)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_action_group_get_accel_group - arg0 (action_group)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

