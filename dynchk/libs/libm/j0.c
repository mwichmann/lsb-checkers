// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef j0
static double(*funcptr) (double ) = 0;

double j0 (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "j0");
	validate_NULL_TYPETYPE(arg0, "j0");
	return funcptr(arg0);
}

double lsb_j0 (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "j0");
	return funcptr(arg0);
}

