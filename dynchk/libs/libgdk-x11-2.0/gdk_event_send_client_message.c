// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_event_send_client_message
static gboolean(*funcptr) (GdkEvent * , GdkNativeWindow ) = 0;

extern int __lsb_check_params;
gboolean gdk_event_send_client_message (GdkEvent * arg0 , GdkNativeWindow arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_event_send_client_message()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_event_send_client_message");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_event_send_client_message. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_event_send_client_message() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_event_send_client_message - arg0 (event)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_event_send_client_message - arg0 (event)");
		validate_NULL_TYPETYPE(  arg1, "gdk_event_send_client_message - arg1 (winid)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

