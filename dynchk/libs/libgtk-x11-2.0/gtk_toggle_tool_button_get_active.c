// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_toggle_tool_button_get_active
static gboolean(*funcptr) (GtkToggleToolButton * ) = 0;

extern int __lsb_check_params;
gboolean gtk_toggle_tool_button_get_active (GtkToggleToolButton * arg0 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_toggle_tool_button_get_active()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_toggle_tool_button_get_active");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_toggle_tool_button_get_active. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_toggle_tool_button_get_active() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_toggle_tool_button_get_active - arg0 (button)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_toggle_tool_button_get_active - arg0 (button)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

