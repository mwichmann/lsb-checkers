// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#undef writev
static int(*funcptr) (int , const struct iovec * , size_t ) = 0;

int writev (int arg0 , const struct iovec * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "writev");
	validate_NULL_TYPETYPE(arg0, "writev");
	validate_NULL_TYPETYPE(arg1, "writev");
	validate_NULL_TYPETYPE(arg2, "writev");
	return funcptr(arg0, arg1, arg2);
}

int lsb_writev (int arg0 , const struct iovec * arg1 , size_t arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "writev");
	return funcptr(arg0, arg1, arg2);
}

