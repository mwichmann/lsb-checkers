// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static double(*funcptr)(double) = 0;

double tanh(double arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tanh");
	validate_NULL_TYPETYPE(arg0, "tanh");
	return funcptr(arg0);
}

double lsb_tanh(double arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tanh");
	return funcptr(arg0);
}

