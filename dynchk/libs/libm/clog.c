// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static double(*funcptr)() = 0;

double clog()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clog");
	return funcptr();
}

double lsb_clog()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "clog");
	return funcptr();
}

