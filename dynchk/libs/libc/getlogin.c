// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static char *(*funcptr)() = 0;

char * getlogin()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getlogin");
	return funcptr();
}

char * lsb_getlogin()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getlogin");
	return funcptr();
}

