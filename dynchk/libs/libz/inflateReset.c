// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <zlib.h>
#undef inflateReset
static int(*funcptr) (z_streamp ) = 0;

int inflateReset (z_streamp arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "inflateReset");
	validate_NULL_TYPETYPE(arg0, "inflateReset");
	return funcptr(arg0);
}

int lsb_inflateReset (z_streamp arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "inflateReset");
	return funcptr(arg0);
}

