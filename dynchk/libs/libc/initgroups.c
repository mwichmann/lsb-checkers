// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
static int(*funcptr)(const char *, gid_t) = 0;

int initgroups(const char * arg0, gid_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "initgroups");
	validate_NULL_TYPETYPE(arg0, "initgroups");
	validate_NULL_TYPETYPE(arg1, "initgroups");
	return funcptr(arg0, arg1);
}

int lsb_initgroups(const char * arg0, gid_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "initgroups");
	return funcptr(arg0, arg1);
}

