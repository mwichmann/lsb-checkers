// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/X.h>
static int(*funcptr)(Widget, Atom) = 0;

void XtReleasePropertyAtom(Widget arg0, Atom arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtReleasePropertyAtom");
	validate_NULL_TYPETYPE(arg0, "XtReleasePropertyAtom");
	validate_NULL_TYPETYPE(arg1, "XtReleasePropertyAtom");
	return funcptr(arg0, arg1);
}

void lsb_XtReleasePropertyAtom(Widget arg0, Atom arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtReleasePropertyAtom");
	return funcptr(arg0, arg1);
}

