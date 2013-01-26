// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#undef cairo_set_user_data
static cairo_status_t(*funcptr) (cairo_t * , const cairo_user_data_key_t * , void * , cairo_destroy_func_t ) = 0;

extern int __lsb_check_params;
cairo_status_t cairo_set_user_data (cairo_t * arg0 , const cairo_user_data_key_t * arg1 , void * arg2 , cairo_destroy_func_t arg3 )
{
	int reset_flag = __lsb_check_params;
	cairo_status_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_set_user_data()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_set_user_data");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_set_user_data. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_set_user_data() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_set_user_data - arg0 (cr)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_set_user_data - arg0 (cr)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "cairo_set_user_data - arg1 (key)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_set_user_data - arg1 (key)");
		if( arg2 ) {
		validate_RWaddress( arg2, "cairo_set_user_data - arg2 (user_data)");
		}
		validate_NULL_TYPETYPE(  arg2, "cairo_set_user_data - arg2 (user_data)");
		validate_NULL_TYPETYPE(  arg3, "cairo_set_user_data - arg3 (destroy)");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

