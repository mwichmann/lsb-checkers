// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
static int(*funcptr)(pthread_t, int) = 0;

int pthread_kill(pthread_t arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_kill");
	validate_NULL_TYPETYPE(arg0, "pthread_kill");
	validate_NULL_TYPETYPE(arg1, "pthread_kill");
	return funcptr(arg0, arg1);
}

int lsb_pthread_kill(pthread_t arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_kill");
	return funcptr(arg0, arg1);
}

