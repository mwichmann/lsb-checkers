// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int) = 0;

int scrl(int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "scrl");
	validate_NULL_TYPETYPE(arg0, "scrl");
	return funcptr(arg0);
}

int lsb_scrl(int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "scrl");
	return funcptr(arg0);
}

