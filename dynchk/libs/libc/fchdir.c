// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int) = 0;

int fchdir(int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fchdir");
	validate_NULL_TYPETYPE(arg0, "fchdir");
	return funcptr(arg0);
}

int lsb_fchdir(int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fchdir");
	return funcptr(arg0);
}

