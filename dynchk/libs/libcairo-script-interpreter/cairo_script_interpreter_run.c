// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <cairo/cairo-script-interpreter.h>
#undef cairo_script_interpreter_run
static cairo_status_t(*funcptr) (cairo_script_interpreter_t * , const char * ) = 0;

extern int __lsb_check_params;
cairo_status_t cairo_script_interpreter_run (cairo_script_interpreter_t * arg0 , const char * arg1 )
{
	int reset_flag = __lsb_check_params;
	cairo_status_t ret_value  ;
	__lsb_output(4, "Invoking wrapper for cairo_script_interpreter_run()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cairo_script_interpreter_run");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load cairo_script_interpreter_run. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "cairo_script_interpreter_run() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "cairo_script_interpreter_run - arg0 (ctx)");
		}
		validate_NULL_TYPETYPE(  arg0, "cairo_script_interpreter_run - arg0 (ctx)");
		if( arg1 ) {
		validate_Rdaddress( arg1, "cairo_script_interpreter_run - arg1 (filename)");
		}
		validate_NULL_TYPETYPE(  arg1, "cairo_script_interpreter_run - arg1 (filename)");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
