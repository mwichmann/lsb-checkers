// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Intrinsic.h>
#include <X11/Intrinsic.h>
static int(*funcptr)(WidgetList, Cardinal) = 0;

void XtUnmanageChildren(WidgetList arg0, Cardinal arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtUnmanageChildren");
	validate_NULL_TYPETYPE(arg0, "XtUnmanageChildren");
	validate_NULL_TYPETYPE(arg1, "XtUnmanageChildren");
	return funcptr(arg0, arg1);
}

void lsb_XtUnmanageChildren(WidgetList arg0, Cardinal arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XtUnmanageChildren");
	return funcptr(arg0, arg1);
}

