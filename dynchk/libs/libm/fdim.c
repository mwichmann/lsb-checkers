// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef fdim
static double(*funcptr) (double , double ) = 0;

double fdim (double arg0 , double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fdim");
	validate_NULL_TYPETYPE(  arg0, "fdim - arg0");
	validate_NULL_TYPETYPE(  arg1, "fdim - arg1");
	return funcptr(arg0, arg1);
}

double __lsb_fdim (double arg0 , double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fdim");
	return funcptr(arg0, arg1);
}

