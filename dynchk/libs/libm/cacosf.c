// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static float(*funcptr)(float) = 0;

float cacosf(float arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cacosf");
	validate_NULL_TYPETYPE(arg0, "cacosf");
	return funcptr(arg0);
}

float lsb_cacosf(float arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cacosf");
	return funcptr(arg0);
}

