// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <semaphore.h>
#undef sem_getvalue
static int(*funcptr) (sem_t * , int * ) = 0;

int sem_getvalue (sem_t * arg0 , int * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sem_getvalue");
	validate_Rdaddress( arg0, "sem_getvalue - arg0");
	validate_NULL_TYPETYPE(  arg0, "sem_getvalue - arg0");
	validate_Rdaddress( arg1, "sem_getvalue - arg1");
	validate_NULL_TYPETYPE(  arg1, "sem_getvalue - arg1");
	return funcptr(arg0, arg1);
}

int __lsb_sem_getvalue (sem_t * arg0 , int * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sem_getvalue");
	return funcptr(arg0, arg1);
}

