// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)() = 0;

Boolean XtIsConstraint()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtIsConstraint");
	return funcptr();
}

Boolean lsb_XtIsConstraint()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtIsConstraint");
	return funcptr();
}

