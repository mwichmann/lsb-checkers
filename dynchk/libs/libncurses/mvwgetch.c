// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvwgetch
static int(*funcptr) (WINDOW * , int , int ) = 0;

extern int __lsb_check_params;
int mvwgetch (WINDOW * arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwgetch");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "mvwgetch()");
		validate_RWaddress( arg0, "mvwgetch - arg0");
		validate_NULL_TYPETYPE(  arg0, "mvwgetch - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvwgetch - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvwgetch - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

