// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static long(*funcptr)() = 0;

long lrand48()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lrand48");
	return funcptr();
}

long lsb_lrand48()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "lrand48");
	return funcptr();
}

