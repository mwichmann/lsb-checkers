// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef erfcf
static float(*funcptr) (float ) = 0;

float erfcf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "erfcf");
	validate_NULL_TYPETYPE(arg0, "erfcf");
	return funcptr(arg0);
}

float lsb_erfcf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "erfcf");
	return funcptr(arg0);
}

