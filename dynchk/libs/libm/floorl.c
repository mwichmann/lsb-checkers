// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef floorl
static long double(*funcptr) (long double ) = 0;

long double floorl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "floorl");
	validate_NULL_TYPETYPE(  arg0, "floorl - arg0");
	return funcptr(arg0);
}

long double __lsb_floorl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "floorl");
	return funcptr(arg0);
}

