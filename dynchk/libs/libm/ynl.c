// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef ynl
static long double(*funcptr) (int , long double ) = 0;

long double ynl (int arg0 , long double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ynl");
	validate_NULL_TYPETYPE(arg0, "ynl");
	validate_NULL_TYPETYPE(arg1, "ynl");
	return funcptr(arg0, arg1);
}

long double lsb_ynl (int arg0 , long double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ynl");
	return funcptr(arg0, arg1);
}

