// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef scalbl
static long double(*funcptr) (long double , long double ) = 0;

long double scalbl (long double arg0 , long double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "scalbl");
	validate_NULL_TYPETYPE(  arg0, "scalbl - arg0");
	validate_NULL_TYPETYPE(  arg1, "scalbl - arg1");
	return funcptr(arg0, arg1);
}

long double __lsb_scalbl (long double arg0 , long double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "scalbl");
	return funcptr(arg0, arg1);
}

