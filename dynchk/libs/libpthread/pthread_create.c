// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <pthread.h>
#undef pthread_create
static int(*funcptr) (pthread_t * , const pthread_attr_t * , void *(* )(void *), void * ) = 0;

extern int __lsb_check_params;
int pthread_create (pthread_t * arg0 , const pthread_attr_t * arg1 , void *(* arg2 )(void *), void * arg3 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "pthread_create", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_create()");
		validate_RWaddress( arg0, "pthread_create - arg0");
		validate_NULL_TYPETYPE(  arg0, "pthread_create - arg0");
		validate_Rdaddress( arg1, "pthread_create - arg1");
		validate_NULL_TYPETYPE(  arg1, "pthread_create - arg1");
		validate_Rdaddress( arg2, "pthread_create - arg2");
		validate_NULL_TYPETYPE(  arg2, "pthread_create - arg2");
		validate_RWaddress( arg3, "pthread_create - arg3");
		validate_NULL_TYPETYPE(  arg3, "pthread_create - arg3");
	}
	ret_value = funcptr(arg0, arg1, arg2, arg3);
	__lsb_check_params = reset_flag;
	return ret_value;
}

