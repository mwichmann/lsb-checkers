// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef fmod
static double(*funcptr) (double , double ) = 0;

double fmod (double arg0 , double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fmod");
	validate_NULL_TYPETYPE(arg0, "fmod");
	validate_NULL_TYPETYPE(arg1, "fmod");
	return funcptr(arg0, arg1);
}

double lsb_fmod (double arg0 , double arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fmod");
	return funcptr(arg0, arg1);
}

