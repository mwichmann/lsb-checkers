// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef ldexpl
static long double(*funcptr) (long double , int ) = 0;

long double ldexpl (long double arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ldexpl");
	validate_NULL_TYPETYPE(arg0, "ldexpl");
	validate_NULL_TYPETYPE(arg1, "ldexpl");
	return funcptr(arg0, arg1);
}

long double lsb_ldexpl (long double arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ldexpl");
	return funcptr(arg0, arg1);
}

