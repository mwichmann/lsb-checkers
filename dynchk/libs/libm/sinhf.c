// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef sinhf
static float(*funcptr) (float ) = 0;

float sinhf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sinhf");
	validate_NULL_TYPETYPE(  arg0, "sinhf - arg0");
	return funcptr(arg0);
}

float __lsb_sinhf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sinhf");
	return funcptr(arg0);
}

