// Generated by gen_lib.pl

#include "type_tests.h"
#include <dlfcn.h>
#include <X11/Xresource.h>
static int(*funcptr)(XrmDatabase, XrmDatabase *) = 0;

void XrmMergeDatabases(XrmDatabase arg0, XrmDatabase * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XrmMergeDatabases");
	validate_NULL_TYPETYPE(arg0, "XrmMergeDatabases");
	validate_NULL_TYPETYPE(arg1, "XrmMergeDatabases");
	return funcptr(arg0, arg1);
}

void lsb_XrmMergeDatabases(XrmDatabase arg0, XrmDatabase * arg1)
{
	if(!funcptr)
		funcptr = dlsym(RTLD_NEXT, "XrmMergeDatabases");
	return funcptr(arg0, arg1);
}

