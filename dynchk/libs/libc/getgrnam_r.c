// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
static int(*funcptr)(char *, group *, char *, size_t, group * *) = 0;

int getgrnam_r(char * arg0, group * arg1, char * arg2, size_t arg3, group * * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getgrnam_r");
	validate_NULL_TYPETYPE(arg0, "getgrnam_r");
	validate_NULL_TYPETYPE(arg1, "getgrnam_r");
	validate_NULL_TYPETYPE(arg2, "getgrnam_r");
	validate_NULL_TYPETYPE(arg3, "getgrnam_r");
	validate_NULL_TYPETYPE(arg4, "getgrnam_r");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int lsb_getgrnam_r(char * arg0, group * arg1, char * arg2, size_t arg3, group * * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getgrnam_r");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

