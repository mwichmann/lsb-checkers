// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(const char *, const char *) = 0;

int rename(const char * arg0, const char * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "rename");
	validate_NULL_TYPETYPE(arg0, "rename");
	validate_NULL_TYPETYPE(arg1, "rename");
	return funcptr(arg0, arg1);
}

int lsb_rename(const char * arg0, const char * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "rename");
	return funcptr(arg0, arg1);
}

