// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#include <sys/time.h>
#undef pthread_cond_timedwait
static int(*funcptr) (pthread_cond_t * , pthread_mutex_t * , const struct timespec * ) = 0;

int pthread_cond_timedwait (pthread_cond_t * arg0 , pthread_mutex_t * arg1 , const struct timespec * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_cond_timedwait");
	validate_Rdaddress( arg0, "pthread_cond_timedwait - arg0");
	validate_NULL_TYPETYPE(  arg0, "pthread_cond_timedwait - arg0");
	validate_Rdaddress( arg1, "pthread_cond_timedwait - arg1");
	validate_NULL_TYPETYPE(  arg1, "pthread_cond_timedwait - arg1");
	validate_Rdaddress( arg2, "pthread_cond_timedwait - arg2");
	validate_NULL_TYPETYPE(  arg2, "pthread_cond_timedwait - arg2");
	return funcptr(arg0, arg1, arg2);
}

int __lsb_pthread_cond_timedwait (pthread_cond_t * arg0 , pthread_mutex_t * arg1 , const struct timespec * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_cond_timedwait");
	return funcptr(arg0, arg1, arg2);
}

