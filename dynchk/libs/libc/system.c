// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef system
static int(*funcptr) (const char * ) = 0;

int system (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "system");
	validate_Rdaddress( arg0, "system - arg0");
	validate_NULL_TYPETYPE(  arg0, "system - arg0");
	return funcptr(arg0);
}

int __lsb_system (const char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "system");
	return funcptr(arg0);
}

