// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/resource.h>
#undef setrlimit64
static int(*funcptr) (__rlimit_resource_t , const struct rlimit64 * ) = 0;

extern int __lsb_check_params;
int setrlimit64 (__rlimit_resource_t arg0 , const struct rlimit64 * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setrlimit64");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		validate_NULL_TYPETYPE(  arg0, "setrlimit64 - arg0");
	validate_Rdaddress( arg1, "setrlimit64 - arg1");
		validate_NULL_TYPETYPE(  arg1, "setrlimit64 - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

