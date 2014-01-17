// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_device_get_position
static void(*funcptr) (GdkDevice * , GdkScreen * * , gint * , gint * ) = 0;

extern int __lsb_check_params;
void gdk_device_get_position (GdkDevice * arg0 , GdkScreen * * arg1 , gint * arg2 , gint * arg3 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_device_get_position()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_device_get_position");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_device_get_position. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_device_get_position() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_device_get_position - arg0 (device)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_device_get_position - arg0 (device)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_device_get_position - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_device_get_position - arg1");
		if( arg2 ) {
		validate_RWaddress( arg2, "gdk_device_get_position - arg2");
		}
		validate_NULL_TYPETYPE(  arg2, "gdk_device_get_position - arg2");
		if( arg3 ) {
		validate_RWaddress( arg3, "gdk_device_get_position - arg3");
		}
		validate_NULL_TYPETYPE(  arg3, "gdk_device_get_position - arg3");
	}
	funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
}

