// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef wgetnstr
static int(*funcptr) (WINDOW * , char * , int ) = 0;

extern int __lsb_check_params;
int wgetnstr (WINDOW * arg0 , char * arg1 , int arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wgetnstr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "wgetnstr - arg0");
		validate_NULL_TYPETYPE(  arg0, "wgetnstr - arg0");
	validate_Rdaddress( arg1, "wgetnstr - arg1");
		validate_NULL_TYPETYPE(  arg1, "wgetnstr - arg1");
		validate_NULL_TYPETYPE(  arg2, "wgetnstr - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

