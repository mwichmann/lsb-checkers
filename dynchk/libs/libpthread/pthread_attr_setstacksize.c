// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <stddef.h>
#include <pthread.h>
#undef pthread_attr_setstacksize
static int(*funcptr) (pthread_attr_t * , size_t ) = 0;

extern int __lsb_check_params;
int pthread_attr_setstacksize (pthread_attr_t * arg0 , size_t arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "pthread_attr_setstacksize", "GLIBC_2.1");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_attr_setstacksize()");
		validate_RWaddress( arg0, "pthread_attr_setstacksize - arg0");
		validate_NULL_TYPETYPE(  arg0, "pthread_attr_setstacksize - arg0");
		validate_NULL_TYPETYPE(  arg1, "pthread_attr_setstacksize - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

