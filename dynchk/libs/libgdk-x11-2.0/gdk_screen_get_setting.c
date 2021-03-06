// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#include <glib-2.0/glib-object.h>
#undef gdk_screen_get_setting
static gboolean(*funcptr) (GdkScreen * , const gchar * , GValue * ) = 0;

extern int __lsb_check_params;
gboolean gdk_screen_get_setting (GdkScreen * arg0 , const gchar * arg1 , GValue * arg2 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_screen_get_setting()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_screen_get_setting");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_screen_get_setting. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_screen_get_setting() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_screen_get_setting - arg0 (screen)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_screen_get_setting - arg0 (screen)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gdk_screen_get_setting - arg1 (name)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_screen_get_setting - arg1 (name)");
		if( arg2 ) {
		validate_RWaddress( arg2, "gdk_screen_get_setting - arg2 (value)");
		}
		validate_NULL_TYPETYPE(  arg2, "gdk_screen_get_setting - arg2 (value)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

