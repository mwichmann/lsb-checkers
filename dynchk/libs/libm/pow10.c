// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef pow10
static double(*funcptr) (double ) = 0;

double pow10 (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pow10");
	validate_NULL_TYPETYPE(arg0, "pow10");
	return funcptr(arg0);
}

double lsb_pow10 (double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pow10");
	return funcptr(arg0);
}

