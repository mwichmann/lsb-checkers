// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef strtold
static long double(*funcptr) (const char * , char * * ) = 0;

long double strtold (const char * arg0 , char * * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strtold");
	validate_NULL_TYPETYPE(arg0, "strtold");
	validate_NULL_TYPETYPE(arg1, "strtold");
	return funcptr(arg0, arg1);
}

long double lsb_strtold (const char * arg0 , char * * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strtold");
	return funcptr(arg0, arg1);
}

