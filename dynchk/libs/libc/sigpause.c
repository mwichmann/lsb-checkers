// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <signal.h>
#undef sigpause
static int(*funcptr) (int ) = 0;

int sigpause (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigpause");
	validate_NULL_TYPETYPE(  arg0, "sigpause - arg0");
	return funcptr(arg0);
}

int __lsb_sigpause (int arg0 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigpause");
	return funcptr(arg0);
}

