// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#include <glib-2.0/glib.h>
#undef gtk_action_group_set_sensitive
static void(*funcptr) (GtkActionGroup * , gboolean ) = 0;

extern int __lsb_check_params;
void gtk_action_group_set_sensitive (GtkActionGroup * arg0 , gboolean arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_action_group_set_sensitive()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_action_group_set_sensitive");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_action_group_set_sensitive. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_action_group_set_sensitive() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_action_group_set_sensitive - arg0 (action_group)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_action_group_set_sensitive - arg0 (action_group)");
		validate_NULL_TYPETYPE(  arg1, "gtk_action_group_set_sensitive - arg1 (sensitive)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

