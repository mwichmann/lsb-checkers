// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_set_source
static void(*funcptr) (cairo_t * , cairo_pattern_t * ) = 0;

extern int __lsb_check_params;
void cairo_set_source (cairo_t * arg0 , cairo_pattern_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_set_source()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_set_source");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_set_source. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_set_source() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_set_source - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_set_source - arg0 (cr)");
		if( arg1 ) {
		validate_RWaddress( arg1, "cairo_set_source - arg1 (source)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_set_source - arg1 (source)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

