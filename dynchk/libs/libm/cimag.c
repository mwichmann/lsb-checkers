// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <complex.h>
#undef cimag
static double(*funcptr) (double complex ) = 0;

double cimag (double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cimag");
	validate_NULL_TYPETYPE(  arg0, "cimag - arg0");
	return funcptr(arg0);
}

double __lsb_cimag (double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cimag");
	return funcptr(arg0);
}

