// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(int, IceAuthDataEntry *) = 0;

void IceSetPaAuthData(int arg0, IceAuthDataEntry * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceSetPaAuthData");
	validate_NULL_TYPETYPE(arg0, "IceSetPaAuthData");
	validate_NULL_TYPETYPE(arg1, "IceSetPaAuthData");
	return funcptr(arg0, arg1);
}

void lsb_IceSetPaAuthData(int arg0, IceAuthDataEntry * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceSetPaAuthData");
	return funcptr(arg0, arg1);
}

