// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(void) = 0;

void glLoadIdentity(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glLoadIdentity");
	validate_NULL_TYPETYPE(arg0, "glLoadIdentity");
	return funcptr(arg0);
}

void lsb_glLoadIdentity(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glLoadIdentity");
	return funcptr(arg0);
}

