// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#include <stdarg.h>
#undef vwscanw
static int(*funcptr) (WINDOW * , char * , va_list ) = 0;

extern int __lsb_check_params;
int vwscanw (WINDOW * arg0 , char * arg1 , va_list arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "vwscanw");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "vwscanw()");
		validate_RWaddress( arg0, "vwscanw - arg0");
		validate_NULL_TYPETYPE(  arg0, "vwscanw - arg0");
		validate_RWaddress( arg1, "vwscanw - arg1");
		validate_NULL_TYPETYPE(  arg1, "vwscanw - arg1");
		validate_NULL_TYPETYPE(  arg2, "vwscanw - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

