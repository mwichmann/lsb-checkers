// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static chtype(*funcptr)() = 0;

chtype termattrs()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "termattrs");
	return funcptr();
}

chtype lsb_termattrs()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "termattrs");
	return funcptr();
}

