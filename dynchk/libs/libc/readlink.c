// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
static int(*funcptr)(const char *, char *, size_t) = 0;

int readlink(const char * arg0, char * arg1, size_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "readlink");
	validate_NULL_TYPETYPE(arg0, "readlink");
	validate_NULL_TYPETYPE(arg1, "readlink");
	validate_NULL_TYPETYPE(arg2, "readlink");
	return funcptr(arg0, arg1, arg2);
}

int lsb_readlink(const char * arg0, char * arg1, size_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "readlink");
	return funcptr(arg0, arg1, arg2);
}

