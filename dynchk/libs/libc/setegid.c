// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
static int(*funcptr)(gid_t) = 0;

int setegid(gid_t arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setegid");
	validate_NULL_TYPETYPE(arg0, "setegid");
	return funcptr(arg0);
}

int lsb_setegid(gid_t arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setegid");
	return funcptr(arg0);
}

