// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(const char *, const char *) = 0;

int strcmp(const char * arg0, const char * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strcmp");
	validate_NULL_TYPETYPE(arg0, "strcmp");
	validate_NULL_TYPETYPE(arg1, "strcmp");
	return funcptr(arg0, arg1);
}

int lsb_strcmp(const char * arg0, const char * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strcmp");
	return funcptr(arg0, arg1);
}

