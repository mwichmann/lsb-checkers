// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static double(*funcptr)(double) = 0;

double sinh(double arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sinh");
	validate_NULL_TYPETYPE(arg0, "sinh");
	return funcptr(arg0);
}

double lsb_sinh(double arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sinh");
	return funcptr(arg0);
}

