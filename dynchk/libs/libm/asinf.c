// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef asinf
static float(*funcptr) (float ) = 0;

float asinf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "asinf");
	validate_NULL_TYPETYPE(arg0, "asinf");
	return funcptr(arg0);
}

float lsb_asinf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "asinf");
	return funcptr(arg0);
}

