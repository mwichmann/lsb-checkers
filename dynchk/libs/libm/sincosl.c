// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef sincosl
static void(*funcptr) (long double , long double * , long double * ) = 0;

void sincosl (long double arg0 , long double * arg1 , long double * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sincosl");
	validate_NULL_TYPETYPE(  arg0, "sincosl - arg0");
	validate_Rdaddress( arg1, "sincosl - arg1");
	validate_NULL_TYPETYPE(  arg1, "sincosl - arg1");
	validate_Rdaddress( arg2, "sincosl - arg2");
	validate_NULL_TYPETYPE(  arg2, "sincosl - arg2");
	funcptr(arg0, arg1, arg2);
}

void __lsb_sincosl (long double arg0 , long double * arg1 , long double * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sincosl");
	funcptr(arg0, arg1, arg2);
}

