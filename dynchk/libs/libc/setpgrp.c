// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <unistd.h>
#undef setpgrp
static int(*funcptr) () = 0;

extern int __lsb_check_params;
int setpgrp ()
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "setpgrp", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "setpgrp()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

