// Generated by gen_lib.pl

#include "../../tests/type_tests.h"
#include <dlfcn.h>
static unsigned int(*funcptr)(unsigned int) = 0;

unsigned int alarm(unsigned int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "alarm");
	validate_NULL_TYPETYPE(arg0, "alarm");
	return funcptr(arg0);
}

unsigned int lsb_alarm(unsigned int arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "alarm");
	return funcptr(arg0);
}

