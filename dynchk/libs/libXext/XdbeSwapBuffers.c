// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, XdbeSwapInfo *, int) = 0;

int XdbeSwapBuffers(Display * arg0, XdbeSwapInfo * arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XdbeSwapBuffers");
	validate_NULL_TYPETYPE(arg0, "XdbeSwapBuffers");
	validate_NULL_TYPETYPE(arg1, "XdbeSwapBuffers");
	validate_NULL_TYPETYPE(arg2, "XdbeSwapBuffers");
	return funcptr(arg0, arg1, arg2);
}

int lsb_XdbeSwapBuffers(Display * arg0, XdbeSwapInfo * arg1, int arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XdbeSwapBuffers");
	return funcptr(arg0, arg1, arg2);
}

