// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static double(*funcptr)(double) = 0;

double trunc(double arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "trunc");
	validate_NULL_TYPETYPE(arg0, "trunc");
	return funcptr(arg0);
}

double lsb_trunc(double arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "trunc");
	return funcptr(arg0);
}

