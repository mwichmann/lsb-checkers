// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static char *(*funcptr)(const char *) = 0;

char * getenv(const char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getenv");
	validate_NULL_TYPETYPE(arg0, "getenv");
	return funcptr(arg0);
}

char * lsb_getenv(const char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getenv");
	return funcptr(arg0);
}

