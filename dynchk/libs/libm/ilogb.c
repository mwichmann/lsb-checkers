// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(double) = 0;

int ilogb(double arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ilogb");
	validate_NULL_TYPETYPE(arg0, "ilogb");
	return funcptr(arg0);
}

int lsb_ilogb(double arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ilogb");
	return funcptr(arg0);
}

