// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(const char *, int) = 0;

int access(const char * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "access");
	validate_NULL_TYPETYPE(arg0, "access");
	validate_NULL_TYPETYPE(arg1, "access");
	return funcptr(arg0, arg1);
}

int lsb_access(const char * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "access");
	return funcptr(arg0, arg1);
}

