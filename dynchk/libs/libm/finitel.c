// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef finitel
static int(*funcptr) (long double ) = 0;

int finitel (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "finitel");
	validate_NULL_TYPETYPE(  arg0, "finitel - arg0");
	return funcptr(arg0);
}

int __lsb_finitel (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "finitel");
	return funcptr(arg0);
}

