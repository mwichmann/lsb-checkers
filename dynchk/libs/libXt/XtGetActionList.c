// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(WidgetClass, XtActionList *, Cardinal *) = 0;

void XtGetActionList(WidgetClass arg0, XtActionList * arg1, Cardinal * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetActionList");
	validate_NULL_TYPETYPE(arg0, "XtGetActionList");
	validate_NULL_TYPETYPE(arg1, "XtGetActionList");
	validate_NULL_TYPETYPE(arg2, "XtGetActionList");
	return funcptr(arg0, arg1, arg2);
}

void lsb_XtGetActionList(WidgetClass arg0, XtActionList * arg1, Cardinal * arg2)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtGetActionList");
	return funcptr(arg0, arg1, arg2);
}

