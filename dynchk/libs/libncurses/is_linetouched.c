// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static bool(*funcptr)(WINDOW *, int) = 0;

bool is_linetouched(WINDOW * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "is_linetouched");
	validate_NULL_TYPETYPE(arg0, "is_linetouched");
	validate_NULL_TYPETYPE(arg1, "is_linetouched");
	return funcptr(arg0, arg1);
}

bool lsb_is_linetouched(WINDOW * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "is_linetouched");
	return funcptr(arg0, arg1);
}

