// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLshort *) = 0;

void glRasterPos4sv(GLshort * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRasterPos4sv");
	validate_NULL_TYPETYPE(arg0, "glRasterPos4sv");
	return funcptr(arg0);
}

void lsb_glRasterPos4sv(GLshort * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glRasterPos4sv");
	return funcptr(arg0);
}

