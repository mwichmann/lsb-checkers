// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
static int(*funcptr)(pthread_mutexattr_t *, int *) = 0;

int pthread_mutexattr_getpshared(pthread_mutexattr_t * arg0, int * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_mutexattr_getpshared");
	validate_NULL_TYPETYPE(arg0, "pthread_mutexattr_getpshared");
	validate_NULL_TYPETYPE(arg1, "pthread_mutexattr_getpshared");
	return funcptr(arg0, arg1);
}

int lsb_pthread_mutexattr_getpshared(pthread_mutexattr_t * arg0, int * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_mutexattr_getpshared");
	return funcptr(arg0, arg1);
}

