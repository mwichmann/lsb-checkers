// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#undef __mempcpy
static void *(*funcptr) (void * , const void * , size_t ) = 0;

void * __mempcpy (void * arg0 , const void * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__mempcpy");
	validate_RWaddress(arg0, "__mempcpy");
	validate_NULL_TYPETYPE(arg1, "__mempcpy");
	validate_NULL_TYPETYPE(arg2, "__mempcpy");
	return funcptr(arg0, arg1, arg2);
}

void * lsb___mempcpy (void * arg0 , const void * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__mempcpy");
	return funcptr(arg0, arg1, arg2);
}

