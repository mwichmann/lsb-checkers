// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static long double(*funcptr)(long double, long double) = 0;

long double copysignl(long double arg0, long double arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "copysignl");
	validate_NULL_TYPETYPE(arg0, "copysignl");
	validate_NULL_TYPETYPE(arg1, "copysignl");
	return funcptr(arg0, arg1);
}

long double lsb_copysignl(long double arg0, long double arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "copysignl");
	return funcptr(arg0, arg1);
}

