// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(void) = 0;

int pause(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pause");
	validate_NULL_TYPETYPE(arg0, "pause");
	return funcptr(arg0);
}

int lsb_pause(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "pause");
	return funcptr(arg0);
}

