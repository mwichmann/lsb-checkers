// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xcms.h>
#include <X11/Xcms.h>
static int(*funcptr)(XcmsCCC, XcmsFloat, XcmsColor *, unsigned int) = 0;

int XcmsTekHVCQueryMaxVSamples(XcmsCCC arg0, XcmsFloat arg1, XcmsColor * arg2, unsigned int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsTekHVCQueryMaxVSamples");
	validate_NULL_TYPETYPE(arg0, "XcmsTekHVCQueryMaxVSamples");
	validate_NULL_TYPETYPE(arg1, "XcmsTekHVCQueryMaxVSamples");
	validate_NULL_TYPETYPE(arg2, "XcmsTekHVCQueryMaxVSamples");
	validate_NULL_TYPETYPE(arg3, "XcmsTekHVCQueryMaxVSamples");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_XcmsTekHVCQueryMaxVSamples(XcmsCCC arg0, XcmsFloat arg1, XcmsColor * arg2, unsigned int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsTekHVCQueryMaxVSamples");
	return funcptr(arg0, arg1, arg2, arg3);
}

