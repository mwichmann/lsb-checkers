// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <term.h>
static int(*funcptr)(const WINDOW *, WINDOW *) = 0;

int overlay(const WINDOW * arg0, WINDOW * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "overlay");
	validate_NULL_TYPETYPE(arg0, "overlay");
	validate_NULL_TYPETYPE(arg1, "overlay");
	return funcptr(arg0, arg1);
}

int lsb_overlay(const WINDOW * arg0, WINDOW * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "overlay");
	return funcptr(arg0, arg1);
}

