// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/SM/SMlib.h>
static int(*funcptr)(SmcConn) = 0;

char * SmcClientID(SmcConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmcClientID");
	validate_NULL_TYPETYPE(arg0, "SmcClientID");
	return funcptr(arg0);
}

char * lsb_SmcClientID(SmcConn arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "SmcClientID");
	return funcptr(arg0);
}

