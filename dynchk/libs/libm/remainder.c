// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef remainder
static double(*funcptr) (double , double ) = 0;

double remainder (double arg0 , double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "remainder");
	validate_NULL_TYPETYPE(arg0, "remainder");
	validate_NULL_TYPETYPE(arg1, "remainder");
	return funcptr(arg0, arg1);
}

double lsb_remainder (double arg0 , double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "remainder");
	return funcptr(arg0, arg1);
}

