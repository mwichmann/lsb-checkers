// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xlib.h>
static int(*funcptr)(XOM) = 0;

char * XLocaleOfOM(XOM arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XLocaleOfOM");
	validate_NULL_TYPETYPE(arg0, "XLocaleOfOM");
	return funcptr(arg0);
}

char * lsb_XLocaleOfOM(XOM arg0)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XLocaleOfOM");
	return funcptr(arg0);
}

