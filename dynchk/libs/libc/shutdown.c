// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int, int) = 0;

int shutdown(int arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "shutdown");
	validate_NULL_TYPETYPE(arg0, "shutdown");
	validate_NULL_TYPETYPE(arg1, "shutdown");
	return funcptr(arg0, arg1);
}

int lsb_shutdown(int arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "shutdown");
	return funcptr(arg0, arg1);
}

