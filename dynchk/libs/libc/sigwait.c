// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(const sigset_t *, int *) = 0;

int sigwait(const sigset_t * arg0, int * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigwait");
	validate_NULL_TYPETYPE(arg0, "sigwait");
	validate_NULL_TYPETYPE(arg1, "sigwait");
	return funcptr(arg0, arg1);
}

int lsb_sigwait(const sigset_t * arg0, int * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigwait");
	return funcptr(arg0, arg1);
}

