// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *) = 0;

int DPMSDisable(Display * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "DPMSDisable");
	validate_NULL_TYPETYPE(arg0, "DPMSDisable");
	return funcptr(arg0);
}

int lsb_DPMSDisable(Display * arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "DPMSDisable");
	return funcptr(arg0);
}

