// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <signal.h>
#undef sigdelset
static int(*funcptr) (sigset_t * , int ) = 0;

int sigdelset (sigset_t * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigdelset");
	validate_Rdaddress( arg0, "sigdelset - arg0");
	validate_NULL_TYPETYPE(  arg0, "sigdelset - arg0");
	validate_NULL_TYPETYPE(  arg1, "sigdelset - arg1");
	return funcptr(arg0, arg1);
}

int __lsb_sigdelset (sigset_t * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigdelset");
	return funcptr(arg0, arg1);
}

