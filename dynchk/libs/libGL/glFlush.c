// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(void) = 0;

void glFlush(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glFlush");
	validate_NULL_TYPETYPE(arg0, "glFlush");
	return funcptr(arg0);
}

void lsb_glFlush(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glFlush");
	return funcptr(arg0);
}

