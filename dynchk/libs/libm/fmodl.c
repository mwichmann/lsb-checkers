// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef fmodl
static long double(*funcptr) (long double , long double ) = 0;

long double fmodl (long double arg0 , long double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fmodl");
	validate_NULL_TYPETYPE(arg0, "fmodl");
	validate_NULL_TYPETYPE(arg1, "fmodl");
	return funcptr(arg0, arg1);
}

long double lsb_fmodl (long double arg0 , long double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fmodl");
	return funcptr(arg0, arg1);
}

