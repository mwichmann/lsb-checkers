// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)() = 0;

int XAddPixel()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XAddPixel");
	return funcptr();
}

int lsb_XAddPixel()
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XAddPixel");
	return funcptr();
}

