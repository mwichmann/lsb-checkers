// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_translate
static void(*funcptr) (cairo_t * , double , double ) = 0;

extern int __lsb_check_params;
void cairo_translate (cairo_t * arg0 , double arg1 , double arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_translate()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_translate");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_translate. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_translate() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_translate - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_translate - arg0 (cr)");
		validate_NULL_TYPETYPE(  arg1, "cairo_translate - arg1 (tx)");
		validate_NULL_TYPETYPE(  arg2, "cairo_translate - arg2 (ty)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

