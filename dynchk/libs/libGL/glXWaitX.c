// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(void) = 0;

void glXWaitX(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXWaitX");
	validate_NULL_TYPETYPE(arg0, "glXWaitX");
	return funcptr(arg0);
}

void lsb_glXWaitX(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glXWaitX");
	return funcptr(arg0);
}

