// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <stdio.h>
#undef tmpfile64
static FILE *(*funcptr) () = 0;

extern int __lsb_check_params;
FILE * tmpfile64 ()
{
	int reset_flag = __lsb_check_params;
	FILE * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tmpfile64");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "tmpfile64()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

