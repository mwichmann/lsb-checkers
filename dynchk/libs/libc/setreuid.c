// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <sys/types.h>
static int(*funcptr)(uid_t, uid_t) = 0;

int setreuid(uid_t arg0, uid_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setreuid");
	validate_NULL_TYPETYPE(arg0, "setreuid");
	validate_NULL_TYPETYPE(arg1, "setreuid");
	return funcptr(arg0, arg1);
}

int lsb_setreuid(uid_t arg0, uid_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setreuid");
	return funcptr(arg0, arg1);
}

