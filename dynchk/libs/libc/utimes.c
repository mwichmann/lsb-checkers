// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(char *, timeval *) = 0;

int utimes(char * arg0, timeval * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "utimes");
	validate_NULL_TYPETYPE(arg0, "utimes");
	validate_NULL_TYPETYPE(arg1, "utimes");
	return funcptr(arg0, arg1);
}

int lsb_utimes(char * arg0, timeval * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "utimes");
	return funcptr(arg0, arg1);
}

