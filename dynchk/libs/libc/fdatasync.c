// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef fdatasync
static int(*funcptr) (int ) = 0;

int fdatasync (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fdatasync");
	validate_NULL_TYPETYPE(arg0, "fdatasync");
	return funcptr(arg0);
}

int lsb_fdatasync (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fdatasync");
	return funcptr(arg0);
}

