// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(GLshort *) = 0;

void glColor4sv(GLshort * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4sv");
	validate_NULL_TYPETYPE(arg0, "glColor4sv");
	return funcptr(arg0);
}

void lsb_glColor4sv(GLshort * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "glColor4sv");
	return funcptr(arg0);
}

