// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <complex.h>
#undef casinhf
static float complex(*funcptr) (float complex ) = 0;

float complex casinhf (float complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "casinhf");
	validate_NULL_TYPETYPE(  arg0, "casinhf - arg0");
	return funcptr(arg0);
}

float complex __lsb_casinhf (float complex arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "casinhf");
	return funcptr(arg0);
}

