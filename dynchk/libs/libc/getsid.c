// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
static int(*funcptr)(pid_t) = 0;

pid_t getsid(pid_t arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getsid");
	validate_NULL_TYPETYPE(arg0, "getsid");
	return funcptr(arg0);
}

pid_t lsb_getsid(pid_t arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getsid");
	return funcptr(arg0);
}

