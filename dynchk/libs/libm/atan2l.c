// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef atan2l
static long double(*funcptr) (long double , long double ) = 0;

long double atan2l (long double arg0 , long double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atan2l");
	validate_NULL_TYPETYPE(arg0, "atan2l");
	validate_NULL_TYPETYPE(arg1, "atan2l");
	return funcptr(arg0, arg1);
}

long double lsb_atan2l (long double arg0 , long double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atan2l");
	return funcptr(arg0, arg1);
}

