// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static float(*funcptr)(float) = 0;

float nearbyintf(float arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nearbyintf");
	validate_NULL_TYPETYPE(arg0, "nearbyintf");
	return funcptr(arg0);
}

float lsb_nearbyintf(float arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nearbyintf");
	return funcptr(arg0);
}

