// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
static int(*funcptr)(const char *, mode_t) = 0;

int chmod(const char * arg0, mode_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "chmod");
	validate_NULL_TYPETYPE(arg0, "chmod");
	validate_NULL_TYPETYPE(arg1, "chmod");
	return funcptr(arg0, arg1);
}

int lsb_chmod(const char * arg0, mode_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "chmod");
	return funcptr(arg0, arg1);
}

