// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvwinch
static chtype(*funcptr) (WINDOW * , int , int ) = 0;

extern int __lsb_check_params;
chtype mvwinch (WINDOW * arg0 , int arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	chtype ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwinch");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "mvwinch - arg0");
		validate_NULL_TYPETYPE(  arg0, "mvwinch - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvwinch - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvwinch - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

