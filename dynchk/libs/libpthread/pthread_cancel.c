// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_cancel
static int(*funcptr) (pthread_t ) = 0;

extern int __lsb_check_params;
int pthread_cancel (pthread_t arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "pthread_cancel", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_cancel()");
		validate_NULL_TYPETYPE(  arg0, "pthread_cancel - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

