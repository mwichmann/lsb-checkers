// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef sqrtl
static long double(*funcptr) (long double ) = 0;

long double sqrtl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sqrtl");
	validate_NULL_TYPETYPE(arg0, "sqrtl");
	return funcptr(arg0);
}

long double lsb_sqrtl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sqrtl");
	return funcptr(arg0);
}

