// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#include <gtk-3.0/gdk/gdkx.h>
#undef gdk_x11_display_error_trap_pop
static gint(*funcptr) (GdkDisplay * ) = 0;

extern int __lsb_check_params;
gint gdk_x11_display_error_trap_pop (GdkDisplay * arg0 )
{
	int reset_flag = __lsb_check_params;
	gint ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_x11_display_error_trap_pop()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_x11_display_error_trap_pop");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_x11_display_error_trap_pop. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_x11_display_error_trap_pop() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_x11_display_error_trap_pop - arg0 (display)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_x11_display_error_trap_pop - arg0 (display)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

