// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xcms.h>
static int(*funcptr)(XcmsCCC) = 0;

void XcmsFreeCCC(XcmsCCC arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsFreeCCC");
	validate_NULL_TYPETYPE(arg0, "XcmsFreeCCC");
	return funcptr(arg0);
}

void lsb_XcmsFreeCCC(XcmsCCC arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsFreeCCC");
	return funcptr(arg0);
}

