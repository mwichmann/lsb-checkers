// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int, const char *, int) = 0;

int slk_set(int arg0, const char * arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "slk_set");
	validate_NULL_TYPETYPE(arg0, "slk_set");
	validate_NULL_TYPETYPE(arg1, "slk_set");
	validate_NULL_TYPETYPE(arg2, "slk_set");
	return funcptr(arg0, arg1, arg2);
}

int lsb_slk_set(int arg0, const char * arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "slk_set");
	return funcptr(arg0, arg1, arg2);
}

