// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef gamma
static double(*funcptr) (double ) = 0;

double gamma (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gamma");
	validate_NULL_TYPETYPE(  arg0, "gamma - arg0");
	return funcptr(arg0);
}

double __lsb_gamma (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "gamma");
	return funcptr(arg0);
}

