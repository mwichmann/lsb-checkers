// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(const chtype) = 0;

int addch(const chtype arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "addch");
	validate_NULL_TYPETYPE(arg0, "addch");
	return funcptr(arg0);
}

int lsb_addch(const chtype arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "addch");
	return funcptr(arg0);
}

