// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
static int(*funcptr)(Display *, int) = 0;

int XSetCloseDownMode(Display * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetCloseDownMode");
	validate_NULL_TYPETYPE(arg0, "XSetCloseDownMode");
	validate_NULL_TYPETYPE(arg1, "XSetCloseDownMode");
	return funcptr(arg0, arg1);
}

int lsb_XSetCloseDownMode(Display * arg0, int arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetCloseDownMode");
	return funcptr(arg0, arg1);
}

