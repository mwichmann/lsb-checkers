// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "stdlib.h"
#include <curses.h>
#include <stdarg.h>
#undef vw_scanw
static int(*funcptr) (WINDOW * , const char * , va_list ) = 0;

extern int __lsb_check_params;
int vw_scanw (WINDOW * arg0 , const char * arg1 , va_list arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	__lsb_output(4, "Invoking wrapper for vw_scanw()");
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vw_scanw");
	if(!funcptr) {
		__lsb_output(-1, "Failed to load vw_scanw. Probably the library was loaded using dlopen, we don't support this at the moment.");
		exit(1);
	}
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "vw_scanw() - validating");
		if( arg0 ) {
		validate_RWaddress( arg0, "vw_scanw - arg0");
		}
		validate_NULL_TYPETYPE(  arg0, "vw_scanw - arg0");
		if( arg1 ) {
		validate_Rdaddress( arg1, "vw_scanw - arg1");
		}
		validate_NULL_TYPETYPE(  arg1, "vw_scanw - arg1");
		validate_NULL_TYPETYPE(  arg2, "vw_scanw - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

