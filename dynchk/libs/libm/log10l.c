// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef log10l
static long double(*funcptr) (long double ) = 0;

long double log10l (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "log10l");
	validate_NULL_TYPETYPE(arg0, "log10l");
	return funcptr(arg0);
}

long double lsb_log10l (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "log10l");
	return funcptr(arg0);
}

