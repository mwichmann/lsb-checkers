// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef csinhl
static long double(*funcptr) (long double ) = 0;

long double csinhl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "csinhl");
	validate_NULL_TYPETYPE(arg0, "csinhl");
	return funcptr(arg0);
}

long double lsb_csinhl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "csinhl");
	return funcptr(arg0);
}

