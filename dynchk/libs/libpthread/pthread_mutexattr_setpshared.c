// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include "../../misc/lsb_dlsym.h"
#include <pthread.h>
#undef pthread_mutexattr_setpshared
static int(*funcptr) (pthread_mutexattr_t * , int ) = 0;

extern int __lsb_check_params;
int pthread_mutexattr_setpshared (pthread_mutexattr_t * arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = lsb_dlvsym(RTLD_NEXT, "pthread_mutexattr_setpshared", "GLIBC_2.2");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_mutexattr_setpshared()");
		validate_RWaddress( arg0, "pthread_mutexattr_setpshared - arg0");
		validate_NULL_TYPETYPE(  arg0, "pthread_mutexattr_setpshared - arg0");
		validate_NULL_TYPETYPE(  arg1, "pthread_mutexattr_setpshared - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

