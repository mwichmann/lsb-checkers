// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef j1f
static float(*funcptr) (float ) = 0;

float j1f (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "j1f");
	validate_NULL_TYPETYPE(arg0, "j1f");
	return funcptr(arg0);
}

float lsb_j1f (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "j1f");
	return funcptr(arg0);
}

