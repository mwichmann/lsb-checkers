// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/ICE/ICElib.h>
static int(*funcptr)(IceConn) = 0;

int IceConnectionNumber(IceConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceConnectionNumber");
	validate_NULL_TYPETYPE(arg0, "IceConnectionNumber");
	return funcptr(arg0);
}

int lsb_IceConnectionNumber(IceConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceConnectionNumber");
	return funcptr(arg0);
}

