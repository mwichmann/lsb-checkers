// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef exp
static double(*funcptr) (double ) = 0;

double exp (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "exp");
	validate_NULL_TYPETYPE(arg0, "exp");
	return funcptr(arg0);
}

double lsb_exp (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "exp");
	return funcptr(arg0);
}

