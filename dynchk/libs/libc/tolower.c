// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int) = 0;

int tolower(int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tolower");
	validate_NULL_TYPETYPE(arg0, "tolower");
	return funcptr(arg0);
}

int lsb_tolower(int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "tolower");
	return funcptr(arg0);
}

