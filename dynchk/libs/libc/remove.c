// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(const char *) = 0;

int remove(const char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "remove");
	validate_NULL_TYPETYPE(arg0, "remove");
	return funcptr(arg0);
}

int lsb_remove(const char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "remove");
	return funcptr(arg0);
}

