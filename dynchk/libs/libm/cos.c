// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef cos
static double(*funcptr) (double ) = 0;

double cos (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cos");
	validate_NULL_TYPETYPE(  arg0, "cos - arg0");
	return funcptr(arg0);
}

double __lsb_cos (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cos");
	return funcptr(arg0);
}

