// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#include <sys/time.h>
#undef pthread_rwlock_timedrdlock
static int(*funcptr) (pthread_rwlock_t * , const struct timespec * ) = 0;

extern int __lsb_check_params;
extern int __lsb_output(int, char*, ...);
int pthread_rwlock_timedrdlock (pthread_rwlock_t * arg0 , const struct timespec * arg1 )
{
	int reset_flag = __lsb_check_params;
	int ret_value  ;
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_rwlock_timedrdlock");
	if(__lsb_check_params)
	{
		__lsb_check_params=0;
	__lsb_output(5-__lsb_check_params, "pthread_rwlock_timedrdlock()");
	validate_Rdaddress( arg0, "pthread_rwlock_timedrdlock - arg0");
		validate_NULL_TYPETYPE(  arg0, "pthread_rwlock_timedrdlock - arg0");
	validate_Rdaddress( arg1, "pthread_rwlock_timedrdlock - arg1");
		validate_NULL_TYPETYPE(  arg1, "pthread_rwlock_timedrdlock - arg1");
	}
	ret_value = funcptr(arg0, arg1);
	__lsb_check_params = reset_flag;
	return ret_value;
}

