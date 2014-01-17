// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_theming_engine_get_screen
static GdkScreen *(*funcptr) (GtkThemingEngine * ) = 0;

extern int __lsb_check_params;
GdkScreen * gtk_theming_engine_get_screen (GtkThemingEngine * arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkScreen * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gtk_theming_engine_get_screen()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_theming_engine_get_screen");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_theming_engine_get_screen. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_theming_engine_get_screen() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_theming_engine_get_screen - arg0 (engine)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_theming_engine_get_screen - arg0 (engine)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

