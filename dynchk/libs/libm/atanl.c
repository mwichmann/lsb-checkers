// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef atanl
static long double(*funcptr) (long double ) = 0;

long double atanl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atanl");
	validate_NULL_TYPETYPE(arg0, "atanl");
	return funcptr(arg0);
}

long double lsb_atanl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atanl");
	return funcptr(arg0);
}

