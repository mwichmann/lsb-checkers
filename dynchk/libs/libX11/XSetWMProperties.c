// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
static int(*funcptr)(Display *, Window, XTextProperty *, XTextProperty *, char * *, int, XSizeHints *, XWMHints *, XClassHint *) = 0;

void XSetWMProperties(Display * arg0, Window arg1, XTextProperty * arg2, XTextProperty * arg3, char * * arg4, int arg5, XSizeHints * arg6, XWMHints * arg7, XClassHint * arg8)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetWMProperties");
	validate_NULL_TYPETYPE(arg0, "XSetWMProperties");
	validate_NULL_TYPETYPE(arg1, "XSetWMProperties");
	validate_NULL_TYPETYPE(arg2, "XSetWMProperties");
	validate_NULL_TYPETYPE(arg3, "XSetWMProperties");
	validate_NULL_TYPETYPE(arg4, "XSetWMProperties");
	validate_NULL_TYPETYPE(arg5, "XSetWMProperties");
	validate_NULL_TYPETYPE(arg6, "XSetWMProperties");
	validate_NULL_TYPETYPE(arg7, "XSetWMProperties");
	validate_NULL_TYPETYPE(arg8, "XSetWMProperties");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

void lsb_XSetWMProperties(Display * arg0, Window arg1, XTextProperty * arg2, XTextProperty * arg3, char * * arg4, int arg5, XSizeHints * arg6, XWMHints * arg7, XClassHint * arg8)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XSetWMProperties");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
}

