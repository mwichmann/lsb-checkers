// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <gtk-3.0/gdk/gdk.h>
#undef gdk_display_manager_open_display
static GdkDisplay *(*funcptr) (GdkDisplayManager * , const char * ) = 0;

extern int __lsb_check_params;
GdkDisplay * gdk_display_manager_open_display (GdkDisplayManager * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	GdkDisplay * ret_value  ;
	__lsb_output(4, "Invoking wrapper for gdk_display_manager_open_display()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gdk_display_manager_open_display");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load gdk_display_manager_open_display. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "gdk_display_manager_open_display() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "gdk_display_manager_open_display - arg0 (manager)");
		}
		validate_NULL_TYPETYPE(  arg0, "gdk_display_manager_open_display - arg0 (manager)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "gdk_display_manager_open_display - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "gdk_display_manager_open_display - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

