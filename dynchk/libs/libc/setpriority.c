// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int, int, int) = 0;

int setpriority(int arg0, int arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setpriority");
	validate_NULL_TYPETYPE(arg0, "setpriority");
	validate_NULL_TYPETYPE(arg1, "setpriority");
	validate_NULL_TYPETYPE(arg2, "setpriority");
	return funcptr(arg0, arg1, arg2);
}

int lsb_setpriority(int arg0, int arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setpriority");
	return funcptr(arg0, arg1, arg2);
}

