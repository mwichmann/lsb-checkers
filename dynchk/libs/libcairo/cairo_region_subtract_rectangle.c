// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_region_subtract_rectangle
static cairo_status_t(*funcptr) (cairo_region_t * , const cairo_rectangle_int_t * ) = 0;

extern int __lsb_check_params;
cairo_status_t cairo_region_subtract_rectangle (cairo_region_t * arg0 , const cairo_rectangle_int_t * arg1 )
{
	int reset_flag = __lsb_check_params;
	cairo_status_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_region_subtract_rectangle()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_region_subtract_rectangle");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_region_subtract_rectangle. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_region_subtract_rectangle() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_region_subtract_rectangle - arg0 (dst)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_region_subtract_rectangle - arg0 (dst)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "cairo_region_subtract_rectangle - arg1 (rectangle)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_region_subtract_rectangle - arg1 (rectangle)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

