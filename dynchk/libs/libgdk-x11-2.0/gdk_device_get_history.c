// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_device_get_history
static gboolean(*funcptr) (GdkDevice * , GdkWindow * , guint32 , guint32 , GdkTimeCoord * * * , gint * ) = 0;

extern int __lsb_check_params;
gboolean gdk_device_get_history (GdkDevice * arg0 , GdkWindow * arg1 , guint32 arg2 , guint32 arg3 , GdkTimeCoord * * * arg4 , gint * arg5 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_device_get_history()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_device_get_history");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_device_get_history. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_device_get_history() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_device_get_history - arg0 (device)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_device_get_history - arg0 (device)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_device_get_history - arg1 (window)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_device_get_history - arg1 (window)");
		validate_NULL_TYPETYPE(  arg2, "gdk_device_get_history - arg2 (start)");
		validate_NULL_TYPETYPE(  arg3, "gdk_device_get_history - arg3 (stop)");
		if( arg4 ) {
		validate_RWaddress( arg4, "gdk_device_get_history - arg4 (events)");
		}
		validate_NULL_TYPETYPE(  arg4, "gdk_device_get_history - arg4 (events)");
		if( arg5 ) {
		validate_RWaddress( arg5, "gdk_device_get_history - arg5 (n_events)");
		}
		validate_NULL_TYPETYPE(  arg5, "gdk_device_get_history - arg5 (n_events)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
	return ret_value;
}

