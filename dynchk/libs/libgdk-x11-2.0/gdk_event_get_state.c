// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_event_get_state
static gboolean(*funcptr) (const GdkEvent * , GdkModifierType * ) = 0;

extern int __lsb_check_params;
gboolean gdk_event_get_state (const GdkEvent * arg0 , GdkModifierType * arg1 )
{
	int reset_flag = __lsb_check_params;
	gboolean ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_event_get_state()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_event_get_state");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_event_get_state. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_event_get_state() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gdk_event_get_state - arg0 (event)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_event_get_state - arg0 (event)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_event_get_state - arg1 (state)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_event_get_state - arg1 (state)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

