// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
static int(*funcptr)(const pthread_rwlockattr_t *, int) = 0;

int pthread_rwlockattr_setpshared(const pthread_rwlockattr_t * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_rwlockattr_setpshared");
	validate_NULL_TYPETYPE(arg0, "pthread_rwlockattr_setpshared");
	validate_NULL_TYPETYPE(arg1, "pthread_rwlockattr_setpshared");
	return funcptr(arg0, arg1);
}

int lsb_pthread_rwlockattr_setpshared(const pthread_rwlockattr_t * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_rwlockattr_setpshared");
	return funcptr(arg0, arg1);
}

