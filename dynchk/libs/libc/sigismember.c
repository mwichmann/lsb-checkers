// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <signal.h>
#undef sigismember
static int(*funcptr) (const sigset_t * , int ) = 0;

int sigismember (const sigset_t * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigismember");
	validate_Rdaddress( arg0, "sigismember - arg0");
	validate_NULL_TYPETYPE(  arg0, "sigismember - arg0");
	validate_NULL_TYPETYPE(  arg1, "sigismember - arg1");
	return funcptr(arg0, arg1);
}

int __lsb_sigismember (const sigset_t * arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "sigismember");
	return funcptr(arg0, arg1);
}

