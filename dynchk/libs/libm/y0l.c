// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef y0l
static long double(*funcptr) (long double ) = 0;

long double y0l (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "y0l");
	validate_NULL_TYPETYPE(arg0, "y0l");
	return funcptr(arg0);
}

long double lsb_y0l (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "y0l");
	return funcptr(arg0);
}

