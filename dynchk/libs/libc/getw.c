// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef getw
static int(*funcptr) (FILE * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int getw (FILE * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getw");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "getw()");
	validate_Rdaddress( arg0, "getw - arg0");
		validate_NULL_TYPETYPE(  arg0, "getw - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

