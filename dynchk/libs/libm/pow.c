// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static double(*funcptr)(double, double) = 0;

double pow(double arg0, double arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pow");
	validate_NULL_TYPETYPE(arg0, "pow");
	validate_NULL_TYPETYPE(arg1, "pow");
	return funcptr(arg0, arg1);
}

double lsb_pow(double arg0, double arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pow");
	return funcptr(arg0, arg1);
}

