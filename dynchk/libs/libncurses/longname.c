// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static char *(*funcptr)() = 0;

char * longname()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "longname");
	return funcptr();
}

char * lsb_longname()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "longname");
	return funcptr();
}

