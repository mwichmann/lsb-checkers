// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static float(*funcptr)(float) = 0;

float significandf(float arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "significandf");
	validate_NULL_TYPETYPE(arg0, "significandf");
	return funcptr(arg0);
}

float lsb_significandf(float arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "significandf");
	return funcptr(arg0);
}

