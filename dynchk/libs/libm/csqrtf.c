// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef csqrtf
static float(*funcptr) (float ) = 0;

float csqrtf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "csqrtf");
	validate_NULL_TYPETYPE(arg0, "csqrtf");
	return funcptr(arg0);
}

float lsb_csqrtf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "csqrtf");
	return funcptr(arg0);
}

