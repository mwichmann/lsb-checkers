// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <complex.h>
#undef cexpl
static long double complex(*funcptr) (long double complex ) = 0;

long double complex cexpl (long double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cexpl");
	validate_NULL_TYPETYPE(  arg0, "cexpl - arg0");
	return funcptr(arg0);
}

long double complex __lsb_cexpl (long double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cexpl");
	return funcptr(arg0);
}

