// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#undef gdk_event_set_source_device
static void(*funcptr) (GdkEvent * , GdkDevice * ) = 0;

extern int __lsb_check_params;
void gdk_event_set_source_device (GdkEvent * arg0 , GdkDevice * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_event_set_source_device()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_event_set_source_device");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_event_set_source_device. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_event_set_source_device() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_event_set_source_device - arg0 (event)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_event_set_source_device - arg0 (event)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_event_set_source_device - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_event_set_source_device - arg1");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

