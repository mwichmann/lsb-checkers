// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static void(*funcptr)(void) = 0;

void endnetent(void)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "endnetent");
	funcptr();
}

void lsb_endnetent(void)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "endnetent");
	funcptr();
}

