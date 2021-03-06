// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#undef gdk_event_get_event_sequence
static GdkEventSequence *(*funcptr) (const GdkEvent * ) = 0;

extern int __lsb_check_params;
GdkEventSequence * gdk_event_get_event_sequence (const GdkEvent * arg0 )
{
	int reset_flag = __lsb_check_params;
	GdkEventSequence * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_event_get_event_sequence()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_event_get_event_sequence");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_event_get_event_sequence. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_event_get_event_sequence() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "gdk_event_get_event_sequence - arg0 (event)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_event_get_event_sequence - arg0 (event)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

