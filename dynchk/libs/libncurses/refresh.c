// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <curses.h>
#undef refresh
static int(*funcptr) () = 0;

extern int __lsb_check_params;
int refresh ()
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "refresh");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "refresh()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

