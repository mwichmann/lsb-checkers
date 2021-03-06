// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_activatable_get_use_action_appearance
static gboolean(*funcptr) (GtkActivatable * ) = 0;

extern int __lsb_check_params;
gboolean gtk_activatable_get_use_action_appearance (GtkActivatable * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_activatable_get_use_action_appearance()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_activatable_get_use_action_appearance");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_activatable_get_use_action_appearance. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_activatable_get_use_action_appearance() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_activatable_get_use_action_appearance - arg0 (activatable)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_activatable_get_use_action_appearance - arg0 (activatable)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

