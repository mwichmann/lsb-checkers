// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef roundf
static float(*funcptr) (float ) = 0;

float roundf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "roundf");
	validate_NULL_TYPETYPE(  arg0, "roundf - arg0");
	return funcptr(arg0);
}

float __lsb_roundf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "roundf");
	return funcptr(arg0);
}

