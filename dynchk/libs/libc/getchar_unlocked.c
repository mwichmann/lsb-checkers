// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)() = 0;

int getchar_unlocked()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getchar_unlocked");
	return funcptr();
}

int lsb_getchar_unlocked()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getchar_unlocked");
	return funcptr();
}

