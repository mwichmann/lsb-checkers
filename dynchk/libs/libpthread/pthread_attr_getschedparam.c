// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#include <sched.h>
#undef pthread_attr_getschedparam
static int(*funcptr) (const pthread_attr_t * , struct sched_param * ) = 0;

int pthread_attr_getschedparam (const pthread_attr_t * arg0 , struct sched_param * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_attr_getschedparam");
	validate_Rdaddress( arg0, "pthread_attr_getschedparam - arg0");
	validate_NULL_TYPETYPE(  arg0, "pthread_attr_getschedparam - arg0");
	validate_Rdaddress( arg1, "pthread_attr_getschedparam - arg1");
	validate_NULL_TYPETYPE(  arg1, "pthread_attr_getschedparam - arg1");
	return funcptr(arg0, arg1);
}

int __lsb_pthread_attr_getschedparam (const pthread_attr_t * arg0 , struct sched_param * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_attr_getschedparam");
	return funcptr(arg0, arg1);
}

