// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef nexttoward
static double(*funcptr) (double , long double ) = 0;

double nexttoward (double arg0 , long double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nexttoward");
	validate_NULL_TYPETYPE(arg0, "nexttoward");
	validate_NULL_TYPETYPE(arg1, "nexttoward");
	return funcptr(arg0, arg1);
}

double lsb_nexttoward (double arg0 , long double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nexttoward");
	return funcptr(arg0, arg1);
}

