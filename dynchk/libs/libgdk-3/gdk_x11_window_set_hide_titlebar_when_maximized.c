// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#include <gtk-3.0/gdk/gdkx.h>
#undef gdk_x11_window_set_hide_titlebar_when_maximized
static void(*funcptr) (GdkWindow * , gboolean ) = 0;

extern int __lsb_check_params;
void gdk_x11_window_set_hide_titlebar_when_maximized (GdkWindow * arg0 , gboolean arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_x11_window_set_hide_titlebar_when_maximized()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_x11_window_set_hide_titlebar_when_maximized");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_x11_window_set_hide_titlebar_when_maximized. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_x11_window_set_hide_titlebar_when_maximized() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_x11_window_set_hide_titlebar_when_maximized - arg0 (window)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_x11_window_set_hide_titlebar_when_maximized - arg0 (window)");
		validate_NULL_TYPETYPE(  arg1, "gdk_x11_window_set_hide_titlebar_when_maximized - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

