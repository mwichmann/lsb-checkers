// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef llabs
static long long(*funcptr) (long long ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
long long llabs (long long arg0 )
{
	int reset_flag = __lsb_check_params;
	long long ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "llabs");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "llabs()");
		validate_NULL_TYPETYPE(  arg0, "llabs - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

