// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)() = 0;

int delch()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "delch");
	return funcptr();
}

int lsb_delch()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "delch");
	return funcptr();
}

