// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static float(*funcptr)(float) = 0;

float floorf(float arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "floorf");
	validate_NULL_TYPETYPE(arg0, "floorf");
	return funcptr(arg0);
}

float lsb_floorf(float arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "floorf");
	return funcptr(arg0);
}

