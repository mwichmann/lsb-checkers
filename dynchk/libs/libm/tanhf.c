// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef tanhf
static float(*funcptr) (float ) = 0;

float tanhf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tanhf");
	validate_NULL_TYPETYPE(arg0, "tanhf");
	return funcptr(arg0);
}

float lsb_tanhf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tanhf");
	return funcptr(arg0);
}

