// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static long double(*funcptr)(long double, long double *) = 0;

long double modfl(long double arg0, long double * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "modfl");
	validate_NULL_TYPETYPE(arg0, "modfl");
	validate_NULL_TYPETYPE(arg1, "modfl");
	return funcptr(arg0, arg1);
}

long double lsb_modfl(long double arg0, long double * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "modfl");
	return funcptr(arg0, arg1);
}

