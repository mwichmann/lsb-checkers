// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef erff
static float(*funcptr) (float ) = 0;

float erff (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "erff");
	validate_NULL_TYPETYPE(arg0, "erff");
	return funcptr(arg0);
}

float lsb_erff (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "erff");
	return funcptr(arg0);
}

