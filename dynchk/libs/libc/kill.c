// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#undef kill
static int(*funcptr) (pid_t , int ) = 0;

int kill (pid_t arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "kill");
	validate_NULL_TYPETYPE(arg0, "kill");
	validate_NULL_TYPETYPE(arg1, "kill");
	return funcptr(arg0, arg1);
}

int lsb_kill (pid_t arg0 , int arg1 )
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "kill");
	return funcptr(arg0, arg1);
}

