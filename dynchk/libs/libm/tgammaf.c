// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef tgammaf
static float(*funcptr) (float ) = 0;

float tgammaf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tgammaf");
	validate_NULL_TYPETYPE(arg0, "tgammaf");
	return funcptr(arg0);
}

float lsb_tgammaf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tgammaf");
	return funcptr(arg0);
}

