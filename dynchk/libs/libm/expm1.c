// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef expm1
static double(*funcptr) (double ) = 0;

double expm1 (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "expm1");
	validate_NULL_TYPETYPE(arg0, "expm1");
	return funcptr(arg0);
}

double lsb_expm1 (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "expm1");
	return funcptr(arg0);
}

