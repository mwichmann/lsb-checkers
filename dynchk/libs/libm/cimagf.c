// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#include <complex.h>
#undef cimagf
static float(*funcptr) (float complex ) = 0;

float cimagf (float complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cimagf");
	validate_NULL_TYPETYPE(arg0, "cimagf");
	return funcptr(arg0);
}

float lsb_cimagf (float complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cimagf");
	return funcptr(arg0);
}

