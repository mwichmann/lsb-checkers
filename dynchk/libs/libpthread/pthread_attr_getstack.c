// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <pthread.h>
#include <stddef.h>
#undef pthread_attr_getstack
static int(*funcptr) (const pthread_attr_t * , void * * , size_t * ) = 0;

extern int __lsb_check_params;
int pthread_attr_getstack (const pthread_attr_t * arg0 , void * * arg1 , size_t * arg2 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_attr_getstack");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_attr_getstack()");
		validate_Rdaddress( arg0, "pthread_attr_getstack - arg0");
		validate_NULL_TYPETYPE(  arg0, "pthread_attr_getstack - arg0");
		validate_RWaddress( arg1, "pthread_attr_getstack - arg1");
		validate_NULL_TYPETYPE(  arg1, "pthread_attr_getstack - arg1");
		validate_RWaddress( arg2, "pthread_attr_getstack - arg2");
		validate_NULL_TYPETYPE(  arg2, "pthread_attr_getstack - arg2");
	}
	ret_value = funcptr(arg0, arg1, arg2);
	__lsb_check_params = reset_flag;
	return ret_value;
}

