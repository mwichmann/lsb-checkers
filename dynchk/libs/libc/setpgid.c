// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <sys/types.h>
#undef setpgid
static int(*funcptr) (pid_t , pid_t ) = 0;

int setpgid (pid_t arg0 , pid_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setpgid");
	validate_NULL_TYPETYPE(arg0, "setpgid");
	validate_NULL_TYPETYPE(arg1, "setpgid");
	return funcptr(arg0, arg1);
}

int lsb_setpgid (pid_t arg0 , pid_t arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "setpgid");
	return funcptr(arg0, arg1);
}

