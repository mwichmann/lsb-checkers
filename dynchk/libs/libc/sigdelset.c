// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(sigset_t *, int) = 0;

int sigdelset(sigset_t * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigdelset");
	validate_NULL_TYPETYPE(arg0, "sigdelset");
	validate_NULL_TYPETYPE(arg1, "sigdelset");
	return funcptr(arg0, arg1);
}

int lsb_sigdelset(sigset_t * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigdelset");
	return funcptr(arg0, arg1);
}

