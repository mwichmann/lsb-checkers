// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#undef gdk_window_set_source_events
static void(*funcptr) (GdkWindow * , GdkInputSource , GdkEventMask ) = 0;

extern int __lsb_check_params;
void gdk_window_set_source_events (GdkWindow * arg0 , GdkInputSource arg1 , GdkEventMask arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_window_set_source_events()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_window_set_source_events");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_window_set_source_events. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_window_set_source_events() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_window_set_source_events - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_window_set_source_events - arg0 (window)");
		validate_NULL_TYPETYPE(  arg1, "gdk_window_set_source_events - arg1");
		validate_NULL_TYPETYPE(  arg2, "gdk_window_set_source_events - arg2");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

