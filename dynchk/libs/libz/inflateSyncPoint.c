// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <zlib.h>
#undef inflateSyncPoint
static int(*funcptr) (z_streamp ) = 0;

int inflateSyncPoint (z_streamp arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "inflateSyncPoint");
	validate_NULL_TYPETYPE(  arg0, "inflateSyncPoint - arg0");
	return funcptr(arg0);
}

int __lsb_inflateSyncPoint (z_streamp arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "inflateSyncPoint");
	return funcptr(arg0);
}

