// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(long double) = 0;

int ilogbl(long double arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ilogbl");
	validate_NULL_TYPETYPE(arg0, "ilogbl");
	return funcptr(arg0);
}

int lsb_ilogbl(long double arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ilogbl");
	return funcptr(arg0);
}

