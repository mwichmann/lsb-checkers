// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#undef send
static ssize_t(*funcptr) (int , const void * , size_t , int ) = 0;

ssize_t send (int arg0 , const void * arg1 , size_t arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "send");
	validate_NULL_TYPETYPE(arg0, "send");
	validate_NULL_TYPETYPE(arg1, "send");
	validate_NULL_TYPETYPE(arg2, "send");
	validate_NULL_TYPETYPE(arg3, "send");
	return funcptr(arg0, arg1, arg2, arg3);
}

ssize_t lsb_send (int arg0 , const void * arg1 , size_t arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "send");
	return funcptr(arg0, arg1, arg2, arg3);
}

