// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static long double(*funcptr)(long double) = 0;

long double expl(long double arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "expl");
	validate_NULL_TYPETYPE(arg0, "expl");
	return funcptr(arg0);
}

long double lsb_expl(long double arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "expl");
	return funcptr(arg0);
}

