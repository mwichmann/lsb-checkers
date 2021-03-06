// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_device_get_state
static void(*funcptr) (GdkDevice * , GdkWindow * , gdouble * , GdkModifierType * ) = 0;

extern int __lsb_check_params;
void gdk_device_get_state (GdkDevice * arg0 , GdkWindow * arg1 , gdouble * arg2 , GdkModifierType * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_device_get_state()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_device_get_state");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_device_get_state. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_device_get_state() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_device_get_state - arg0 (device)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_device_get_state - arg0 (device)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_device_get_state - arg1 (window)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_device_get_state - arg1 (window)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gdk_device_get_state - arg2 (axes)");
		}
		validate_NULL_TYPETYPE(  arg2, "gdk_device_get_state - arg2 (axes)");
		if( arg3 ) {
		validate_RWaddress( arg3, "gdk_device_get_state - arg3 (mask)");
		}
		validate_NULL_TYPETYPE(  arg3, "gdk_device_get_state - arg3 (mask)");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

