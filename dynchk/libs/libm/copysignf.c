// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static float(*funcptr)(float, float) = 0;

float copysignf(float arg0, float arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "copysignf");
	validate_NULL_TYPETYPE(arg0, "copysignf");
	validate_NULL_TYPETYPE(arg1, "copysignf");
	return funcptr(arg0, arg1);
}

float lsb_copysignf(float arg0, float arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "copysignf");
	return funcptr(arg0, arg1);
}

