// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <signal.h>
#undef sigdelset
static int(*funcptr) (sigset_t * , int ) = 0;

extern int __lsb_check_params;
int sigdelset (sigset_t * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigdelset");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(5-reset_flag, "sigdelset()");
		validate_RWaddress( arg0, "sigdelset - arg0");
		validate_NULL_TYPETYPE(  arg0, "sigdelset - arg0");
		validate_NULL_TYPETYPE(  arg1, "sigdelset - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

