// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_pixbuf_get_from_window
static GdkPixbuf *(*funcptr) (GdkWindow * , gint , gint , gint , gint ) = 0;

extern int __lsb_check_params;
GdkPixbuf * gdk_pixbuf_get_from_window (GdkWindow * arg0 , gint arg1 , gint arg2 , gint arg3 , gint arg4 )
{
	int reset_flag = __lsb_check_params;
	GdkPixbuf * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_pixbuf_get_from_window()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_pixbuf_get_from_window");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_pixbuf_get_from_window. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_pixbuf_get_from_window() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_pixbuf_get_from_window - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_pixbuf_get_from_window - arg0 (window)");
		validate_NULL_TYPETYPE(  arg1, "gdk_pixbuf_get_from_window - arg1");
		validate_NULL_TYPETYPE(  arg2, "gdk_pixbuf_get_from_window - arg2");
		validate_NULL_TYPETYPE(  arg3, "gdk_pixbuf_get_from_window - arg3");
		validate_NULL_TYPETYPE(  arg4, "gdk_pixbuf_get_from_window - arg4");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3, arg4);
	__lsb_check_params = reset_flag;
	return ret_value;
}

