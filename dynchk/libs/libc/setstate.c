// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <stdlib.h>
#undef setstate
static char *(*funcptr) (char * ) = 0;

char * setstate (char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setstate");
	validate_Rdaddress( arg0, "setstate - arg0");
	validate_NULL_TYPETYPE(  arg0, "setstate - arg0");
	return funcptr(arg0);
}

char * __lsb_setstate (char * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setstate");
	return funcptr(arg0);
}

