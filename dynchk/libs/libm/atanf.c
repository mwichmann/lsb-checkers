// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef atanf
static float(*funcptr) (float ) = 0;

float atanf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atanf");
	validate_NULL_TYPETYPE(arg0, "atanf");
	return funcptr(arg0);
}

float lsb_atanf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atanf");
	return funcptr(arg0);
}

