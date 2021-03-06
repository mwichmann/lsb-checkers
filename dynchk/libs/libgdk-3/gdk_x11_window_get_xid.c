// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#include <gtk-3.0/gdk/gdkx.h>
#undef gdk_x11_window_get_xid
static Window(*funcptr) (GdkWindow * ) = 0;

extern int __lsb_check_params;
Window gdk_x11_window_get_xid (GdkWindow * arg0 )
{
	int reset_flag = __lsb_check_params;
	Window ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_x11_window_get_xid()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_x11_window_get_xid");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_x11_window_get_xid. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_x11_window_get_xid() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_x11_window_get_xid - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_x11_window_get_xid - arg0 (window)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

