// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef isinf
static int(*funcptr) (double ) = 0;

int isinf (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "isinf");
	validate_NULL_TYPETYPE(  arg0, "isinf - arg0");
	return funcptr(arg0);
}

int __lsb_isinf (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "isinf");
	return funcptr(arg0);
}

