// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(char *) = 0;

void IceUnlockAuthFile(char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceUnlockAuthFile");
	validate_NULL_TYPETYPE(arg0, "IceUnlockAuthFile");
	return funcptr(arg0);
}

void lsb_IceUnlockAuthFile(char * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceUnlockAuthFile");
	return funcptr(arg0);
}

