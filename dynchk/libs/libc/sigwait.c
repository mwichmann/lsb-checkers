// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <signal.h>
#undef sigwait
static int(*funcptr) (const sigset_t * , int * ) = 0;

extern int __lsb_check_params;
int sigwait (const sigset_t * arg0 , int * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "sigwait", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "sigwait()");
		validate_RWaddress( arg0, "sigwait - arg0");
		validate_NULL_TYPETYPE(  arg0, "sigwait - arg0");
		validate_RWaddress( arg1, "sigwait - arg1");
		validate_NULL_TYPETYPE(  arg1, "sigwait - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

