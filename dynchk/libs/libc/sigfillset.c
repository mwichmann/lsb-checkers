// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(sigset_t *) = 0;

int sigfillset(sigset_t * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigfillset");
	validate_NULL_TYPETYPE(arg0, "sigfillset");
	return funcptr(arg0);
}

int lsb_sigfillset(sigset_t * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigfillset");
	return funcptr(arg0);
}

