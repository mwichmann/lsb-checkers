// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <unistd.h>
#undef nice
static int(*funcptr) (int ) = 0;

int nice (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nice");
	validate_NULL_TYPETYPE(  arg0, "nice - arg0");
	return funcptr(arg0);
}

int __lsb_nice (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "nice");
	return funcptr(arg0);
}

