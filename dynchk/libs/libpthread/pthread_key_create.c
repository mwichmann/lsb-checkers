// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_key_create
static int(*funcptr) (pthread_key_t * , void(* )(void *)) = 0;

int pthread_key_create (pthread_key_t * arg0 , void(* arg1 )(void *))
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_key_create");
	validate_Rdaddress( arg0, "pthread_key_create - arg0");
	validate_NULL_TYPETYPE(  arg0, "pthread_key_create - arg0");
validate_Rdaddress( arg1, "pthread_key_create - arg1");
	validate_NULL_TYPETYPE(  arg1, "pthread_key_create - arg1");
	return funcptr(arg0, arg1);
}

int __lsb_pthread_key_create (pthread_key_t * arg0 , void(* arg1 )(void *))
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_key_create");
	return funcptr(arg0, arg1);
}

