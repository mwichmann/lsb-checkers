// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef cabsf
static float(*funcptr) (float ) = 0;

float cabsf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cabsf");
	validate_NULL_TYPETYPE(arg0, "cabsf");
	return funcptr(arg0);
}

float lsb_cabsf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "cabsf");
	return funcptr(arg0);
}

