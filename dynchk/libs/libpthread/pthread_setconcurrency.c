// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef pthread_setconcurrency
static int(*funcptr) (int ) = 0;

int pthread_setconcurrency (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_setconcurrency");
	validate_NULL_TYPETYPE(arg0, "pthread_setconcurrency");
	return funcptr(arg0);
}

int lsb_pthread_setconcurrency (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_setconcurrency");
	return funcptr(arg0);
}

