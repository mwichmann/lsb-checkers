// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_window_get_geometry
static void(*funcptr) (GdkWindow * , gint * , gint * , gint * , gint * , gint * ) = 0;

extern int __lsb_check_params;
void gdk_window_get_geometry (GdkWindow * arg0 , gint * arg1 , gint * arg2 , gint * arg3 , gint * arg4 , gint * arg5 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_window_get_geometry()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_window_get_geometry");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_window_get_geometry. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_window_get_geometry() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_window_get_geometry - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_window_get_geometry - arg0 (window)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_window_get_geometry - arg1 (x)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_window_get_geometry - arg1 (x)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gdk_window_get_geometry - arg2 (y)");
		}
		validate_NULL_TYPETYPE(  arg2, "gdk_window_get_geometry - arg2 (y)");
		if( arg3 ) {
		validate_RWaddress( arg3, "gdk_window_get_geometry - arg3 (width)");
		}
		validate_NULL_TYPETYPE(  arg3, "gdk_window_get_geometry - arg3 (width)");
		if( arg4 ) {
		validate_RWaddress( arg4, "gdk_window_get_geometry - arg4 (height)");
		}
		validate_NULL_TYPETYPE(  arg4, "gdk_window_get_geometry - arg4 (height)");
		if( arg5 ) {
		validate_RWaddress( arg5, "gdk_window_get_geometry - arg5 (depth)");
		}
		validate_NULL_TYPETYPE(  arg5, "gdk_window_get_geometry - arg5 (depth)");
	}
	funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
	__lsb_check_params = reset_flag;
}

