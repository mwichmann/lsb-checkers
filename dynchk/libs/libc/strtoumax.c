// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef strtoumax
static uintmax_t(*funcptr) (const char * , char * * , int ) = 0;

uintmax_t strtoumax (const char * arg0 , char * * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strtoumax");
	validate_NULL_TYPETYPE(arg0, "strtoumax");
	validate_NULL_TYPETYPE(arg1, "strtoumax");
	validate_NULL_TYPETYPE(arg2, "strtoumax");
	return funcptr(arg0, arg1, arg2);
}

uintmax_t lsb_strtoumax (const char * arg0 , char * * arg1 , int arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "strtoumax");
	return funcptr(arg0, arg1, arg2);
}

