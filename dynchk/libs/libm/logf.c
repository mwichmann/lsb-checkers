// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef logf
static float(*funcptr) (float ) = 0;

float logf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "logf");
	validate_NULL_TYPETYPE(arg0, "logf");
	return funcptr(arg0);
}

float lsb_logf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "logf");
	return funcptr(arg0);
}

