// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static long double(*funcptr)(long double) = 0;

long double ceill(long double arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ceill");
	validate_NULL_TYPETYPE(arg0, "ceill");
	return funcptr(arg0);
}

long double lsb_ceill(long double arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ceill");
	return funcptr(arg0);
}

