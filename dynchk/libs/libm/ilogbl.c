// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef ilogbl
static int(*funcptr) (long double ) = 0;

int ilogbl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ilogbl");
	validate_NULL_TYPETYPE(  arg0, "ilogbl - arg0");
	return funcptr(arg0);
}

int __lsb_ilogbl (long double arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ilogbl");
	return funcptr(arg0);
}

