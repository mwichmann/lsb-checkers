// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef mvwaddch
static int(*funcptr) (WINDOW * , int , int , const chtype ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int mvwaddch (WINDOW * arg0 , int arg1 , int arg2 , const chtype arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvwaddch");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "mvwaddch()");
	validate_Rdaddress( arg0, "mvwaddch - arg0");
		validate_NULL_TYPETYPE(  arg0, "mvwaddch - arg0");
		validate_NULL_TYPETYPE(  arg1, "mvwaddch - arg1");
		validate_NULL_TYPETYPE(  arg2, "mvwaddch - arg2");
		validate_NULL_TYPETYPE(  arg3, "mvwaddch - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

