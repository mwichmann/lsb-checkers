// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef sincosf
static void(*funcptr) (float , float * , float * ) = 0;

void sincosf (float arg0 , float * arg1 , float * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sincosf");
	validate_NULL_TYPETYPE(arg0, "sincosf");
	validate_NULL_TYPETYPE(arg1, "sincosf");
	validate_NULL_TYPETYPE(arg2, "sincosf");
	funcptr(arg0, arg1, arg2);
}

void lsb_sincosf (float arg0 , float * arg1 , float * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sincosf");
	funcptr(arg0, arg1, arg2);
}

