// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdio.h>
#undef tmpnam
static char *(*funcptr) (char * ) = 0;

char * tmpnam (char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tmpnam");
	validate_Rdaddress( arg0, "tmpnam - arg0");
	validate_NULL_TYPETYPE(  arg0, "tmpnam - arg0");
	return funcptr(arg0);
}

char * __lsb_tmpnam (char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tmpnam");
	return funcptr(arg0);
}

