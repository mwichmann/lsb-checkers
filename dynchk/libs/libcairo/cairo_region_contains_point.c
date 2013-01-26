// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_region_contains_point
static cairo_bool_t(*funcptr) (const cairo_region_t * , int , int ) = 0;

extern int __lsb_check_params;
cairo_bool_t cairo_region_contains_point (const cairo_region_t * arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	cairo_bool_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_region_contains_point()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_region_contains_point");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_region_contains_point. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_region_contains_point() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "cairo_region_contains_point - arg0 (region)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_region_contains_point - arg0 (region)");
		validate_NULL_TYPETYPE(  arg1, "cairo_region_contains_point - arg1 (x)");
		validate_NULL_TYPETYPE(  arg2, "cairo_region_contains_point - arg2 (y)");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

