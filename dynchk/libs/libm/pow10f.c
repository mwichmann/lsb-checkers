// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static float(*funcptr)(float) = 0;

float pow10f(float arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pow10f");
	validate_NULL_TYPETYPE(arg0, "pow10f");
	return funcptr(arg0);
}

float lsb_pow10f(float arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pow10f");
	return funcptr(arg0);
}

