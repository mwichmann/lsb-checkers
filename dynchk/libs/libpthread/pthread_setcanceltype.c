// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <pthread.h>
#undef pthread_setcanceltype
static int(*funcptr) (int , int * ) = 0;

int pthread_setcanceltype (int arg0 , int * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_setcanceltype");
	validate_NULL_TYPETYPE(  arg0, "pthread_setcanceltype - arg0");
	validate_Rdaddress( arg1, "pthread_setcanceltype - arg1");
	validate_NULL_TYPETYPE(  arg1, "pthread_setcanceltype - arg1");
	return funcptr(arg0, arg1);
}

int __lsb_pthread_setcanceltype (int arg0 , int * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pthread_setcanceltype");
	return funcptr(arg0, arg1);
}

