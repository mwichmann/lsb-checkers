// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_matrix_rotate
static void(*funcptr) (cairo_matrix_t * , double ) = 0;

extern int __lsb_check_params;
void cairo_matrix_rotate (cairo_matrix_t * arg0 , double arg1 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_matrix_rotate()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_matrix_rotate");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_matrix_rotate. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_matrix_rotate() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_matrix_rotate - arg0 (matrix)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_matrix_rotate - arg0 (matrix)");
		validate_NULL_TYPETYPE(  arg1, "cairo_matrix_rotate - arg1 (radians)");
	}
	funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
}

