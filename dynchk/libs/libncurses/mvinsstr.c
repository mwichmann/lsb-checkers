// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int, int, const char *) = 0;

int mvinsstr(int arg0, int arg1, const char * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvinsstr");
	validate_NULL_TYPETYPE(arg0, "mvinsstr");
	validate_NULL_TYPETYPE(arg1, "mvinsstr");
	validate_NULL_TYPETYPE(arg2, "mvinsstr");
	return funcptr(arg0, arg1, arg2);
}

int lsb_mvinsstr(int arg0, int arg1, const char * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "mvinsstr");
	return funcptr(arg0, arg1, arg2);
}

