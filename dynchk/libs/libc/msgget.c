// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
static int(*funcptr)(key_t, int) = 0;

int msgget(key_t arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "msgget");
	validate_NULL_TYPETYPE(arg0, "msgget");
	validate_NULL_TYPETYPE(arg1, "msgget");
	return funcptr(arg0, arg1);
}

int lsb_msgget(key_t arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "msgget");
	return funcptr(arg0, arg1);
}

