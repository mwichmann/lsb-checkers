// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <semaphore.h>
#undef sem_init
static int(*funcptr) (sem_t * , int , unsigned int ) = 0;

int sem_init (sem_t * arg0 , int arg1 , unsigned int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sem_init");
	validate_NULL_TYPETYPE(arg0, "sem_init");
	validate_NULL_TYPETYPE(arg1, "sem_init");
	validate_NULL_TYPETYPE(arg2, "sem_init");
	return funcptr(arg0, arg1, arg2);
}

int lsb_sem_init (sem_t * arg0 , int arg1 , unsigned int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sem_init");
	return funcptr(arg0, arg1, arg2);
}

