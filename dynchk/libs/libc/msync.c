// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
static int(*funcptr)(void *, size_t, int) = 0;

int msync(void * arg0, size_t arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "msync");
	validate_NULL_TYPETYPE(arg0, "msync");
	validate_NULL_TYPETYPE(arg1, "msync");
	validate_NULL_TYPETYPE(arg2, "msync");
	return funcptr(arg0, arg1, arg2);
}

int lsb_msync(void * arg0, size_t arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "msync");
	return funcptr(arg0, arg1, arg2);
}

