// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef strtod
static double(*funcptr) (const char * , char * * ) = 0;

double strtod (const char * arg0 , char * * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strtod");
	validate_NULL_TYPETYPE(arg0, "strtod");
	validate_NULL_TYPETYPE(arg1, "strtod");
	return funcptr(arg0, arg1);
}

double lsb_strtod (const char * arg0 , char * * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strtod");
	return funcptr(arg0, arg1);
}

