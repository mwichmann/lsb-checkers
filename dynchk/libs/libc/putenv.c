// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef putenv
static int(*funcptr) (char * ) = 0;

int putenv (char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "putenv");
	validate_Rdaddress( arg0, "putenv - arg0");
	validate_NULL_TYPETYPE(  arg0, "putenv - arg0");
	return funcptr(arg0);
}

int __lsb_putenv (char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "putenv");
	return funcptr(arg0);
}

