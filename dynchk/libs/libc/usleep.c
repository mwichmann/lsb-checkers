// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static void(*funcptr)(unsigned long) = 0;

void usleep(unsigned long arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "usleep");
	validate_NULL_TYPETYPE(arg0, "usleep");
	funcptr(arg0);
}

void lsb_usleep(unsigned long arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "usleep");
	funcptr(arg0);
}

