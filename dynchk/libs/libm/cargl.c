// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <complex.h>
#undef cargl
static long double(*funcptr) (long double complex ) = 0;

long double cargl (long double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cargl");
	validate_NULL_TYPETYPE(  arg0, "cargl - arg0");
	return funcptr(arg0);
}

long double __lsb_cargl (long double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cargl");
	return funcptr(arg0);
}

