// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <zlib.h>
#undef deflateReset
static int(*funcptr) (z_streamp ) = 0;

int deflateReset (z_streamp arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "deflateReset");
	validate_NULL_TYPETYPE(  arg0, "deflateReset - arg0");
	return funcptr(arg0);
}

int __lsb_deflateReset (z_streamp arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "deflateReset");
	return funcptr(arg0);
}

