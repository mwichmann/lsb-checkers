// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef tmpfile
static FILE *(*funcptr) () = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
FILE * tmpfile ()
{
	int reset_flag = __lsb_check_params;
	FILE * ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tmpfile");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "tmpfile()");
	}
	ret_value = funcptr();
	__lsb_check_params = reset_flag;
	return ret_value;
}

