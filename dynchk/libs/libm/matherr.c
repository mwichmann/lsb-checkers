// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <math.h>
#undef matherr
static int(*funcptr) (struct exception * ) = 0;

int matherr (struct exception * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "matherr");
	validate_Rdaddress( arg0, "matherr - arg0");
	validate_NULL_TYPETYPE(  arg0, "matherr - arg0");
	return funcptr(arg0);
}

int __lsb_matherr (struct exception * arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "matherr");
	return funcptr(arg0);
}

