// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/ICE/ICElib.h>
static int(*funcptr)(IceConn) = 0;

int IceCheckShutdownNegotiation(IceConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceCheckShutdownNegotiation");
	validate_NULL_TYPETYPE(arg0, "IceCheckShutdownNegotiation");
	return funcptr(arg0);
}

int lsb_IceCheckShutdownNegotiation(IceConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceCheckShutdownNegotiation");
	return funcptr(arg0);
}

