// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#include <cairo/cairo-script.h>
#undef cairo_script_set_mode
static void(*funcptr) (cairo_device_t * , cairo_script_mode_t ) = 0;

extern int __lsb_check_params;
void cairo_script_set_mode (cairo_device_t * arg0 , cairo_script_mode_t arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_script_set_mode()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_script_set_mode");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_script_set_mode. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_script_set_mode() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_script_set_mode - arg0 (script)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_script_set_mode - arg0 (script)");
		validate_NULL_TYPETYPE(  arg1, "cairo_script_set_mode - arg1 (mode)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

