// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include "../../misc/lsb_output.h"
#include <pthread.h>
#undef pthread_join
static int(*funcptr) (pthread_t , void * * ) = 0;

extern int __lsb_check_params;
int pthread_join (pthread_t arg0 , void * * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlvsym(RTLD_NEXT, "pthread_join", "GLIBC_2.0");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
		__lsb_output(4, "pthread_join()");
		validate_NULL_TYPETYPE(  arg0, "pthread_join - arg0");
		validate_RWaddress( arg1, "pthread_join - arg1");
		validate_NULL_TYPETYPE(  arg1, "pthread_join - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

