// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef fabs
static double(*funcptr) (double ) = 0;

double fabs (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fabs");
	validate_NULL_TYPETYPE(arg0, "fabs");
	return funcptr(arg0);
}

double lsb_fabs (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fabs");
	return funcptr(arg0);
}

