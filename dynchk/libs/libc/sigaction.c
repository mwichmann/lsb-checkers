// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int, const sigaction *, sigaction *) = 0;

int sigaction(int arg0, const sigaction * arg1, sigaction * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigaction");
	validate_NULL_TYPETYPE(arg0, "sigaction");
	validate_NULL_TYPETYPE(arg1, "sigaction");
	validate_NULL_TYPETYPE(arg2, "sigaction");
	return funcptr(arg0, arg1, arg2);
}

int lsb_sigaction(int arg0, const sigaction * arg1, sigaction * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigaction");
	return funcptr(arg0, arg1, arg2);
}

