// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#include <sched.h>
#undef pthread_setschedparam
static int(*funcptr) (pthread_t , int , const struct sched_param * ) = 0;

int pthread_setschedparam (pthread_t arg0 , int arg1 , const struct sched_param * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_setschedparam");
	validate_NULL_TYPETYPE(arg0, "pthread_setschedparam");
	validate_NULL_TYPETYPE(arg1, "pthread_setschedparam");
	validate_NULL_TYPETYPE(arg2, "pthread_setschedparam");
	return funcptr(arg0, arg1, arg2);
}

int lsb_pthread_setschedparam (pthread_t arg0 , int arg1 , const struct sched_param * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_setschedparam");
	return funcptr(arg0, arg1, arg2);
}

