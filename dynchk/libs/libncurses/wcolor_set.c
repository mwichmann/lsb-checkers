// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef wcolor_set
static int(*funcptr) (WINDOW * , short , void * ) = 0;

extern int __lsb_check_params;
int wcolor_set (WINDOW * arg0 , short arg1 , void * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcolor_set");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "wcolor_set - arg0");
		validate_NULL_TYPETYPE(  arg0, "wcolor_set - arg0");
		validate_NULL_TYPETYPE(  arg1, "wcolor_set - arg1");
	validate_Rdaddress( arg2, "wcolor_set - arg2");
		validate_NULL_TYPETYPE(  arg2, "wcolor_set - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

