// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#include <term.h>
#undef overwrite
static int(*funcptr) (const WINDOW * , WINDOW * ) = 0;

extern int __lsb_check_params;
int overwrite (const WINDOW * arg0 , WINDOW * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "overwrite");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "overwrite()");
		validate_Rdaddress( arg0, "overwrite - arg0");
		validate_NULL_TYPETYPE(  arg0, "overwrite - arg0");
		validate_RWaddress( arg1, "overwrite - arg1");
		validate_NULL_TYPETYPE(  arg1, "overwrite - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

