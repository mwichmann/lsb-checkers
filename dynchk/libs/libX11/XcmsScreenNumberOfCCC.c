// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xcms.h>
static int(*funcptr)(XcmsCCC) = 0;

int XcmsScreenNumberOfCCC(XcmsCCC arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsScreenNumberOfCCC");
	validate_NULL_TYPETYPE(arg0, "XcmsScreenNumberOfCCC");
	return funcptr(arg0);
}

int lsb_XcmsScreenNumberOfCCC(XcmsCCC arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsScreenNumberOfCCC");
	return funcptr(arg0);
}

