// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static float(*funcptr)(float) = 0;

float conjf(float arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "conjf");
	validate_NULL_TYPETYPE(arg0, "conjf");
	return funcptr(arg0);
}

float lsb_conjf(float arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "conjf");
	return funcptr(arg0);
}

