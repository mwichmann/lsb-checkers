// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(pthread_attr_t *, void * *) = 0;

int pthread_attr_getstackaddr(pthread_attr_t * arg0, void * * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_attr_getstackaddr");
	validate_NULL_TYPETYPE(arg0, "pthread_attr_getstackaddr");
	validate_NULL_TYPETYPE(arg1, "pthread_attr_getstackaddr");
	return funcptr(arg0, arg1);
}

int lsb_pthread_attr_getstackaddr(pthread_attr_t * arg0, void * * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_attr_getstackaddr");
	return funcptr(arg0, arg1);
}

