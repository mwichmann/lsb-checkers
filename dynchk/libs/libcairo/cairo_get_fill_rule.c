// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_get_fill_rule
static cairo_fill_rule_t(*funcptr) (cairo_t * ) = 0;

extern int __lsb_check_params;
cairo_fill_rule_t cairo_get_fill_rule (cairo_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	cairo_fill_rule_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_get_fill_rule()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_get_fill_rule");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_get_fill_rule. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_get_fill_rule() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_get_fill_rule - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_get_fill_rule - arg0 (cr)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}
