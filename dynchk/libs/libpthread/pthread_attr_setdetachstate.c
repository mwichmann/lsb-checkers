// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_attr_setdetachstate
static int(*funcptr) (pthread_attr_t * , int ) = 0;

int pthread_attr_setdetachstate (pthread_attr_t * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_attr_setdetachstate");
	validate_NULL_TYPETYPE(arg0, "pthread_attr_setdetachstate");
	validate_NULL_TYPETYPE(arg1, "pthread_attr_setdetachstate");
	return funcptr(arg0, arg1);
}

int lsb_pthread_attr_setdetachstate (pthread_attr_t * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_attr_setdetachstate");
	return funcptr(arg0, arg1);
}

