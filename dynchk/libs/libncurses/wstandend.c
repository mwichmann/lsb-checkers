// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef wstandend
static int(*funcptr) (WINDOW * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int wstandend (WINDOW * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wstandend");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "wstandend()");
	validate_Rdaddress( arg0, "wstandend - arg0");
		validate_NULL_TYPETYPE(  arg0, "wstandend - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

