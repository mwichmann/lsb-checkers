// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xcms.h>
static int(*funcptr)(XcmsCCC, XcmsColor *, XcmsColor *, unsigned int) = 0;

int XcmsCIELuvToCIEuvY(XcmsCCC arg0, XcmsColor * arg1, XcmsColor * arg2, unsigned int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsCIELuvToCIEuvY");
	validate_NULL_TYPETYPE(arg0, "XcmsCIELuvToCIEuvY");
	validate_NULL_TYPETYPE(arg1, "XcmsCIELuvToCIEuvY");
	validate_NULL_TYPETYPE(arg2, "XcmsCIELuvToCIEuvY");
	validate_NULL_TYPETYPE(arg3, "XcmsCIELuvToCIEuvY");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_XcmsCIELuvToCIEuvY(XcmsCCC arg0, XcmsColor * arg1, XcmsColor * arg2, unsigned int arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XcmsCIELuvToCIEuvY");
	return funcptr(arg0, arg1, arg2, arg3);
}

