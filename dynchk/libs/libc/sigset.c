// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <signal.h>
#undef sigset
static sighandler_t(*funcptr) (int , sighandler_t ) = 0;

sighandler_t sigset (int arg0 , sighandler_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigset");
	validate_NULL_TYPETYPE(  arg0, "sigset - arg0");
	validate_NULL_TYPETYPE(  arg1, "sigset - arg1");
	return funcptr(arg0, arg1);
}

sighandler_t __lsb_sigset (int arg0 , sighandler_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigset");
	return funcptr(arg0, arg1);
}

