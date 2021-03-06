// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_display_put_event
static void(*funcptr) (GdkDisplay * , const GdkEvent * ) = 0;

extern int __lsb_check_params;
void gdk_display_put_event (GdkDisplay * arg0 , const GdkEvent * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_display_put_event()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_display_put_event");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_display_put_event. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_display_put_event() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_display_put_event - arg0 (display)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_display_put_event - arg0 (display)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gdk_display_put_event - arg1 (event)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_display_put_event - arg1 (event)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

