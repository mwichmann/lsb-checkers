// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <signal.h>
#undef sigaltstack
static int(*funcptr) (const struct sigaltstack * , struct sigaltstack * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int sigaltstack (const struct sigaltstack * arg0 , struct sigaltstack * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigaltstack");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "sigaltstack()");
	validate_Rdaddress( arg0, "sigaltstack - arg0");
		validate_NULL_TYPETYPE(  arg0, "sigaltstack - arg0");
	validate_Rdaddress( arg1, "sigaltstack - arg1");
		validate_NULL_TYPETYPE(  arg1, "sigaltstack - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

