// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static void(*funcptr)() = 0;

void setpwent()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setpwent");
	funcptr();
}

void lsb_setpwent()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setpwent");
	funcptr();
}

