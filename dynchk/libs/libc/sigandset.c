// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <signal.h>
#undef sigandset
static int(*funcptr) (sigset_t * , const sigset_t * , const sigset_t * ) = 0;

int sigandset (sigset_t * arg0 , const sigset_t * arg1 , const sigset_t * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigandset");
	validate_NULL_TYPETYPE(arg0, "sigandset");
	validate_NULL_TYPETYPE(arg1, "sigandset");
	validate_NULL_TYPETYPE(arg2, "sigandset");
	return funcptr(arg0, arg1, arg2);
}

int lsb_sigandset (sigset_t * arg0 , const sigset_t * arg1 , const sigset_t * arg2 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigandset");
	return funcptr(arg0, arg1, arg2);
}

