// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/resource.h>
#undef setrlimit
static int(*funcptr) (__rlimit_resource_t , const struct rlimit * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int setrlimit (__rlimit_resource_t arg0 , const struct rlimit * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setrlimit");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "setrlimit()");
		validate_NULL_TYPETYPE(  arg0, "setrlimit - arg0");
	validate_Rdaddress( arg1, "setrlimit - arg1");
		validate_NULL_TYPETYPE(  arg1, "setrlimit - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

