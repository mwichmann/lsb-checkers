// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
#undef rand
static int(*funcptr) () = 0;

int rand ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "rand");
	return funcptr();
}

int lsb_rand ()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "rand");
	return funcptr();
}

