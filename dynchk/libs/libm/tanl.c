// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef tanl
static long double(*funcptr) (long double ) = 0;

long double tanl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tanl");
	validate_NULL_TYPETYPE(  arg0, "tanl - arg0");
	return funcptr(arg0);
}

long double __lsb_tanl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tanl");
	return funcptr(arg0);
}

