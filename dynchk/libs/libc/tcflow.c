// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int, int) = 0;

int tcflow(int arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tcflow");
	validate_NULL_TYPETYPE(arg0, "tcflow");
	validate_NULL_TYPETYPE(arg1, "tcflow");
	return funcptr(arg0, arg1);
}

int lsb_tcflow(int arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tcflow");
	return funcptr(arg0, arg1);
}

