// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <curses.h>
static int(*funcptr)(attr_t, void *) = 0;

int attr_on(attr_t arg0, void * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "attr_on");
	validate_NULL_TYPETYPE(arg0, "attr_on");
	validate_NULL_TYPETYPE(arg1, "attr_on");
	return funcptr(arg0, arg1);
}

int lsb_attr_on(attr_t arg0, void * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "attr_on");
	return funcptr(arg0, arg1);
}

