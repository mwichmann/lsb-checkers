// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
#undef slk_refresh
static int(*funcptr) () = 0;

extern int __lsb_check_params;
int slk_refresh ()
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "slk_refresh");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

