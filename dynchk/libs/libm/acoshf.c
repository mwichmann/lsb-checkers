// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef acoshf
static float(*funcptr) (float ) = 0;

float acoshf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "acoshf");
	validate_NULL_TYPETYPE(  arg0, "acoshf - arg0");
	return funcptr(arg0);
}

float __lsb_acoshf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "acoshf");
	return funcptr(arg0);
}

