// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef getpagesize
static int(*funcptr) () = 0;

extern int __lsb_check_params;
int getpagesize ()
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getpagesize");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

