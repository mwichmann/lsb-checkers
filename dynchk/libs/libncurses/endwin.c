// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)() = 0;

int endwin()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "endwin");
	return funcptr();
}

int lsb_endwin()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "endwin");
	return funcptr();
}

