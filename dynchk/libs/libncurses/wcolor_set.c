// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(WINDOW *, short, void *) = 0;

int wcolor_set(WINDOW * arg0, short arg1, void * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcolor_set");
	validate_NULL_TYPETYPE(arg0, "wcolor_set");
	validate_NULL_TYPETYPE(arg1, "wcolor_set");
	validate_NULL_TYPETYPE(arg2, "wcolor_set");
	return funcptr(arg0, arg1, arg2);
}

int lsb_wcolor_set(WINDOW * arg0, short arg1, void * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "wcolor_set");
	return funcptr(arg0, arg1, arg2);
}

