// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-2.0/gdk/gdk.h>
#undef gdk_event_set_screen
static void(*funcptr) (GdkEvent * , GdkScreen * ) = 0;

extern int __lsb_check_params;
void gdk_event_set_screen (GdkEvent * arg0 , GdkScreen * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for gdk_event_set_screen()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_event_set_screen");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_event_set_screen. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_event_set_screen() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_event_set_screen - arg0 (event)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_event_set_screen - arg0 (event)");
		if( arg1 ) {
		validate_RWaddress( arg1, "gdk_event_set_screen - arg1 (screen)");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_event_set_screen - arg1 (screen)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

