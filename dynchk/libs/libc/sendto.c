// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
#include <sys/socket.h>
static int(*funcptr)(int, const void *, size_t, int, const struct sockaddr *, socklen_t) = 0;

int sendto(int arg0, const void * arg1, size_t arg2, int arg3, const struct sockaddr * arg4, socklen_t arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sendto");
	validate_NULL_TYPETYPE(arg0, "sendto");
	validate_NULL_TYPETYPE(arg1, "sendto");
	validate_NULL_TYPETYPE(arg2, "sendto");
	validate_NULL_TYPETYPE(arg3, "sendto");
	validate_NULL_TYPETYPE(arg4, "sendto");
	validate_NULL_TYPETYPE(arg5, "sendto");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

int lsb_sendto(int arg0, const void * arg1, size_t arg2, int arg3, const struct sockaddr * arg4, socklen_t arg5)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sendto");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5);
}

