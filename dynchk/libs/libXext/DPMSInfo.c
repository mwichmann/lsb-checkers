// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, CARD16 *, BOOL *) = 0;

int DPMSInfo(Display * arg0, CARD16 * arg1, BOOL * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "DPMSInfo");
	validate_NULL_TYPETYPE(arg0, "DPMSInfo");
	validate_NULL_TYPETYPE(arg1, "DPMSInfo");
	validate_NULL_TYPETYPE(arg2, "DPMSInfo");
	return funcptr(arg0, arg1, arg2);
}

int lsb_DPMSInfo(Display * arg0, CARD16 * arg1, BOOL * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "DPMSInfo");
	return funcptr(arg0, arg1, arg2);
}

