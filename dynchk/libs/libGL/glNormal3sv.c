// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLshort *) = 0;

void glNormal3sv(GLshort * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glNormal3sv");
	validate_NULL_TYPETYPE(arg0, "glNormal3sv");
	return funcptr(arg0);
}

void lsb_glNormal3sv(GLshort * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glNormal3sv");
	return funcptr(arg0);
}

