// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window, XTextProperty *) = 0;

void XSetWMIconName(Display * arg0, Window arg1, XTextProperty * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetWMIconName");
	validate_NULL_TYPETYPE(arg0, "XSetWMIconName");
	validate_NULL_TYPETYPE(arg1, "XSetWMIconName");
	validate_NULL_TYPETYPE(arg2, "XSetWMIconName");
	return funcptr(arg0, arg1, arg2);
}

void lsb_XSetWMIconName(Display * arg0, Window arg1, XTextProperty * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetWMIconName");
	return funcptr(arg0, arg1, arg2);
}

