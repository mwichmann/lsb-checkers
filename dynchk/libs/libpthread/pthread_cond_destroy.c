// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_cond_destroy
static int(*funcptr) (pthread_cond_t * ) = 0;

int pthread_cond_destroy (pthread_cond_t * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_cond_destroy");
	validate_Rdaddress( arg0, "pthread_cond_destroy - arg0");
	validate_NULL_TYPETYPE(  arg0, "pthread_cond_destroy - arg0");
	return funcptr(arg0);
}

int __lsb_pthread_cond_destroy (pthread_cond_t * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_cond_destroy");
	return funcptr(arg0);
}

