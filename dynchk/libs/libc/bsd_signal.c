// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <signal.h>
static int(*funcptr)(int, sighandler_t) = 0;

sighandler_t bsd_signal(int arg0, sighandler_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "bsd_signal");
	validate_NULL_TYPETYPE(arg0, "bsd_signal");
	validate_NULL_TYPETYPE(arg1, "bsd_signal");
	return funcptr(arg0, arg1);
}

sighandler_t lsb_bsd_signal(int arg0, sighandler_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "bsd_signal");
	return funcptr(arg0, arg1);
}

