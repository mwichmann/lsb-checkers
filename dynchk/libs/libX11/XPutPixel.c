// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)() = 0;

int XPutPixel()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XPutPixel");
	return funcptr();
}

int lsb_XPutPixel()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XPutPixel");
	return funcptr();
}

