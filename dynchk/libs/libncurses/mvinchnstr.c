// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvinchnstr
static int(*funcptr) (int , int , chtype * , int ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int mvinchnstr (int arg0 , int arg1 , chtype * arg2 , int arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvinchnstr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "mvinchnstr()");
		validate_NULL_TYPETYPE(  arg0, "mvinchnstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvinchnstr - arg1");
	validate_Rdaddress( arg2, "mvinchnstr - arg2");
		validate_NULL_TYPETYPE(  arg2, "mvinchnstr - arg2");
		validate_NULL_TYPETYPE(  arg3, "mvinchnstr - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

