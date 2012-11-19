// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <xcb/xcb.h>
#undef xcb_wait_for_event
static xcb_generic_event_t *(*funcptr) (xcb_connection_t * ) = 0;

extern int __lsb_check_params;
xcb_generic_event_t * xcb_wait_for_event (xcb_connection_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	xcb_generic_event_t * ret_value  ;
	__lsb_output(4, "Invoking wrapper for xcb_wait_for_event()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "xcb_wait_for_event");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load xcb_wait_for_event. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "xcb_wait_for_event() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "xcb_wait_for_event - arg0 (c)");
		}
		validate_NULL_TYPETYPE(  arg0, "xcb_wait_for_event - arg0 (c)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

