// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef atol
static long(*funcptr) (const char * ) = 0;

long atol (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atol");
	validate_Rdaddress( arg0, "atol - arg0");
	validate_NULL_TYPETYPE(  arg0, "atol - arg0");
	return funcptr(arg0);
}

long __lsb_atol (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "atol");
	return funcptr(arg0);
}

