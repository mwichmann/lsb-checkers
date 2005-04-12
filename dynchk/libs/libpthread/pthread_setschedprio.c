// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <pthread.h>
#undef pthread_setschedprio
static int(*funcptr) (pthread_t , int ) = 0;

extern int __lsb_check_params;
int pthread_setschedprio (pthread_t arg0 , int arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_setschedprio");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_setschedprio()");
		validate_NULL_TYPETYPE(  arg0, "pthread_setschedprio - arg0");
		validate_NULL_TYPETYPE(  arg1, "pthread_setschedprio - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}
