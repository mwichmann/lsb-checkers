// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int, sigset_t *, sigset_t *) = 0;

int sigprocmask(int arg0, sigset_t * arg1, sigset_t * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigprocmask");
	validate_NULL_TYPETYPE(arg0, "sigprocmask");
	validate_NULL_TYPETYPE(arg1, "sigprocmask");
	validate_NULL_TYPETYPE(arg2, "sigprocmask");
	return funcptr(arg0, arg1, arg2);
}

int lsb_sigprocmask(int arg0, sigset_t * arg1, sigset_t * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigprocmask");
	return funcptr(arg0, arg1, arg2);
}

