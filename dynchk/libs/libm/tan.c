// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef tan
static double(*funcptr) (double ) = 0;

double tan (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tan");
	validate_NULL_TYPETYPE(  arg0, "tan - arg0");
	return funcptr(arg0);
}

double __lsb_tan (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tan");
	return funcptr(arg0);
}

