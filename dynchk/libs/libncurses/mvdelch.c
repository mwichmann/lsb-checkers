// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvdelch
static int(*funcptr) (int , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int mvdelch (int arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvdelch");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "mvdelch()");
		validate_NULL_TYPETYPE(  arg0, "mvdelch - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvdelch - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

