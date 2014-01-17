// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#include <glib-2.0/glib.h>
#undef gdk_event_get_button
static gboolean(*funcptr) (const GdkEvent * , guint * ) = 0;

extern int __lsb_check_params;
gboolean gdk_event_get_button (const GdkEvent * arg0 , guint * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_event_get_button()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_event_get_button");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_event_get_button. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_event_get_button() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gdk_event_get_button - arg0 (event)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_event_get_button - arg0 (event)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_event_get_button - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_event_get_button - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

