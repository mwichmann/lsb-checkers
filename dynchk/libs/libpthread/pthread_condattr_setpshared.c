// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <pthread.h>
#undef pthread_condattr_setpshared
static int(*funcptr) (pthread_condattr_t * , int ) = 0;

extern int __lsb_check_params;
int pthread_condattr_setpshared (pthread_condattr_t * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_condattr_setpshared");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_condattr_setpshared()");
		validate_RWaddress( arg0, "pthread_condattr_setpshared - arg0");
		validate_NULL_TYPETYPE(  arg0, "pthread_condattr_setpshared - arg0");
		validate_NULL_TYPETYPE(  arg1, "pthread_condattr_setpshared - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

