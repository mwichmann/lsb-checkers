// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <signal.h>
#undef sigrelse
static int(*funcptr) (int ) = 0;

int sigrelse (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigrelse");
	validate_NULL_TYPETYPE(  arg0, "sigrelse - arg0");
	return funcptr(arg0);
}

int __lsb_sigrelse (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigrelse");
	return funcptr(arg0);
}

