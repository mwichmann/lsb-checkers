// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int, struct sockaddr *, socklen_t *) = 0;

int getpeername(int arg0, struct sockaddr * arg1, socklen_t * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getpeername");
	validate_NULL_TYPETYPE(arg0, "getpeername");
	validate_NULL_TYPETYPE(arg1, "getpeername");
	validate_NULL_TYPETYPE(arg2, "getpeername");
	return funcptr(arg0, arg1, arg2);
}

int lsb_getpeername(int arg0, struct sockaddr * arg1, socklen_t * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getpeername");
	return funcptr(arg0, arg1, arg2);
}

