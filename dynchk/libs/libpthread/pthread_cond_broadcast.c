// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_cond_broadcast
static int(*funcptr) (pthread_cond_t * ) = 0;

extern int __lsb_check_params;
int pthread_cond_broadcast (pthread_cond_t * arg0 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_cond_broadcast");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	validate_Rdaddress( arg0, "pthread_cond_broadcast - arg0");
		validate_NULL_TYPETYPE(  arg0, "pthread_cond_broadcast - arg0");
	}
	ret_value = funcptr(arg0);
	__lsb_check_params = reset_flag;
	return ret_value;
}

