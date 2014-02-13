// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gtk/gtk.h>
#undef gtk_spinner_stop
static void(*funcptr) (GtkSpinner * ) = 0;

extern int __lsb_check_params;
void gtk_spinner_stop (GtkSpinner * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gtk_spinner_stop()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gtk_spinner_stop");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gtk_spinner_stop. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gtk_spinner_stop() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gtk_spinner_stop - arg0 (spinner)");
		}
		validate_NULL_TYPETYPE(  arg0, "gtk_spinner_stop - arg0 (spinner)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}
