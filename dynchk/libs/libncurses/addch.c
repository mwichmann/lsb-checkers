// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef addch
static int(*funcptr) (const chtype ) = 0;

extern int __lsb_check_params;
int addch (const chtype arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "addch");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "addch()");
		validate_NULL_TYPETYPE(  arg0, "addch - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

