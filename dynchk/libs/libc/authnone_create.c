// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static struct AUTH *(*funcptr)() = 0;

struct AUTH * authnone_create()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "authnone_create");
	return funcptr();
}

struct AUTH * lsb_authnone_create()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "authnone_create");
	return funcptr();
}

