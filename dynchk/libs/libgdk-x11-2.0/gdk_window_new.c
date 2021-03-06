// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_window_new
static GdkWindow *(*funcptr) (GdkWindow * , GdkWindowAttr * , gint ) = 0;

extern int __lsb_check_params;
GdkWindow * gdk_window_new (GdkWindow * arg0 , GdkWindowAttr * arg1 , gint arg2 )
{
	int reset_flag = __lsb_check_params;
	GdkWindow * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_window_new()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_window_new");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_window_new. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_window_new() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_window_new - arg0 (parent)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_window_new - arg0 (parent)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_window_new - arg1 (attributes)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_window_new - arg1 (attributes)");
		validate_NULL_TYPETYPE(  arg2, "gdk_window_new - arg2 (attributes_mask)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

