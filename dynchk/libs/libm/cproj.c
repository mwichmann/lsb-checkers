// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <complex.h>
#undef cproj
static double complex(*funcptr) (double complex ) = 0;

double complex cproj (double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cproj");
	validate_NULL_TYPETYPE(  arg0, "cproj - arg0");
	return funcptr(arg0);
}

double complex __lsb_cproj (double complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cproj");
	return funcptr(arg0);
}

