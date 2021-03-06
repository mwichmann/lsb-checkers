// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_window_clear
static void(*funcptr) (GdkWindow * ) = 0;

extern int __lsb_check_params;
void gdk_window_clear (GdkWindow * arg0 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_window_clear()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_window_clear");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_window_clear. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_window_clear() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_window_clear - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_window_clear - arg0 (window)");
	}
	funcptr(arg0);
	__lsb_check_params = reset_flag;
}

