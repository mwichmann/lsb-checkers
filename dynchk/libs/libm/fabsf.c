// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef fabsf
static float(*funcptr) (float ) = 0;

float fabsf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fabsf");
	validate_NULL_TYPETYPE(arg0, "fabsf");
	return funcptr(arg0);
}

float lsb_fabsf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fabsf");
	return funcptr(arg0);
}

