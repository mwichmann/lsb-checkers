// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int) = 0;

#undef _tolower

int _tolower(int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_tolower");
	validate_NULL_TYPETYPE(arg0, "_tolower");
	return funcptr(arg0);
}

int lsb__tolower(int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "_tolower");
	return funcptr(arg0);
}

