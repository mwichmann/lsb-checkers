// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef ctanl
static long double(*funcptr) (long double ) = 0;

long double ctanl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ctanl");
	validate_NULL_TYPETYPE(arg0, "ctanl");
	return funcptr(arg0);
}

long double lsb_ctanl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ctanl");
	return funcptr(arg0);
}

