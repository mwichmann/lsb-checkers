// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLint *) = 0;

void glColor3iv(GLint * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor3iv");
	validate_NULL_TYPETYPE(arg0, "glColor3iv");
	return funcptr(arg0);
}

void lsb_glColor3iv(GLint * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor3iv");
	return funcptr(arg0);
}

