// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static pid_t(*funcptr)() = 0;

pid_t getpgrp()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getpgrp");
	return funcptr();
}

pid_t lsb_getpgrp()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "getpgrp");
	return funcptr();
}

