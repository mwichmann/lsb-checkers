// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef sqrtf
static float(*funcptr) (float ) = 0;

float sqrtf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sqrtf");
	validate_NULL_TYPETYPE(arg0, "sqrtf");
	return funcptr(arg0);
}

float lsb_sqrtf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sqrtf");
	return funcptr(arg0);
}

