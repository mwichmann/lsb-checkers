// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_font_options_hash
static long unsigned int(*funcptr) (const cairo_font_options_t * ) = 0;

extern int __lsb_check_params;
long unsigned int cairo_font_options_hash (const cairo_font_options_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	long unsigned int ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_font_options_hash()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_font_options_hash");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_font_options_hash. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_font_options_hash() - validating");
		if( arg0 ) {
		validate_Rdaddress( arg0, "cairo_font_options_hash - arg0 (options)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_font_options_hash - arg0 (options)");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

