// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef addnstr
static int(*funcptr) (const char * , int ) = 0;

extern int __lsb_check_params;
int addnstr (const char * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "addnstr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "addnstr - arg0");
		validate_NULL_TYPETYPE(  arg0, "addnstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "addnstr - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

