// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <stddef.h>
static int(*funcptr)(char *, const char *, size_t) = 0;

char * strncpy(char * arg0, const char * arg1, size_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strncpy");
	validate_NULL_TYPETYPE(arg0, "strncpy");
	validate_NULL_TYPETYPE(arg1, "strncpy");
	validate_NULL_TYPETYPE(arg2, "strncpy");
	return funcptr(arg0, arg1, arg2);
}

char * lsb_strncpy(char * arg0, const char * arg1, size_t arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strncpy");
	return funcptr(arg0, arg1, arg2);
}

