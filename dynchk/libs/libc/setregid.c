// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <sys/types.h>
static int(*funcptr)(gid_t, gid_t) = 0;

int setregid(gid_t arg0, gid_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setregid");
	validate_NULL_TYPETYPE(arg0, "setregid");
	validate_NULL_TYPETYPE(arg1, "setregid");
	return funcptr(arg0, arg1);
}

int lsb_setregid(gid_t arg0, gid_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setregid");
	return funcptr(arg0, arg1);
}

