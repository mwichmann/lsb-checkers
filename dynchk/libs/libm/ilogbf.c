// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef ilogbf
static int(*funcptr) (float ) = 0;

int ilogbf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ilogbf");
	validate_NULL_TYPETYPE(  arg0, "ilogbf - arg0");
	return funcptr(arg0);
}

int __lsb_ilogbf (float arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ilogbf");
	return funcptr(arg0);
}

