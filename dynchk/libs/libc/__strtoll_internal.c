// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static long long(*funcptr)(const char *, char * *, int, int) = 0;

long long __strtoll_internal(const char * arg0, char * * arg1, int arg2, int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__strtoll_internal");
	validate_NULL_TYPETYPE(arg0, "__strtoll_internal");
	validate_RWaddress(arg1, "__strtoll_internal");
	validate_NULL_TYPETYPE(arg2, "__strtoll_internal");
	validate_NULL_TYPETYPE(arg3, "__strtoll_internal");
	return funcptr(arg0, arg1, arg2, arg3);
}

long long lsb___strtoll_internal(const char * arg0, char * * arg1, int arg2, int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "__strtoll_internal");
	return funcptr(arg0, arg1, arg2, arg3);
}

