// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef crealf
static float(*funcptr) (float ) = 0;

float crealf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "crealf");
	validate_NULL_TYPETYPE(arg0, "crealf");
	return funcptr(arg0);
}

float lsb_crealf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "crealf");
	return funcptr(arg0);
}

