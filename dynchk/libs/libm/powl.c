// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static long double(*funcptr)(long double, long double) = 0;

long double powl(long double arg0, long double arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "powl");
	validate_NULL_TYPETYPE(arg0, "powl");
	validate_NULL_TYPETYPE(arg1, "powl");
	return funcptr(arg0, arg1);
}

long double lsb_powl(long double arg0, long double arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "powl");
	return funcptr(arg0, arg1);
}

