// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <complex.h>
#undef ctanhl
static long double complex(*funcptr) (long double complex ) = 0;

long double complex ctanhl (long double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ctanhl");
	validate_NULL_TYPETYPE(  arg0, "ctanhl - arg0");
	return funcptr(arg0);
}

long double complex __lsb_ctanhl (long double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ctanhl");
	return funcptr(arg0);
}

