// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <gtk-2.0/gdk/gdkx.h>
#undef gdk_synthesize_window_state
static void(*funcptr) (GdkWindow * , GdkWindowState , GdkWindowState ) = 0;

extern int __lsb_check_params;
void gdk_synthesize_window_state (GdkWindow * arg0 , GdkWindowState arg1 , GdkWindowState arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_synthesize_window_state()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_synthesize_window_state");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_synthesize_window_state. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_synthesize_window_state() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_synthesize_window_state - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_synthesize_window_state - arg0 (window)");
		validate_NULL_TYPETYPE(  arg1, "gdk_synthesize_window_state - arg1 (unset_flags)");
		validate_NULL_TYPETYPE(  arg2, "gdk_synthesize_window_state - arg2 (set_flags)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

