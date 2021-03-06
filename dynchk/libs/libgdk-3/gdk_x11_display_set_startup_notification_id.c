// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#include <gtk-3.0/gdk/gdkx.h>
#undef gdk_x11_display_set_startup_notification_id
static void(*funcptr) (GdkDisplay * , const char * ) = 0;

extern int __lsb_check_params;
void gdk_x11_display_set_startup_notification_id (GdkDisplay * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_x11_display_set_startup_notification_id()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_x11_display_set_startup_notification_id");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_x11_display_set_startup_notification_id. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_x11_display_set_startup_notification_id() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_x11_display_set_startup_notification_id - arg0 (display)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_x11_display_set_startup_notification_id - arg0 (display)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gdk_x11_display_set_startup_notification_id - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_x11_display_set_startup_notification_id - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

