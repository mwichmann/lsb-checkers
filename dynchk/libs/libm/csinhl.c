// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <complex.h>
#undef csinhl
static long double complex(*funcptr) (long double complex ) = 0;

long double complex csinhl (long double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "csinhl");
	validate_NULL_TYPETYPE(  arg0, "csinhl - arg0");
	return funcptr(arg0);
}

long double complex __lsb_csinhl (long double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "csinhl");
	return funcptr(arg0);
}

