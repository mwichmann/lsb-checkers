// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xcms.h>
static int(*funcptr)(XcmsCCC, XcmsColor *, unsigned int, unsigned int, int *) = 0;

int XcmsTekHVCClipC(XcmsCCC arg0, XcmsColor * arg1, unsigned int arg2, unsigned int arg3, int * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsTekHVCClipC");
	validate_NULL_TYPETYPE(arg0, "XcmsTekHVCClipC");
	validate_NULL_TYPETYPE(arg1, "XcmsTekHVCClipC");
	validate_NULL_TYPETYPE(arg2, "XcmsTekHVCClipC");
	validate_NULL_TYPETYPE(arg3, "XcmsTekHVCClipC");
	validate_NULL_TYPETYPE(arg4, "XcmsTekHVCClipC");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

int lsb_XcmsTekHVCClipC(XcmsCCC arg0, XcmsColor * arg1, unsigned int arg2, unsigned int arg3, int * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsTekHVCClipC");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

