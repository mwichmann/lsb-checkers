// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, XID) = 0;

XFontStruct * XQueryFont(Display * arg0, XID arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XQueryFont");
	validate_NULL_TYPETYPE(arg0, "XQueryFont");
	validate_NULL_TYPETYPE(arg1, "XQueryFont");
	return funcptr(arg0, arg1);
}

XFontStruct * lsb_XQueryFont(Display * arg0, XID arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XQueryFont");
	return funcptr(arg0, arg1);
}

