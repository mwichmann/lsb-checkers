// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/ICE/ICElib.h>
static int(*funcptr)(IceConn) = 0;

unsigned long IceLastSentSequenceNumber(IceConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceLastSentSequenceNumber");
	validate_NULL_TYPETYPE(arg0, "IceLastSentSequenceNumber");
	return funcptr(arg0);
}

unsigned long lsb_IceLastSentSequenceNumber(IceConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "IceLastSentSequenceNumber");
	return funcptr(arg0);
}

