// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef nan
static double(*funcptr) (const char * ) = 0;

double nan (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nan");
	validate_NULL_TYPETYPE(arg0, "nan");
	return funcptr(arg0);
}

double lsb_nan (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nan");
	return funcptr(arg0);
}

