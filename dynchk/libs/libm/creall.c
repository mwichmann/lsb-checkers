// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static long double(*funcptr)(long double) = 0;

long double creall(long double arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "creall");
	validate_NULL_TYPETYPE(arg0, "creall");
	return funcptr(arg0);
}

long double lsb_creall(long double arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "creall");
	return funcptr(arg0);
}

