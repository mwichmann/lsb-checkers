// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef asinhf
static float(*funcptr) (float ) = 0;

float asinhf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "asinhf");
	validate_NULL_TYPETYPE(arg0, "asinhf");
	return funcptr(arg0);
}

float lsb_asinhf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "asinhf");
	return funcptr(arg0);
}

