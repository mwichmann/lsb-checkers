// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static void *(*funcptr)(void *) = 0;

void * setstate(void * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setstate");
	validate_NULL_TYPETYPE(arg0, "setstate");
	return funcptr(arg0);
}

void * lsb_setstate(void * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setstate");
	return funcptr(arg0);
}

