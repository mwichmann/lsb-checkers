// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, CARD16, CARD16, CARD16) = 0;

int DPMSSetTimeouts(Display * arg0, CARD16 arg1, CARD16 arg2, CARD16 arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "DPMSSetTimeouts");
	validate_NULL_TYPETYPE(arg0, "DPMSSetTimeouts");
	validate_NULL_TYPETYPE(arg1, "DPMSSetTimeouts");
	validate_NULL_TYPETYPE(arg2, "DPMSSetTimeouts");
	validate_NULL_TYPETYPE(arg3, "DPMSSetTimeouts");
	return funcptr(arg0, arg1, arg2, arg3);
}

int lsb_DPMSSetTimeouts(Display * arg0, CARD16 arg1, CARD16 arg2, CARD16 arg3)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "DPMSSetTimeouts");
	return funcptr(arg0, arg1, arg2, arg3);
}

