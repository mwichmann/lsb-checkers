// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef cargl
static long double(*funcptr) (long double ) = 0;

long double cargl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cargl");
	validate_NULL_TYPETYPE(arg0, "cargl");
	return funcptr(arg0);
}

long double lsb_cargl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cargl");
	return funcptr(arg0);
}

