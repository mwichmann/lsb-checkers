// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(const char *, int) = 0;

char * rindex(const char * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "rindex");
	validate_NULL_TYPETYPE(arg0, "rindex");
	validate_NULL_TYPETYPE(arg1, "rindex");
	return funcptr(arg0, arg1);
}

char * lsb_rindex(const char * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "rindex");
	return funcptr(arg0, arg1);
}

