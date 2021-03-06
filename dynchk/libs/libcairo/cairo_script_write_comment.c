// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo.h>
#include <cairo/cairo-script.h>
#undef cairo_script_write_comment
static void(*funcptr) (cairo_device_t * , const char * , int ) = 0;

extern int __lsb_check_params;
void cairo_script_write_comment (cairo_device_t * arg0 , const char * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	__lsb_output(4, "Invoking wrapper for cairo_script_write_comment()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_script_write_comment");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_script_write_comment. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_script_write_comment() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_script_write_comment - arg0 (script)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_script_write_comment - arg0 (script)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "cairo_script_write_comment - arg1 (comment)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_script_write_comment - arg1 (comment)");
		validate_NULL_TYPETYPE(  arg2, "cairo_script_write_comment - arg2 (len)");
	}
	funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
}

