// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef cbrt
static double(*funcptr) (double ) = 0;

double cbrt (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cbrt");
	validate_NULL_TYPETYPE(  arg0, "cbrt - arg0");
	return funcptr(arg0);
}

double __lsb_cbrt (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cbrt");
	return funcptr(arg0);
}

