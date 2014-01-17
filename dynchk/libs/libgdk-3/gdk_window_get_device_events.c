// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#undef gdk_window_get_device_events
static GdkEventMask(*funcptr) (GdkWindow * , GdkDevice * ) = 0;

extern int __lsb_check_params;
GdkEventMask gdk_window_get_device_events (GdkWindow * arg0 , GdkDevice * arg1 )
{
	int reset_flag = __lsb_check_params;
	GdkEventMask ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_window_get_device_events()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_window_get_device_events");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_window_get_device_events. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_window_get_device_events() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_window_get_device_events - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_window_get_device_events - arg0 (window)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_window_get_device_events - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_window_get_device_events - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

