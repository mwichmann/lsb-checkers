// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int, itimerval *, itimerval *) = 0;

int setitimer(int arg0, itimerval * arg1, itimerval * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setitimer");
	validate_NULL_TYPETYPE(arg0, "setitimer");
	validate_NULL_TYPETYPE(arg1, "setitimer");
	validate_NULL_TYPETYPE(arg2, "setitimer");
	return funcptr(arg0, arg1, arg2);
}

int lsb_setitimer(int arg0, itimerval * arg1, itimerval * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setitimer");
	return funcptr(arg0, arg1, arg2);
}

