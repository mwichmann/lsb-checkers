// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xresource.h>
static int(*funcptr)(char *, XrmQuarkList) = 0;

void XrmStringToQuarkList(char * arg0, XrmQuarkList arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XrmStringToQuarkList");
	validate_NULL_TYPETYPE(arg0, "XrmStringToQuarkList");
	validate_NULL_TYPETYPE(arg1, "XrmStringToQuarkList");
	return funcptr(arg0, arg1);
}

void lsb_XrmStringToQuarkList(char * arg0, XrmQuarkList arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XrmStringToQuarkList");
	return funcptr(arg0, arg1);
}

