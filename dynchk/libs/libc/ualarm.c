// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#include <sys/types.h>
#include <sys/types.h>
static unsigned int(*funcptr)(useconds_t, useconds_t) = 0;

unsigned int ualarm(useconds_t arg0, useconds_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ualarm");
	validate_NULL_TYPETYPE(arg0, "ualarm");
	validate_NULL_TYPETYPE(arg1, "ualarm");
	return funcptr(arg0, arg1);
}

unsigned int lsb_ualarm(useconds_t arg0, useconds_t arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "ualarm");
	return funcptr(arg0, arg1);
}

