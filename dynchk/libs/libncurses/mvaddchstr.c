// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvaddchstr
static int(*funcptr) (int , int , const chtype * ) = 0;

extern int __lsb_check_params;
int mvaddchstr (int arg0 , int arg1 , const chtype * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvaddchstr");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "mvaddchstr()");
		validate_NULL_TYPETYPE(  arg0, "mvaddchstr - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvaddchstr - arg1");
		validate_Rdaddress( arg2, "mvaddchstr - arg2");
		validate_NULL_TYPETYPE(  arg2, "mvaddchstr - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

