// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static void(*funcptr)(void *) = 0;

void pthread_exit(void * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_exit");
	validate_NULL_TYPETYPE(arg0, "pthread_exit");
	funcptr(arg0);
}

void lsb_pthread_exit(void * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_exit");
	funcptr(arg0);
}

