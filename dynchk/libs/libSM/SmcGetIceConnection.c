// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/SM/SMlib.h>
static int(*funcptr)(SmcConn) = 0;

IceConn SmcGetIceConnection(SmcConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmcGetIceConnection");
	validate_NULL_TYPETYPE(arg0, "SmcGetIceConnection");
	return funcptr(arg0);
}

IceConn lsb_SmcGetIceConnection(SmcConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmcGetIceConnection");
	return funcptr(arg0);
}

