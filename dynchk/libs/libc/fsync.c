// Generated by gen_lib.pl

#include "../tests/type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int) = 0;

int fsync(int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fsync");
	validate_NULL_TYPETYPE(arg0, "fsync");
	return funcptr(arg0);
}

int lsb_fsync(int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "fsync");
	return funcptr(arg0);
}

