// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(void) = 0;

void svc_run(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "svc_run");
	validate_NULL_TYPETYPE(arg0, "svc_run");
	return funcptr(arg0);
}

void lsb_svc_run(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "svc_run");
	return funcptr(arg0);
}

