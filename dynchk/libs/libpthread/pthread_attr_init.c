// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(pthread_attr_t *) = 0;

int pthread_attr_init(pthread_attr_t * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_attr_init");
	validate_NULL_TYPETYPE(arg0, "pthread_attr_init");
	return funcptr(arg0);
}

int lsb_pthread_attr_init(pthread_attr_t * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_attr_init");
	return funcptr(arg0);
}

