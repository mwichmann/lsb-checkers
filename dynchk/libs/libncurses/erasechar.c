// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static char(*funcptr)() = 0;

char erasechar()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "erasechar");
	return funcptr();
}

char lsb_erasechar()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "erasechar");
	return funcptr();
}

