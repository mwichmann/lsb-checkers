// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(Display *, unsigned int, Modifiers, Modifiers *, KeySym *) = 0;

void XtTranslateKeycode(Display * arg0, unsigned int arg1, Modifiers arg2, Modifiers * arg3, KeySym * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtTranslateKeycode");
	validate_NULL_TYPETYPE(arg0, "XtTranslateKeycode");
	validate_NULL_TYPETYPE(arg1, "XtTranslateKeycode");
	validate_NULL_TYPETYPE(arg2, "XtTranslateKeycode");
	validate_NULL_TYPETYPE(arg3, "XtTranslateKeycode");
	validate_NULL_TYPETYPE(arg4, "XtTranslateKeycode");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

void lsb_XtTranslateKeycode(Display * arg0, unsigned int arg1, Modifiers arg2, Modifiers * arg3, KeySym * arg4)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtTranslateKeycode");
	return funcptr(arg0, arg1, arg2, arg3, arg4);
}

