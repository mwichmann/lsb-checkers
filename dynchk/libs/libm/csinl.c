// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef csinl
static long double(*funcptr) (long double ) = 0;

long double csinl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "csinl");
	validate_NULL_TYPETYPE(arg0, "csinl");
	return funcptr(arg0);
}

long double lsb_csinl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "csinl");
	return funcptr(arg0);
}

