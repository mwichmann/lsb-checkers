// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(void) = 0;

int IceInitThreads(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceInitThreads");
	validate_NULL_TYPETYPE(arg0, "IceInitThreads");
	return funcptr(arg0);
}

int lsb_IceInitThreads(void arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceInitThreads");
	return funcptr(arg0);
}

