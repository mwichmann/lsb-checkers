// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static double(*funcptr)(double, int *) = 0;

double lgamma_r(double arg0, int * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lgamma_r");
	validate_NULL_TYPETYPE(arg0, "lgamma_r");
	validate_NULL_TYPETYPE(arg1, "lgamma_r");
	return funcptr(arg0, arg1);
}

double lsb_lgamma_r(double arg0, int * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lgamma_r");
	return funcptr(arg0, arg1);
}

