// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef csqrt
static double(*funcptr) () = 0;

double csqrt ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "csqrt");
	return funcptr();
}

double lsb_csqrt ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "csqrt");
	return funcptr();
}

