// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#undef recv
static int(*funcptr) (int , void * , size_t , int ) = 0;

int recv (int arg0 , void * arg1 , size_t arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "recv");
	validate_NULL_TYPETYPE(arg0, "recv");
	validate_NULL_TYPETYPE(arg1, "recv");
	validate_NULL_TYPETYPE(arg2, "recv");
	validate_NULL_TYPETYPE(arg3, "recv");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_recv (int arg0 , void * arg1 , size_t arg2 , int arg3 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "recv");
	return funcptr(arg0, arg1, arg2, arg3);
}

