// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef tgamma
static double(*funcptr) (double ) = 0;

double tgamma (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tgamma");
	validate_NULL_TYPETYPE(arg0, "tgamma");
	return funcptr(arg0);
}

double lsb_tgamma (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tgamma");
	return funcptr(arg0);
}

