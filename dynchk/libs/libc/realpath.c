// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef realpath
static char *(*funcptr) (const char * , char * ) = 0;

char * realpath (const char * arg0 , char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "realpath");
	validate_Rdaddress( arg0, "realpath - arg0");
	validate_NULL_TYPETYPE(  arg0, "realpath - arg0");
	validate_Rdaddress( arg1, "realpath - arg1");
	validate_NULL_TYPETYPE(  arg1, "realpath - arg1");
	return funcptr(arg0, arg1);
}

char * __lsb_realpath (const char * arg0 , char * arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "realpath");
	return funcptr(arg0, arg1);
}

