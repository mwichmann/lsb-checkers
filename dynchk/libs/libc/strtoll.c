// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(const char *, char * *, int) = 0;

long long strtoll(const char * arg0, char * * arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strtoll");
	validate_NULL_TYPETYPE(arg0, "strtoll");
	validate_NULL_TYPETYPE(arg1, "strtoll");
	validate_NULL_TYPETYPE(arg2, "strtoll");
	return funcptr(arg0, arg1, arg2);
}

long long lsb_strtoll(const char * arg0, char * * arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strtoll");
	return funcptr(arg0, arg1, arg2);
}

