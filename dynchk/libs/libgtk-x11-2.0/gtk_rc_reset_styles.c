// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gtk/gtk.h>
#undef gtk_rc_reset_styles
static void(*funcptr) (GtkSettings * ) = 0;

extern int __lsb_check_params;
void gtk_rc_reset_styles (GtkSettings * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_rc_reset_styles()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_rc_reset_styles");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_rc_reset_styles. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_rc_reset_styles() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_rc_reset_styles - arg0 (settings)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_rc_reset_styles - arg0 (settings)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
