// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef ceilf
static float(*funcptr) (float ) = 0;

float ceilf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ceilf");
	validate_NULL_TYPETYPE(  arg0, "ceilf - arg0");
	return funcptr(arg0);
}

float __lsb_ceilf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ceilf");
	return funcptr(arg0);
}

