// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int) = 0;

int abs(int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "abs");
	validate_NULL_TYPETYPE(arg0, "abs");
	return funcptr(arg0);
}

int lsb_abs(int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "abs");
	return funcptr(arg0);
}

