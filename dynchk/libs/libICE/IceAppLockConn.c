// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/ICE/ICElib.h>
static int(*funcptr)(IceConn) = 0;

void IceAppLockConn(IceConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceAppLockConn");
	validate_NULL_TYPETYPE(arg0, "IceAppLockConn");
	return funcptr(arg0);
}

void lsb_IceAppLockConn(IceConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceAppLockConn");
	return funcptr(arg0);
}

