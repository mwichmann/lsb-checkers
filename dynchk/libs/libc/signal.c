// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <signal.h>
static int(*funcptr)(int, sighandler_t) = 0;

sighandler_t signal(int arg0, sighandler_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "signal");
	validate_NULL_TYPETYPE(arg0, "signal");
	validate_NULL_TYPETYPE(arg1, "signal");
	return funcptr(arg0, arg1);
}

sighandler_t lsb_signal(int arg0, sighandler_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "signal");
	return funcptr(arg0, arg1);
}

