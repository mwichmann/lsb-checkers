// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(const char *) = 0;

size_t strlen(const char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strlen");
	validate_NULL_TYPETYPE(arg0, "strlen");
	return funcptr(arg0);
}

size_t lsb_strlen(const char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strlen");
	return funcptr(arg0);
}

