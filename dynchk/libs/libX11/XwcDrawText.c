// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/X.h>
#include <X11/Xlib.h>
static int(*funcptr)(Display *, Drawable, GC, int, int, XwcTextItem *, int) = 0;

void XwcDrawText(Display * arg0, Drawable arg1, GC arg2, int arg3, int arg4, XwcTextItem * arg5, int arg6)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XwcDrawText");
	validate_NULL_TYPETYPE(arg0, "XwcDrawText");
	validate_NULL_TYPETYPE(arg1, "XwcDrawText");
	validate_NULL_TYPETYPE(arg2, "XwcDrawText");
	validate_NULL_TYPETYPE(arg3, "XwcDrawText");
	validate_NULL_TYPETYPE(arg4, "XwcDrawText");
	validate_NULL_TYPETYPE(arg5, "XwcDrawText");
	validate_NULL_TYPETYPE(arg6, "XwcDrawText");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

void lsb_XwcDrawText(Display * arg0, Drawable arg1, GC arg2, int arg3, int arg4, XwcTextItem * arg5, int arg6)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XwcDrawText");
	return funcptr(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
}

