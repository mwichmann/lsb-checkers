// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef has_ic
static bool(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
bool has_ic ()
{
	int reset_flag = __lsb_check_params;
	bool ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "has_ic");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "has_ic()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

